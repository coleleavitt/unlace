__int64 __fastcall sub_AEF2D0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int16 v4; // ax
  __int64 v7; // rdx
  _QWORD **v8; // r12
  _QWORD **v9; // rbx
  _QWORD **v10; // rbp
  _QWORD **v11; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned __int16 v32; // dx
  _QWORD **v33; // r15
  unsigned __int16 v34; // cx
  _QWORD **v35; // rsi
  _QWORD **v36; // rbp
  _QWORD **v37; // r14
  _QWORD **v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  void *v41; // rsi
  void *v42; // rcx
  __int64 v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned int v49; // eax
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rsi
  void *v54; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+8h] [rbp-70h]
  void *v56; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+28h] [rbp-50h]

  v4 = *(_WORD *)a2 & 0x1FF;
  if ( v4 == (*(_WORD *)a3 & 0x1FF) )
  {
    switch ( v4 )
    {
      case 0:
      case 1:
      case 2:
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
      case 243:
      case 244:
      case 245:
      case 246:
      case 247:
      case 248:
      case 250:
      case 251:
      case 252:
      case 253:
      case 254:
      case 255:
      case 256:
        return 1;
      case 3:
      case 29:
      case 77:
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 4:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        LOBYTE(v3) = *(_BYTE *)(a2 + 2) >> 3 == *(_BYTE *)(a3 + 2) >> 3;
        return v3;
      case 5:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || ((*(_BYTE *)(a2 + 2) >> 3) & 0xF) != ((*(_BYTE *)(a3 + 2) >> 3) & 0xF) )
        {
          return 0;
        }
        v50 = *(__int64 **)(a3 + 16);
        if ( *(char *)(a3 + 2) < 0 )
          v51 = *v50;
        else
          v51 = v50[1];
        v52 = *(__int64 **)(a2 + 16);
        if ( *(char *)(a2 + 2) < 0 )
          v53 = *v52;
        else
          v53 = v52[1];
        return (unsigned int)sub_AF1C90(*a1, v53, v51);
      case 6:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || (unsigned __int8)(*(_WORD *)(a3 + 2) >> 3) != (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3) )
        {
          return 0;
        }
        v7 = *(unsigned int *)(a3 + 4);
        v8 = (_QWORD **)(a3 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a3) >> 3) ^ 1) & 1) + 24);
        v9 = (_QWORD **)(a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
        v10 = &v8[v7];
        v11 = &v9[*(unsigned int *)(a2 + 4)];
        while ( v11 != v9 )
        {
          if ( v10 == v8 || !(unsigned __int8)sub_AF1C90(*a1, **v9, **v8) )
            return 0;
          ++v8;
          ++v9;
        }
        return v10 == v8;
      case 7:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        sub_C95B30(&v54, a3);
        sub_C95B30(&v56, a2);
        return (unsigned int)sub_AF1940(*a1, &v56, &v54);
      case 8:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AEDD20(
                                 *a1,
                                 *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL,
                                 *(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF8LL)
          || (*(_WORD *)(a2 + 32) & 0x7FFF) != (*(_WORD *)(a3 + 32) & 0x7FFF) )
        {
          return 0;
        }
        LOBYTE(v3) = ((*(_DWORD *)(a3 + 32) >> 15) & 0x7FFF) == ((*(_DWORD *)(a2 + 32) >> 15) & 0x7FFF);
        return v3;
      case 9:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v49 = *(_DWORD *)(a3 + 16) * ((*(_WORD *)(a3 + 2) >> 6) & 7);
        if ( v49 != *(_DWORD *)(a2 + 16) * ((*(_WORD *)(a2 + 2) >> 6) & 7) )
          return 0;
        if ( !v49 )
          return 1;
        LOBYTE(v3) = memcmp(
                       (const void *)(a2 + 4LL * *(unsigned int *)(a2 + 4) + 20),
                       (const void *)(a3 + 4LL * *(unsigned int *)(a3 + 4) + 20),
                       v49) == 0;
        return v3;
      case 10:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        LOBYTE(v3) = *(_DWORD *)(a2 + 4) == *(_DWORD *)(a3 + 4);
        return v3;
      case 11:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        LOBYTE(v3) = ((*(_BYTE *)(a2 + 2) >> 3) & 7) == ((*(_BYTE *)(a3 + 2) >> 3) & 7);
        return v3;
      case 12:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 13:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 14:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 15:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 16:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 17:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 18:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 19:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 20:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 21:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 22:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 23:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF66F0(a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF66F0(a1, a2, a3);
      case 24:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF66F0(a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF66F0(a1, a2, a3);
      case 25:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 26:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 27:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 28:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 30:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 31:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 32:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 33:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 34:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 35:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 36:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 37:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 38:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 39:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 40:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 41:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 42:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 43:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 44:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 45:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 46:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v45 = *a1;
        if ( (*(_QWORD *)a3 & 0x200000LL) != 0 )
        {
          v46 = *(_QWORD *)(a3 + 16LL * ((*(_QWORD *)a3 & 0x100000LL) != 0) + 48);
        }
        else
        {
          v46 = (*(_BYTE *)(*(_QWORD *)(a3 + 24) + 29LL) >> 5) & 3 | *(_QWORD *)(a3 + 24);
          v56 = (void *)v46;
        }
        v54 = (void *)v46;
        v47 = v46 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
          v48 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
        else
          v48 = (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 29LL) >> 5) & 3 | *(_QWORD *)(a2 + 24);
        v56 = (void *)v48;
        return (unsigned int)sub_AEDD20(v45, v48 & 0xFFFFFFFFFFFFFFF8LL, v47);
      case 47:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 48:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 49:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 50:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 51:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 52:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v39 = *(unsigned int *)(a3 + 24);
        v40 = (unsigned __int64)(v39 + 63) >> 6;
        if ( v40 > 1 )
        {
          sub_2205610(&v54, (unsigned int)v39, v40, *(_QWORD *)(a3 + 16));
        }
        else
        {
          v41 = *(void **)(a3 + 16);
          v55 = *(_DWORD *)(a3 + 24);
          if ( (unsigned int)v39 > 0x40 )
            sub_2205470(&v54, v41, 0);
          else
            v54 = v41;
        }
        v42 = *(void **)(a2 + 16);
        v43 = *(unsigned int *)(a2 + 24);
        v44 = (unsigned __int64)(v43 + 63) >> 6;
        if ( v44 > 1 )
        {
          sub_2205610(&v56, v43, v44, v42);
        }
        else
        {
          v57 = *(_DWORD *)(a2 + 24);
          if ( (unsigned int)v43 <= 0x40 )
          {
            v56 = v42;
LABEL_247:
            LOBYTE(v3) = v56 == v54;
            goto LABEL_248;
          }
          sub_2205470(&v56, v42, 0);
        }
        if ( v57 <= 0x40 )
          goto LABEL_247;
        v3 = sub_2205D70(&v56, &v54);
        if ( v56 )
          operator delete[](v56);
LABEL_248:
        if ( v55 > 0x40 && v54 )
          operator delete[](v54);
        break;
      case 53:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 54:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 55:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 56:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 57:
        v3 = sub_AF36D0(*a1, a2, a3);
        if ( !(_BYTE)v3 )
          return 0;
        v32 = *(_WORD *)(a3 + 16) & 0x7FFF;
        v33 = (_QWORD **)(a3
                        + 8LL * (unsigned __int16)(v32 + ((*(_BYTE *)(a3 + 19) & 0x40) != 0))
                        + 8LL * ((*(_BYTE *)(a3 + 19) & 0x40) == 0)
                        + 32);
        v34 = *(_WORD *)(a2 + 16) & 0x7FFF;
        v35 = (_QWORD **)(a2
                        + 8LL * (unsigned __int16)(v34 + ((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                        + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0)
                        + 32);
        v36 = &v33[v32];
        v37 = &v35[v34];
        v38 = v35;
        while ( 2 )
        {
          if ( v37 != v38 )
          {
            if ( v36 != v33 && (unsigned __int8)sub_AF1C90(*a1, **v38, **v33) )
            {
              ++v33;
              ++v38;
              continue;
            }
            return 0;
          }
          break;
        }
        if ( v36 != v33 )
          return 0;
        return v3;
      case 58:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 59:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 60:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 61:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 62:
        return (unsigned int)sub_AF63D0(a1, a2, a3);
      case 63:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 64:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 65:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || (*(_DWORD *)(a2 + 4) & 0x7FFFFFFF) != (*(_DWORD *)(a3 + 4) & 0x7FFFFFFF) )
        {
          return 0;
        }
        LOBYTE(v3) = *(__int64 *)a2 < 0 == *(__int64 *)a3 < 0;
        return v3;
      case 66:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 67:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 68:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 69:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF2F40(*a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 32)) )
        {
          return 0;
        }
        return (unsigned int)sub_AF31B0(*a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
      case 70:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 71:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v30 = *(_QWORD *)(a2 + 16);
        v31 = *(_QWORD *)(a3 + 16);
        if ( !v30 || !v31 )
          return 0;
        return (unsigned int)sub_AEDD20(*a1, v30, v31);
      case 72:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 73:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 74:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 75:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 76:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 78:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || *(_DWORD *)(a2 + 16) != *(_DWORD *)(a3 + 16) )
          return 0;
        LOBYTE(v3) = ((*(_BYTE *)(a2 + 2) >> 3) & 7) == ((*(_BYTE *)(a3 + 2) >> 3) & 7);
        return v3;
      case 79:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF1C90(*a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a3 + 8));
      case 80:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 81:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 82:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 83:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 84:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 85:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 86:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 87:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 88:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
        {
          return 0;
        }
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 89:
        if ( !(unsigned __int8)sub_AF1C90(*a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a3 + 8)) )
          return 0;
        v22 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v23 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v22 != 0) != (v23 != 0) )
          return 0;
        if ( v22 )
          return (unsigned int)sub_AEDD20(*a1, v22, v23);
        return 1;
      case 90:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v28 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v29 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v28 != 0) != (v29 != 0) || v28 && !(unsigned __int8)sub_AEDD20(*a1, v28, v29) )
          return 0;
        v22 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v23 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v22 != 0) != (v23 != 0) )
          return 0;
        if ( v22 )
          return (unsigned int)sub_AEDD20(*a1, v22, v23);
        return 1;
      case 91:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v26 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v27 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v26 != 0) != (v27 != 0) || v26 && !(unsigned __int8)sub_AEDD20(*a1, v26, v27) )
          return 0;
        v22 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v23 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v22 != 0) != (v23 != 0) )
          return 0;
        if ( v22 )
          return (unsigned int)sub_AEDD20(*a1, v22, v23);
        return 1;
      case 92:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v24 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v25 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v24 != 0) != (v25 != 0) || v24 && !(unsigned __int8)sub_AEDD20(*a1, v24, v25) )
          return 0;
        v22 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v23 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v22 != 0) != (v23 != 0) )
          return 0;
        if ( v22 )
          return (unsigned int)sub_AEDD20(*a1, v22, v23);
        return 1;
      case 93:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        v20 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v21 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v20 != 0) != (v21 != 0) || v20 && !(unsigned __int8)sub_AEDD20(*a1, v20, v21) )
          return 0;
        v22 = sub_BFBC70(*(_QWORD *)(a2 + 32));
        v23 = sub_BFBC70(*(_QWORD *)(a3 + 32));
        if ( (v22 != 0) != (v23 != 0) )
          return 0;
        if ( v22 )
          return (unsigned int)sub_AEDD20(*a1, v22, v23);
        else
          return 1;
      case 94:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 95:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 96:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 97:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 98:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 99:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 100:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 101:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 102:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 103:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 104:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 105:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 106:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 107:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 108:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 109:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3)
          || !(unsigned __int8)sub_AF2F40(*a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48)) )
        {
          return 0;
        }
        return (unsigned int)sub_AF1C90(*a1, *(_QWORD *)(a2 + 24), *(_QWORD *)(a3 + 24));
      case 110:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 111:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 112:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 113:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 114:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 115:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        LOBYTE(v3) = ((*(_QWORD *)a2 & 0x80000LL) != 0) == ((*(_QWORD *)a3 & 0x80000LL) != 0);
        return v3;
      case 116:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 117:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 118:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        LOBYTE(v3) = ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == ((*(_WORD *)(a3 + 2) >> 3) & 0x3F);
        return v3;
      case 119:
        return (unsigned __int8)sub_AF36D0(*a1, a2, a3)
            && ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == ((*(_WORD *)(a3 + 2) >> 3) & 0x3F);
      case 120:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        LOBYTE(v3) = *(_DWORD *)(a2 + 84) == *(_DWORD *)(a3 + 84);
        return v3;
      case 121:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 122:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 123:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 124:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 125:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 126:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 127:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AEDD20(*a1, *(_QWORD *)(a2 + 24), *(_QWORD *)(a3 + 24));
      case 128:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 129:
        if ( !(unsigned __int8)sub_AF36D0(*a1, a2, a3) || !(unsigned __int8)sub_AF36D0(*a1, a2, a3) )
          return 0;
        return (unsigned int)sub_AF36D0(*a1, a2, a3);
      case 242:
        v13 = *(_QWORD *)(a2 + 8);
        v14 = *(_QWORD *)(a3 + 8);
        if ( v13 && v14 )
        {
          v15 = *(_QWORD *)(v13 + 40);
          v16 = *(_QWORD *)(v14 + 40);
          v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v15 & 7) != 0 )
            v17 = 0;
          if ( (v16 & 7) != 0 )
          {
            v18 = 0;
          }
          else
          {
            v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v17 && v18 )
            {
              LOBYTE(v19) = sub_AEB2F0(v17, v18);
              return v19;
            }
          }
          LOBYTE(v3) = v18 == v17;
        }
        else
        {
          LOBYTE(v3) = v13 == v14;
        }
        return v3;
      case 249:
        LOBYTE(v3) = *(_DWORD *)(a3 + 4) == *(_DWORD *)(a2 + 4);
        return v3;
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
