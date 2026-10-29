__int64 __fastcall sub_6777E0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 *v7; // rax
  __int64 *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 *v12; // r12
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 *v15; // r13
  __int64 *v16; // r12
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 *v19; // rbx
  __int64 *v20; // r12
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 *v23; // r13
  __int64 *v24; // r12
  __int64 *v25; // rbx
  __int64 *v26; // r12
  __int64 *v27; // rbx
  __int64 *v28; // r12
  __int64 *v29; // rbx
  __int64 *v30; // r12
  __int64 *v31; // r13
  __int64 *v32; // r12
  __int64 *v33; // r13
  __int64 *v34; // r12
  __int64 *v35; // rbx
  __int64 *v36; // r12
  __int64 *v37; // rbx
  __int64 *v38; // r12
  __int64 *v39; // rbx
  __int64 *v40; // r12
  __int64 *v41; // rbx
  __int64 *v42; // r12
  __int64 *v43; // rbx
  __int64 *v44; // r12
  __int64 *v45; // rbx
  __int64 *v46; // r12
  __int64 *v47; // rbx
  __int64 *v48; // r12
  __int64 *v49; // rbx
  __int64 *v50; // r12
  __int64 *v51; // r13
  __int64 *v52; // r12
  __int64 *v53; // r13
  __int64 *v54; // r12
  __int64 *v55; // r13
  __int64 *v56; // r12
  __int64 *v57; // rbx

  if ( !a2 )
    return 1;
  switch ( *(_WORD *)(a2 + 32) )
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
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
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
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
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
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
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
    case 0x6B:
    case 0x6C:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x74:
    case 0x75:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
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
    case 0x9B:
    case 0x9C:
    case 0x9D:
    case 0x9E:
    case 0x9F:
    case 0xA0:
    case 0xA2:
    case 0xA3:
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
    case 0xC5:
    case 0xC6:
    case 0xC7:
    case 0xC9:
    case 0xCA:
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
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
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
    case 0x11D:
    case 0x11E:
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
    case 0x13B:
    case 0x13C:
    case 0x13D:
    case 0x13E:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x148:
    case 0x149:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x14F:
    case 0x151:
    case 0x152:
    case 0x153:
    case 0x154:
    case 0x155:
    case 0x156:
    case 0x158:
    case 0x159:
    case 0x15A:
    case 0x15B:
    case 0x15C:
    case 0x15D:
    case 0x15F:
    case 0x160:
    case 0x161:
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
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18A:
    case 0x18B:
    case 0x18C:
    case 0x18D:
    case 0x18E:
    case 0x18F:
    case 0x190:
    case 0x191:
    case 0x193:
    case 0x194:
    case 0x195:
    case 0x196:
    case 0x197:
    case 0x199:
    case 0x19A:
    case 0x19B:
    case 0x19C:
    case 0x19F:
    case 0x1A0:
    case 0x1A1:
    case 0x1A2:
    case 0x1A3:
    case 0x1A4:
    case 0x1A5:
    case 0x1A6:
    case 0x1A7:
    case 0x1A8:
    case 0x1A9:
    case 0x1AA:
    case 0x1AB:
    case 0x1AC:
    case 0x1AD:
      return 1;
    case 2:
      v32 = *(__int64 **)(a2 + 56);
      v33 = &v32[*(unsigned int *)(a2 + 48)];
      if ( v32 == v33 )
        goto LABEL_111;
      do
      {
        if ( !(unsigned __int8)sub_672CC0(a1, *v32, a3, a4, a5, a6) )
          return 0;
        ++v32;
      }
      while ( v33 != v32 );
LABEL_111:
      v46 = *(__int64 **)(a2 + 72);
      v47 = &v46[*(unsigned int *)(a2 + 64)];
      if ( v46 == v47 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v46, a3, a4, a5, a6) )
      {
        if ( v47 == ++v46 )
          return 1;
      }
      return 0;
    case 0xE:
    case 0xE4:
    case 0x13A:
    case 0x13F:
    case 0x145:
    case 0x146:
    case 0x157:
    case 0x181:
      v7 = *(__int64 **)(a2 + 40);
      if ( v7 )
        goto LABEL_8;
      return 1;
    case 0x14:
    case 0x15:
    case 0x28:
    case 0x29:
    case 0x3B:
    case 0x3C:
    case 0x4C:
    case 0x4D:
    case 0xC4:
    case 0xC8:
    case 0xD8:
    case 0xEA:
    case 0x147:
    case 0x192:
    case 0x19E:
      v9 = *(__int64 **)(a2 + 40);
      return sub_672CC0(a1, (__int64)v9, a3, a4, a5, a6);
    case 0x56:
      v30 = *(__int64 **)(a2 + 56);
      v31 = &v30[*(unsigned int *)(a2 + 48)];
      if ( v30 == v31 )
        goto LABEL_106;
      do
      {
        if ( !(unsigned __int8)sub_672CC0(a1, *v30, a3, a4, a5, a6) )
          return 0;
        ++v30;
      }
      while ( v31 != v30 );
