void __fastcall sub_AD26F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 *v10; // r12
  __int64 *v11; // r13
  __int64 v12; // rcx
  __int64 *v13; // r12
  __int64 *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 *v18; // r12
  __int64 *v19; // r13
  __int64 v20; // rcx
  __int64 *v21; // r12
  __int64 *v22; // rbp
  __int64 v23; // rcx
  __int64 *v24; // r12
  __int64 *v25; // r13
  __int64 v26; // rcx
  __int64 *v27; // r12
  __int64 *v28; // rbp
  __int64 v29; // rcx
  __int64 *v30; // r12
  __int64 *v31; // r13
  __int64 v32; // rcx
  __int64 *v33; // r12
  __int64 *v34; // rbp
  __int64 v35; // rcx
  __int64 *v36; // r12
  __int64 *v37; // r13
  __int64 v38; // rcx
  __int64 *v39; // r12
  __int64 *v40; // rbp
  __int64 v41; // rcx
  __int64 *v42; // r12
  __int64 *v43; // r13
  __int64 v44; // rcx
  __int64 *v45; // r12
  __int64 *v46; // rbp
  __int64 v47; // rcx
  __int64 *v48; // r12
  __int64 *v49; // r13
  __int64 v50; // rcx
  __int64 *v51; // r12
  __int64 *v52; // rbp
  __int64 v53; // rcx
  __int64 v54; // r13
  __int64 v55; // r9
  __int64 *v56; // r12
  __int64 *v57; // r14
  __int64 v58; // rcx
  __int64 *v59; // r12
  __int64 *v60; // rbp
  __int64 v61; // rcx
  __int64 *v62; // r12
  __int64 *v63; // r13
  __int64 v64; // rcx
  __int64 *v65; // r12
  __int64 *v66; // rbp
  __int64 v67; // rcx
  __int64 *v68; // r12
  __int64 *v69; // r13
  __int64 v70; // rcx
  __int64 *v71; // r12
  __int64 *v72; // rbp
  __int64 v73; // rcx

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
    case 0x10:
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
    case 0xEB:
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
    case 0x18A:
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
    case 0x1B9:
    case 0x1BA:
      return;
    case 2:
      v18 = *(__int64 **)(a2 + 64);
      v19 = &v18[*(unsigned int *)(a2 + 56)];
      while ( v19 != v18 )
      {
        v20 = *v18++;
        sub_AD2220(a1 + 8, 0, 0, v20, a1, a6);
      }
      v21 = *(__int64 **)(a2 + 80);
      v22 = &v21[*(unsigned int *)(a2 + 72)];
      while ( v22 != v21 )
      {
        v23 = *v21++;
        sub_AD2220(a1 + 8, 0, 0, v23, a1, a6);
      }
      return;
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
      goto LABEL_3;
    case 0x5B:
      v42 = *(__int64 **)(a2 + 64);
      v43 = &v42[*(unsigned int *)(a2 + 56)];
      while ( v43 != v42 )
      {
        v44 = *v42++;
        sub_AD2220(a1 + 8, 0, 0, v44, a1, a6);
      }
      v45 = *(__int64 **)(a2 + 80);
      v46 = &v45[*(unsigned int *)(a2 + 72)];
      while ( v46 != v45 )
      {
        v47 = *v45++;
        sub_AD2220(a1 + 8, 0, 0, v47, a1, a6);
      }
      return;
    case 0x6F:
    case 0x73:
    case 0x8D:
      sub_AD2220(a1 + 8, 0, 0, *(_QWORD *)(a2 + 40), a1, a6);
      v7 = *(_QWORD *)(a2 + 48);
      v9 = a1;
      v8 = a1 + 8;
      goto LABEL_5;
    case 0x70:
    case 0xA7:
    case 0x15A:
    case 0x195:
      v16 = a1 + 8;
      sub_AD2220(a1 + 8, 0, 0, *(_QWORD *)(a2 + 40), a1, a6);
      v17 = *(_QWORD *)(a2 + 48);
      goto LABEL_12;
    case 0x79:
      v30 = *(__int64 **)(a2 + 48);
      v31 = &v30[*(unsigned int *)(a2 + 40)];
      while ( v31 != v30 )
      {
        v32 = *v30++;
        sub_AD2220(a1 + 8, 0, 0, v32, a1, a6);
      }
      v33 = *(__int64 **)(a2 + 64);
      v34 = &v33[*(unsigned int *)(a2 + 56)];
      while ( v34 != v33 )
      {
        v35 = *v33++;
        sub_AD2220(a1 + 8, 0, 0, v35, a1, a6);
      }
      return;
    case 0x7A:
      v48 = *(__int64 **)(a2 + 48);
      v49 = &v48[*(unsigned int *)(a2 + 40)];
      while ( v49 != v48 )
      {
        v50 = *v48++;
        sub_AD2220(a1 + 8, 0, 0, v50, a1, a6);
      }
      v51 = *(__int64 **)(a2 + 64);
      v52 = &v51[*(unsigned int *)(a2 + 56)];
      while ( v52 != v51 )
      {
        v53 = *v51++;
        sub_AD2220(a1 + 8, 0, 0, v53, a1, a6);
      }
      return;
    case 0x7B:
      v68 = *(__int64 **)(a2 + 48);
      v69 = &v68[*(unsigned int *)(a2 + 40)];
      while ( v69 != v68 )
      {
        v70 = *v68++;
        sub_AD2220(a1 + 8, 0, 0, v70, a1, a6);
      }
      v71 = *(__int64 **)(a2 + 64);
      v72 = &v71[*(unsigned int *)(a2 + 56)];
      while ( v72 != v71 )
      {
        v73 = *v71++;
        sub_AD2220(a1 + 8, 0, 0, v73, a1, a6);
      }
      return;
    case 0x7E:
      if ( !*(_BYTE *)(a2 + 39) )
        return;
