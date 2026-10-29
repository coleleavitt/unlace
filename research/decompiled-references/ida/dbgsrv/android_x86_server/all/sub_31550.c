/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31550
// Address: 0x00031550

//----- (00031550) --------------------------------------------------------
const char *__cdecl sub_31550(int a1, unsigned int a2)
{
  int v2; // eax
  int v3; // esi
  unsigned __int16 v4; // kr00_2
  const char *result; // eax
  bool v6; // zf

  v2 = *(__int16 *)(a1 + 402);
  if ( v2 > 28923 )
  {
    if ( (__int16)v2 <= 29645 )
    {
      if ( (unsigned __int16)(v2 - 28924) >= 4u )
      {
        v6 = (unsigned __int16)v2 == 29162;
        result = "Unknown";
        if ( !v6 )
          return result;
      }
    }
    else if ( (unsigned __int16)(v2 - 29693) >= 4u && (unsigned __int16)v2 != 29646 )
    {
      v6 = (unsigned __int16)v2 == 29947;
      result = "Unknown";
      if ( !v6 )
        return result;
    }
    return sub_31520(a2);
  }
  v3 = (unsigned __int16)(v2 - 2);
  v4 = *(_WORD *)(a1 + 402);
  result = "Unknown";
  switch ( v3 )
  {
    case 0:
    case 16:
    case 41:
      result = "R_SPARC_NONE";
      switch ( a2 )
      {
        case 0u:
          return result;
        case 1u:
          result = "R_SPARC_8";
          break;
        case 2u:
          result = "R_SPARC_16";
          break;
        case 3u:
          result = "R_SPARC_32";
          break;
        case 4u:
          result = "R_SPARC_DISP8";
          break;
        case 5u:
          result = "R_SPARC_DISP16";
          break;
        case 6u:
          result = "R_SPARC_DISP32";
          break;
        case 7u:
          result = "R_SPARC_WDISP30";
          break;
        case 8u:
          result = "R_SPARC_WDISP22";
          break;
        case 9u:
          result = "R_SPARC_HI22";
          break;
        case 0xAu:
          result = "R_SPARC_22";
          break;
        case 0xBu:
          result = "R_SPARC_13";
          break;
        case 0xCu:
          result = "R_SPARC_LO10";
          break;
        case 0xDu:
          result = "R_SPARC_GOT10";
          break;
        case 0xEu:
          result = "R_SPARC_GOT13";
          break;
        case 0xFu:
          result = "R_SPARC_GOT22";
          break;
        case 0x10u:
          result = "R_SPARC_PC10";
          break;
        case 0x11u:
          result = "R_SPARC_PC22";
          break;
        case 0x12u:
          result = "R_SPARC_WPLT30";
          break;
        case 0x13u:
          result = "R_SPARC_COPY";
          break;
        case 0x14u:
          result = "R_SPARC_GLOB_DAT";
          break;
        case 0x15u:
          result = "R_SPARC_JMP_SLOT";
          break;
        case 0x16u:
          result = "R_SPARC_RELATIVE";
          break;
        case 0x17u:
          result = "R_SPARC_UA32";
          break;
        case 0x18u:
          result = "R_SPARC_PLT32";
          break;
        case 0x19u:
          result = "R_SPARC_HIPLT22";
          break;
        case 0x1Au:
          result = "R_SPARC_LOPLT10";
          break;
        case 0x1Bu:
          result = "R_SPARC_PCPLT32";
          break;
        case 0x1Cu:
          result = "R_SPARC_PCPLT22";
          break;
        case 0x1Du:
          result = "R_SPARC_PCPLT10";
          break;
        case 0x1Eu:
          result = "R_SPARC_10";
          break;
        case 0x1Fu:
          result = "R_SPARC_11";
          break;
        case 0x20u:
          result = "R_SPARC_64";
          break;
        case 0x21u:
          result = "R_SPARC_OLO10";
          break;
        case 0x22u:
          result = "R_SPARC_HH22";
          break;
        case 0x23u:
          result = "R_SPARC_HM10";
          break;
        case 0x24u:
          result = "R_SPARC_LM22";
          break;
        case 0x25u:
          result = "R_SPARC_PC_HH22";
          break;
        case 0x26u:
          result = "R_SPARC_PC_HM10";
          break;
        case 0x27u:
          result = "R_SPARC_PC_LM22";
          break;
        case 0x28u:
          result = "R_SPARC_WDISP16";
          break;
        case 0x29u:
          result = "R_SPARC_WDISP19";
          break;
        case 0x2Au:
          result = "R_SPARC_GLOB_JMP";
          break;
        case 0x2Bu:
          result = "R_SPARC_7";
          break;
        case 0x2Cu:
          result = "R_SPARC_5";
          break;
        case 0x2Du:
          result = "R_SPARC_6";
          break;
        case 0x2Eu:
          result = "R_SPARC_DISP64";
          break;
        case 0x2Fu:
          result = "R_SPARC_PLT64";
          break;
        case 0x30u:
          result = "R_SPARC_HIX22";
          break;
        case 0x31u:
          result = "R_SPARC_LOX10";
          break;
        case 0x32u:
          result = "R_SPARC_H44";
          break;
        case 0x33u:
          result = "R_SPARC_M44";
          break;
        case 0x34u:
          result = "R_SPARC_L44";
          break;
        case 0x35u:
          result = "R_SPARC_REGISTER";
          break;
        case 0x36u:
          result = "R_SPARC_UA64";
          break;
        case 0x37u:
          result = "R_SPARC_UA16";
          break;
        case 0x38u:
          result = "R_SPARC_TLS_GD_HI22";
          break;
        case 0x39u:
          result = "R_SPARC_TLS_GD_LO10";
          break;
        case 0x3Au:
          result = "R_SPARC_TLS_GD_ADD";
          break;
        case 0x3Bu:
          result = "R_SPARC_TLS_GD_CALL";
          break;
        case 0x3Cu:
          result = "R_SPARC_TLS_LDM_HI22";
          break;
        case 0x3Du:
          result = "R_SPARC_TLS_LDM_LO10";
          break;
        case 0x3Eu:
          result = "R_SPARC_TLS_LDM_ADD";
          break;
        case 0x3Fu:
          result = "R_SPARC_TLS_LDM_CALL";
          break;
        case 0x40u:
          result = "R_SPARC_TLS_LDO_HIX22";
          break;
        case 0x41u:
          result = "R_SPARC_TLS_LDO_LOX10";
          break;
        case 0x42u:
          result = "R_SPARC_TLS_LDO_ADD";
          break;
        case 0x43u:
          result = "R_SPARC_TLS_IE_HI22";
          break;
        case 0x44u:
          result = "R_SPARC_TLS_IE_LO10";
          break;
        case 0x45u:
          result = "R_SPARC_TLS_IE_LD";
          break;
        case 0x46u:
          result = "R_SPARC_TLS_IE_LDX";
          break;
        case 0x47u:
          result = "R_SPARC_TLS_IE_ADD";
          break;
        case 0x48u:
          result = "R_SPARC_TLS_LE_HIX22";
          break;
        case 0x49u:
          result = "R_SPARC_TLS_LE_LOX10";
          break;
        case 0x4Au:
          result = "R_SPARC_TLS_DTPMOD32";
          break;
        case 0x4Bu:
          result = "R_SPARC_TLS_DTPMOD64";
          break;
        case 0x4Cu:
          result = "R_SPARC_TLS_DTPOFF32";
          break;
        case 0x4Du:
          result = "R_SPARC_TLS_DTPOFF64";
          break;
        case 0x4Eu:
          result = "R_SPARC_TLS_TPOFF32";
          break;
        case 0x4Fu:
          result = "R_SPARC_TLS_TPOFF64";
          break;
        case 0x50u:
          result = "R_SPARC_GOTDATA_HIX22";
          break;
        case 0x51u:
          result = "R_SPARC_GOTDATA_LOX10";
          break;
        case 0x52u:
          result = "R_SPARC_GOTDATA_OP_HIX22";
          break;
        case 0x53u:
          result = "R_SPARC_GOTDATA_OP_LOX10";
          break;
        case 0x54u:
          result = "R_SPARC_GOTDATA_OP";
          break;
        case 0x55u:
          result = "R_SPARC_H34";
          break;
        case 0x56u:
          result = "R_SPARC_SIZE32";
          break;
        case 0x57u:
          result = "R_SPARC_SIZE64";
          break;
        case 0x58u:
          result = "R_SPARC_WDISP10";
          break;
        case 0xF8u:
          result = "R_SPARC_JMP_IREL";
          break;
        case 0xF9u:
          result = "R_SPARC_IRELATIVE";
          break;
        case 0xFAu:
          result = "R_SPARC_GNU_VTINHERIT";
          break;
        case 0xFBu:
          result = "R_SPARC_GNU_VTENTRY";
          break;
        case 0xFCu:
          result = "R_SPARC_REV32";
          break;
        default:
          result = "Unknown";
          break;
      }
      break;
    case 1:
      result = "R_386_NONE";
      switch ( a2 )
      {
        case 0u:
          return result;
        case 1u:
          result = "R_386_32";
          break;
        case 2u:
          result = "R_386_PC32";
          break;
        case 3u:
          result = "R_386_GOT32";
          break;
        case 4u:
          result = "R_386_PLT32";
          break;
        case 5u:
          result = "R_386_COPY";
          break;
        case 6u:
          result = "R_386_GLOB_DAT";
          break;
        case 7u:
          result = "R_386_JMP_SLOT";
          break;
        case 8u:
          result = "R_386_RELATIVE";
          break;
        case 9u:
          result = "R_386_GOTOFF";
          break;
        case 0xAu:
          result = "R_386_GOTPC";
          break;
        case 0xBu:
          result = "R_386_32PLT";
          break;
        case 0xCu:
          result = "FIRST_INVALID_RELOC";
          break;
        case 0xDu:
          result = "LAST_INVALID_RELOC";
          break;
        case 0xEu:
          result = "R_386_TLS_TPOFF";
          break;
        case 0xFu:
          result = "R_386_TLS_IE";
          break;
        case 0x10u:
          result = "R_386_TLS_GOTIE";
          break;
        case 0x11u:
          result = "R_386_TLS_LE";
          break;
        case 0x12u:
          result = "R_386_TLS_GD";
          break;
        case 0x13u:
          result = "R_386_TLS_LDM";
          break;
        case 0x14u:
          result = "R_386_16";
          break;
        case 0x15u:
          result = "R_386_PC16";
          break;
        case 0x16u:
          result = "R_386_8";
          break;
        case 0x17u:
          result = "R_386_PC8";
          break;
        case 0x18u:
          result = "R_386_TLS_GD_32";
          break;
        case 0x19u:
          result = "R_386_TLS_GD_PUSH";
          break;
        case 0x1Au:
          result = "R_386_TLS_GD_CALL";
          break;
        case 0x1Bu:
          result = "R_386_TLS_GD_POP";
          break;
        case 0x1Cu:
          result = "R_386_TLS_LDM_32";
          break;
        case 0x1Du:
          result = "R_386_TLS_LDM_PUSH";
          break;
        case 0x1Eu:
          result = "R_386_TLS_LDM_CALL";
          break;
        case 0x1Fu:
          result = "R_386_TLS_LDM_POP";
          break;
        case 0x20u:
          result = "R_386_TLS_LDO_32";
          break;
        case 0x21u:
          result = "R_386_TLS_IE_32";
          break;
        case 0x22u:
          result = "R_386_TLS_LE_32";
          break;
        case 0x23u:
          result = "R_386_TLS_DTPMOD32";
          break;
        case 0x24u:
          result = "R_386_TLS_DTPOFF32";
          break;
        case 0x25u:
          result = "R_386_TLS_TPOFF32";
          break;
        case 0x26u:
          result = "R_386_SIZE32";
          break;
        case 0x27u:
          result = "R_386_TLS_GOTDESC";
          break;
        case 0x28u:
          result = "R_386_TLS_DESC_CALL";
          break;
        case 0x29u:
          result = "R_386_TLS_DESC";
          break;
        case 0x2Au:
          result = "R_386_IRELATIVE";
          break;
        case 0x2Bu:
          result = "R_386_GOT32X";
          break;
        case 0xFAu:
          result = "R_386_GNU_VTINHERIT";
          break;
        case 0xFBu:
          result = "R_386_GNU_VTENTRY";
          break;
        default:
          result = "Unknown";
          break;
      }
      break;
    case 2:
      result = "Unknown";
      if ( a2 < 0x2B )
        result = off_135390[a2];
      break;
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 35:
    case 36:
    case 37:
    case 39:
    case 47:
    case 49:
    case 50:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 61:
    case 62:
    case 63:
    case 64:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 83:
    case 84:
    case 89:
    case 90:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 116:
    case 117:
    case 119:
    case 120:
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
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
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
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 189:
    case 190:
    case 191:
    case 192:
    case 194:
    case 195:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
    case 202:
    case 203:
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
      return result;
    case 6:
      result = "Unknown";
      if ( a2 < 0xFF )
        result = off_135440[a2];
      break;
    case 13:
      result = "Unknown";
      if ( a2 < 0xF6 )
        result = off_136DE0[a2];
      break;
    case 17:
      result = "Unknown";
      if ( a2 < 8 )
        result = off_136840[a2];
      break;
    case 18:
      result = "Unknown";
      if ( a2 < 0x100 )
        result = off_135840[a2];
      break;
    case 19:
      result = "Unknown";
      if ( a2 < 0xFD )
        result = off_135C40[a2];
      break;
    case 20:
      result = "R_390_NONE";
      switch ( a2 )
      {
        case 0u:
          return result;
        case 1u:
          result = "R_390_8";
          break;
        case 2u:
          result = "R_390_12";
          break;
        case 3u:
          result = "R_390_16";
          break;
        case 4u:
          result = "R_390_32";
          break;
        case 5u:
          result = "R_390_PC32";
          break;
        case 6u:
          result = "R_390_GOT12";
          break;
        case 7u:
          result = "R_390_GOT32";
          break;
        case 8u:
          result = "R_390_PLT32";
          break;
        case 9u:
          result = "R_390_COPY";
          break;
        case 0xAu:
          result = "R_390_GLOB_DAT";
          break;
        case 0xBu:
          result = "R_390_JMP_SLOT";
          break;
        case 0xCu:
          result = "R_390_RELATIVE";
          break;
        case 0xDu:
          result = "R_390_GOTOFF";
          break;
        case 0xEu:
          result = "R_390_GOTPC";
          break;
        case 0xFu:
          result = "R_390_GOT16";
          break;
        case 0x10u:
          result = "R_390_PC16";
          break;
        case 0x11u:
          result = "R_390_PC16DBL";
          break;
        case 0x12u:
          result = "R_390_PLT16DBL";
          break;
        case 0x13u:
          result = "R_390_PC32DBL";
          break;
        case 0x14u:
          result = "R_390_PLT32DBL";
          break;
        case 0x15u:
          result = "R_390_GOTPCDBL";
          break;
        case 0x16u:
          result = "R_390_64";
          break;
        case 0x17u:
          result = "R_390_PC64";
          break;
        case 0x18u:
          result = "R_390_GOT64";
          break;
        case 0x19u:
          result = "R_390_PLT64";
          break;
        case 0x1Au:
          result = "R_390_GOTENT";
          break;
        case 0x1Bu:
          result = "R_390_GOTOFF16";
          break;
        case 0x1Cu:
          result = "R_390_GOTOFF64";
          break;
        case 0x1Du:
          result = "R_390_GOTPLT12";
          break;
        case 0x1Eu:
          result = "R_390_GOTPLT16";
          break;
        case 0x1Fu:
          result = "R_390_GOTPLT32";
          break;
        case 0x20u:
          result = "R_390_GOTPLT64";
          break;
        case 0x21u:
          result = "R_390_GOTPLTENT";
          break;
        case 0x22u:
          result = "R_390_PLTOFF16";
          break;
        case 0x23u:
          result = "R_390_PLTOFF32";
          break;
        case 0x24u:
          result = "R_390_PLTOFF64";
          break;
        case 0x25u:
          result = "R_390_TLS_LOAD";
          break;
        case 0x26u:
          result = "R_390_TLS_GDCALL";
          break;
        case 0x27u:
          result = "R_390_TLS_LDCALL";
          break;
        case 0x28u:
          result = "R_390_TLS_GD32";
          break;
        case 0x29u:
          result = "R_390_TLS_GD64";
          break;
        case 0x2Au:
          result = "R_390_TLS_GOTIE12";
          break;
        case 0x2Bu:
          result = "R_390_TLS_GOTIE32";
          break;
        case 0x2Cu:
          result = "R_390_TLS_GOTIE64";
          break;
        case 0x2Du:
          result = "R_390_TLS_LDM32";
          break;
        case 0x2Eu:
          result = "R_390_TLS_LDM64";
          break;
        case 0x2Fu:
          result = "R_390_TLS_IE32";
          break;
        case 0x30u:
          result = "R_390_TLS_IE64";
          break;
        case 0x31u:
          result = "R_390_TLS_IEENT";
          break;
        case 0x32u:
          result = "R_390_TLS_LE32";
          break;
        case 0x33u:
          result = "R_390_TLS_LE64";
          break;
        case 0x34u:
          result = "R_390_TLS_LDO32";
          break;
        case 0x35u:
          result = "R_390_TLS_LDO64";
          break;
        case 0x36u:
          result = "R_390_TLS_DTPMOD";
          break;
        case 0x37u:
          result = "R_390_TLS_DTPOFF";
          break;
        case 0x38u:
          result = "R_390_TLS_TPOFF";
          break;
        case 0x39u:
          result = "R_390_20";
          break;
        case 0x3Au:
          result = "R_390_GOT20";
          break;
        case 0x3Bu:
          result = "R_390_GOTPLT20";
          break;
        case 0x3Cu:
          result = "R_390_TLS_GOTIE20";
          break;
        case 0x3Du:
          result = "R_390_IRELATIVE";
          break;
        case 0x3Eu:
          result = "R_390_PC12DBL";
          break;
        case 0x3Fu:
          result = "R_390_PLT12DBL";
          break;
        case 0x40u:
          result = "R_390_PC24DBL";
          break;
        case 0x41u:
          result = "R_390_PLT24DBL";
          break;
        case 0xFAu:
          result = "R_390_GNU_VTINHERIT";
          break;
        case 0xFBu:
          result = "R_390_GNU_VTENTRY";
          break;
        default:
          goto LABEL_77;
      }
      break;
    case 34:
      result = sub_314C0(a2);
      break;
    case 38:
      result = "Unknown";
      if ( a2 < 0x100 )
        result = off_136040[a2];
      break;
    case 40:
      result = "Unknown";
      if ( a2 < 0x100 )
        result = off_136440[a2];
      break;
    case 42:
      result = "Unknown";
      if ( a2 < 0x1F )
        result = off_137660[a2];
      break;
    case 43:
      result = "Unknown";
      if ( a2 < 0xE )
        result = off_136860[a2];
      break;
    case 44:
    case 45:
    case 46:
      result = "Unknown";
      if ( a2 < 0x8E )
        result = off_136BA0[a2];
      break;
    case 48:
      result = "Unknown";
      if ( a2 < 0xBB )
        result = off_1372C0[a2];
      break;
    case 51:
      result = "Unknown";
      if ( a2 < 0x16 )
        result = off_1371C0[a2];
      break;
    case 60:
      result = "R_X86_64_NONE";
      switch ( a2 )
      {
        case 0u:
          return result;
        case 1u:
          result = "R_X86_64_64";
          break;
        case 2u:
          result = "R_X86_64_PC32";
          break;
        case 3u:
          result = "R_X86_64_GOT32";
          break;
        case 4u:
          result = "R_X86_64_PLT32";
          break;
        case 5u:
          result = "R_X86_64_COPY";
          break;
        case 6u:
          result = "R_X86_64_GLOB_DAT";
          break;
        case 7u:
          result = "R_X86_64_JUMP_SLOT";
          break;
        case 8u:
          result = "R_X86_64_RELATIVE";
          break;
        case 9u:
          result = "R_X86_64_GOTPCREL";
          break;
        case 0xAu:
          result = "R_X86_64_32";
          break;
        case 0xBu:
          result = "R_X86_64_32S";
          break;
        case 0xCu:
          result = "R_X86_64_16";
          break;
        case 0xDu:
          result = "R_X86_64_PC16";
          break;
        case 0xEu:
          result = "R_X86_64_8";
          break;
        case 0xFu:
          result = "R_X86_64_PC8";
          break;
        case 0x10u:
          result = "R_X86_64_DTPMOD64";
          break;
        case 0x11u:
          result = "R_X86_64_DTPOFF64";
          break;
        case 0x12u:
          result = "R_X86_64_TPOFF64";
          break;
        case 0x13u:
          result = "R_X86_64_TLSGD";
          break;
        case 0x14u:
          result = "R_X86_64_TLSLD";
          break;
        case 0x15u:
          result = "R_X86_64_DTPOFF32";
          break;
        case 0x16u:
          result = "R_X86_64_GOTTPOFF";
          break;
        case 0x17u:
          result = "R_X86_64_TPOFF32";
          break;
        case 0x18u:
          result = "R_X86_64_PC64";
          break;
        case 0x19u:
          result = "R_X86_64_GOTOFF64";
          break;
        case 0x1Au:
          result = "R_X86_64_GOTPC32";
          break;
        case 0x1Bu:
          result = "R_X86_64_GOT64";
          break;
        case 0x1Cu:
          result = "R_X86_64_GOTPCREL64";
          break;
        case 0x1Du:
          result = "R_X86_64_GOTPC64";
          break;
        case 0x1Eu:
          result = "R_X86_64_GOTPLT64";
          break;
        case 0x1Fu:
          result = "R_X86_64_PLTOFF64";
          break;
        case 0x20u:
          result = "R_X86_64_SIZE32";
          break;
        case 0x21u:
          result = "R_X86_64_SIZE64";
          break;
        case 0x22u:
          result = "R_X86_64_GOTPC32_TLSDESC";
          break;
        case 0x23u:
          result = "R_X86_64_TLSDESC_CALL";
          break;
        case 0x24u:
          result = "R_X86_64_TLSDESC";
          break;
        case 0x25u:
          result = "R_X86_64_IRELATIVE";
          break;
        case 0x26u:
          result = "R_X86_64_RELATIVE64";
          break;
        case 0x27u:
          result = "R_X86_64_PC32_BND";
          break;
        case 0x28u:
          result = "R_X86_64_PLT32_BND";
          break;
        case 0x29u:
          result = "R_X86_64_GOTPCRELX";
          break;
        case 0x2Au:
          result = "R_X86_64_REX_GOTPCRELX";
          break;
        case 0xFAu:
          result = "R_X86_64_GNU_VTINHERIT";
          break;
        case 0xFBu:
          result = "R_X86_64_GNU_VTENTRY";
          break;
        default:
          result = "Unknown";
          break;
      }
      break;
    case 65:
      result = "Unknown";
      if ( a2 < 0x13 )
        result = off_136AA0[a2];
      break;
    case 81:
      result = "Unknown";
      if ( a2 < 0x25 )
        result = off_137220[a2];
      break;
    case 82:
      result = "Unknown";
      if ( a2 < 0xD )
        result = off_1376E0[a2];
      break;
    case 85:
      result = sub_314F0(a2);
      break;
    case 86:
      result = "Unknown";
      if ( a2 < 0x41 )
        result = off_136990[a2];
      break;
    case 87:
      result = "Unknown";
      if ( a2 < 0x23 )
        result = off_1375D0[a2];
      break;
    case 88:
      result = "Unknown";
      if ( a2 < 8 )
        result = off_1375B0[a2];
      break;
    case 91:
    case 193:
      result = "Unknown";
      if ( a2 < 0x3C )
        result = off_1368A0[a2];
      break;
    case 92:
      result = sub_31460(a2);
      break;
    case 115:
    case 118:
      result = "Unknown";
      if ( a2 < 0x95 )
        result = off_137720[a2];
      break;
    case 165:
      result = sub_31490(a2);
      break;
    case 171:
      result = "R_RX_NONE";
      switch ( a2 )
      {
        case 0u:
          return result;
        case 1u:
          result = "R_RX_DIR32";
          break;
        case 9u:
          result = "R_RX_DIR24S_PCREL";
          break;
        case 0xAu:
          result = "R_RX_DIR16S_PCREL";
          break;
        case 0xBu:
          result = "R_RX_DIR8S_PCREL";
          break;
        case 0x12u:
          result = "R_RX_DIR3U_PCREL";
          break;
        default:
LABEL_77:
          result = "Unknown";
          break;
      }
      break;
    case 181:
      result = "R_ARM_NONE";
      switch ( a2 )
      {
        case 0u:
          return result;
        case 1u:
          result = "R_AARCH64_P32_ABS32";
          break;
        case 2u:
          result = "R_AARCH64_P32_ABS16";
          break;
        case 3u:
          result = "R_AARCH64_P32_PREL32";
          break;
        case 4u:
          result = "R_AARCH64_P32_PREL16";
          break;
        case 5u:
          result = "R_AARCH64_P32_MOVW_UABS_G0";
          break;
        case 6u:
          result = "R_AARCH64_P32_MOVW_UABS_G0_NC";
          break;
        case 7u:
          result = "R_AARCH64_P32_MOVW_UABS_G1";
          break;
        case 8u:
          result = "R_AARCH64_P32_MOVW_SABS_G0";
          break;
        case 9u:
          result = "R_AARCH64_P32_LD_PREL_LO19";
          break;
        case 0xAu:
          result = "R_AARCH64_P32_ADR_PREL_LO21";
          break;
        case 0xBu:
          result = "R_AARCH64_P32_ADR_PREL_PG_HI21";
          break;
        case 0xCu:
          result = "R_AARCH64_P32_ADD_ABS_LO12_NC";
          break;
        case 0xDu:
          result = "R_AARCH64_P32_LDST8_ABS_LO12_NC";
          break;
        case 0xEu:
          result = "R_AARCH64_P32_LDST16_ABS_LO12_NC";
          break;
        case 0xFu:
          result = "R_AARCH64_P32_LDST32_ABS_LO12_NC";
          break;
        case 0x10u:
          result = "R_AARCH64_P32_LDST64_ABS_LO12_NC";
          break;
        case 0x11u:
          result = "R_AARCH64_P32_LDST128_ABS_LO12_NC";
          break;
        case 0x12u:
          result = "R_AARCH64_P32_TSTBR14";
          break;
        case 0x13u:
          result = "R_AARCH64_P32_CONDBR19";
          break;
        case 0x14u:
          result = "R_AARCH64_P32_JUMP26";
          break;
        case 0x15u:
          result = "R_AARCH64_P32_CALL26";
          break;
        case 0x16u:
          result = "R_AARCH64_P32_MOVW_PREL_G0";
          break;
        case 0x17u:
          result = "R_AARCH64_P32_MOVW_PREL_G0_NC";
          break;
        case 0x18u:
          result = "R_AARCH64_P32_MOVW_PREL_G1";
          break;
        case 0x19u:
          result = "R_AARCH64_P32_GOT_LD_PREL19";
          break;
        case 0x1Au:
          result = "R_AARCH64_P32_ADR_GOT_PAGE";
          break;
        case 0x1Bu:
          result = "R_AARCH64_P32_LD32_GOT_LO12_NC";
          break;
        case 0x1Cu:
          result = "R_AARCH64_P32_LD32_GOTPAGE_LO14";
          break;
        case 0x1Du:
          result = "R_AARCH64_P32_PLT32";
          break;
        case 0x50u:
          result = "R_AARCH64_P32_TLSGD_ADR_PREL21";
          break;
        case 0x51u:
          result = "R_AARCH64_P32_TLSGD_ADR_PAGE21";
          break;
        case 0x52u:
          result = "R_AARCH64_P32_TLSGD_ADD_LO12_NC";
          break;
        case 0x53u:
          result = "R_AARCH64_P32_TLSLD_ADR_PREL21";
          break;
        case 0x54u:
          result = "R_AARCH64_P32_TLSLD_ADR_PAGE21";
          break;
        case 0x55u:
          result = "R_AARCH64_P32_TLSLD_ADD_LO12_NC";
          break;
        case 0x56u:
          result = "R_AARCH64_P32_TLSLD_LD_PREL19";
          break;
        case 0x57u:
          result = "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G1";
          break;
        case 0x58u:
          result = "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G0";
          break;
        case 0x59u:
          result = "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G0_NC";
          break;
        case 0x5Au:
          result = "R_AARCH64_P32_TLSLD_ADD_DTPREL_HI12";
          break;
        case 0x5Bu:
          result = "R_AARCH64_P32_TLSLD_ADD_DTPREL_LO12";
          break;
        case 0x5Cu:
          result = "R_AARCH64_P32_TLSLD_ADD_DTPREL_LO12_NC";
          break;
        case 0x5Du:
          result = "R_AARCH64_P32_TLSLD_LDST8_DTPREL_LO12";
          break;
        case 0x5Eu:
          result = "R_AARCH64_P32_TLSLD_LDST8_DTPREL_LO12_NC";
          break;
        case 0x5Fu:
          result = "R_AARCH64_P32_TLSLD_LDST16_DTPREL_LO12";
          break;
        case 0x60u:
          result = "R_AARCH64_P32_TLSLD_LDST16_DTPREL_LO12_NC";
          break;
        case 0x61u:
          result = "R_AARCH64_P32_TLSLD_LDST32_DTPREL_LO12";
          break;
        case 0x62u:
          result = "R_AARCH64_P32_TLSLD_LDST32_DTPREL_LO12_NC";
          break;
        case 0x63u:
          result = "R_AARCH64_P32_TLSLD_LDST64_DTPREL_LO12";
          break;
        case 0x64u:
          result = "R_AARCH64_P32_TLSLD_LDST64_DTPREL_LO12_NC";
          break;
        case 0x65u:
          result = "R_AARCH64_P32_TLSLD_LDST128_DTPREL_LO12";
          break;
        case 0x66u:
          result = "R_AARCH64_P32_TLSLD_LDST128_DTPREL_LO12_NC";
          break;
        case 0x67u:
          result = "R_AARCH64_P32_TLSIE_ADR_GOTTPREL_PAGE21";
          break;
        case 0x68u:
          result = "R_AARCH64_P32_TLSIE_LD32_GOTTPREL_LO12_NC";
          break;
        case 0x69u:
          result = "R_AARCH64_P32_TLSIE_LD_GOTTPREL_PREL19";
          break;
        case 0x6Au:
          result = "R_AARCH64_P32_TLSLE_MOVW_TPREL_G1";
          break;
        case 0x6Bu:
          result = "R_AARCH64_P32_TLSLE_MOVW_TPREL_G0";
          break;
        case 0x6Cu:
          result = "R_AARCH64_P32_TLSLE_MOVW_TPREL_G0_NC";
          break;
        case 0x6Du:
          result = "R_AARCH64_P32_TLSLE_ADD_TPREL_HI12";
          break;
        case 0x6Eu:
          result = "R_AARCH64_P32_TLSLE_ADD_TPREL_LO12";
          break;
        case 0x6Fu:
          result = "R_AARCH64_P32_TLSLE_ADD_TPREL_LO12_NC";
          break;
        case 0x70u:
          result = "R_AARCH64_P32_TLSLE_LDST8_TPREL_LO12";
          break;
        case 0x71u:
          result = "R_AARCH64_P32_TLSLE_LDST8_TPREL_LO12_NC";
          break;
        case 0x72u:
          result = "R_AARCH64_P32_TLSLE_LDST16_TPREL_LO12";
          break;
        case 0x73u:
          result = "R_AARCH64_P32_TLSLE_LDST16_TPREL_LO12_NC";
          break;
        case 0x74u:
          result = "R_AARCH64_P32_TLSLE_LDST32_TPREL_LO12";
          break;
        case 0x75u:
          result = "R_AARCH64_P32_TLSLE_LDST32_TPREL_LO12_NC";
          break;
        case 0x76u:
          result = "R_AARCH64_P32_TLSLE_LDST64_TPREL_LO12";
          break;
        case 0x77u:
          result = "R_AARCH64_P32_TLSLE_LDST64_TPREL_LO12_NC";
          break;
        case 0x78u:
          result = "R_AARCH64_P32_TLSLE_LDST128_TPREL_LO12";
          break;
        case 0x79u:
          result = "R_AARCH64_P32_TLSLE_LDST128_TPREL_LO12_NC";
          break;
        case 0x7Au:
          result = "R_AARCH64_P32_TLSDESC_LD_PREL19";
          break;
        case 0x7Bu:
          result = "R_AARCH64_P32_TLSDESC_ADR_PREL21";
          break;
        case 0x7Cu:
          result = "R_AARCH64_P32_TLSDESC_ADR_PAGE21";
          break;
        case 0x7Du:
          result = "R_AARCH64_P32_TLSDESC_LD32_LO12";
          break;
        case 0x7Eu:
          result = "R_AARCH64_P32_TLSDESC_ADD_LO12";
          break;
        case 0x7Fu:
          result = "R_AARCH64_P32_TLSDESC_CALL";
          break;
        case 0xB4u:
          result = "R_AARCH64_P32_COPY";
          break;
        case 0xB5u:
          result = "R_AARCH64_P32_GLOB_DAT";
          break;
        case 0xB6u:
          result = "R_AARCH64_P32_JUMP_SLOT";
          break;
        case 0xB7u:
          result = "R_AARCH64_P32_RELATIVE";
          break;
        case 0xB8u:
          result = "R_AARCH64_P32_TLS_DTPMOD";
          break;
        case 0xB9u:
          result = "R_AARCH64_P32_TLS_DTPREL";
          break;
        case 0xBAu:
          result = "R_AARCH64_P32_TLS_TPREL";
          break;
        case 0xBBu:
          result = "R_AARCH64_P32_TLSDESC";
          break;
        case 0xBCu:
          result = "R_AARCH64_P32_IRELATIVE";
          break;
        case 0x100u:
          result = "R_AARCH64_NONE";
          break;
        case 0x101u:
          result = "R_AARCH64_ABS64";
          break;
        case 0x102u:
          result = "R_AARCH64_ABS32";
          break;
        case 0x103u:
          result = "R_AARCH64_ABS16";
          break;
        case 0x104u:
          result = "R_AARCH64_PREL64";
          break;
        case 0x105u:
          result = "R_AARCH64_PREL32";
          break;
        case 0x106u:
          result = "R_AARCH64_PREL16";
          break;
        case 0x107u:
          result = "R_AARCH64_MOVW_UABS_G0";
          break;
        case 0x108u:
          result = "R_AARCH64_MOVW_UABS_G0_NC";
          break;
        case 0x109u:
          result = "R_AARCH64_MOVW_UABS_G1";
          break;
        case 0x10Au:
          result = "R_AARCH64_MOVW_UABS_G1_NC";
          break;
        case 0x10Bu:
          result = "R_AARCH64_MOVW_UABS_G2";
          break;
        case 0x10Cu:
          result = "R_AARCH64_MOVW_UABS_G2_NC";
          break;
        case 0x10Du:
          result = "R_AARCH64_MOVW_UABS_G3";
          break;
        case 0x10Eu:
          result = "R_AARCH64_MOVW_SABS_G0";
          break;
        case 0x10Fu:
          result = "R_AARCH64_MOVW_SABS_G1";
          break;
        case 0x110u:
          result = "R_AARCH64_MOVW_SABS_G2";
          break;
        case 0x111u:
          result = "R_AARCH64_LD_PREL_LO19";
          break;
        case 0x112u:
          result = "R_AARCH64_ADR_PREL_LO21";
          break;
        case 0x113u:
          result = "R_AARCH64_ADR_PREL_PG_HI21";
          break;
        case 0x114u:
          result = "R_AARCH64_ADR_PREL_PG_HI21_NC";
          break;
        case 0x115u:
          result = "R_AARCH64_ADD_ABS_LO12_NC";
          break;
        case 0x116u:
          result = "R_AARCH64_LDST8_ABS_LO12_NC";
          break;
        case 0x117u:
          result = "R_AARCH64_TSTBR14";
          break;
        case 0x118u:
          result = "R_AARCH64_CONDBR19";
          break;
        case 0x11Au:
          result = "R_AARCH64_JUMP26";
          break;
        case 0x11Bu:
          result = "R_AARCH64_CALL26";
          break;
        case 0x11Cu:
          result = "R_AARCH64_LDST16_ABS_LO12_NC";
          break;
        case 0x11Du:
          result = "R_AARCH64_LDST32_ABS_LO12_NC";
          break;
        case 0x11Eu:
          result = "R_AARCH64_LDST64_ABS_LO12_NC";
          break;
        case 0x11Fu:
          result = "R_AARCH64_MOVW_PREL_G0";
          break;
        case 0x120u:
          result = "R_AARCH64_MOVW_PREL_G0_NC";
          break;
        case 0x121u:
          result = "R_AARCH64_MOVW_PREL_G1";
          break;
        case 0x122u:
          result = "R_AARCH64_MOVW_PREL_G1_NC";
          break;
        case 0x123u:
          result = "R_AARCH64_MOVW_PREL_G2";
          break;
        case 0x124u:
          result = "R_AARCH64_MOVW_PREL_G2_NC";
          break;
        case 0x125u:
          result = "R_AARCH64_MOVW_PREL_G3";
          break;
        case 0x12Bu:
          result = "R_AARCH64_LDST128_ABS_LO12_NC";
          break;
        case 0x12Cu:
          result = "R_AARCH64_MOVW_GOTOFF_G0";
          break;
        case 0x12Du:
          result = "R_AARCH64_MOVW_GOTOFF_G0_NC";
          break;
        case 0x12Eu:
          result = "R_AARCH64_MOVW_GOTOFF_G1";
          break;
        case 0x12Fu:
          result = "R_AARCH64_MOVW_GOTOFF_G1_NC";
          break;
        case 0x130u:
          result = "R_AARCH64_MOVW_GOTOFF_G2";
          break;
        case 0x131u:
          result = "R_AARCH64_MOVW_GOTOFF_G2_NC";
          break;
        case 0x132u:
          result = "R_AARCH64_MOVW_GOTOFF_G3";
          break;
        case 0x133u:
          result = "R_AARCH64_GOTREL64";
          break;
        case 0x134u:
          result = "R_AARCH64_GOTREL32";
          break;
        case 0x135u:
          result = "R_AARCH64_GOT_LD_PREL19";
          break;
        case 0x136u:
          result = "R_AARCH64_LD64_GOTOFF_LO15";
          break;
        case 0x137u:
          result = "R_AARCH64_ADR_GOT_PAGE";
          break;
        case 0x138u:
          result = "R_AARCH64_LD64_GOT_LO12_NC";
          break;
        case 0x139u:
          result = "R_AARCH64_LD64_GOTPAGE_LO15";
          break;
        case 0x200u:
          result = "R_AARCH64_TLSGD_ADR_PREL21";
          break;
        case 0x201u:
          result = "R_AARCH64_TLSGD_ADR_PAGE21";
          break;
        case 0x202u:
          result = "R_AARCH64_TLSGD_ADD_LO12_NC";
          break;
        case 0x203u:
          result = "R_AARCH64_TLSGD_MOVW_G1";
          break;
        case 0x204u:
          result = "R_AARCH64_TLSGD_MOVW_G0_NC";
          break;
        case 0x205u:
          result = "R_AARCH64_TLSLD_ADR_PREL21";
          break;
        case 0x206u:
          result = "R_AARCH64_TLSLD_ADR_PAGE21";
          break;
        case 0x207u:
          result = "R_AARCH64_TLSLD_ADD_LO12_NC";
          break;
        case 0x208u:
          result = "R_AARCH64_TLSLD_MOVW_G1";
          break;
        case 0x209u:
          result = "R_AARCH64_TLSLD_MOVW_G0_NC";
          break;
        case 0x20Au:
          result = "R_AARCH64_TLSLD_LD_PREL19";
          break;
        case 0x20Bu:
          result = "R_AARCH64_TLSLD_MOVW_DTPREL_G2";
          break;
        case 0x20Cu:
          result = "R_AARCH64_TLSLD_MOVW_DTPREL_G1";
          break;
        case 0x20Du:
          result = "R_AARCH64_TLSLD_MOVW_DTPREL_G1_NC";
          break;
        case 0x20Eu:
          result = "R_AARCH64_TLSLD_MOVW_DTPREL_G0";
          break;
        case 0x20Fu:
          result = "R_AARCH64_TLSLD_MOVW_DTPREL_G0_NC";
          break;
        case 0x210u:
          result = "R_AARCH64_TLSLD_ADD_DTPREL_HI12";
          break;
        case 0x211u:
          result = "R_AARCH64_TLSLD_ADD_DTPREL_LO12";
          break;
        case 0x212u:
          result = "R_AARCH64_TLSLD_ADD_DTPREL_LO12_NC";
          break;
        case 0x213u:
          result = "R_AARCH64_TLSLD_LDST8_DTPREL_LO12";
          break;
        case 0x214u:
          result = "R_AARCH64_TLSLD_LDST8_DTPREL_LO12_NC";
          break;
        case 0x215u:
          result = "R_AARCH64_TLSLD_LDST16_DTPREL_LO12";
          break;
        case 0x216u:
          result = "R_AARCH64_TLSLD_LDST16_DTPREL_LO12_NC";
          break;
        case 0x217u:
          result = "R_AARCH64_TLSLD_LDST32_DTPREL_LO12";
          break;
        case 0x218u:
          result = "R_AARCH64_TLSLD_LDST32_DTPREL_LO12_NC";
          break;
        case 0x219u:
          result = "R_AARCH64_TLSLD_LDST64_DTPREL_LO12";
          break;
        case 0x21Au:
          result = "R_AARCH64_TLSLD_LDST64_DTPREL_LO12_NC";
          break;
        case 0x21Bu:
          result = "R_AARCH64_TLSIE_MOVW_GOTTPREL_G1";
          break;
        case 0x21Cu:
          result = "R_AARCH64_TLSIE_MOVW_GOTTPREL_G0_NC";
          break;
        case 0x21Du:
          result = "R_AARCH64_TLSIE_ADR_GOTTPREL_PAGE21";
          break;
        case 0x21Eu:
          result = "R_AARCH64_TLSIE_LD64_GOTTPREL_LO12_NC";
          break;
        case 0x21Fu:
          result = "R_AARCH64_TLSIE_LD_GOTTPREL_PREL19";
          break;
        case 0x220u:
          result = "R_AARCH64_TLSLE_MOVW_TPREL_G2";
          break;
        case 0x221u:
          result = "R_AARCH64_TLSLE_MOVW_TPREL_G1";
          break;
        case 0x222u:
          result = "R_AARCH64_TLSLE_MOVW_TPREL_G1_NC";
          break;
        case 0x223u:
          result = "R_AARCH64_TLSLE_MOVW_TPREL_G0";
          break;
        case 0x224u:
          result = "R_AARCH64_TLSLE_MOVW_TPREL_G0_NC";
          break;
        case 0x225u:
          result = "R_AARCH64_TLSLE_ADD_TPREL_HI12";
          break;
        case 0x226u:
          result = "R_AARCH64_TLSLE_ADD_TPREL_LO12";
          break;
        case 0x227u:
          result = "R_AARCH64_TLSLE_ADD_TPREL_LO12_NC";
          break;
        case 0x228u:
          result = "R_AARCH64_TLSLE_LDST8_TPREL_LO12";
          break;
        case 0x229u:
          result = "R_AARCH64_TLSLE_LDST8_TPREL_LO12_NC";
          break;
        case 0x22Au:
          result = "R_AARCH64_TLSLE_LDST16_TPREL_LO12";
          break;
        case 0x22Bu:
          result = "R_AARCH64_TLSLE_LDST16_TPREL_LO12_NC";
          break;
        case 0x22Cu:
          result = "R_AARCH64_TLSLE_LDST32_TPREL_LO12";
          break;
        case 0x22Du:
          result = "R_AARCH64_TLSLE_LDST32_TPREL_LO12_NC";
          break;
        case 0x22Eu:
          result = "R_AARCH64_TLSLE_LDST64_TPREL_LO12";
          break;
        case 0x22Fu:
          result = "R_AARCH64_TLSLE_LDST64_TPREL_LO12_NC";
          break;
        case 0x230u:
          result = "R_AARCH64_TLSDESC_LD_PREL19";
          break;
        case 0x231u:
          result = "R_AARCH64_TLSDESC_ADR_PREL21";
          break;
        case 0x232u:
          result = "R_AARCH64_TLSDESC_ADR_PAGE21";
          break;
        case 0x233u:
          result = "R_AARCH64_TLSDESC_LD64_LO12";
          break;
        case 0x234u:
          result = "R_AARCH64_TLSDESC_ADD_LO12";
          break;
        case 0x235u:
          result = "R_AARCH64_TLSDESC_OFF_G1";
          break;
        case 0x236u:
          result = "R_AARCH64_TLSDESC_OFF_G0_NC";
          break;
        case 0x237u:
          result = "R_AARCH64_TLSDESC_LDR";
          break;
        case 0x238u:
          result = "R_AARCH64_TLSDESC_ADD";
          break;
        case 0x239u:
          result = "R_AARCH64_TLSDESC_CALL";
          break;
        case 0x23Au:
          result = "R_AARCH64_TLSLE_LDST128_TPREL_LO12";
          break;
        case 0x23Bu:
          result = "R_AARCH64_TLSLE_LDST128_TPREL_LO12_NC";
          break;
        case 0x23Cu:
          result = "R_AARCH64_TLSLD_LDST128_DTPREL_Lo12";
          break;
        case 0x23Du:
          result = "R_AARCH64_TLSLD_LDST128_DTPREL_Lo12_NC";
          break;
        case 0x400u:
          result = "R_AARCH64_COPY";
          break;
        case 0x401u:
          result = "R_AARCH64_GLOB_DAT";
          break;
        case 0x402u:
          result = "R_AARCH64_JUMP_SLOT";
          break;
        case 0x403u:
          result = "R_AARCH64_RELATIVE";
          break;
        case 0x404u:
          result = "R_AARCH64_TLS_DTPREL64";
          break;
        case 0x405u:
          result = "R_AARCH64_TLS_DTPMOD64";
          break;
        case 0x406u:
          result = "R_AARCH64_TLS_TPREL64";
          break;
        case 0x407u:
          result = "R_AARCH64_TLSDESC";
          break;
        case 0x408u:
          result = "R_AARCH64_IRELATIVE";
          break;
        default:
          result = "Unknown";
          break;
      }
      break;
    case 241:
      result = sub_313D0(a2);
      break;
    default:
      if ( (unsigned __int16)(v4 - 28866) < 2u )
        return sub_31520(a2);
      if ( v4 == 36902 )
      {
        result = "Unknown";
        if ( a2 < 0x2A )
          result = off_136AF0[a2];
      }
      else
      {
        result = "Unknown";
      }
      break;
  }
  return result;
}
// 135390: using guessed type char *off_135390[43];
// 135440: using guessed type char *off_135440[255];
// 135840: using guessed type char *off_135840[509];
// 135C40: using guessed type char *off_135C40[253];
// 136040: using guessed type char *off_136040[534];
// 136440: using guessed type char *off_136440[278];
// 136840: using guessed type char *off_136840[22];
// 136860: using guessed type char *off_136860[14];
// 1368A0: using guessed type char *off_1368A0[125];
// 136990: using guessed type char *off_136990[65];
// 136AA0: using guessed type char *off_136AA0[19];
// 136AF0: using guessed type char *off_136AF0[42];
// 136BA0: using guessed type char *off_136BA0[142];
// 136DE0: using guessed type char *off_136DE0[246];
// 1371C0: using guessed type char *off_1371C0[22];
// 137220: using guessed type char *off_137220[37];
// 1372C0: using guessed type char *off_1372C0[187];
// 1375B0: using guessed type char *off_1375B0[43];
// 1375D0: using guessed type char *off_1375D0[35];
// 137660: using guessed type char *off_137660[31];
// 1376E0: using guessed type char *off_1376E0[13];
// 137720: using guessed type char *off_137720[149];
