char *__fastcall sub_BD50(__int64 a1)
{
  unsigned __int16 v1; // ax
  char *v2; // rdx

  v1 = *(_WORD *)(a1 + 522);
  switch ( v1 )
  {
    case 0u:
      v2 = "<No machine>";
      break;
    case 1u:
      v2 = "AT & T WE 32100";
      break;
    case 2u:
      v2 = "SPARC";
      break;
    case 3u:
      v2 = "Intel 386";
      break;
    case 4u:
      v2 = "Motorola 68000";
      break;
    case 5u:
      v2 = "Motorola 88000";
      break;
    case 6u:
      v2 = "Intel 486";
      break;
    case 7u:
      v2 = "Intel 860";
      break;
    case 8u:
      v2 = "MIPS";
      break;
    case 9u:
      v2 = "IBM System370";
      break;
    case 0xAu:
      v2 = "MIPS R3000 Big Endian";
      break;
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0x10u:
    case 0x18u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x79u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x8Du:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xCCu:
    case 0xCDu:
    case 0xCEu:
    case 0xCFu:
    case 0xD0u:
    case 0xD1u:
    case 0xD2u:
    case 0xD3u:
    case 0xD4u:
    case 0xD5u:
    case 0xD6u:
    case 0xD7u:
    case 0xD8u:
    case 0xD9u:
    case 0xDAu:
    case 0xDBu:
    case 0xDCu:
    case 0xDDu:
    case 0xDEu:
    case 0xDFu:
    case 0xE0u:
    case 0xE1u:
    case 0xE2u:
    case 0xE3u:
    case 0xE4u:
    case 0xE5u:
    case 0xE6u:
    case 0xE7u:
    case 0xE8u:
    case 0xE9u:
    case 0xEAu:
    case 0xEBu:
    case 0xECu:
    case 0xEDu:
    case 0xEEu:
    case 0xEFu:
    case 0xF0u:
    case 0xF1u:
    case 0xF2u:
    case 0xF4u:
    case 0xF5u:
    case 0xF6u:
    case 0xF7u:
    case 0xF8u:
      v2 = nullptr;
      break;
    case 0xFu:
      v2 = "PA-RISC";
      break;
    case 0x11u:
      v2 = "Fujitsu VPP500";
      break;
    case 0x12u:
      v2 = "SPARC v8+";
      break;
    case 0x13u:
      v2 = "Intel 960";
      break;
    case 0x14u:
      v2 = "PowerPC";
      break;
    case 0x15u:
      v2 = "PowerPC 64";
      break;
    case 0x16u:
      v2 = "IBM S/390";
      break;
    case 0x17u:
      v2 = "Cell BE SPU";
      break;
    case 0x19u:
      v2 = "Cisco 7200 Series Router (MIPS)";
      break;
    case 0x1Eu:
      v2 = "Cisco 3620/3640 Router (MIPS)";
      break;
    case 0x24u:
      v2 = "NEC V800 or Renesas RH850";
      break;
    case 0x25u:
      v2 = "Fujitsu FR20";
      break;
    case 0x26u:
      v2 = "TRW RH-22";
      break;
    case 0x27u:
      v2 = "Motorola M*Core";
      break;
    case 0x28u:
      v2 = "ARM";
      break;
    case 0x29u:
      v2 = "Digital Alpha";
      break;
    case 0x2Au:
      v2 = "SuperH";
      break;
    case 0x2Bu:
      v2 = "SPARC 64";
      break;
    case 0x2Cu:
      v2 = "Siemens Tricore";
      break;
    case 0x2Du:
      v2 = "ARC";
      break;
    case 0x2Eu:
      v2 = "H8/300";
      break;
    case 0x2Fu:
      v2 = "H8/300H";
      break;
    case 0x30u:
      v2 = "Hitachi H8S";
      break;
    case 0x31u:
      v2 = "H8/500";
      break;
    case 0x32u:
      v2 = "Itanium IA64";
      break;
    case 0x33u:
      v2 = "Stanford MIPS-X";
      break;
    case 0x34u:
      v2 = "Coldfire";
      break;
    case 0x35u:
      v2 = "MC68HC12";
      break;
    case 0x36u:
      v2 = "Fujitsu MMA";
      break;
    case 0x37u:
      v2 = "Siemens PCP";
      break;
    case 0x38u:
      v2 = "Sony nCPU";
      break;
    case 0x39u:
      v2 = "Denso NDR1";
      break;
    case 0x3Au:
      v2 = "Star*Core";
      break;
    case 0x3Bu:
      v2 = "Toyota ME16";
      break;
    case 0x3Cu:
      v2 = "ST100";
      break;
    case 0x3Du:
      v2 = "TinyJ";
      break;
    case 0x3Eu:
      v2 = "x86-64";
      break;
    case 0x3Fu:
      v2 = "PDSP";
      break;
    case 0x40u:
      v2 = "DEC PDP-10";
      break;
    case 0x41u:
      v2 = "DEC PDP-11";
      break;
    case 0x42u:
      v2 = "Siemens FX66";
      break;
    case 0x43u:
      v2 = "ST9+";
      break;
    case 0x44u:
      v2 = "ST7";
      break;
    case 0x45u:
      v2 = "MC68HC16";
      break;
    case 0x46u:
      v2 = "MC68HC11";
      break;
    case 0x47u:
      v2 = "MC68HC08";
      break;
    case 0x48u:
      v2 = "MC68HC05";
      break;
    case 0x49u:
      v2 = "Silicon Graphics SVx";
      break;
    case 0x4Au:
      v2 = "ST19";
      break;
    case 0x4Bu:
      v2 = "VAX";
      break;
    case 0x4Cu:
      v2 = "CRIS";
      break;
    case 0x4Du:
      v2 = "Infineon Javelin";
      break;
    case 0x4Eu:
      v2 = "Element 14 Firepath";
      break;
    case 0x4Fu:
      v2 = "ZSP";
      break;
    case 0x50u:
      v2 = "MMIX";
      break;
    case 0x51u:
      v2 = "Harvard HUANY";
      break;
    case 0x52u:
      v2 = "SiTera Prism";
      break;
    case 0x53u:
      v2 = "Atmel";
      break;
    case 0x54u:
      v2 = "Fujitsu FR";
      break;
    case 0x55u:
      v2 = "Mitsubishi D10V";
      break;
    case 0x56u:
      v2 = "Mitsubishi D30V";
      break;
    case 0x57u:
      v2 = "NEC V850";
      break;
    case 0x58u:
      v2 = "M32R";
      break;
    case 0x59u:
      v2 = "MN10300";
      break;
    case 0x5Au:
      v2 = "MN10200";
      break;
    case 0x5Bu:
      v2 = "picoJava";
      break;
    case 0x5Cu:
      v2 = "OpenRISC";
      break;
    case 0x5Du:
      v2 = "ARCompact";
      break;
    case 0x5Eu:
      v2 = "Xtensa";
      break;
    case 0x5Fu:
      v2 = "VideoCore";
      break;
    case 0x60u:
      v2 = "Thompson GPP";
      break;
    case 0x61u:
      v2 = "NS 32000";
      break;
    case 0x62u:
      v2 = "TPC";
      break;
    case 0x63u:
      v2 = "SNP 1000";
      break;
    case 0x64u:
      v2 = "ST200";
      break;
    case 0x65u:
      v2 = "IP2022";
      break;
    case 0x66u:
      v2 = "MAX";
      break;
    case 0x67u:
      v2 = "CompactRISC";
      break;
    case 0x68u:
      v2 = "F2MC16";
      break;
    case 0x69u:
      v2 = "MSP430";
      break;
    case 0x6Au:
      v2 = "ADI Blackfin";
      break;
    case 0x6Bu:
      v2 = "S1C33";
      break;
    case 0x6Cu:
      v2 = "SEP";
      break;
    case 0x6Du:
      v2 = "Arca";
      break;
    case 0x6Eu:
      v2 = "Unicore";
      break;
    case 0x6Fu:
      v2 = "eXcess";
      break;
    case 0x70u:
      v2 = "Icera DXP";
      break;
    case 0x71u:
      v2 = "Nios II";
      break;
    case 0x72u:
      v2 = "CRX";
      break;
    case 0x73u:
      v2 = "XGATE";
      break;
    case 0x74u:
      v2 = "C16x/XC16x/ST10";
      break;
    case 0x75u:
      v2 = "M16C";
      break;
    case 0x76u:
      v2 = "dsPIC30F";
      break;
    case 0x77u:
      v2 = "Freescale Communication Engine";
      break;
    case 0x78u:
      v2 = "Renesas  M32C";
      break;
    case 0x83u:
      v2 = "TSK3000";
      break;
    case 0x84u:
      v2 = "Freescale RS08";
      break;
    case 0x85u:
      v2 = "Analog Devices SHARC";
      break;
    case 0x86u:
      v2 = "Cyan Technology eCOG2";
      break;
    case 0x87u:
      v2 = "Sunplus S+core7";
      break;
    case 0x88u:
      v2 = "NJR DSP24";
      break;
    case 0x89u:
      v2 = "VideoCore III";
      break;
    case 0x8Au:
      v2 = "Lattice Mico32";
      break;
    case 0x8Bu:
      v2 = "C17";
      break;
    case 0x8Cu:
      v2 = "TMS320C6";
      break;
    case 0xA0u:
      v2 = "MMDSP";
      break;
    case 0xA1u:
      v2 = "M8C";
      break;
    case 0xA2u:
      v2 = "R32C";
      break;
    case 0xA3u:
      v2 = "TriMedia";
      break;
    case 0xA4u:
      v2 = "QDSP6";
      break;
    case 0xA5u:
      v2 = "i8051";
      break;
    case 0xA6u:
      v2 = "STxP7x";
      break;
    case 0xA7u:
      v2 = "NDS32";
      break;
    case 0xA8u:
      v2 = "eCOG1X";
      break;
    case 0xA9u:
      v2 = "MAXQ30";
      break;
    case 0xAAu:
      v2 = "NJR XIMO16";
      break;
    case 0xABu:
      v2 = "M2000";
      break;
    case 0xACu:
      v2 = "Cray NV2";
      break;
    case 0xADu:
      v2 = "RX";
      break;
    case 0xAEu:
      v2 = "Imagination Technologies META";
      break;
    case 0xAFu:
      v2 = "MCST Elbrus";
      break;
    case 0xB0u:
      v2 = "eCOG16";
      break;
    case 0xB1u:
      v2 = "CompactRISC 16-bit";
      break;
    case 0xB2u:
      v2 = "Freescale ETPU";
      break;
    case 0xB3u:
      v2 = "SLE9X";
      break;
    case 0xB4u:
      v2 = "Intel L1OM";
      break;
    case 0xB5u:
      v2 = "Intel K1OM";
      break;
    case 0xB6u:
      v2 = "Intel Reserved (182)";
      break;
    case 0xB7u:
      v2 = "ARM64";
      break;
    case 0xB8u:
      v2 = "ARM Reserved (184)";
      break;
    case 0xB9u:
      v2 = "AVR32";
      break;
    case 0xBAu:
      v2 = "STM8";
      break;
    case 0xBBu:
      v2 = "Tilera TILE64";
      break;
    case 0xBCu:
      v2 = "Tilera TILEPro";
      break;
    case 0xBDu:
      v2 = "MicroBlaze";
      break;
    case 0xBEu:
      v2 = "CUDA";
      break;
    case 0xBFu:
      v2 = "Tilera TILE-Gx";
      break;
    case 0xC0u:
      v2 = "CloudShield";
      break;
    case 0xC1u:
      v2 = "Core-A 1st gen";
      break;
    case 0xC2u:
      v2 = "Core-A 2nd gen";
      break;
    case 0xC3u:
      v2 = "ARCompactV2";
      break;
    case 0xC4u:
      v2 = "Open8";
      break;
    case 0xC5u:
      v2 = "RL78";
      break;
    case 0xC6u:
      v2 = "VideoCore V";
      break;
    case 0xC7u:
      v2 = "78K0R";
      break;
    case 0xC8u:
      v2 = "Freescale 56800EX";
      break;
    case 0xC9u:
      v2 = "Beyond BA1";
      break;
    case 0xCAu:
      v2 = "Beyond BA2";
      break;
    case 0xCBu:
      v2 = "XMOS xCORE";
      break;
    case 0xF3u:
      v2 = "Risc-V";
      break;
    case 0xF9u:
      v2 = "nanoMIPS";
      break;
    default:
      v2 = "NEC v850E2R3";
      if ( v1 != 29695 )
      {
        if ( v1 > 0x73FFu )
        {
          v2 = "PowerPC";
          if ( v1 != 0x9025 )
          {
            if ( v1 <= 0x9025u )
            {
              v2 = "NEC v850E2R4";
              if ( v1 != 29696 )
              {
                v2 = "NEC v850E3V5";
                if ( v1 != 29947 )
                  v2 = nullptr;
              }
            }
            else
            {
              v2 = "NEC V850";
              if ( v1 != 0x9080 )
              {
                v2 = "IBM S/390 (old magic)";
                if ( v1 != 0xA390 )
                {
                  v2 = "DEC Alpha";
                  if ( v1 != 0x9026 )
                    v2 = nullptr;
                }
              }
            }
          }
        }
        else
        {
          v2 = "NEC v850ES";
          if ( v1 != 29646 )
          {
            if ( v1 > 0x73CEu )
            {
              v2 = "NEC v850E2R1";
              if ( v1 != 29693 )
              {
                v2 = "NEC v850E2R2";
                if ( v1 != 29694 )
                  v2 = nullptr;
              }
            }
            else
            {
              v2 = "NEC V850";
              if ( v1 != 28927 )
              {
                v2 = "NEC v850E2";
                if ( v1 != 29162 )
                {
                  v2 = "NEC v850E";
                  if ( v1 != 28924 )
                    v2 = nullptr;
                }
              }
            }
          }
        }
      }
      break;
  }
  return v2;
}

