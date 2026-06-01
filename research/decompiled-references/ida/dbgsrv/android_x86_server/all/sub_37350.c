/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37350
// Address: 0x00037350

//----- (00037350) --------------------------------------------------------
const char *__cdecl sub_37350(int a1)
{
  int v1; // eax
  int v2; // edx
  const char *result; // eax

  v1 = *(__int16 *)(a1 + 402);
  if ( v1 <= 28923 )
  {
    if ( (__int16)v1 > -23665 )
    {
      v2 = (unsigned __int16)v1;
      result = "<No machine>";
      switch ( v2 )
      {
        case 0:
          return result;
        case 1:
          result = "AT & T WE 32100";
          break;
        case 2:
          result = "SPARC";
          break;
        case 3:
          result = "Intel 386";
          break;
        case 4:
          result = "Motorola 68000";
          break;
        case 5:
          result = "Motorola 88000";
          break;
        case 6:
          result = "Intel 486";
          break;
        case 7:
          result = "Intel 860";
          break;
        case 8:
          result = "MIPS";
          break;
        case 9:
          result = "IBM System370";
          break;
        case 10:
          result = "MIPS R3000 Big Endian";
          break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 16:
        case 24:
        case 26:
        case 27:
        case 28:
        case 29:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 141:
        case 142:
        case 143:
        case 144:
        case 145:
        case 146:
        case 147:
        case 148:
        case 149:
        case 150:
        case 151:
        case 152:
        case 153:
        case 154:
        case 155:
        case 156:
        case 157:
        case 158:
        case 159:
        case 204:
        case 205:
        case 206:
        case 207:
        case 208:
        case 209:
        case 210:
        case 211:
        case 212:
        case 213:
        case 214:
        case 215:
        case 216:
        case 217:
        case 218:
        case 219:
        case 220:
        case 221:
        case 222:
        case 223:
        case 224:
        case 225:
        case 226:
        case 227:
        case 228:
        case 229:
        case 230:
        case 231:
        case 232:
        case 233:
        case 234:
        case 235:
        case 236:
        case 237:
        case 238:
        case 239:
        case 240:
        case 241:
        case 242:
        case 244:
        case 245:
        case 246:
        case 247:
        case 248:
          return nullptr;
        case 15:
          result = "PA-RISC";
          break;
        case 17:
          result = "Fujitsu VPP500";
          break;
        case 18:
          result = "SPARC v8+";
          break;
        case 19:
          result = "Intel 960";
          break;
        case 20:
          result = "PowerPC";
          break;
        case 21:
          result = "PowerPC 64";
          break;
        case 22:
          result = "IBM S/390";
          break;
        case 23:
          result = "Cell BE SPU";
          break;
        case 25:
          result = "Cisco 7200 Series Router (MIPS)";
          break;
        case 30:
          result = "Cisco 3620/3640 Router (MIPS)";
          break;
        case 36:
          result = "NEC V800 or Renesas RH850";
          break;
        case 37:
          result = "Fujitsu FR20";
          break;
        case 38:
          result = "TRW RH-22";
          break;
        case 39:
          result = "Motorola M*Core";
          break;
        case 40:
          result = "ARM";
          break;
        case 41:
          result = "Digital Alpha";
          break;
        case 42:
          result = "SuperH";
          break;
        case 43:
          result = "SPARC 64";
          break;
        case 44:
          result = "Siemens Tricore";
          break;
        case 45:
          result = "ARC";
          break;
        case 46:
          result = "H8/300";
          break;
        case 47:
          result = "H8/300H";
          break;
        case 48:
          result = "Hitachi H8S";
          break;
        case 49:
          result = "H8/500";
          break;
        case 50:
          result = "Itanium IA64";
          break;
        case 51:
          result = "Stanford MIPS-X";
          break;
        case 52:
          result = "Coldfire";
          break;
        case 53:
          result = "MC68HC12";
          break;
        case 54:
          result = "Fujitsu MMA";
          break;
        case 55:
          result = "Siemens PCP";
          break;
        case 56:
          result = "Sony nCPU";
          break;
        case 57:
          result = "Denso NDR1";
          break;
        case 58:
          result = "Star*Core";
          break;
        case 59:
          result = "Toyota ME16";
          break;
        case 60:
          result = "ST100";
          break;
        case 61:
          result = "TinyJ";
          break;
        case 62:
          result = "x86-64";
          break;
        case 63:
          result = "PDSP";
          break;
        case 64:
          result = "DEC PDP-10";
          break;
        case 65:
          result = "DEC PDP-11";
          break;
        case 66:
          result = "Siemens FX66";
          break;
        case 67:
          result = "ST9+";
          break;
        case 68:
          result = "ST7";
          break;
        case 69:
          result = "MC68HC16";
          break;
        case 70:
          result = "MC68HC11";
          break;
        case 71:
          result = "MC68HC08";
          break;
        case 72:
          result = "MC68HC05";
          break;
        case 73:
          result = "Silicon Graphics SVx";
          break;
        case 74:
          result = "ST19";
          break;
        case 75:
          result = "VAX";
          break;
        case 76:
          result = "CRIS";
          break;
        case 77:
          result = "Infineon Javelin";
          break;
        case 78:
          result = "Element 14 Firepath";
          break;
        case 79:
          result = "ZSP";
          break;
        case 80:
          result = "MMIX";
          break;
        case 81:
          result = "Harvard HUANY";
          break;
        case 82:
          result = "SiTera Prism";
          break;
        case 83:
          result = "Atmel";
          break;
        case 84:
          result = "Fujitsu FR";
          break;
        case 85:
          result = "Mitsubishi D10V";
          break;
        case 86:
          result = "Mitsubishi D30V";
          break;
        case 87:
          return "NEC V850";
        case 88:
          result = "M32R";
          break;
        case 89:
          result = "MN10300";
          break;
        case 90:
          result = "MN10200";
          break;
        case 91:
          result = "picoJava";
          break;
        case 92:
          result = "OpenRISC";
          break;
        case 93:
          result = "ARCompact";
          break;
        case 94:
          result = "Xtensa";
          break;
        case 95:
          result = "VideoCore";
          break;
        case 96:
          result = "Thompson GPP";
          break;
        case 97:
          result = "NS 32000";
          break;
        case 98:
          result = "TPC";
          break;
        case 99:
          result = "SNP 1000";
          break;
        case 100:
          result = "ST200";
          break;
        case 101:
          result = "IP2022";
          break;
        case 102:
          result = "MAX";
          break;
        case 103:
          result = "CompactRISC";
          break;
        case 104:
          result = "F2MC16";
          break;
        case 105:
          result = "MSP430";
          break;
        case 106:
          result = "ADI Blackfin";
          break;
        case 107:
          result = "S1C33";
          break;
        case 108:
          result = "SEP";
          break;
        case 109:
          result = "Arca";
          break;
        case 110:
          result = "Unicore";
          break;
        case 111:
          result = "eXcess";
          break;
        case 112:
          result = "Icera DXP";
          break;
        case 113:
          result = "Nios II";
          break;
        case 114:
          result = "CRX";
          break;
        case 115:
          result = "XGATE";
          break;
        case 116:
          result = "C16x/XC16x/ST10";
          break;
        case 117:
          result = "M16C";
          break;
        case 118:
          result = "dsPIC30F";
          break;
        case 119:
          result = "Freescale Communication Engine";
          break;
        case 120:
          result = "Renesas  M32C";
          break;
        case 131:
          result = "TSK3000";
          break;
        case 132:
          result = "Freescale RS08";
          break;
        case 133:
          result = "Analog Devices SHARC";
          break;
        case 134:
          result = "Cyan Technology eCOG2";
          break;
        case 135:
          result = "Sunplus S+core7";
          break;
        case 136:
          result = "NJR DSP24";
          break;
        case 137:
          result = "VideoCore III";
          break;
        case 138:
          result = "Lattice Mico32";
          break;
        case 139:
          result = "C17";
          break;
        case 140:
          result = "TMS320C6";
          break;
        case 160:
          result = "MMDSP";
          break;
        case 161:
          result = "M8C";
          break;
        case 162:
          result = "R32C";
          break;
        case 163:
          result = "TriMedia";
          break;
        case 164:
          result = "QDSP6";
          break;
        case 165:
          result = "i8051";
          break;
        case 166:
          result = "STxP7x";
          break;
        case 167:
          result = "NDS32";
          break;
        case 168:
          result = "eCOG1X";
          break;
        case 169:
          result = "MAXQ30";
          break;
        case 170:
          result = "NJR XIMO16";
          break;
        case 171:
          result = "M2000";
          break;
        case 172:
          result = "Cray NV2";
          break;
        case 173:
          result = "RX";
          break;
        case 174:
          result = "Imagination Technologies META";
          break;
        case 175:
          result = "MCST Elbrus";
          break;
        case 176:
          result = "eCOG16";
          break;
        case 177:
          result = "CompactRISC 16-bit";
          break;
        case 178:
          result = "Freescale ETPU";
          break;
        case 179:
          result = "SLE9X";
          break;
        case 180:
          result = "Intel L1OM";
          break;
        case 181:
          result = "Intel K1OM";
          break;
        case 182:
          result = "Intel Reserved (182)";
          break;
        case 183:
          result = "ARM64";
          break;
        case 184:
          result = "ARM Reserved (184)";
          break;
        case 185:
          result = "AVR32";
          break;
        case 186:
          result = "STM8";
          break;
        case 187:
          result = "Tilera TILE64";
          break;
        case 188:
          result = "Tilera TILEPro";
          break;
        case 189:
          result = "MicroBlaze";
          break;
        case 190:
          result = "CUDA";
          break;
        case 191:
          result = "Tilera TILE-Gx";
          break;
        case 192:
          result = "CloudShield";
          break;
        case 193:
          result = "Core-A 1st gen";
          break;
        case 194:
          result = "Core-A 2nd gen";
          break;
        case 195:
          result = "ARCompactV2";
          break;
        case 196:
          result = "Open8";
          break;
        case 197:
          result = "RL78";
          break;
        case 198:
          result = "VideoCore V";
          break;
        case 199:
          result = "78K0R";
          break;
        case 200:
          result = "Freescale 56800EX";
          break;
        case 201:
          result = "Beyond BA1";
          break;
        case 202:
          result = "Beyond BA2";
          break;
        case 203:
          result = "XMOS xCORE";
          break;
        case 243:
          result = "Risc-V";
          break;
        case 249:
          result = "nanoMIPS";
          break;
        default:
          if ( v2 != 41872 )
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
  if ( (__int16)v1 <= 29645 )
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
      if ( (unsigned __int16)v1 == 29646 )
      {
        result = "NEC v850ES";
      }
      else
      {
        if ( (unsigned __int16)v1 != 29947 )
          return nullptr;
        result = "NEC v850E3V5";
      }
      break;
  }
  return result;
}
