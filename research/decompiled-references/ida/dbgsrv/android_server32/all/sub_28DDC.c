/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28DDC
// Address: 0x00028DDC

//----- (00028DDC) --------------------------------------------------------
const char *__fastcall sub_28DDC(int a1, unsigned int a2)
{
  int v2; // r0
  const char *v3; // r2
  int v4; // r3
  const char *result; // r0
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4; // [sp+4h] [bp+4h]

  v2 = *(unsigned __int16 *)(a1 + 406);
  v3 = "Unknown";
  if ( v2 > 28923 )
  {
    if ( v2 > 29692 )
    {
      if ( (unsigned int)(v2 - 29693) >= 4 && v2 != 29947 )
      {
        if ( v2 != 36902 )
          sub_2A57C(v2, a2, (int)"Unknown", 36902, savedregs, savedregs_4);
        if ( a2 < 0x2A )
          return off_D8750[a2];
LABEL_352:
        JUMPOUT(0x29D16);
      }
    }
    else if ( (unsigned int)(v2 - 28924) >= 4 && v2 != 29162 && v2 != 29646 )
    {
      goto LABEL_352;
    }
    JUMPOUT(0x2946A);
  }
  v4 = v2 - 2;
  while ( 2 )
  {
    switch ( v4 )
    {
      case 0:
      case 16:
      case 41:
        switch ( a2 )
        {
          case 0u:
            goto LABEL_352;
          case 1u:
            return "R_SPARC_8";
          case 2u:
            return "R_SPARC_16";
          case 3u:
            return "R_SPARC_32";
          case 4u:
            return "R_SPARC_DISP8";
          case 5u:
            return "R_SPARC_DISP16";
          case 6u:
            return "R_SPARC_DISP32";
          case 7u:
            return "R_SPARC_WDISP30";
          case 8u:
            return "R_SPARC_WDISP22";
          case 9u:
            return "R_SPARC_HI22";
          case 0xAu:
            return "R_SPARC_22";
          case 0xBu:
            return "R_SPARC_13";
          case 0xCu:
            return "R_SPARC_LO10";
          case 0xDu:
            return "R_SPARC_GOT10";
          case 0xEu:
            return "R_SPARC_GOT13";
          case 0xFu:
            return "R_SPARC_GOT22";
          case 0x10u:
            return "R_SPARC_PC10";
          case 0x11u:
            return "R_SPARC_PC22";
          case 0x12u:
            return "R_SPARC_WPLT30";
          case 0x13u:
            return "R_SPARC_COPY";
          case 0x14u:
            return "R_SPARC_GLOB_DAT";
          case 0x15u:
            return "R_SPARC_JMP_SLOT";
          case 0x16u:
            return "R_SPARC_RELATIVE";
          case 0x17u:
            return "R_SPARC_UA32";
          case 0x18u:
            return "R_SPARC_PLT32";
          case 0x19u:
            return "R_SPARC_HIPLT22";
          case 0x1Au:
            return "R_SPARC_LOPLT10";
          case 0x1Bu:
            return "R_SPARC_PCPLT32";
          case 0x1Cu:
            return "R_SPARC_PCPLT22";
          case 0x1Du:
            return "R_SPARC_PCPLT10";
          case 0x1Eu:
            return "R_SPARC_10";
          case 0x1Fu:
            return "R_SPARC_11";
          case 0x20u:
            return "R_SPARC_64";
          case 0x21u:
            return "R_SPARC_OLO10";
          case 0x22u:
            return "R_SPARC_HH22";
          case 0x23u:
            return "R_SPARC_HM10";
          case 0x24u:
            return "R_SPARC_LM22";
          case 0x25u:
            return "R_SPARC_PC_HH22";
          case 0x26u:
            return "R_SPARC_PC_HM10";
          case 0x27u:
            return "R_SPARC_PC_LM22";
          case 0x28u:
            return "R_SPARC_WDISP16";
          case 0x29u:
            return "R_SPARC_WDISP19";
          case 0x2Au:
            return "R_SPARC_GLOB_JMP";
          case 0x2Bu:
            return "R_SPARC_7";
          case 0x2Cu:
            return "R_SPARC_5";
          case 0x2Du:
            return "R_SPARC_6";
          case 0x2Eu:
            return "R_SPARC_DISP64";
          case 0x2Fu:
            return "R_SPARC_PLT64";
          case 0x30u:
            return "R_SPARC_HIX22";
          case 0x31u:
            return "R_SPARC_LOX10";
          case 0x32u:
            return "R_SPARC_H44";
          case 0x33u:
            return "R_SPARC_M44";
          case 0x34u:
            return "R_SPARC_L44";
          case 0x35u:
            return "R_SPARC_REGISTER";
          case 0x36u:
            return "R_SPARC_UA64";
          case 0x37u:
            return "R_SPARC_UA16";
          case 0x38u:
            return "R_SPARC_TLS_GD_HI22";
          case 0x39u:
            return "R_SPARC_TLS_GD_LO10";
          case 0x3Au:
            return "R_SPARC_TLS_GD_ADD";
          case 0x3Bu:
            return "R_SPARC_TLS_GD_CALL";
          case 0x3Cu:
            return "R_SPARC_TLS_LDM_HI22";
          case 0x3Du:
            return "R_SPARC_TLS_LDM_LO10";
          case 0x3Eu:
            return "R_SPARC_TLS_LDM_ADD";
          case 0x3Fu:
            return "R_SPARC_TLS_LDM_CALL";
          case 0x40u:
            return "R_SPARC_TLS_LDO_HIX22";
          case 0x41u:
            return "R_SPARC_TLS_LDO_LOX10";
          case 0x42u:
            return "R_SPARC_TLS_LDO_ADD";
          case 0x43u:
            return "R_SPARC_TLS_IE_HI22";
          case 0x44u:
            return "R_SPARC_TLS_IE_LO10";
          case 0x45u:
            return "R_SPARC_TLS_IE_LD";
          case 0x46u:
            return "R_SPARC_TLS_IE_LDX";
          case 0x47u:
            return "R_SPARC_TLS_IE_ADD";
          case 0x48u:
            return "R_SPARC_TLS_LE_HIX22";
          case 0x49u:
            return "R_SPARC_TLS_LE_LOX10";
          case 0x4Au:
            return "R_SPARC_TLS_DTPMOD32";
          case 0x4Bu:
            return "R_SPARC_TLS_DTPMOD64";
          case 0x4Cu:
            return "R_SPARC_TLS_DTPOFF32";
          case 0x4Du:
            return "R_SPARC_TLS_DTPOFF64";
          case 0x4Eu:
            return "R_SPARC_TLS_TPOFF32";
          case 0x4Fu:
            return "R_SPARC_TLS_TPOFF64";
          case 0x50u:
            return "R_SPARC_GOTDATA_HIX22";
          case 0x51u:
            return "R_SPARC_GOTDATA_LOX10";
          case 0x52u:
            return "R_SPARC_GOTDATA_OP_HIX22";
          case 0x53u:
            return "R_SPARC_GOTDATA_OP_LOX10";
          case 0x54u:
            return "R_SPARC_GOTDATA_OP";
          case 0x55u:
            return "R_SPARC_H34";
          case 0x56u:
            return "R_SPARC_SIZE32";
          case 0x57u:
            return "R_SPARC_SIZE64";
          case 0x58u:
            return "R_SPARC_WDISP10";
          case 0xF8u:
            return "R_SPARC_JMP_IREL";
          case 0xF9u:
            return "R_SPARC_IRELATIVE";
          case 0xFAu:
            return "R_SPARC_GNU_VTINHERIT";
          case 0xFBu:
            return "R_SPARC_GNU_VTENTRY";
          case 0xFCu:
            return "R_SPARC_REV32";
          default:
            return v3;
        }
      case 1:
        JUMPOUT(0x2949E);
      case 2:
        JUMPOUT(0x296EA);
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
        goto LABEL_352;
      case 6:
        JUMPOUT(0x29700);
      case 13:
        JUMPOUT(0x29716);
      case 17:
        JUMPOUT(0x2972C);
      case 18:
        JUMPOUT(0x29742);
      case 19:
        JUMPOUT(0x29758);
      case 20:
        JUMPOUT(0x2976E);
      case 34:
        JUMPOUT(0x299A2);
      case 38:
        JUMPOUT(0x299AA);
      case 40:
        JUMPOUT(0x299BE);
      case 42:
        JUMPOUT(0x299D2);
      case 43:
        JUMPOUT(0x299E6);
      case 44:
      case 45:
      case 46:
        if ( a2 >= 0x8E )
          goto LABEL_352;
        result = off_D8800[a2];
        break;
      case 48:
        JUMPOUT(0x299FA);
      case 51:
        JUMPOUT(0x29A0E);
      case 60:
        JUMPOUT(0x29A22);
      case 65:
        JUMPOUT(0x29C56);
      case 81:
        JUMPOUT(0x29C68);
      case 82:
        JUMPOUT(0x29C7A);
      case 85:
        JUMPOUT(0x29C8C);
      case 86:
        JUMPOUT(0x29C94);
      case 87:
        JUMPOUT(0x29CA6);
      case 88:
        JUMPOUT(0x29CB8);
      case 91:
      case 193:
        JUMPOUT(0x29472);
      case 92:
        JUMPOUT(0x29CCA);
      case 115:
      case 118:
        JUMPOUT(0x29488);
      case 165:
        JUMPOUT(0x29CD2);
      case 171:
        JUMPOUT(0x29CDA);
      case 181:
        switch ( a2 )
        {
          case 0u:
            goto LABEL_352;
          case 1u:
            return "R_AARCH64_P32_ABS32";
          case 2u:
            return "R_AARCH64_P32_ABS16";
          case 3u:
            return "R_AARCH64_P32_PREL32";
          case 4u:
            return "R_AARCH64_P32_PREL16";
          case 5u:
            return "R_AARCH64_P32_MOVW_UABS_G0";
          case 6u:
            return "R_AARCH64_P32_MOVW_UABS_G0_NC";
          case 7u:
            return "R_AARCH64_P32_MOVW_UABS_G1";
          case 8u:
            return "R_AARCH64_P32_MOVW_SABS_G0";
          case 9u:
            return "R_AARCH64_P32_LD_PREL_LO19";
          case 0xAu:
            return "R_AARCH64_P32_ADR_PREL_LO21";
          case 0xBu:
            return "R_AARCH64_P32_ADR_PREL_PG_HI21";
          case 0xCu:
            return "R_AARCH64_P32_ADD_ABS_LO12_NC";
          case 0xDu:
            return "R_AARCH64_P32_LDST8_ABS_LO12_NC";
          case 0xEu:
            return "R_AARCH64_P32_LDST16_ABS_LO12_NC";
          case 0xFu:
            return "R_AARCH64_P32_LDST32_ABS_LO12_NC";
          case 0x10u:
            return "R_AARCH64_P32_LDST64_ABS_LO12_NC";
          case 0x11u:
            return "R_AARCH64_P32_LDST128_ABS_LO12_NC";
          case 0x12u:
            return "R_AARCH64_P32_TSTBR14";
          case 0x13u:
            return "R_AARCH64_P32_CONDBR19";
          case 0x14u:
            return "R_AARCH64_P32_JUMP26";
          case 0x15u:
            return "R_AARCH64_P32_CALL26";
          case 0x16u:
            return "R_AARCH64_P32_MOVW_PREL_G0";
          case 0x17u:
            return "R_AARCH64_P32_MOVW_PREL_G0_NC";
          case 0x18u:
            return "R_AARCH64_P32_MOVW_PREL_G1";
          case 0x19u:
            return "R_AARCH64_P32_GOT_LD_PREL19";
          case 0x1Au:
            return "R_AARCH64_P32_ADR_GOT_PAGE";
          case 0x1Bu:
            return "R_AARCH64_P32_LD32_GOT_LO12_NC";
          case 0x1Cu:
            return "R_AARCH64_P32_LD32_GOTPAGE_LO14";
          case 0x1Du:
            return "R_AARCH64_P32_PLT32";
          case 0x50u:
            return "R_AARCH64_P32_TLSGD_ADR_PREL21";
          case 0x51u:
            return "R_AARCH64_P32_TLSGD_ADR_PAGE21";
          case 0x52u:
            return "R_AARCH64_P32_TLSGD_ADD_LO12_NC";
          case 0x53u:
            return "R_AARCH64_P32_TLSLD_ADR_PREL21";
          case 0x54u:
            return "R_AARCH64_P32_TLSLD_ADR_PAGE21";
          case 0x55u:
            return "R_AARCH64_P32_TLSLD_ADD_LO12_NC";
          case 0x56u:
            return "R_AARCH64_P32_TLSLD_LD_PREL19";
          case 0x57u:
            return "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G1";
          case 0x58u:
            return "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G0";
          case 0x59u:
            return "R_AARCH64_P32_TLSLD_MOVW_DTPREL_G0_NC";
          case 0x5Au:
            return "R_AARCH64_P32_TLSLD_ADD_DTPREL_HI12";
          case 0x5Bu:
            return "R_AARCH64_P32_TLSLD_ADD_DTPREL_LO12";
          case 0x5Cu:
            return "R_AARCH64_P32_TLSLD_ADD_DTPREL_LO12_NC";
          case 0x5Du:
            return "R_AARCH64_P32_TLSLD_LDST8_DTPREL_LO12";
          case 0x5Eu:
            return "R_AARCH64_P32_TLSLD_LDST8_DTPREL_LO12_NC";
          case 0x5Fu:
            return "R_AARCH64_P32_TLSLD_LDST16_DTPREL_LO12";
          case 0x60u:
            return "R_AARCH64_P32_TLSLD_LDST16_DTPREL_LO12_NC";
          case 0x61u:
            return "R_AARCH64_P32_TLSLD_LDST32_DTPREL_LO12";
          case 0x62u:
            return "R_AARCH64_P32_TLSLD_LDST32_DTPREL_LO12_NC";
          case 0x63u:
            return "R_AARCH64_P32_TLSLD_LDST64_DTPREL_LO12";
          case 0x64u:
            return "R_AARCH64_P32_TLSLD_LDST64_DTPREL_LO12_NC";
          case 0x65u:
            return "R_AARCH64_P32_TLSLD_LDST128_DTPREL_LO12";
          case 0x66u:
            return "R_AARCH64_P32_TLSLD_LDST128_DTPREL_LO12_NC";
          case 0x67u:
            return "R_AARCH64_P32_TLSIE_ADR_GOTTPREL_PAGE21";
          case 0x68u:
            return "R_AARCH64_P32_TLSIE_LD32_GOTTPREL_LO12_NC";
          case 0x69u:
            return "R_AARCH64_P32_TLSIE_LD_GOTTPREL_PREL19";
          case 0x6Au:
            return "R_AARCH64_P32_TLSLE_MOVW_TPREL_G1";
          case 0x6Bu:
            return "R_AARCH64_P32_TLSLE_MOVW_TPREL_G0";
          case 0x6Cu:
            return "R_AARCH64_P32_TLSLE_MOVW_TPREL_G0_NC";
          case 0x6Du:
            return "R_AARCH64_P32_TLSLE_ADD_TPREL_HI12";
          case 0x6Eu:
            return "R_AARCH64_P32_TLSLE_ADD_TPREL_LO12";
          case 0x6Fu:
            return "R_AARCH64_P32_TLSLE_ADD_TPREL_LO12_NC";
          case 0x70u:
            return "R_AARCH64_P32_TLSLE_LDST8_TPREL_LO12";
          case 0x71u:
            return "R_AARCH64_P32_TLSLE_LDST8_TPREL_LO12_NC";
          case 0x72u:
            return "R_AARCH64_P32_TLSLE_LDST16_TPREL_LO12";
          case 0x73u:
            return "R_AARCH64_P32_TLSLE_LDST16_TPREL_LO12_NC";
          case 0x74u:
            return "R_AARCH64_P32_TLSLE_LDST32_TPREL_LO12";
          case 0x75u:
            return "R_AARCH64_P32_TLSLE_LDST32_TPREL_LO12_NC";
          case 0x76u:
            return "R_AARCH64_P32_TLSLE_LDST64_TPREL_LO12";
          case 0x77u:
            return "R_AARCH64_P32_TLSLE_LDST64_TPREL_LO12_NC";
          case 0x78u:
            return "R_AARCH64_P32_TLSLE_LDST128_TPREL_LO12";
          case 0x79u:
            return "R_AARCH64_P32_TLSLE_LDST128_TPREL_LO12_NC";
          case 0x7Au:
            return "R_AARCH64_P32_TLSDESC_LD_PREL19";
          case 0x7Bu:
            return "R_AARCH64_P32_TLSDESC_ADR_PREL21";
          case 0x7Cu:
            return "R_AARCH64_P32_TLSDESC_ADR_PAGE21";
          case 0x7Du:
            return "R_AARCH64_P32_TLSDESC_LD32_LO12";
          case 0x7Eu:
            return "R_AARCH64_P32_TLSDESC_ADD_LO12";
          case 0x7Fu:
            return "R_AARCH64_P32_TLSDESC_CALL";
          case 0xB4u:
            return "R_AARCH64_P32_COPY";
          case 0xB5u:
            return "R_AARCH64_P32_GLOB_DAT";
          case 0xB6u:
            return "R_AARCH64_P32_JUMP_SLOT";
          case 0xB7u:
            return "R_AARCH64_P32_RELATIVE";
          case 0xB8u:
            return "R_AARCH64_P32_TLS_DTPMOD";
          case 0xB9u:
            return "R_AARCH64_P32_TLS_DTPREL";
          case 0xBAu:
            return "R_AARCH64_P32_TLS_TPREL";
          case 0xBBu:
            return "R_AARCH64_P32_TLSDESC";
          case 0xBCu:
            return "R_AARCH64_P32_IRELATIVE";
          case 0x100u:
            return "R_AARCH64_NONE";
          case 0x101u:
            return "R_AARCH64_ABS64";
          case 0x102u:
            return "R_AARCH64_ABS32";
          case 0x103u:
            return "R_AARCH64_ABS16";
          case 0x104u:
            return "R_AARCH64_PREL64";
          case 0x105u:
            return "R_AARCH64_PREL32";
          case 0x106u:
            return "R_AARCH64_PREL16";
          case 0x107u:
            return "R_AARCH64_MOVW_UABS_G0";
          case 0x108u:
            return "R_AARCH64_MOVW_UABS_G0_NC";
          case 0x109u:
            return "R_AARCH64_MOVW_UABS_G1";
          case 0x10Au:
            return "R_AARCH64_MOVW_UABS_G1_NC";
          case 0x10Bu:
            return "R_AARCH64_MOVW_UABS_G2";
          case 0x10Cu:
            return "R_AARCH64_MOVW_UABS_G2_NC";
          case 0x10Du:
            return "R_AARCH64_MOVW_UABS_G3";
          case 0x10Eu:
            return "R_AARCH64_MOVW_SABS_G0";
          case 0x10Fu:
            return "R_AARCH64_MOVW_SABS_G1";
          case 0x110u:
            return "R_AARCH64_MOVW_SABS_G2";
          case 0x111u:
            return "R_AARCH64_LD_PREL_LO19";
          case 0x112u:
            return "R_AARCH64_ADR_PREL_LO21";
          case 0x113u:
            return "R_AARCH64_ADR_PREL_PG_HI21";
          case 0x114u:
            return "R_AARCH64_ADR_PREL_PG_HI21_NC";
          case 0x115u:
            return "R_AARCH64_ADD_ABS_LO12_NC";
          case 0x116u:
            return "R_AARCH64_LDST8_ABS_LO12_NC";
          case 0x117u:
            return "R_AARCH64_TSTBR14";
          case 0x118u:
            return "R_AARCH64_CONDBR19";
          case 0x11Au:
            return "R_AARCH64_JUMP26";
          case 0x11Bu:
            return "R_AARCH64_CALL26";
          case 0x11Cu:
            return "R_AARCH64_LDST16_ABS_LO12_NC";
          case 0x11Du:
            return "R_AARCH64_LDST32_ABS_LO12_NC";
          case 0x11Eu:
            return "R_AARCH64_LDST64_ABS_LO12_NC";
          case 0x11Fu:
            return "R_AARCH64_MOVW_PREL_G0";
          case 0x120u:
            return "R_AARCH64_MOVW_PREL_G0_NC";
          case 0x121u:
            return "R_AARCH64_MOVW_PREL_G1";
          case 0x122u:
            return "R_AARCH64_MOVW_PREL_G1_NC";
          case 0x123u:
            return "R_AARCH64_MOVW_PREL_G2";
          case 0x124u:
            return "R_AARCH64_MOVW_PREL_G2_NC";
          case 0x125u:
            return "R_AARCH64_MOVW_PREL_G3";
          case 0x12Bu:
            return "R_AARCH64_LDST128_ABS_LO12_NC";
          case 0x12Cu:
            return "R_AARCH64_MOVW_GOTOFF_G0";
          case 0x12Du:
            return "R_AARCH64_MOVW_GOTOFF_G0_NC";
          case 0x12Eu:
            return "R_AARCH64_MOVW_GOTOFF_G1";
          case 0x12Fu:
            return "R_AARCH64_MOVW_GOTOFF_G1_NC";
          case 0x130u:
            return "R_AARCH64_MOVW_GOTOFF_G2";
          case 0x131u:
            return "R_AARCH64_MOVW_GOTOFF_G2_NC";
          case 0x132u:
            return "R_AARCH64_MOVW_GOTOFF_G3";
          case 0x133u:
            return "R_AARCH64_GOTREL64";
          case 0x134u:
            return "R_AARCH64_GOTREL32";
          case 0x135u:
            return "R_AARCH64_GOT_LD_PREL19";
          case 0x136u:
            return "R_AARCH64_LD64_GOTOFF_LO15";
          case 0x137u:
            return "R_AARCH64_ADR_GOT_PAGE";
          case 0x138u:
            return "R_AARCH64_LD64_GOT_LO12_NC";
          case 0x139u:
            return "R_AARCH64_LD64_GOTPAGE_LO15";
          case 0x200u:
            return "R_AARCH64_TLSGD_ADR_PREL21";
          case 0x201u:
            return "R_AARCH64_TLSGD_ADR_PAGE21";
          case 0x202u:
            return "R_AARCH64_TLSGD_ADD_LO12_NC";
          case 0x203u:
            return "R_AARCH64_TLSGD_MOVW_G1";
          case 0x204u:
            return "R_AARCH64_TLSGD_MOVW_G0_NC";
          case 0x205u:
            return "R_AARCH64_TLSLD_ADR_PREL21";
          case 0x206u:
            return "R_AARCH64_TLSLD_ADR_PAGE21";
          case 0x207u:
            return "R_AARCH64_TLSLD_ADD_LO12_NC";
          case 0x208u:
            return "R_AARCH64_TLSLD_MOVW_G1";
          case 0x209u:
            return "R_AARCH64_TLSLD_MOVW_G0_NC";
          case 0x20Au:
            return "R_AARCH64_TLSLD_LD_PREL19";
          case 0x20Bu:
            return "R_AARCH64_TLSLD_MOVW_DTPREL_G2";
          case 0x20Cu:
            return "R_AARCH64_TLSLD_MOVW_DTPREL_G1";
          case 0x20Du:
            return "R_AARCH64_TLSLD_MOVW_DTPREL_G1_NC";
          case 0x20Eu:
            return "R_AARCH64_TLSLD_MOVW_DTPREL_G0";
          case 0x20Fu:
            return "R_AARCH64_TLSLD_MOVW_DTPREL_G0_NC";
          case 0x210u:
            return "R_AARCH64_TLSLD_ADD_DTPREL_HI12";
          case 0x211u:
            return "R_AARCH64_TLSLD_ADD_DTPREL_LO12";
          case 0x212u:
            return "R_AARCH64_TLSLD_ADD_DTPREL_LO12_NC";
          case 0x213u:
            return "R_AARCH64_TLSLD_LDST8_DTPREL_LO12";
          case 0x214u:
            return "R_AARCH64_TLSLD_LDST8_DTPREL_LO12_NC";
          case 0x215u:
            return "R_AARCH64_TLSLD_LDST16_DTPREL_LO12";
          case 0x216u:
            return "R_AARCH64_TLSLD_LDST16_DTPREL_LO12_NC";
          case 0x217u:
            return "R_AARCH64_TLSLD_LDST32_DTPREL_LO12";
          case 0x218u:
            return "R_AARCH64_TLSLD_LDST32_DTPREL_LO12_NC";
          case 0x219u:
            return "R_AARCH64_TLSLD_LDST64_DTPREL_LO12";
          case 0x21Au:
            return "R_AARCH64_TLSLD_LDST64_DTPREL_LO12_NC";
          case 0x21Bu:
            return "R_AARCH64_TLSIE_MOVW_GOTTPREL_G1";
          case 0x21Cu:
            return "R_AARCH64_TLSIE_MOVW_GOTTPREL_G0_NC";
          case 0x21Du:
            return "R_AARCH64_TLSIE_ADR_GOTTPREL_PAGE21";
          case 0x21Eu:
            return "R_AARCH64_TLSIE_LD64_GOTTPREL_LO12_NC";
          case 0x21Fu:
            return "R_AARCH64_TLSIE_LD_GOTTPREL_PREL19";
          case 0x220u:
            return "R_AARCH64_TLSLE_MOVW_TPREL_G2";
          case 0x221u:
            return "R_AARCH64_TLSLE_MOVW_TPREL_G1";
          case 0x222u:
            return "R_AARCH64_TLSLE_MOVW_TPREL_G1_NC";
          case 0x223u:
            return "R_AARCH64_TLSLE_MOVW_TPREL_G0";
          case 0x224u:
            return "R_AARCH64_TLSLE_MOVW_TPREL_G0_NC";
          case 0x225u:
            return "R_AARCH64_TLSLE_ADD_TPREL_HI12";
          case 0x226u:
            return "R_AARCH64_TLSLE_ADD_TPREL_LO12";
          case 0x227u:
            return "R_AARCH64_TLSLE_ADD_TPREL_LO12_NC";
          case 0x228u:
            return "R_AARCH64_TLSLE_LDST8_TPREL_LO12";
          case 0x229u:
            return "R_AARCH64_TLSLE_LDST8_TPREL_LO12_NC";
          case 0x22Au:
            return "R_AARCH64_TLSLE_LDST16_TPREL_LO12";
          case 0x22Bu:
            return "R_AARCH64_TLSLE_LDST16_TPREL_LO12_NC";
          case 0x22Cu:
            return "R_AARCH64_TLSLE_LDST32_TPREL_LO12";
          case 0x22Du:
            return "R_AARCH64_TLSLE_LDST32_TPREL_LO12_NC";
          case 0x22Eu:
            return "R_AARCH64_TLSLE_LDST64_TPREL_LO12";
          case 0x22Fu:
            return "R_AARCH64_TLSLE_LDST64_TPREL_LO12_NC";
          case 0x230u:
            return "R_AARCH64_TLSDESC_LD_PREL19";
          case 0x231u:
            return "R_AARCH64_TLSDESC_ADR_PREL21";
          case 0x232u:
            return "R_AARCH64_TLSDESC_ADR_PAGE21";
          case 0x233u:
            return "R_AARCH64_TLSDESC_LD64_LO12";
          case 0x234u:
            return "R_AARCH64_TLSDESC_ADD_LO12";
          case 0x235u:
            return "R_AARCH64_TLSDESC_OFF_G1";
          case 0x236u:
            return "R_AARCH64_TLSDESC_OFF_G0_NC";
          case 0x237u:
            return "R_AARCH64_TLSDESC_LDR";
          case 0x238u:
            return "R_AARCH64_TLSDESC_ADD";
          case 0x239u:
            return "R_AARCH64_TLSDESC_CALL";
          case 0x23Au:
            return "R_AARCH64_TLSLE_LDST128_TPREL_LO12";
          case 0x23Bu:
            return "R_AARCH64_TLSLE_LDST128_TPREL_LO12_NC";
          case 0x23Cu:
            return "R_AARCH64_TLSLD_LDST128_DTPREL_Lo12";
          case 0x23Du:
            return "R_AARCH64_TLSLD_LDST128_DTPREL_Lo12_NC";
          case 0x400u:
            return "R_AARCH64_COPY";
          case 0x401u:
            return "R_AARCH64_GLOB_DAT";
          case 0x402u:
            return "R_AARCH64_JUMP_SLOT";
          case 0x403u:
            return "R_AARCH64_RELATIVE";
          case 0x404u:
            return "R_AARCH64_TLS_DTPREL64";
          case 0x405u:
            return "R_AARCH64_TLS_DTPMOD64";
          case 0x406u:
            return "R_AARCH64_TLS_TPREL64";
          case 0x407u:
            return "R_AARCH64_TLSDESC";
          case 0x408u:
            return "R_AARCH64_IRELATIVE";
          default:
            return v3;
        }
      case 241:
        return sub_28CCC(a2);
      default:
        sub_2945A(v2, a2, (int)v3, v4, savedregs, savedregs_4);
        continue;
    }
    return result;
  }
}
// 28E04: control flows out of bounds to 29472
// 28E04: control flows out of bounds to 29488
// 28E04: control flows out of bounds to 2949E
// 28E04: control flows out of bounds to 296EA
// 28E04: control flows out of bounds to 29700
// 28E04: control flows out of bounds to 29716
// 28E04: control flows out of bounds to 2972C
// 28E04: control flows out of bounds to 29742
// 28E04: control flows out of bounds to 29758
// 28E04: control flows out of bounds to 2976E
// 28E04: control flows out of bounds to 299A2
// 28E04: control flows out of bounds to 299AA
// 28E04: control flows out of bounds to 299BE
// 28E04: control flows out of bounds to 299D2
// 28E04: control flows out of bounds to 299E6
// 28E04: control flows out of bounds to 299FA
// 28E04: control flows out of bounds to 29A0E
// 28E04: control flows out of bounds to 29A22
// 28E04: control flows out of bounds to 29C56
// 28E04: control flows out of bounds to 29C68
// 28E04: control flows out of bounds to 29C7A
// 28E04: control flows out of bounds to 29C8C
// 28E04: control flows out of bounds to 29C94
// 28E04: control flows out of bounds to 29CA6
// 28E04: control flows out of bounds to 29CB8
// 28E04: control flows out of bounds to 29CCA
// 28E04: control flows out of bounds to 29CD2
// 28E04: control flows out of bounds to 29CDA
// 28E04: control flows out of bounds to 29D16
// 29400: control flows out of bounds to 2946A
// 28E04: variable 'v4' is possibly undefined
// 291EC: variable 'a2' is possibly undefined
// 2942A: variable 'savedregs' is possibly undefined
// 2942A: variable 'savedregs_4' is possibly undefined
// 2A7AC: variable 'v3' is possibly undefined
// 28DF6: variable 'v2' is possibly undefined
// D8750: using guessed type char *off_D8750[42];
// D8800: using guessed type char *off_D8800[142];
