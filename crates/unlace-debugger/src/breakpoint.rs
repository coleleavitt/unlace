//! Breakpoint records.

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum BreakpointKind {
    /// Software breakpoint via INT3 / BRK byte patching.
    Software,
    /// Hardware debug-register breakpoint (limited number per CPU).
    Hardware,
    /// Read watchpoint (HW only).
    ReadWatch,
    /// Write watchpoint (HW only).
    WriteWatch,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Breakpoint {
    pub id: u32,
    pub ea: u64,
    pub enabled: bool,
    pub kind: BreakpointKind,
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_breakpoint_kinds_distinct() {
        assert_ne!(BreakpointKind::Software, BreakpointKind::Hardware);
        assert_ne!(BreakpointKind::ReadWatch, BreakpointKind::WriteWatch);
    }

    #[test]
    fn test_breakpoint_struct() {
        let bp = Breakpoint {
            id: 1,
            ea: 0x401000,
            enabled: true,
            kind: BreakpointKind::Software,
        };
        assert_eq!(bp.ea, 0x401000);
        assert!(bp.enabled);
    }
}