LABEL_106:
      v44 = *(__int64 **)(a2 + 72);
      v45 = &v44[*(unsigned int *)(a2 + 64)];
      if ( v44 == v45 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v44, a3, a4, a5, a6) )
      {
        if ( v45 == ++v44 )
          return 1;
      }
      return 0;
    case 0x69:
    case 0x6D:
    case 0x87:
    case 0x11C:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
        return 0;
      goto LABEL_13;
    case 0x6A:
    case 0xA1:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6)
        || !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 48), a3, a4, a5, a6) )
      {
        return 0;
      }
      v9 = *(__int64 **)(a2 + 56);
      return sub_672CC0(a1, (__int64)v9, a3, a4, a5, a6);
    case 0x71:
      v28 = *(__int64 **)(a2 + 40);
      v29 = &v28[*(unsigned int *)(a2 + 36)];
      if ( v28 == v29 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v28, a3, a4, a5, a6) )
      {
        if ( v29 == ++v28 )
          return 1;
      }
      return 0;
    case 0x72:
      v26 = *(__int64 **)(a2 + 40);
      v27 = &v26[*(unsigned int *)(a2 + 36)];
      if ( v26 == v27 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v26, a3, a4, a5, a6) )
      {
        if ( v27 == ++v26 )
          return 1;
      }
      return 0;
    case 0x73:
      v38 = *(__int64 **)(a2 + 40);
      v39 = &v38[*(unsigned int *)(a2 + 36)];
      if ( v38 == v39 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v38, a3, a4, a5, a6) )
      {
        if ( v39 == ++v38 )
          return 1;
      }
      return 0;
    case 0x76:
      v9 = *(__int64 **)(a2 + 40);
      if ( *(_BYTE *)(a2 + 35) )
        return sub_672CC0(a1, (__int64)v9, a3, a4, a5, a6);
      if ( !v9 )
        return 1;
      v10 = (unsigned __int64)(v9 + 1);
      v11 = *v9;
      return sub_673BB0(a1, v11, v10, a3, a4, a5, a6);
    case 0x84:
      v36 = *(__int64 **)(a2 + 40);
      v37 = &v36[*(unsigned int *)(a2 + 36)];
      if ( v36 == v37 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v36, a3, a4, a5, a6) )
      {
        if ( v37 == ++v36 )
          return 1;
      }
      return 0;
    case 0x85:
      v42 = *(__int64 **)(a2 + 40);
      v43 = &v42[*(unsigned int *)(a2 + 36)];
      if ( v42 == v43 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v42, a3, a4, a5, a6) )
      {
        if ( v43 == ++v42 )
          return 1;
      }
      return 0;
    case 0x86:
      v34 = *(__int64 **)(a2 + 40);
      v35 = &v34[*(unsigned int *)(a2 + 36)];
      if ( v34 == v35 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v34, a3, a4, a5, a6) )
      {
        if ( v35 == ++v34 )
          return 1;
      }
      return 0;
    case 0xCE:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
        return 0;
      v40 = *(__int64 **)(a2 + 56);
      v41 = &v40[*(unsigned int *)(a2 + 48)];
      if ( v40 == v41 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v40, a3, a4, a5, a6) )
      {
        if ( v41 == ++v40 )
          return 1;
      }
      return 0;
    case 0xEB:
      v24 = *(__int64 **)(a2 + 40);
      v25 = &v24[*(unsigned int *)(a2 + 36)];
      if ( v24 == v25 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v24, a3, a4, a5, a6) )
      {
        if ( v25 == ++v24 )
          return 1;
      }
      return 0;
    case 0x11F:
    case 0x198:
LABEL_13:
      v9 = *(__int64 **)(a2 + 48);
      return sub_672CC0(a1, (__int64)v9, a3, a4, a5, a6);
    case 0x120:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
        return 0;
      v14 = *(__int64 **)(a2 + 64);
      v15 = &v14[*(unsigned int *)(a2 + 56)];
      if ( v14 == v15 )
        goto LABEL_116;
      do
      {
        if ( !(unsigned __int8)sub_672CC0(a1, *v14, a3, a4, a5, a6) )
          return 0;
        ++v14;
      }
      while ( v15 != v14 );
LABEL_116:
      v48 = *(__int64 **)(a2 + 80);
      v49 = &v48[*(unsigned int *)(a2 + 72)];
      if ( v48 == v49 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v48, a3, a4, a5, a6) )
      {
        if ( v49 == ++v48 )
          return 1;
      }
      return 0;
    case 0x14E:
      v16 = *(__int64 **)(a2 + 40);
      v17 = &v16[*(unsigned int *)(a2 + 36)];
      if ( v16 == v17 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v16, a3, a4, a5, a6) )
      {
        if ( v17 == ++v16 )
          return 1;
      }
      return 0;
    case 0x150:
      v18 = *(__int64 **)(a2 + 40);
      v19 = &v18[*(unsigned int *)(a2 + 36)];
      if ( v18 == v19 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v18, a3, a4, a5, a6) )
      {
        if ( v19 == ++v18 )
          return 1;
      }
      return 0;
    case 0x15E:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
        return 0;
      v20 = *(__int64 **)(a2 + 56);
      v21 = &v20[*(unsigned int *)(a2 + 48)];
      if ( v20 == v21 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v20, a3, a4, a5, a6) )
      {
        if ( v21 == ++v20 )
          return 1;
      }
      return 0;
    case 0x175:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
        return 0;
      v12 = *(__int64 **)(a2 + 56);
      v13 = &v12[*(unsigned int *)(a2 + 48)];
      if ( v12 == v13 )
        return 1;
      while ( (unsigned __int8)sub_672CC0(a1, *v12, a3, a4, a5, a6) )
      {
        if ( v13 == ++v12 )
          return 1;
      }
      return 0;
    case 0x176:
      v7 = *(__int64 **)(a2 + 48);
      if ( !v7 )
        return 1;
LABEL_8:
      v10 = (unsigned __int64)(v7 + 1);
      v11 = *v7;
      return sub_673BB0(a1, v11, v10, a3, a4, a5, a6);
    case 0x19D:
      if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40), a3, a4, a5, a6) )
        return 0;
      v22 = *(__int64 **)(a2 + 56);
      v23 = &v22[*(unsigned int *)(a2 + 48)];
      if ( v22 == v23 )
        goto LABEL_121;
      break;
  }
  do
  {
    if ( !(unsigned __int8)sub_672CC0(a1, *v22, a3, a4, a5, a6) )
      return 0;
    ++v22;
  }
  while ( v23 != v22 );
LABEL_121:
  v50 = *(__int64 **)(a2 + 72);
  v51 = &v50[*(unsigned int *)(a2 + 64)];
  if ( v50 == v51 )
  {
LABEL_126:
    v52 = *(__int64 **)(a2 + 88);
    v53 = &v52[*(unsigned int *)(a2 + 80)];
    if ( v52 == v53 )
    {
LABEL_131:
      v54 = *(__int64 **)(a2 + 104);
      v55 = &v54[*(unsigned int *)(a2 + 96)];
      if ( v54 == v55 )
      {
LABEL_136:
        v56 = *(__int64 **)(a2 + 136);
        v57 = &v56[*(unsigned int *)(a2 + 128)];
        if ( v56 == v57 )
        {
          return 1;
        }
        else
        {
          while ( (unsigned __int8)sub_672CC0(a1, *v56, a3, a4, a5, a6) )
          {
            if ( v57 == ++v56 )
              return 1;
          }
          return 0;
        }
      }
      else
      {
        while ( (unsigned __int8)sub_672CC0(a1, *v54, a3, a4, a5, a6) )
        {
          if ( v55 == ++v54 )
            goto LABEL_136;
        }
        return 0;
      }
    }
    else
    {
      while ( (unsigned __int8)sub_672CC0(a1, *v52, a3, a4, a5, a6) )
      {
        if ( v53 == ++v52 )
          goto LABEL_131;
      }
      return 0;
    }
  }
  else
  {
    while ( (unsigned __int8)sub_672CC0(a1, *v50, a3, a4, a5, a6) )
    {
      if ( v51 == ++v50 )
        goto LABEL_126;
    }
    return 0;
  }
}

