__int64 __fastcall sub_C1A2A0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  char v7; // al
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rdx
  int v15; // ebx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  _WORD *v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r15
  char v25; // bl
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  void *v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r13
  void **v36; // rax
  __int64 v37; // rbx
  unsigned __int8 v38; // al
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // r13
  unsigned int v44; // r12d
  char v45; // al
  char v46; // bl
  __int64 v47; // rax
  void *v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  char v52; // bl
  _QWORD *v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  void *v59; // r13
  __int64 v60; // r8
  __int64 v61; // r9
  void *v62; // r14
  __int64 v63; // r8
  __int64 v64; // r9
  _BOOL4 v65; // r14d
  char v66; // bl
  unsigned int v67; // ebx
  unsigned int v68; // eax
  unsigned int v69; // [rsp+Ch] [rbp-7Ch]
  unsigned int v70; // [rsp+Ch] [rbp-7Ch]
  unsigned int v71; // [rsp+Ch] [rbp-7Ch]
  void *v72; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v73; // [rsp+18h] [rbp-70h]
  char v74; // [rsp+1Ch] [rbp-6Ch]
  void *v75; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v76; // [rsp+28h] [rbp-60h]
  char v77; // [rsp+2Ch] [rbp-5Ch]
  void *v78; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v79; // [rsp+38h] [rbp-50h]
  char v80; // [rsp+3Ch] [rbp-4Ch]

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  switch ( v7 )
  {
    case 13:
      if ( (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        return (sub_EC7AA0(a1) << 32) | 2;
      break;
    case 47:
      v10 = sub_F3D1D0(v6, a2, a3, a4, a5);
      if ( (*(_BYTE *)(v10 + 74) & 1) == 0 && (*(_QWORD *)(v10 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return (sub_EC7AA0(a1) << 32) | 2;
      break;
    case 10:
      break;
    default:
      return (sub_EC7AA0(a1) << 32) | 2;
  }
  v9 = *(_WORD *)a1 & 0x1FF;
  switch ( v9 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
    case 13:
    case 14:
    case 16:
    case 17:
    case 18:
    case 19:
    case 22:
    case 23:
    case 24:
    case 26:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 54:
    case 55:
    case 56:
    case 59:
    case 60:
    case 62:
    case 64:
    case 67:
    case 68:
    case 69:
    case 70:
    case 72:
    case 73:
    case 74:
    case 76:
    case 83:
    case 85:
    case 90:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 102:
    case 103:
    case 104:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 113:
    case 114:
    case 116:
    case 117:
    case 119:
    case 120:
    case 121:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
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
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
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
    case 193:
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
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 248:
    case 249:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
      goto LABEL_24;
    case 4:
      if ( ((1LL << (*(_BYTE *)(a1 + 2) >> 3)) & 0x203F) == 0 )
        goto LABEL_12;
      goto LABEL_24;
    case 5:
      v13 = (*(_BYTE *)(a1 + 2) >> 3) & 0xF;
      if ( ((*(_BYTE *)(a1 + 2) >> 3) & 0xF) == 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BF97D0(a1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 6 )
          goto LABEL_22;
        goto LABEL_24;
      }
      if ( v13 != 2 )
        goto LABEL_22;
      v57 = sub_BF97D0(a1);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 6 )
        goto LABEL_22;
      v58 = sub_A4E300((_QWORD *)a2, v57);
      if ( !v58 || *(_BYTE *)(v58 + 16) != 6 )
        BUG();
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 32) & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) > 4u )
      {
        v14 = (unsigned int)sub_EC7AA0(a1);
      }
      else
      {
        v11 = *(_QWORD *)(v58 + 40);
LABEL_13:
        v12 = sub_C1A2A0(v11, a2);
        v13 = v12;
        v14 = HIDWORD(v12);
      }
      return (v14 << 32) | v13;
    case 6:
    case 11:
    case 12:
    case 15:
    case 25:
    case 40:
    case 52:
    case 58:
    case 63:
    case 65:
    case 66:
    case 75:
    case 78:
    case 100:
    case 105:
    case 115:
    case 122:
      goto LABEL_22;
    case 8:
    case 61:
    case 101:
      goto LABEL_12;
    case 20:
      goto LABEL_25;
    case 21:
      v26 = sub_BFA0C0(a1);
      goto LABEL_41;
    case 27:
      goto LABEL_27;
    case 53:
      if ( (*(_BYTE *)(a1 + 1) & 6) != 0 )
        goto LABEL_24;
      v53 = *(_QWORD **)(a1 + 16);
      if ( (unsigned int)((__int64)(*(_QWORD *)(a1 + 24) - (_QWORD)v53) >> 3) != 1 )
        goto LABEL_24;
      v54 = sub_C1A2A0(*v53, a2);
      v13 = v54;
      v14 = HIDWORD(v54);
      return (v14 << 32) | v13;
    case 57:
      v11 = *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
      goto LABEL_13;
    case 71:
      v37 = *(_QWORD *)(a1 + 16);
      v38 = *(_BYTE *)(v37 + 28) & 0x7F;
      if ( v38 == 33
        || (unsigned int)v38 - 40 <= 6
        && (unsigned __int8)sub_B59570(*(_QWORD *)(a1 + 16), a2)
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 > 1 )
      {
        goto LABEL_22;
      }
      goto LABEL_24;
    case 77:
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
LABEL_25:
        v11 = *(_QWORD *)(a1 + 24);
      else
        v11 = *(_QWORD *)(a1 + 32);
      goto LABEL_13;
    case 79:
    case 80:
    case 81:
    case 82:
    case 84:
    case 86:
    case 87:
      v39 = *(_QWORD *)(a1 + 16);
      if ( v9 != 79 )
      {
        v43 = sub_BD7DA0(*(_QWORD *)(a1 + 16));
        if ( (*(_WORD *)v43 & 0x1FF) == 0x3E )
        {
          v44 = sub_A884B0(a2, *(_QWORD *)(a1 + 8), v40, v41, v42);
          v45 = sub_F41500(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          v73 = v44;
          v46 = v45 ^ 1;
          if ( v44 > 0x40 )
            sub_21E1730(&v72, 0, 0);
          else
            v72 = nullptr;
          v74 = v46;
          v47 = sub_21D4FB0(*(_BYTE *)(v43 + 2) >> 3);
          v48 = *(void **)(v43 + 16);
          v49 = v47;
          v50 = *(unsigned int *)(v43 + 24);
          v51 = (unsigned __int64)(v50 + 63) >> 6;
          if ( v51 > 1 )
          {
            sub_21E18D0(&v75, v50, v51, v48);
          }
          else
          {
            v76 = *(_DWORD *)(v43 + 24);
            if ( (unsigned int)v50 > 0x40 )
              sub_21E1730(&v75, v48, 0);
            else
              v75 = v48;
          }
          if ( v49 == sub_21D5390() )
            sub_21DC060(&v78, v49, &v75);
          else
            sub_21DBA90(&v78, v49, &v75);
          if ( v76 > 0x40 && v75 )
            operator delete[](v75);
          v52 = sub_21DEE60(&v78, &v72, 0, &v75);
          sub_971860(&v78);
          if ( (v52 & 1) != 0 )
          {
            v13 = 2;
            v14 = (unsigned int)sub_EC7AA0(a1);
          }
          else
          {
            v14 = 0;
            v13 = 0;
          }
          if ( v73 > 0x40 && v72 )
          {
            v69 = v14;
            operator delete[](v72);
            v14 = v69;
          }
          return (v14 << 32) | v13;
        }
      }
      if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x7Fu) <= 0x3B )
      {
        v55 = 0xC00000018000030LL;
        if ( _bittest64(&v55, (*(_WORD *)(a1 + 2) >> 3) & 0x7F) )
        {
          v56 = sub_C1A2A0(v39, a2);
          v13 = v56;
          v14 = HIDWORD(v56);
          return (v14 << 32) | v13;
        }
      }
      goto LABEL_24;
    case 88:
      if ( !(unsigned __int8)sub_C02A00(nullptr, (_QWORD *)a2, a1) )
        goto LABEL_24;
LABEL_12:
      v11 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    case 89:
    case 91:
      if ( (unsigned int)sub_BD8130(a1) )
        goto LABEL_27;
      goto LABEL_24;
    case 111:
      v26 = sub_C70F80(a1);
      goto LABEL_41;
    case 112:
      v26 = sub_C70F40(a1);
LABEL_41:
      v27 = sub_C1A2A0(v26, a2);
      v13 = v27;
      v14 = HIDWORD(v27);
      return (v14 << 32) | v13;
    case 118:
      v31 = 1LL << (*(_WORD *)(a1 + 2) >> 3);
      if ( (v31 & 0x10007FFFCLL) != 0 )
      {
        v59 = (void *)sub_C1A2A0(*(_QWORD *)(a1 + 16), a2);
        v62 = (void *)sub_C1A2A0(*(_QWORD *)(a1 + 24), a2);
        v13 = (unsigned int)v62;
        if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3Fu) - 3 > 1 || (unsigned int)v59 | (unsigned int)v62 )
        {
          if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) != 0x20 )
            goto LABEL_99;
          if ( (**(_BYTE **)(a2 + 2320) & 1) == 0 )
            goto LABEL_24;
          if ( (unsigned int)v59 | (unsigned int)v62 )
          {
LABEL_99:
            v78 = v59;
            v36 = &v75;
            v75 = v62;
            if ( (int)v59 >= (int)v62 )
            {
              v13 = (unsigned int)v59;
              v36 = &v78;
            }
            goto LABEL_57;
          }
          goto LABEL_107;
        }
        sub_C19F20((__int64)&v75, *(_QWORD *)(a1 + 24), a2, 0, v60, v61);
        if ( (unsigned __int8)sub_AA06B0((__int64)&v75, nullptr) )
        {
          v14 = (unsigned int)sub_EC7AA0(a1);
LABEL_117:
          if ( v76 > 0x40 && v75 )
          {
            v70 = v14;
            operator delete[](v75);
            v14 = v70;
          }
          goto LABEL_120;
        }
        if ( !v77 )
        {
          v67 = v76;
          if ( v76 )
          {
            if ( v76 <= 0x40 )
            {
              if ( v75 != (void *)(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v76)) )
                goto LABEL_133;
            }
            else if ( (unsigned int)sub_21E2C40(&v75) != v67 )
            {
LABEL_131:
              if ( v75 )
                operator delete[](v75);
LABEL_133:
              if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) != 0x20 )
              {
                v78 = v59;
                v13 = 0;
                v36 = &v78;
                v75 = v62;
LABEL_57:
                v14 = *((unsigned int *)v36 + 1);
                return (v14 << 32) | v13;
              }
              if ( (**(_BYTE **)(a2 + 2320) & 1) == 0 )
              {
LABEL_24:
                v13 = 2;
                v14 = (unsigned int)sub_EC7AA0(a1);
                return (v14 << 32) | v13;
              }
