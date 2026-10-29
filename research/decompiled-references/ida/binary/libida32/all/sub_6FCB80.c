__int64 __fastcall sub_6FCB80(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 *v14; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 *v21; // r12
  __int64 *v22; // r13
  __int64 *v23; // r12
  __int64 *v24; // r13
  __int64 *v25; // r12
  __int64 *v26; // r13
  __int64 *v27; // r12
  __int64 *v28; // r13
  __int64 *v29; // r12
  __int64 *v30; // r13
  __int64 *v31; // r12
  __int64 *v32; // r13
  __int64 *v33; // r12
  __int64 *v34; // r13
  __int64 *v35; // r12
  __int64 *v36; // r13
  __int64 *v37; // r12
  __int64 *v38; // r13
  __int64 *v39; // r12
  __int64 *v40; // r13
  __int64 *v41; // r12
  __int64 *v42; // rbx
  __int64 *v43; // r12
  __int64 *v44; // rbx
  __int64 *v45; // r12
  __int64 *v46; // rbx
  __int64 *v47; // r12
  __int64 *v48; // rbx
  __int64 *v49; // r12
  __int64 *v50; // rbx
  __int64 *v51; // r12
  __int64 *v52; // rbx
  __int64 *v53; // r12
  __int64 *v54; // rbx
  __int64 *v55; // r12
  __int64 *v56; // rbx
  __int64 *v57; // r12
  __int64 *v58; // rbx
  __int64 *v59; // r12
  __int64 *v60; // rbx

  if ( !a2 )
    return 1;
  switch ( *(_WORD *)(a2 + 36) )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
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
    case 0x2E:
    case 0x2F:
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
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x7C:
    case 0x7D:
    case 0x7F:
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
    case 0x9B:
    case 0x9C:
    case 0x9D:
    case 0x9E:
    case 0x9F:
    case 0xA0:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAB:
    case 0xAC:
    case 0xAD:
    case 0xAE:
    case 0xAF:
    case 0xB0:
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
    case 0xCB:
    case 0xCC:
    case 0xCD:
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
    case 0xDC:
    case 0xDD:
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
    case 0xEC:
    case 0xED:
    case 0xEE:
    case 0xEF:
    case 0xF0:
    case 0xF1:
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
    case 0x125:
    case 0x126:
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
    case 0x144:
    case 0x145:
    case 0x146:
    case 0x147:
    case 0x149:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x151:
    case 0x152:
    case 0x153:
    case 0x154:
    case 0x155:
    case 0x156:
    case 0x157:
    case 0x159:
    case 0x15D:
    case 0x15E:
    case 0x15F:
    case 0x160:
    case 0x162:
    case 0x163:
    case 0x164:
    case 0x165:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16A:
    case 0x16B:
    case 0x16C:
    case 0x16D:
    case 0x16E:
    case 0x16F:
    case 0x170:
    case 0x171:
    case 0x172:
    case 0x173:
    case 0x174:
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
    case 0x181:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18A:
    case 0x18C:
    case 0x18D:
    case 0x18E:
    case 0x18F:
    case 0x190:
    case 0x191:
    case 0x192:
    case 0x193:
    case 0x194:
    case 0x196:
    case 0x197:
    case 0x198:
    case 0x199:
    case 0x19A:
    case 0x19B:
    case 0x19D:
    case 0x19E:
    case 0x19F:
    case 0x1A0:
    case 0x1A1:
    case 0x1A3:
    case 0x1A4:
    case 0x1A5:
    case 0x1A6:
    case 0x1A9:
    case 0x1AA:
    case 0x1AB:
    case 0x1AC:
    case 0x1AD:
    case 0x1AE:
    case 0x1AF:
    case 0x1B0:
    case 0x1B1:
    case 0x1B2:
    case 0x1B3:
    case 0x1B4:
    case 0x1B5:
    case 0x1B6:
    case 0x1B7:
    case 0x1B8:
    case 0x1B9:
    case 0x1BA:
      return 1;
    case 2:
      v35 = *(__int64 **)(a2 + 64);
      v36 = &v35[*(unsigned int *)(a2 + 56)];
      if ( v35 == v36 )
        goto LABEL_99;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v35, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v35;
      }
      while ( v36 != v35 );