LABEL_3:
      v7 = *(_QWORD *)(a2 + 40);
      goto LABEL_4;
    case 0x8C:
      v36 = *(__int64 **)(a2 + 48);
      v37 = &v36[*(unsigned int *)(a2 + 40)];
      while ( v37 != v36 )
      {
        v38 = *v36++;
        sub_AD2220(a1 + 8, 0, 0, v38, a1, a6);
      }
      v39 = *(__int64 **)(a2 + 64);
      v40 = &v39[*(unsigned int *)(a2 + 56)];
      while ( v40 != v39 )
      {
        v41 = *v39++;
        sub_AD2220(a1 + 8, 0, 0, v41, a1, a6);
      }
      return;
    case 0xDB:
      v7 = *(_QWORD *)(a2 + 56);
      goto LABEL_4;
    case 0xF3:
      v24 = *(__int64 **)(a2 + 48);
      v25 = &v24[*(unsigned int *)(a2 + 40)];
      while ( v25 != v24 )
      {
        v26 = *v24++;
        sub_AD2220(a1 + 8, 0, 0, v26, a1, a6);
      }
      v27 = *(__int64 **)(a2 + 64);
      v28 = &v27[*(unsigned int *)(a2 + 56)];
      while ( v28 != v27 )
      {
        v29 = *v27++;
        sub_AD2220(a1 + 8, 0, 0, v29, a1, a6);
      }
      return;
    case 0x124:
      v17 = *(_QWORD *)(a2 + 48);
      v16 = a1 + 8;
LABEL_12:
      sub_AD2220(v16, 0, 0, v17, a1, a6);
      v7 = *(_QWORD *)(a2 + 56);
      v9 = a1;
      v8 = v16;
      goto LABEL_5;
    case 0x127:
    case 0x1A2:
      v7 = *(_QWORD *)(a2 + 48);
LABEL_4:
      v8 = a1 + 8;
      v9 = a1;
LABEL_5:
      sub_AD2220(v8, 0, 0, v7, v9, a6);
      break;
    case 0x128:
      sub_AD2620(a1, a2, a3, a4, a5, a6);
      break;
    case 0x158:
      v62 = *(__int64 **)(a2 + 48);
      v63 = &v62[*(unsigned int *)(a2 + 40)];
      while ( v63 != v62 )
      {
        v64 = *v62++;
        sub_AD2220(a1 + 8, 0, 0, v64, a1, a6);
      }
      v65 = *(__int64 **)(a2 + 64);
      v66 = &v65[*(unsigned int *)(a2 + 56)];
      while ( v66 != v65 )
      {
        v67 = *v65++;
        sub_AD2220(a1 + 8, 0, 0, v67, a1, a6);
      }
      break;
    case 0x15B:
      v10 = *(__int64 **)(a2 + 48);
      v11 = &v10[*(unsigned int *)(a2 + 40)];
      while ( v11 != v10 )
      {
        v12 = *v10++;
        sub_AD2220(a1 + 8, 0, 0, v12, a1, a6);
      }
      v13 = *(__int64 **)(a2 + 64);
      v14 = &v13[*(unsigned int *)(a2 + 56)];
      while ( v14 != v13 )
      {
        v15 = *v13++;
        sub_AD2220(a1 + 8, 0, 0, v15, a1, a6);
      }
      break;
    case 0x17F:
      v54 = a1 + 8;
      sub_AD2220(a1 + 8, 0, 0, *(_QWORD *)(a2 + 40), a1, a6);
      v56 = *(__int64 **)(a2 + 56);
      v57 = &v56[*(unsigned int *)(a2 + 48)];
      while ( v57 != v56 )
      {
        v58 = *v56++;
        sub_AD2220(v54, 0, 0, v58, a1, v55);
      }
      v59 = *(__int64 **)(a2 + 72);
      v60 = &v59[*(unsigned int *)(a2 + 64)];
      while ( v60 != v59 )
      {
        v61 = *v59++;
        sub_AD2220(v54, 0, 0, v61, a1, v55);
      }
      break;
    case 0x1A7:
      sub_AD24F0(a1, a2, a3, a4, a5, a6);
      break;
    case 0x1B8:
      sub_AD2CF0(a1 + 8, &byte_22F0C30, 0, a1, *(_QWORD *)(a2 + 56));
      break;
  }
}