LABEL_107:
              v13 = 1;
              v14 = (unsigned int)sub_EC7AA0(a1);
              return (v14 << 32) | v13;
            }
          }
          sub_C19F20((__int64)&v78, *(_QWORD *)(a1 + 16), a2, 0, v63, v64);
          if ( sub_BF27F0((__int64 *)&v78) )
          {
            v68 = sub_EC7AA0(a1);
            v14 = v68;
            if ( v79 > 0x40 && v78 )
            {
              v71 = v68;
              operator delete[](v78);
              v14 = v71;
            }
            goto LABEL_117;
          }
          if ( v79 > 0x40 && v78 )
            operator delete[](v78);
        }
        if ( v76 <= 0x40 )
          goto LABEL_133;
        goto LABEL_131;
      }
      if ( (v31 & 0xFFE00003) != 0 )
        goto LABEL_24;
      v32 = (void *)sub_C1A2A0(*(_QWORD *)(a1 + 16), a2);
      v35 = sub_C1A2A0(*(_QWORD *)(a1 + 24), a2);
      v13 = v35;
      if ( (_DWORD)v35 != 1 || (_DWORD)v32 )
      {
        v78 = v32;
        v36 = &v75;
        v75 = (void *)v35;
        if ( (int)v32 >= (int)v35 )
        {
          v13 = (unsigned int)v32;
          v36 = &v78;
        }
        goto LABEL_57;
      }
      v65 = ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) == 19;
      sub_C19F20((__int64)&v78, *(_QWORD *)(a1 + 16), a2, 0, v33, v34);
      v66 = sub_AA06B0((__int64)&v78, nullptr);
      if ( v79 > 0x40 && v78 )
        operator delete[](v78);
      if ( v65 != v66 )
      {
        v14 = HIDWORD(v35);
LABEL_120:
        v13 = 1;
        return (v14 << 32) | v13;
      }