LABEL_99:
      v51 = *(__int64 **)(a2 + 80);
      v52 = &v51[*(unsigned int *)(a2 + 72)];
      if ( v51 == v52 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v51, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v52 == ++v51 )
          return 1;
      }
      return 0;
    case 0xF:
    case 0x16:
    case 0x17:
    case 0x2C:
    case 0x2D:
    case 0x3E:
    case 0x3F:
    case 0x51:
    case 0x52:
    case 0xCA:
    case 0xCE:
    case 0xDE:
    case 0xF2:
    case 0x150:
    case 0x15C:
    case 0x19C:
    case 0x1A8:
      v16 = *(__int64 **)(a2 + 40);
      return sub_6ED600(a1, (__int64)v16, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x10:
    case 0xEB:
    case 0x143:
    case 0x148:
    case 0x14E:
    case 0x14F:
    case 0x161:
    case 0x18B:
      v14 = *(__int64 **)(a2 + 40);
      if ( v14 )
        goto LABEL_8;
      return 1;
    case 0x5B:
      v25 = *(__int64 **)(a2 + 64);
      v26 = &v25[*(unsigned int *)(a2 + 56)];
      if ( v25 == v26 )
        goto LABEL_84;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v25, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v25;
      }
      while ( v26 != v25 );
LABEL_84:
      v45 = *(__int64 **)(a2 + 80);
      v46 = &v45[*(unsigned int *)(a2 + 72)];
      if ( v45 == v46 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v45, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v46 == ++v45 )
          return 1;
      }
      return 0;
    case 0x6F:
    case 0x73:
    case 0x8D:
      if ( (unsigned __int8)sub_6ED600(a1, *(_QWORD *)(a2 + 40), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        goto LABEL_14;
      return 0;
    case 0x70:
    case 0xA7:
    case 0x15A:
    case 0x195:
      if ( !(unsigned __int8)sub_6ED600(a1, *(_QWORD *)(a2 + 40), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
      goto LABEL_16;
    case 0x79:
      v37 = *(__int64 **)(a2 + 48);
      v38 = &v37[*(unsigned int *)(a2 + 40)];
      if ( v37 == v38 )
        goto LABEL_114;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v37, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v37;
      }
      while ( v38 != v37 );
LABEL_114:
      v57 = *(__int64 **)(a2 + 64);
      v58 = &v57[*(unsigned int *)(a2 + 56)];
      if ( v57 == v58 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v57, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v58 == ++v57 )
          return 1;
      }
      return 0;
    case 0x7A:
      v33 = *(__int64 **)(a2 + 48);
      v34 = &v33[*(unsigned int *)(a2 + 40)];
      if ( v33 == v34 )
        goto LABEL_109;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v33, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v33;
      }
      while ( v34 != v33 );
LABEL_109:
      v55 = *(__int64 **)(a2 + 64);
      v56 = &v55[*(unsigned int *)(a2 + 56)];
      if ( v55 == v56 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v55, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v56 == ++v55 )
          return 1;
      }
      return 0;
    case 0x7B:
      v31 = *(__int64 **)(a2 + 48);
      v32 = &v31[*(unsigned int *)(a2 + 40)];
      if ( v31 == v32 )
        goto LABEL_89;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v31, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v31;
      }
      while ( v32 != v31 );
LABEL_89:
      v47 = *(__int64 **)(a2 + 64);
      v48 = &v47[*(unsigned int *)(a2 + 56)];
      if ( v47 == v48 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v47, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v48 == ++v47 )
          return 1;
      }
      return 0;
    case 0x7E:
      v16 = *(__int64 **)(a2 + 40);
      if ( *(_BYTE *)(a2 + 39) )
        return sub_6ED600(a1, (__int64)v16, 0, a3, a4, a5, a6, a7, a8, a9, a10);
      if ( !v16 )
        return 1;
      v17 = (__int64)(v16 + 1);
      v18 = *v16;
      return sub_6F74E0(a1, v18, v17, a12, a13, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x8C:
      v29 = *(__int64 **)(a2 + 48);
      v30 = &v29[*(unsigned int *)(a2 + 40)];
      if ( v29 == v30 )
        goto LABEL_74;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v29, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v29;
      }
      while ( v30 != v29 );
