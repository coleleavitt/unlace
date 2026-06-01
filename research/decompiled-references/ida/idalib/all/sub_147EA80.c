char __fastcall sub_147EA80(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  char v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int16 v16; // dx
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v28; // [rsp-18h] [rbp-18h]
  __int64 v29; // [rsp-8h] [rbp-8h]

  while ( 2 )
  {
    v29 = v4;
    v5 = a3;
    v28 = v3;
    v6 = a1;
    switch ( *(_WORD *)(a1 + 32) )
    {
      case 5:
        v9 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(*(_QWORD *)(v9 + 56) + 2LL) & 4) != 0 )
        {
          v10 = *(_QWORD *)(v9 + 2944);
          v11 = *(unsigned int *)(v9 + 2912) <= v10 ? sub_14180A0(v9, 1u) : *(_QWORD *)(v9 + 2904) + 24 * v10;
          if ( *(_WORD *)(v11 + 16) == 26 )
            goto LABEL_6;
        }
        if ( (unsigned __int8)sub_147EA30(v6) )
          goto LABEL_3;
        goto LABEL_12;
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x55:
      case 0x59:
      case 0x5A:
      case 0x5B:
      case 0x61:
      case 0x64:
      case 0x65:
      case 0x68:
      case 0x6E:
      case 0x70:
      case 0x74:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7D:
      case 0x7E:
      case 0x80:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x86:
      case 0x87:
      case 0x89:
      case 0x8A:
      case 0x8B:
      case 0x8C:
      case 0x8E:
      case 0x8F:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x98:
      case 0x99:
      case 0x9F:
      case 0xA4:
      case 0xA5:
      case 0xA8:
      case 0xA9:
      case 0xAA:
      case 0xAB:
      case 0xAC:
      case 0xAF:
      case 0xB0:
      case 0xBB:
      case 0xBC:
      case 0xBE:
      case 0xBF:
      case 0xC0:
      case 0xC1:
      case 0xC2:
      case 0xC3:
      case 0xC4:
      case 0xC5:
      case 0xC6:
      case 0xC7:
      case 0xC8:
      case 0xC9:
      case 0xCC:
      case 0xCE:
      case 0xCF:
      case 0xD1:
      case 0xD2:
      case 0xD4:
      case 0xD5:
      case 0xD6:
      case 0xD7:
      case 0xD8:
      case 0xD9:
      case 0xDA:
      case 0xDB:
      case 0xDC:
      case 0xDD:
      case 0xDE:
      case 0xDF:
      case 0xE0:
      case 0xE1:
      case 0xE2:
      case 0xE3:
      case 0xE4:
      case 0xE5:
      case 0xE6:
      case 0xE7:
      case 0xE8:
      case 0xE9:
      case 0xEA:
      case 0xEB:
      case 0xEC:
      case 0xED:
      case 0xEE:
      case 0xEF:
      case 0xF0:
      case 0xF1:
      case 0xF2:
      case 0xF3:
      case 0xF4:
      case 0xF5:
      case 0xF6:
      case 0xF7:
      case 0xF8:
      case 0xF9:
      case 0xFA:
      case 0xFB:
      case 0xFC:
      case 0xFD:
      case 0xFE:
      case 0xFF:
      case 0x100:
      case 0x101:
      case 0x102:
      case 0x103:
      case 0x104:
      case 0x105:
      case 0x106:
      case 0x107:
      case 0x108:
      case 0x109:
      case 0x10A:
      case 0x10B:
      case 0x10C:
      case 0x10D:
      case 0x10E:
      case 0x10F:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x117:
      case 0x118:
      case 0x119:
      case 0x11A:
      case 0x11B:
      case 0x11C:
      case 0x11D:
      case 0x11E:
      case 0x11F:
      case 0x120:
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
      case 0x128:
      case 0x129:
      case 0x12A:
      case 0x12B:
      case 0x12C:
      case 0x12D:
      case 0x12E:
      case 0x12F:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x13A:
      case 0x13B:
      case 0x13C:
      case 0x13F:
      case 0x149:
      case 0x14F:
      case 0x153:
      case 0x154:
      case 0x162:
      case 0x163:
      case 0x164:
      case 0x165:
      case 0x167:
      case 0x168:
      case 0x169:
      case 0x16B:
      case 0x16C:
      case 0x16D:
      case 0x16E:
      case 0x171:
      case 0x172:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17A:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18B:
      case 0x18C:
      case 0x18D:
      case 0x18E:
      case 0x18F:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x194:
      case 0x195:
      case 0x196:
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19A:
      case 0x19B:
      case 0x19C:
      case 0x19D:
      case 0x19E:
      case 0x1A3:
      case 0x1A4:
      case 0x1A5:
      case 0x1A6:
      case 0x1A7:
        goto LABEL_6;
      case 0x2F:
        LOBYTE(v7) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 4) != 0;
        return v7;
      case 0x48:
        v17 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(*(_QWORD *)(v17 + 56) + 1LL) & 8) == 0 )
          goto LABEL_6;
        v18 = *(_QWORD *)(v17 + 2944);
        if ( v18 < *(unsigned int *)(v17 + 2912) )
        {
          v19 = 24 * v18;
          if ( *(_WORD *)(*(_QWORD *)(v17 + 2904) + v19 + 16) == 139 )
            goto LABEL_6;
          goto LABEL_31;
        }
        if ( *(_WORD *)(sub_14180A0(v17, 1u) + 16) == 139 )
        {
LABEL_6:
          LOBYTE(v7) = 0;
          return v7;
        }
        v17 = *(_QWORD *)(v6 + 8);
        v25 = *(_QWORD *)(v17 + 2944);
        if ( v25 < *(unsigned int *)(v17 + 2912) )
        {
          v19 = 24 * v25;
LABEL_31:
          v20 = *(_QWORD *)(v17 + 2904) + v19;
          goto LABEL_32;
        }
        v20 = sub_14180A0(v17, 1u);
