__int64 __fastcall sub_14C64D0(const __m128i *a1, _DWORD *a2)
{
  unsigned __int32 v3; // r13d
  __int64 v4; // r12
  __int64 v5; // r9
  __int32 v6; // eax
  __int32 v7; // eax
  __int64 *v8; // rdi
  __int64 result; // rax
  __int32 v10; // eax
  __int64 v11; // rax
  _BYTE v12[4]; // [rsp+4h] [rbp-34h] BYREF
  _BYTE v13[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a1[1].m128i_u32[0];
  a2[40] = v3;
  v4 = *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL;
  switch ( a1[2].m128i_i16[0] )
  {
    case 0x4C:
      sub_15AE040(a2, 50, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x4D:
    case 0x4E:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x60:
    case 0x61:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8A:
    case 0x8B:
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9A:
    case 0x9C:
    case 0x9D:
    case 0x9E:
    case 0x9F:
    case 0xA2:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA7:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAB:
    case 0xAC:
    case 0xAD:
    case 0xAE:
    case 0xAF:
    case 0xB0:
    case 0xB4:
    case 0xB8:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
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
    case 0xD0:
    case 0xD1:
    case 0xD2:
    case 0xD3:
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
    case 0x13D:
    case 0x13E:
    case 0x13F:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x145:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x149:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x14E:
    case 0x14F:
    case 0x150:
    case 0x151:
    case 0x152:
    case 0x153:
    case 0x154:
    case 0x161:
    case 0x162:
    case 0x163:
    case 0x164:
    case 0x165:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16B:
    case 0x16C:
    case 0x16D:
    case 0x16E:
    case 0x16F:
    case 0x170:
    case 0x171:
    case 0x172:
    case 0x175:
    case 0x176:
    case 0x177:
    case 0x178:
    case 0x179:
    case 0x17A:
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
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18B:
    case 0x18C:
    case 0x18D:
    case 0x18E:
    case 0x18F:
    case 0x190:
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
    case 0x19F:
    case 0x1A0:
    case 0x1A2:
    case 0x1A3:
    case 0x1A4:
    case 0x1A5:
    case 0x1A6:
    case 0x1A7:
    case 0x1A9:
      v10 = sub_14A2C40((__int64)a1, a2);
      goto LABEL_12;
    case 0x4F:
      sub_15AE040(a2, 2, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x54:
      sub_15AE040(a2, 16, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x58:
      sub_15AE040(a2, 15, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x5C:
      sub_15AE040(a2, 7, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x5D:
    case 0x5E:
      sub_1482EF0((__int64)a1, a1[1].m128i_i32);
      v11 = sub_14810B0((__int64)a1);
      if ( v11 == 1 )
        sub_15AEFC0(a2);
      else
        sub_15AEFF0(a2, v3, v11 & 0xFFFFFFFFFFFFFFFELL, v13, v12, v4);
      goto LABEL_11;
    case 0x5F:
      sub_15AD1E0(a2, 2, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x62:
      sub_15AD1E0(a2, 1, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x63:
      sub_15AD2F0(a2, 1, v3, v13, v12);
      goto LABEL_10;
    case 0x6B:
      sub_15AD2F0(a2, 2, v3, v13, v12);
      goto LABEL_10;
    case 0x6C:
      sub_15AE040(a2, 1, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x7F:
      sub_15AE040(a2, 19, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x9B:
      sub_15AE040(a2, 3, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xA0:
      sub_15AE040(a2, 5, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xA1:
      sub_15AE040(a2, 6, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xA3:
    case 0x1A8:
      v10 = sub_14A27E0((__int64)a1, (__int64)a2);
      goto LABEL_12;
    case 0xB1:
      sub_15AE040(a2, 4, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xB2:
      sub_15AE040(a2, 11, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xB3:
      sub_147E630(a1, (__int64)a2);
      return sub_15B23A0(a2, a1[6].m128i_i64[0], v4);
    case 0xB5:
      sub_15AE040(a2, 12, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xB6:
      sub_15AE040(a2, 13, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xB7:
      sub_15AE0F0(a2, v3, v13, v12);
      goto LABEL_10;
    case 0xCA:
      sub_15AE040(a2, 17, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xCB:
      sub_15AE040(a2, 18, v3, v13, v12, v4);
      goto LABEL_10;
    case 0xCD:
      sub_15AE040(a2, 8, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x155:
      sub_15AE040(a2, 56, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x156:
      sub_15AE040(a2, 57, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x157:
      sub_15AE040(a2, 58, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x158:
      sub_15AE040(a2, 59, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x159:
      sub_15AE040(a2, 60, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x15A:
      sub_15AE040(a2, 61, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x15B:
      sub_15AE040(a2, 62, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x15C:
      sub_15AE040(a2, 63, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x15D:
      sub_15AE040(a2, 64, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x15E:
      sub_15AE040(a2, 65, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x15F:
      sub_15AE040(a2, 66, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x160:
      sub_15AE040(a2, 67, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x16A:
      sub_15AE040(a2, 68, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x173:
      sub_15AE040(a2, 14, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x174:
      sub_15AE040(a2, 10, v3, v13, v12, v4);
      goto LABEL_10;
    case 0x18A:
      sub_15AD1E0(a2, 3, v3, v13, v12, v4);
LABEL_10:
      sub_149F520((__int64)a1, 0);
LABEL_11:
      v10 = a1[2].m128i_i32[2];
LABEL_12:
      a2[41] = v10;
      result = sub_15B23A0(a2, a1[6].m128i_i64[0], v4);
      break;
    case 0x1A1:
      v5 = a1[1].m128i_i64[1];
      if ( v5 )
        sub_15AD370((_DWORD)a2, 28, v3, (unsigned int)v13, (unsigned int)v12, v5, v4);
      else
        sub_15AEFC0(a2);
      v6 = a1[1].m128i_i32[1];
      if ( !v6 )
        v6 = a1[1].m128i_i32[0];
      a2[41] = v6;
      v7 = a1[1].m128i_i32[1];
      v8 = (__int64 *)a1->m128i_i64[1];
      if ( !v7 )
        v7 = a1[1].m128i_i32[0];
      a1[2].m128i_i32[2] = v7;
      sub_14634E0(v8, a1[1].m128i_i32);
      result = sub_15B23A0(a2, a1[6].m128i_i64[0], v4);
      break;
  }
  return result;
}