LABEL_74:
      v41 = *(__int64 **)(a2 + 64);
      v42 = &v41[*(unsigned int *)(a2 + 56)];
      if ( v41 == v42 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v41, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v42 == ++v41 )
          return 1;
      }
      return 0;
    case 0xDB:
      goto LABEL_17;
    case 0xF3:
      v39 = *(__int64 **)(a2 + 48);
      v40 = &v39[*(unsigned int *)(a2 + 40)];
      if ( v39 == v40 )
        goto LABEL_79;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v39, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v39;
      }
      while ( v40 != v39 );
LABEL_79:
      v43 = *(__int64 **)(a2 + 64);
      v44 = &v43[*(unsigned int *)(a2 + 56)];
      if ( v43 == v44 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v43, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v44 == ++v43 )
          return 1;
      }
      return 0;
    case 0x124:
LABEL_16:
      if ( !(unsigned __int8)sub_6ED600(a1, *(_QWORD *)(a2 + 48), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
LABEL_17:
      v16 = *(__int64 **)(a2 + 56);
      return sub_6ED600(a1, (__int64)v16, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x127:
    case 0x1A2:
LABEL_14:
      v16 = *(__int64 **)(a2 + 48);
      return sub_6ED600(a1, (__int64)v16, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x128:
      return sub_6F7400(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x158:
      v23 = *(__int64 **)(a2 + 48);
      v24 = &v23[*(unsigned int *)(a2 + 40)];
      if ( v23 == v24 )
        goto LABEL_104;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v23, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v23;
      }
      while ( v24 != v23 );
LABEL_104:
      v53 = *(__int64 **)(a2 + 64);
      v54 = &v53[*(unsigned int *)(a2 + 56)];
      if ( v53 == v54 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v53, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v54 == ++v53 )
          return 1;
      }
      return 0;
    case 0x15B:
      v27 = *(__int64 **)(a2 + 48);
      v28 = &v27[*(unsigned int *)(a2 + 40)];
      if ( v27 == v28 )
        goto LABEL_94;
      do
      {
        if ( !(unsigned __int8)sub_6ED600(a1, *v27, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
          return 0;
        ++v27;
      }
      while ( v28 != v27 );
LABEL_94:
      v49 = *(__int64 **)(a2 + 64);
      v50 = &v49[*(unsigned int *)(a2 + 56)];
      if ( v49 == v50 )
        return 1;
      while ( (unsigned __int8)sub_6ED600(a1, *v49, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
      {
        if ( v50 == ++v49 )
          return 1;
      }
      return 0;
    case 0x17F:
      if ( !(unsigned __int8)sub_6ED600(a1, *(_QWORD *)(a2 + 40), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        return 0;
      v21 = *(__int64 **)(a2 + 56);
      v22 = &v21[*(unsigned int *)(a2 + 48)];
      if ( v21 == v22 )
        goto LABEL_119;
      break;
    case 0x180:
      v14 = *(__int64 **)(a2 + 48);
      if ( !v14 )
        return 1;
LABEL_8:
      a12 = *v14;
      v17 = (__int64)(v14 + 1);
      v18 = *v14;
      return sub_6F74E0(a1, v18, v17, a12, a13, a3, a4, a5, a6, a7, a8, a9, a10);
    case 0x1A7:
      return sub_6F72A0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  do
  {
    if ( !(unsigned __int8)sub_6ED600(a1, *v21, 0, a3, a4, a5, a6, v19, v20, a9, a10) )
      return 0;
    ++v21;
  }
  while ( v22 != v21 );
LABEL_119:
  v59 = *(__int64 **)(a2 + 72);
  v60 = &v59[*(unsigned int *)(a2 + 64)];
  if ( v59 == v60 )
    return 1;
  while ( (unsigned __int8)sub_6ED600(a1, *v59, 0, a3, a4, a5, a6, v19, v20, a9, a10) )
  {
    if ( v60 == ++v59 )
      return 1;
  }
  return 0;
}