LABEL_22:
      v14 = 0;
      v13 = 0;
      return (v14 << 32) | v13;
    case 128:
      v17 = *(_QWORD *)(a1 + 24);
      v18 = (_WORD *)sub_BD9810(v17);
      if ( ((*v18 + 423) & 0x1FFu) > 4 )
        goto LABEL_29;
      if ( (unsigned int)sub_BD8130((__int64)v18) == 214 )
      {
LABEL_27:
        v16 = sub_C19BE0(a1, a2);
        v13 = v16;
        v14 = HIDWORD(v16);
        return (v14 << 32) | v13;
      }
      v17 = *(_QWORD *)(a1 + 24);
LABEL_29:
      v19 = sub_C1A2A0(v17, a2);
      v13 = v19;
      if ( (_DWORD)v19 == 2 )
        goto LABEL_86;
      v20 = sub_C1A2A0(*(_QWORD *)(a1 + 32), a2);
      v21 = sub_C1A2A0(*(_QWORD *)(a1 + 40), a2);
      v24 = v21;
      if ( (_DWORD)v20 == 2 )
      {
LABEL_101:
        v13 = 2;
        v14 = HIDWORD(v20);
        return (v14 << 32) | v13;
      }
      if ( (_DWORD)v21 == 2 )
      {
        v13 = 2;
        v14 = HIDWORD(v21);
        return (v14 << 32) | v13;
      }
      if ( (_DWORD)v19 == 1 )
      {
LABEL_86:
        v14 = HIDWORD(v19);
        return (v14 << 32) | v13;
      }
      v14 = 0;
      v13 = v20 | v21;
      if ( !((unsigned int)v20 | (unsigned int)v21) )
        return (v14 << 32) | v13;
      sub_C19F20((__int64)&v78, *(_QWORD *)(a1 + 24), a2, 0, v22, v23);
      v25 = sub_AA06B0((__int64)&v78, nullptr);
      if ( v79 > 0x40 && v78 )
        operator delete[](v78);
      if ( v25 )
      {
        v13 = v24;
        v14 = HIDWORD(v24);
        return (v14 << 32) | v13;
      }
      goto LABEL_50;
    case 129:
      v19 = sub_C1A2A0(*(_QWORD *)(a1 + 24), a2);
      v13 = v19;
      if ( (_DWORD)v19 == 2 )
        goto LABEL_86;
      v28 = sub_C1A2A0(*(_QWORD *)(a1 + 48), a2);
      v20 = v28;
      if ( (_DWORD)v28 == 2 )
        goto LABEL_101;
      if ( (_DWORD)v19 == 1 )
        goto LABEL_86;
      if ( (_DWORD)v28 != 1 )
        goto LABEL_50;
      sub_C19F20((__int64)&v75, *(_QWORD *)(a1 + 24), a2, 0, v29, v30);
      v79 = 64;
      v78 = nullptr;
      v80 = 0;
      v15 = sub_96A590((__int64 *)&v75, (__int64 *)&v78);
      if ( v79 > 0x40 && v78 )
        operator delete[](v78);
      if ( v15 )
      {
        if ( v76 > 0x40 && v75 )
          operator delete[](v75);
        goto LABEL_22;
      }
      if ( v76 > 0x40 && v75 )
        operator delete[](v75);
LABEL_50:
      v13 = v20;
      v14 = HIDWORD(v20);
      return (v14 << 32) | v13;
  }
}