LABEL_32:
        if ( *(_WORD *)(v20 + 16) == 131 )
          goto LABEL_6;
        if ( (unsigned __int8)sub_1565E90(v6, 0) )
          goto LABEL_3;
        a3 = 0;
        a2 = 0;
LABEL_18:
        a1 = v6;
        v3 = v28;
        v4 = v29;
        continue;
      case 0x4C:
      case 0x4F:
      case 0x50:
      case 0x54:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x62:
      case 0x63:
      case 0x66:
      case 0x67:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x6D:
      case 0x6F:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x7C:
      case 0x7F:
      case 0x81:
      case 0x85:
      case 0x88:
      case 0x9A:
      case 0x9B:
      case 0x9C:
      case 0x9D:
      case 0xA0:
      case 0xA1:
      case 0xA2:
      case 0xA6:
      case 0xA7:
      case 0xAD:
      case 0xAE:
      case 0xB1:
      case 0xB2:
      case 0xB3:
      case 0xB4:
      case 0xB5:
      case 0xB6:
      case 0xB7:
      case 0xB8:
      case 0xB9:
      case 0xBA:
      case 0xBD:
      case 0xCA:
      case 0xCB:
      case 0xCD:
      case 0xD0:
      case 0xD3:
      case 0x13D:
      case 0x13E:
      case 0x140:
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x144:
      case 0x145:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x14A:
      case 0x14B:
      case 0x14C:
      case 0x14D:
      case 0x14E:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15A:
      case 0x15B:
      case 0x15C:
      case 0x15D:
      case 0x15E:
      case 0x15F:
      case 0x160:
      case 0x166:
      case 0x16A:
      case 0x16F:
      case 0x170:
      case 0x173:
      case 0x174:
      case 0x17B:
      case 0x17C:
      case 0x17D:
      case 0x17E:
      case 0x17F:
      case 0x180:
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x18A:
      case 0x190:
      case 0x19F:
      case 0x1A8:
      case 0x1A9:
        goto LABEL_3;
      case 0x8D:
        LOBYTE(v7) = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 47LL) & 0x20) != 0;
        return v7;
      case 0x97:
      case 0xA3:
