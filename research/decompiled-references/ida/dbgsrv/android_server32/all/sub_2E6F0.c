/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E6F0
// Address: 0x0002E6F0

//----- (0002E6F0) --------------------------------------------------------
const char *__fastcall sub_2E6F0(int a1)
{
  unsigned int v1; // r1
  const char *result; // r0

  v1 = *(unsigned __int16 *)(a1 + 406);
  if ( v1 <= 0x70FE )
  {
    result = "<No machine>";
    switch ( v1 )
    {
      case 0u:
        return result;
      case 1u:
        result = "AT & T WE 32100";
        break;
      case 2u:
        result = "SPARC";
        break;
      case 3u:
        result = "Intel 386";
        break;
      case 4u:
        result = "Motorola 68000";
        break;
      case 5u:
        result = "Motorola 88000";
        break;
      case 6u:
        result = "Intel 486";
        break;
      case 7u:
        result = "Intel 860";
        break;
      case 8u:
        result = "MIPS";
        break;
      case 9u:
        result = "IBM System370";
        break;
      case 0xAu:
        result = "MIPS R3000 Big Endian";
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
        return nullptr;
      case 0xFu:
        result = "PA-RISC";
        break;
      case 0x11u:
        result = "Fujitsu VPP500";
        break;
      case 0x12u:
        result = "SPARC v8+";
        break;
      case 0x13u:
        result = "Intel 960";
        break;
      case 0x14u:
        result = "PowerPC";
        break;
      case 0x15u:
        result = "PowerPC 64";
        break;
      case 0x16u:
        result = "IBM S/390";
        break;
      case 0x17u:
        result = "Cell BE SPU";
        break;
      case 0x19u:
        result = "Cisco 7200 Series Router (MIPS)";
        break;
      case 0x1Eu:
        result = "Cisco 3620/3640 Router (MIPS)";
        break;
      case 0x24u:
        result = "NEC V800 or Renesas RH850";
        break;
      case 0x25u:
        result = "Fujitsu FR20";
        break;
      case 0x26u:
        result = "TRW RH-22";
        break;
      case 0x27u:
        result = "Motorola M*Core";
        break;
      case 0x28u:
        result = "ARM";
        break;
      case 0x29u:
        result = "Digital Alpha";
        break;
      case 0x2Au:
        result = "SuperH";
        break;
      case 0x2Bu:
        result = "SPARC 64";
        break;
      case 0x2Cu:
        result = "Siemens Tricore";
        break;
      case 0x2Du:
        result = "ARC";
        break;
      case 0x2Eu:
        result = "H8/300";
        break;
      case 0x2Fu:
        result = "H8/300H";
        break;
      case 0x30u:
        result = "Hitachi H8S";
        break;
      case 0x31u:
        result = "H8/500";
        break;
      case 0x32u:
        result = "Itanium IA64";
        break;
      case 0x33u:
        result = "Stanford MIPS-X";
        break;
      case 0x34u:
        result = "Coldfire";
        break;
      case 0x35u:
        result = "MC68HC12";
        break;
      case 0x36u:
        result = "Fujitsu MMA";
        break;
      case 0x37u:
        result = "Siemens PCP";
        break;
      case 0x38u:
        result = "Sony nCPU";
        break;
      case 0x39u:
        result = "Denso NDR1";
        break;
      case 0x3Au:
        result = "Star*Core";
        break;
      case 0x3Bu:
        result = "Toyota ME16";
        break;
      case 0x3Cu:
        result = "ST100";
        break;
      case 0x3Du:
        result = "TinyJ";
        break;
      case 0x3Eu:
        result = "x86-64";
        break;
      case 0x3Fu:
        result = "PDSP";
        break;
      case 0x40u:
        result = "DEC PDP-10";
        break;
      case 0x41u:
        result = "DEC PDP-11";
        break;
      case 0x42u:
        result = "Siemens FX66";
        break;
      case 0x43u:
        result = "ST9+";
        break;
      case 0x44u:
        result = "ST7";
        break;
      case 0x45u:
        result = "MC68HC16";
        break;
      case 0x46u:
        result = "MC68HC11";
        break;
      case 0x47u:
        result = "MC68HC08";
        break;
      case 0x48u:
        result = "MC68HC05";
        break;
      case 0x49u:
        result = "Silicon Graphics SVx";
        break;
      case 0x4Au:
        result = "ST19";
        break;
      case 0x4Bu:
        result = "VAX";
        break;
      case 0x4Cu:
        result = "CRIS";
        break;
      case 0x4Du:
        result = "Infineon Javelin";
        break;
      case 0x4Eu:
        result = "Element 14 Firepath";
        break;
      case 0x4Fu:
        result = "ZSP";
        break;
      case 0x50u:
        result = "MMIX";
        break;
      case 0x51u:
        result = "Harvard HUANY";
        break;
      case 0x52u:
        result = "SiTera Prism";
        break;
      case 0x53u:
        result = "Atmel";
        break;
      case 0x54u:
        result = "Fujitsu FR";
        break;
      case 0x55u:
        result = "Mitsubishi D10V";
        break;
      case 0x56u:
        result = "Mitsubishi D30V";
        break;
      case 0x57u:
        return "NEC V850";
      case 0x58u:
        result = "M32R";
        break;
      case 0x59u:
        result = "MN10300";
        break;
      case 0x5Au:
        result = "MN10200";
        break;
      case 0x5Bu:
        result = "picoJava";
        break;
      case 0x5Cu:
        result = "OpenRISC";
        break;
      case 0x5Du:
        result = "ARCompact";
        break;
      case 0x5Eu:
        result = "Xtensa";
        break;
      case 0x5Fu:
        result = "VideoCore";
        break;
      case 0x60u:
        result = "Thompson GPP";
        break;
      case 0x61u:
        result = "NS 32000";
        break;
      case 0x62u:
        result = "TPC";
        break;
      case 0x63u:
        result = "SNP 1000";
        break;
      case 0x64u:
        result = "ST200";
        break;
      case 0x65u:
        result = "IP2022";
        break;
      case 0x66u:
        result = "MAX";
        break;
      case 0x67u:
        result = "CompactRISC";
        break;
      case 0x68u:
        result = "F2MC16";
        break;
      case 0x69u:
        result = "MSP430";
        break;
      case 0x6Au:
        result = "ADI Blackfin";
        break;
      case 0x6Bu:
        result = "S1C33";
        break;
      case 0x6Cu:
        result = "SEP";
        break;
      case 0x6Du:
        result = "Arca";
        break;
      case 0x6Eu:
        result = "Unicore";
        break;
      case 0x6Fu:
        result = "eXcess";
        break;
      case 0x70u:
        result = "Icera DXP";
        break;
      case 0x71u:
        result = "Nios II";
        break;
      case 0x72u:
        result = "CRX";
        break;
      case 0x73u:
        result = "XGATE";
        break;
      case 0x74u:
        result = "C16x/XC16x/ST10";
        break;
      case 0x75u:
        result = "M16C";
        break;
      case 0x76u:
        result = "dsPIC30F";
        break;
      case 0x77u:
        result = "Freescale Communication Engine";
        break;
      case 0x78u:
        result = "Renesas  M32C";
        break;
      case 0x83u:
        result = "TSK3000";
        break;
      case 0x84u:
        result = "Freescale RS08";
        break;
      case 0x85u:
        result = "Analog Devices SHARC";
        break;
      case 0x86u:
        result = "Cyan Technology eCOG2";
        break;
      case 0x87u:
        result = "Sunplus S+core7";
        break;
      case 0x88u:
        result = "NJR DSP24";
        break;
      case 0x89u:
        result = "VideoCore III";
        break;
      case 0x8Au:
        result = "Lattice Mico32";
        break;
      case 0x8Bu:
        result = "C17";
        break;
      case 0x8Cu:
        result = "TMS320C6";
        break;
      case 0xA0u:
        result = "MMDSP";
        break;
      case 0xA1u:
        result = "M8C";
        break;
      case 0xA2u:
        result = "R32C";
        break;
      case 0xA3u:
        result = "TriMedia";
        break;
      case 0xA4u:
        result = "QDSP6";
        break;
      case 0xA5u:
        result = "i8051";
        break;
      case 0xA6u:
        result = "STxP7x";
        break;
      case 0xA7u:
        result = "NDS32";
        break;
      case 0xA8u:
        result = "eCOG1X";
        break;
      case 0xA9u:
        result = "MAXQ30";
        break;
      case 0xAAu:
        result = "NJR XIMO16";
        break;
      case 0xABu:
        result = "M2000";
        break;
      case 0xACu:
        result = "Cray NV2";
        break;
      case 0xADu:
        result = "RX";
        break;
      case 0xAEu:
        result = "Imagination Technologies META";
        break;
      case 0xAFu:
        result = "MCST Elbrus";
        break;
      case 0xB0u:
        result = "eCOG16";
        break;
      case 0xB1u:
        result = "CompactRISC 16-bit";
        break;
      case 0xB2u:
        result = "Freescale ETPU";
        break;
      case 0xB3u:
        result = "SLE9X";
        break;
      case 0xB4u:
        result = "Intel L1OM";
        break;
      case 0xB5u:
        result = "Intel K1OM";
        break;
      case 0xB6u:
        result = "Intel Reserved (182)";
        break;
      case 0xB7u:
        result = "ARM64";
        break;
      case 0xB8u:
        result = "ARM Reserved (184)";
        break;
      case 0xB9u:
        result = "AVR32";
        break;
      case 0xBAu:
        result = "STM8";
        break;
      case 0xBBu:
        result = "Tilera TILE64";
        break;
      case 0xBCu:
        result = "Tilera TILEPro";
        break;
      case 0xBDu:
        result = "MicroBlaze";
        break;
      case 0xBEu:
        result = "CUDA";
        break;
      case 0xBFu:
        result = "Tilera TILE-Gx";
        break;
      case 0xC0u:
        result = "CloudShield";
        break;
      case 0xC1u:
        result = "Core-A 1st gen";
        break;
      case 0xC2u:
        result = "Core-A 2nd gen";
        break;
      case 0xC3u:
        result = "ARCompactV2";
        break;
      case 0xC4u:
        result = "Open8";
        break;
      case 0xC5u:
        result = "RL78";
        break;
      case 0xC6u:
        result = "VideoCore V";
        break;
      case 0xC7u:
        result = "78K0R";
        break;
      case 0xC8u:
        result = "Freescale 56800EX";
        break;
      case 0xC9u:
        result = "Beyond BA1";
        break;
      case 0xCAu:
        result = "Beyond BA2";
        break;
      case 0xCBu:
        result = "XMOS xCORE";
        break;
      case 0xF3u:
        result = "Risc-V";
        break;
      case 0xF9u:
        result = "nanoMIPS";
        break;
      default:
        if ( v1 != 28924 )
          return nullptr;
        result = "NEC v850E";
        break;
    }
    return result;
  }
  if ( *(unsigned __int16 *)(a1 + 406) > 0x74FAu )
  {
    if ( *(unsigned __int16 *)(a1 + 406) <= 0x9025u )
    {
      if ( v1 == 29947 )
        return "NEC v850E3V5";
      if ( v1 == 36901 )
        return "PowerPC";
      return nullptr;
    }
    if ( v1 == 36902 )
      return "DEC Alpha";
    if ( v1 != 36992 )
    {
      if ( v1 == 41872 )
        return "IBM S/390 (old magic)";
      return nullptr;
    }
    return "NEC V850";
  }
  if ( *(unsigned __int16 *)(a1 + 406) <= 0x73FCu )
  {
    if ( v1 != 28927 )
    {
      if ( v1 == 29162 )
        return "NEC v850E2";
      if ( v1 == 29646 )
        return "NEC v850ES";
      return nullptr;
    }
    return "NEC V850";
  }
  switch ( *(_WORD *)(a1 + 406) )
  {
    case 0x73FD:
      result = "NEC v850E2R1";
      break;
    case 0x73FE:
      result = "NEC v850E2R2";
      break;
    case 0x73FF:
      result = "NEC v850E2R3";
      break;
    case 0x7400:
      result = "NEC v850E2R4";
      break;
    default:
      return nullptr;
  }
  return result;
}
