/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53470
// Address: 0x0000000000053470

//----- (0000000000053470) ----------------------------------------------------
const char *__fastcall sub_53470(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  const char *result; // rax
  __int16 v4; // kr08_2

  v1 = *(__int16 *)(a1 + 522);
  if ( v1 <= 28923 )
  {
    if ( v1 > -23665 )
    {
      v2 = (unsigned __int16)v1;
      result = "<No machine>";
      switch ( v2 )
      {
        case 0LL:
          return result;
        case 1LL:
          result = "AT & T WE 32100";
          break;
        case 2LL:
          result = "SPARC";
          break;
        case 3LL:
          result = "Intel 386";
          break;
        case 4LL:
          result = "Motorola 68000";
          break;
        case 5LL:
          result = "Motorola 88000";
          break;
        case 6LL:
          result = "Intel 486";
          break;
        case 7LL:
          result = "Intel 860";
          break;
        case 8LL:
          result = "MIPS";
          break;
        case 9LL:
          result = "IBM System370";
          break;
        case 10LL:
          result = "MIPS R3000 Big Endian";
          break;
        case 11LL:
        case 12LL:
        case 13LL:
        case 14LL:
        case 16LL:
        case 24LL:
        case 26LL:
        case 27LL:
        case 28LL:
        case 29LL:
        case 31LL:
        case 32LL:
        case 33LL:
        case 34LL:
        case 35LL:
        case 121LL:
        case 122LL:
        case 123LL:
        case 124LL:
        case 125LL:
        case 126LL:
        case 127LL:
        case 128LL:
        case 129LL:
        case 130LL:
        case 141LL:
        case 142LL:
        case 143LL:
        case 144LL:
        case 145LL:
        case 146LL:
        case 147LL:
        case 148LL:
        case 149LL:
        case 150LL:
        case 151LL:
        case 152LL:
        case 153LL:
        case 154LL:
        case 155LL:
        case 156LL:
        case 157LL:
        case 158LL:
        case 159LL:
        case 204LL:
        case 205LL:
        case 206LL:
        case 207LL:
        case 208LL:
        case 209LL:
        case 210LL:
        case 211LL:
        case 212LL:
        case 213LL:
        case 214LL:
        case 215LL:
        case 216LL:
        case 217LL:
        case 218LL:
        case 219LL:
        case 220LL:
        case 221LL:
        case 222LL:
        case 223LL:
        case 224LL:
        case 225LL:
        case 226LL:
        case 227LL:
        case 228LL:
        case 229LL:
        case 230LL:
        case 231LL:
        case 232LL:
        case 233LL:
        case 234LL:
        case 235LL:
        case 236LL:
        case 237LL:
        case 238LL:
        case 239LL:
        case 240LL:
        case 241LL:
        case 242LL:
        case 244LL:
        case 245LL:
        case 246LL:
        case 247LL:
        case 248LL:
          return nullptr;
        case 15LL:
          result = "PA-RISC";
          break;
        case 17LL:
          result = "Fujitsu VPP500";
          break;
        case 18LL:
          result = "SPARC v8+";
          break;
        case 19LL:
          result = "Intel 960";
          break;
        case 20LL:
          result = "PowerPC";
          break;
        case 21LL:
          result = "PowerPC 64";
          break;
        case 22LL:
          result = "IBM S/390";
          break;
        case 23LL:
          result = "Cell BE SPU";
          break;
        case 25LL:
          result = "Cisco 7200 Series Router (MIPS)";
          break;
        case 30LL:
          result = "Cisco 3620/3640 Router (MIPS)";
          break;
        case 36LL:
          result = "NEC V800 or Renesas RH850";
          break;
        case 37LL:
          result = "Fujitsu FR20";
          break;
        case 38LL:
          result = "TRW RH-22";
          break;
        case 39LL:
          result = "Motorola M*Core";
          break;
        case 40LL:
          result = "ARM";
          break;
        case 41LL:
          result = "Digital Alpha";
          break;
        case 42LL:
          result = "SuperH";
          break;
        case 43LL:
          result = "SPARC 64";
          break;
        case 44LL:
          result = "Siemens Tricore";
          break;
        case 45LL:
          result = "ARC";
          break;
        case 46LL:
          result = "H8/300";
          break;
        case 47LL:
          result = "H8/300H";
          break;
        case 48LL:
          result = "Hitachi H8S";
          break;
        case 49LL:
          result = "H8/500";
          break;
        case 50LL:
          result = "Itanium IA64";
          break;
        case 51LL:
          result = "Stanford MIPS-X";
          break;
        case 52LL:
          result = "Coldfire";
          break;
        case 53LL:
          result = "MC68HC12";
          break;
        case 54LL:
          result = "Fujitsu MMA";
          break;
        case 55LL:
          result = "Siemens PCP";
          break;
        case 56LL:
          result = "Sony nCPU";
          break;
        case 57LL:
          result = "Denso NDR1";
          break;
        case 58LL:
          result = "Star*Core";
          break;
        case 59LL:
          result = "Toyota ME16";
          break;
        case 60LL:
          result = "ST100";
          break;
        case 61LL:
          result = "TinyJ";
          break;
        case 62LL:
          result = "x86-64";
          break;
        case 63LL:
          result = "PDSP";
          break;
        case 64LL:
          result = "DEC PDP-10";
          break;
        case 65LL:
          result = "DEC PDP-11";
          break;
        case 66LL:
          result = "Siemens FX66";
          break;
        case 67LL:
          result = "ST9+";
          break;
        case 68LL:
          result = "ST7";
          break;
        case 69LL:
          result = "MC68HC16";
          break;
        case 70LL:
          result = "MC68HC11";
          break;
        case 71LL:
          result = "MC68HC08";
          break;
        case 72LL:
          result = "MC68HC05";
          break;
        case 73LL:
          result = "Silicon Graphics SVx";
          break;
        case 74LL:
          result = "ST19";
          break;
        case 75LL:
          result = "VAX";
          break;
        case 76LL:
          result = "CRIS";
          break;
        case 77LL:
          result = "Infineon Javelin";
          break;
        case 78LL:
          result = "Element 14 Firepath";
          break;
        case 79LL:
          result = "ZSP";
          break;
        case 80LL:
          result = "MMIX";
          break;
        case 81LL:
          result = "Harvard HUANY";
          break;
        case 82LL:
          result = "SiTera Prism";
          break;
        case 83LL:
          result = "Atmel";
          break;
        case 84LL:
          result = "Fujitsu FR";
          break;
        case 85LL:
          result = "Mitsubishi D10V";
          break;
        case 86LL:
          result = "Mitsubishi D30V";
          break;
        case 87LL:
          return "NEC V850";
        case 88LL:
          result = "M32R";
          break;
        case 89LL:
          result = "MN10300";
          break;
        case 90LL:
          result = "MN10200";
          break;
        case 91LL:
          result = "picoJava";
          break;
        case 92LL:
          result = "OpenRISC";
          break;
        case 93LL:
          result = "ARCompact";
          break;
        case 94LL:
          result = "Xtensa";
          break;
        case 95LL:
          result = "VideoCore";
          break;
        case 96LL:
          result = "Thompson GPP";
          break;
        case 97LL:
          result = "NS 32000";
          break;
        case 98LL:
          result = "TPC";
          break;
        case 99LL:
          result = "SNP 1000";
          break;
        case 100LL:
          result = "ST200";
          break;
        case 101LL:
          result = "IP2022";
          break;
        case 102LL:
          result = "MAX";
          break;
        case 103LL:
          result = "CompactRISC";
          break;
        case 104LL:
          result = "F2MC16";
          break;
        case 105LL:
          result = "MSP430";
          break;
        case 106LL:
          result = "ADI Blackfin";
          break;
        case 107LL:
          result = "S1C33";
          break;
        case 108LL:
          result = "SEP";
          break;
        case 109LL:
          result = "Arca";
          break;
        case 110LL:
          result = "Unicore";
          break;
        case 111LL:
          result = "eXcess";
          break;
        case 112LL:
          result = "Icera DXP";
          break;
        case 113LL:
          result = "Nios II";
          break;
        case 114LL:
          result = "CRX";
          break;
        case 115LL:
          result = "XGATE";
          break;
        case 116LL:
          result = "C16x/XC16x/ST10";
          break;
        case 117LL:
          result = "M16C";
          break;
        case 118LL:
          result = "dsPIC30F";
          break;
        case 119LL:
          result = "Freescale Communication Engine";
          break;
        case 120LL:
          result = "Renesas  M32C";
          break;
        case 131LL:
          result = "TSK3000";
          break;
        case 132LL:
          result = "Freescale RS08";
          break;
        case 133LL:
          result = "Analog Devices SHARC";
          break;
        case 134LL:
          result = "Cyan Technology eCOG2";
          break;
        case 135LL:
          result = "Sunplus S+core7";
          break;
        case 136LL:
          result = "NJR DSP24";
          break;
        case 137LL:
          result = "VideoCore III";
          break;
        case 138LL:
          result = "Lattice Mico32";
          break;
        case 139LL:
          result = "C17";
          break;
        case 140LL:
          result = "TMS320C6";
          break;
        case 160LL:
          result = "MMDSP";
          break;
        case 161LL:
          result = "M8C";
          break;
        case 162LL:
          result = "R32C";
          break;
        case 163LL:
          result = "TriMedia";
          break;
        case 164LL:
          result = "QDSP6";
          break;
        case 165LL:
          result = "i8051";
          break;
        case 166LL:
          result = "STxP7x";
          break;
        case 167LL:
          result = "NDS32";
          break;
        case 168LL:
          result = "eCOG1X";
          break;
        case 169LL:
          result = "MAXQ30";
          break;
        case 170LL:
          result = "NJR XIMO16";
          break;
        case 171LL:
          result = "M2000";
          break;
        case 172LL:
          result = "Cray NV2";
          break;
        case 173LL:
          result = "RX";
          break;
        case 174LL:
          result = "Imagination Technologies META";
          break;
        case 175LL:
          result = "MCST Elbrus";
          break;
        case 176LL:
          result = "eCOG16";
          break;
        case 177LL:
          result = "CompactRISC 16-bit";
          break;
        case 178LL:
          result = "Freescale ETPU";
          break;
        case 179LL:
          result = "SLE9X";
          break;
        case 180LL:
          result = "Intel L1OM";
          break;
        case 181LL:
          result = "Intel K1OM";
          break;
        case 182LL:
          result = "Intel Reserved (182)";
          break;
        case 183LL:
          result = "ARM64";
          break;
        case 184LL:
          result = "ARM Reserved (184)";
          break;
        case 185LL:
          result = "AVR32";
          break;
        case 186LL:
          result = "STM8";
          break;
        case 187LL:
          result = "Tilera TILE64";
          break;
        case 188LL:
          result = "Tilera TILEPro";
          break;
        case 189LL:
          result = "MicroBlaze";
          break;
        case 190LL:
          result = "CUDA";
          break;
        case 191LL:
          result = "Tilera TILE-Gx";
          break;
        case 192LL:
          result = "CloudShield";
          break;
        case 193LL:
          result = "Core-A 1st gen";
          break;
        case 194LL:
          result = "Core-A 2nd gen";
          break;
        case 195LL:
          result = "ARCompactV2";
          break;
        case 196LL:
          result = "Open8";
          break;
        case 197LL:
          result = "RL78";
          break;
        case 198LL:
          result = "VideoCore V";
          break;
        case 199LL:
          result = "78K0R";
          break;
        case 200LL:
          result = "Freescale 56800EX";
          break;
        case 201LL:
          result = "Beyond BA1";
          break;
        case 202LL:
          result = "Beyond BA2";
          break;
        case 203LL:
          result = "XMOS xCORE";
          break;
        case 243LL:
          result = "Risc-V";
          break;
        case 249LL:
          result = "nanoMIPS";
          break;
        default:
          if ( (_DWORD)v2 != 41872 )
            return nullptr;
          result = "IBM S/390 (old magic)";
          break;
      }
      return result;
    }
    if ( (unsigned __int16)v1 == 36901 )
      return "PowerPC";
    if ( (unsigned __int16)v1 == 36902 )
      return "DEC Alpha";
    if ( (unsigned __int16)v1 != 36992 )
      return nullptr;
    return "NEC V850";
  }
  if ( v1 <= 29645 )
  {
    if ( (unsigned __int16)v1 == 28924 )
      return "NEC v850E";
    if ( (unsigned __int16)v1 != 28927 )
    {
      if ( (unsigned __int16)v1 == 29162 )
        return "NEC v850E2";
      return nullptr;
    }
    return "NEC V850";
  }
  v4 = *(_WORD *)(a1 + 522);
  switch ( (__int16)v1 )
  {
    case 29693:
      result = "NEC v850E2R1";
      break;
    case 29694:
      result = "NEC v850E2R2";
      break;
    case 29695:
      result = "NEC v850E2R3";
      break;
    case 29696:
      result = "NEC v850E2R4";
      break;
    default:
      if ( v4 == 29646 )
      {
        result = "NEC v850ES";
      }
      else
      {
        if ( v4 != 29947 )
          return nullptr;
        result = "NEC v850E3V5";
      }
      break;
  }
  return result;
}
