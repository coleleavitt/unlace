//! STM32 firmware blob loader.
//!
//! Parses raw STM32 firmware images (vector table detection, flash layout).
//! STM32 firmware typically starts with an initial stack pointer value
//! followed by reset vector and interrupt vectors.

/// Cortex-M vector table entry count (minimum for detection).
pub const MIN_VECTORS: usize = 16;

/// STM32 flash base addresses by family.
pub const STM32F1_FLASH_BASE: u32 = 0x0800_0000;
pub const STM32F4_FLASH_BASE: u32 = 0x0800_0000;
pub const STM32H7_FLASH_BASE: u32 = 0x0800_0000;

/// Parsed STM32 vector table.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Stm32VectorTable {
    /// Initial stack pointer (first word).
    pub initial_sp: u32,
    /// Reset handler address (second word).
    pub reset_vector: u32,
    /// NMI handler.
    pub nmi_handler: u32,
    /// HardFault handler.
    pub hardfault_handler: u32,
    /// All vector entries.
    pub vectors: Vec<u32>,
}

/// Detect whether a binary blob looks like an STM32 firmware image.
pub fn detect_stm32(data: &[u8]) -> bool {
    if data.len() < MIN_VECTORS * 4 {
        return false;
    }
    let sp = u32::from_le_bytes(data[0..4].try_into().unwrap());
    let reset = u32::from_le_bytes(data[4..8].try_into().unwrap());

    // Stack pointer should be in SRAM range (0x2000_0000 - 0x2002_0000 typically).
    let sp_valid = (0x2000_0000..=0x2010_0000).contains(&sp);
    // Reset vector should be in flash range with thumb bit set.
    let reset_valid = reset >= STM32F1_FLASH_BASE && (reset & 1) == 1;

    sp_valid && reset_valid
}

/// Parse the vector table from an STM32 firmware blob.
pub fn parse_vector_table(data: &[u8]) -> Option<Stm32VectorTable> {
    if data.len() < MIN_VECTORS * 4 {
        return None;
    }
    let read_u32 = |off: usize| -> Option<u32> { Some(u32::from_le_bytes(data[off..off+4].try_into().ok()?)) };
    let initial_sp = read_u32(0)?;
    let reset_vector = read_u32(4)?;
    let nmi_handler = read_u32(8)?;
    let hardfault_handler = read_u32(12)?;

    let mut vectors = Vec::new();
    for i in 0..MIN_VECTORS {
        if let Some(v) = read_u32(i * 4) {
            vectors.push(v);
        }
    }

    Some(Stm32VectorTable {
        initial_sp,
        reset_vector,
        nmi_handler,
        hardfault_handler,
        vectors,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_stm32_image() -> Vec<u8> {
        let mut data = vec![0u8; 256];
        // SP = 0x2001_0000
        data[0..4].copy_from_slice(&0x2001_0000u32.to_le_bytes());
        // Reset = 0x0800_0101 (thumb)
        data[4..8].copy_from_slice(&0x0800_0101u32.to_le_bytes());
        // NMI
        data[8..12].copy_from_slice(&0x0800_0201u32.to_le_bytes());
        // HardFault
        data[12..16].copy_from_slice(&0x0800_0301u32.to_le_bytes());
        data
    }

    #[test]
    fn test_detect_stm32() {
        let img = make_stm32_image();
        assert!(detect_stm32(&img));
    }

    #[test]
    fn test_non_stm32_rejected() {
        let data = vec![0u8; 256]; // All zeros.
        assert!(!detect_stm32(&data));
    }

    #[test]
    fn test_parse_vector_table() {
        let img = make_stm32_image();
        let vt = parse_vector_table(&img).unwrap();
        assert_eq!(vt.initial_sp, 0x2001_0000);
        assert_eq!(vt.reset_vector, 0x0800_0101);
        assert_eq!(vt.vectors.len(), MIN_VECTORS);
    }
}