LABEL_12:
        if ( (unsigned __int8)sub_1565E90(v6, a2) || (unsigned __int8)sub_15570E0(v6) )
          goto LABEL_3;
        if ( *(_WORD *)(v6 + 32) == 5 || v5 && (unsigned __int8)sub_14F77D0(v6) )
          goto LABEL_6;
        a3 = 0;
        goto LABEL_18;
      case 0x9E:
        LOBYTE(v7) = (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 8) != 0;
        return v7;
      case 0x161:
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
        if ( (*(_BYTE *)(v8 + 47) & 0x20) == 0 )
          goto LABEL_6;
        LOBYTE(v7) = (unsigned int)sub_FEAA90(v8) > 0xC7;
        return v7;
      case 0x1A0:
        v12 = *(_QWORD *)(a1 + 8);
        v13 = *(_QWORD *)(v12 + 2944);
        if ( v13 >= *(unsigned int *)(v12 + 2912) )
        {
          v22 = sub_14180A0(v12, 1u);
          v12 = *(_QWORD *)(v6 + 8);
          if ( *(_WORD *)(v22 + 16) != 418 )
            goto LABEL_50;
          v23 = *(_QWORD *)(v12 + 2944);
          if ( v23 < *(unsigned int *)(v12 + 2912) )
            v14 = *(_QWORD *)(v12 + 2904) + 24 * v23;
          else
            v14 = sub_14180A0(v12, 1u);
        }
        else
        {
          v14 = *(_QWORD *)(v12 + 2904) + 24 * v13;
          if ( *(_WORD *)(v14 + 16) != 418 )
          {
LABEL_21:
            v15 = *(_QWORD *)(v12 + 2904) + 24 * v13;
            goto LABEL_22;
          }
        }
        v24 = sub_1565590(v6, v14);
        if ( v24 && !*(_DWORD *)(v24 + 32) )
          goto LABEL_3;
        v12 = *(_QWORD *)(v6 + 8);
LABEL_50:
        v13 = *(_QWORD *)(v12 + 2944);
        if ( v13 < *(unsigned int *)(v12 + 2912) )
          goto LABEL_21;
        v15 = sub_14180A0(v12, 1u);
LABEL_22:
        if ( *(_WORD *)(v15 + 16) == 5 && (unsigned __int8)sub_15570E0(v6) )
          goto LABEL_3;
        if ( !(unsigned __int8)sub_154E540(v6) )
          goto LABEL_6;
        v16 = *(_WORD *)(v6 + 32);
        if ( v16 != 1 )
          v16 = *(_WORD *)(sub_1479960(*(_QWORD *)(v6 + 8), 1u) + 16);
        LOBYTE(v7) = v16 == 163 || v16 == 76;
        return v7;
      case 0x1A1:
        if ( !a3 )
          goto LABEL_3;
        LODWORD(v7) = sub_14F77D0(a1) ^ 1;
        return v7;
      case 0x1A2:
        if ( !*(_DWORD *)(sub_1565590(a1, a1 + 16) + 32) )
          goto LABEL_3;
        if ( !(unsigned __int8)sub_154E540(a1) )
          goto LABEL_6;
        v21 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(v21 + 2944);
        if ( v7 >= *(unsigned int *)(v21 + 2912) )
        {
          if ( *(_WORD *)(sub_14180A0(v21, 1u) + 16) == 76 )
          {
LABEL_3:
            LOBYTE(v7) = 1;
            return v7;
          }
          v26 = *(_QWORD *)(v6 + 8);
          v7 = *(_QWORD *)(v26 + 2944);
          if ( v7 < *(unsigned int *)(v26 + 2912) )
            LOWORD(v7) = *(_WORD *)(*(_QWORD *)(v26 + 2904) + 24 * v7 + 16);
          else
            LOWORD(v7) = *(_WORD *)(sub_14180A0(v26, 1u) + 16);
        }
        else
        {
          LOWORD(v7) = *(_WORD *)(*(_QWORD *)(v21 + 2904) + 24 * v7 + 16);
          if ( (_WORD)v7 == 76 )
            goto LABEL_3;
        }
        LOBYTE(v7) = (_WORD)v7 == 163;
        return v7;
      default:
        LOBYTE(v7) = 0;
        return v7;
    }
  }
}
