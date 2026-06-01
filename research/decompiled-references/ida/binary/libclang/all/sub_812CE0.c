__int64 __fastcall sub_812CE0(unsigned __int16 *a1, _QWORD *a2, _DWORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 **v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 *v23; // rcx
  char v24; // si
  __int64 v25; // rcx
  __int64 *i; // rax
  __int16 v27; // ax
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 **v32; // rax
  __int64 *v33; // rdx
  unsigned __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rdi
  __int64 *v37; // rax
  int v38; // eax
  _QWORD *v39; // rbx
  unsigned int v40; // ebp
  unsigned __int16 *v41; // rsi
  __int64 v42; // rdx
  unsigned __int16 v43; // ax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edx
  unsigned __int16 *v49; // rdx
  unsigned __int16 v50; // ax
  __int64 v51; // rax
  unsigned __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdi
  unsigned __int64 *v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __m128i v63; // xmm0
  unsigned __int8 v64; // al
  __int64 v65; // rdx
  int v66; // edx
  __int64 v67; // rbp
  unsigned int v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned __int16 v71; // ax
  char v72; // al
  __int64 v73; // rdi
  unsigned __int8 v74; // al
  unsigned __int64 *v75; // rax
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rax
  unsigned __int64 *v78; // rdx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // [rsp+8h] [rbp-50h]
  __int64 v84; // [rsp+8h] [rbp-50h]
  __int64 v85; // [rsp+8h] [rbp-50h]
  unsigned int v86; // [rsp+8h] [rbp-50h]
  void *v87; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v88; // [rsp+18h] [rbp-40h]

  while ( 2 )
  {
    while ( 2 )
    {
      if ( (a1[1] & 1) != 0 )
        return 0;
      v12 = *a1;
      LOWORD(v12) = v12 & 0x1FF;
      if ( (unsigned __int16)v12 > 0x58u )
      {
        if ( (unsigned __int16)v12 > 0x6Fu )
        {
          LOWORD(v12) = (v12 + 400) & 0x1FF;
          switch ( v12 )
          {
            case 0LL:
              a1 = (unsigned __int16 *)sub_8C4900(a1);
              continue;
            case 1LL:
              a1 = (unsigned __int16 *)sub_8C4680(a1);
              continue;
            case 2LL:
            case 3LL:
              v18 = sub_B0E910(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL));
              v19 = v18;
              if ( !v18 || (*(_BYTE *)(v18 + 29) & 1) == 0 )
                goto LABEL_57;
              v20 = (__int64 **)sub_79A2B0(v18);
              v21 = *v20;
              v22 = (unsigned __int64)&(*v20)[*((unsigned int *)v20 + 2)];
              if ( (unsigned __int64)v21 >= v22 )
              {
                if ( v21 == (__int64 *)v22 )
                {
LABEL_47:
                  v24 = *(_BYTE *)(v19 + 29);
                  goto LABEL_48;
                }
                while ( *(_WORD *)(*(_QWORD *)v22 + 32LL) != 388 )
                {
                  v22 += 8LL;
                  if ( v21 == (__int64 *)v22 )
                    goto LABEL_47;
                }
                v23 = v21;
              }
              else
              {
                v23 = v21;
                while ( *(_WORD *)(*v23 + 32) != 388 )
                {
                  if ( (__int64 *)v22 == ++v23 )
                    goto LABEL_47;
                }
              }
              v24 = *(_BYTE *)(v19 + 29);
              if ( v23 != (__int64 *)v22 )
              {
                v25 = *v21;
                for ( i = v21 + 1; *(_WORD *)(v25 + 32) != 388; ++i )
                  v25 = *i;
                if ( (*(_BYTE *)(v19 + 29) & 1) == 0 )
                {
LABEL_32:
                  if ( !(unsigned int)sub_75F770(v25) )
                  {
LABEL_33:
                    *a2 = a1;
                    *a3 = sub_AC6DA0(a1);
                    *a4 = sub_AC7B80(a1);
                    return 1;
                  }
LABEL_57:
                  v31 = *((_QWORD *)a1 + 2);
                  if ( !v31 || (*(_BYTE *)(v31 + 29) & 1) == 0 )
                    return 0;
                  v32 = (__int64 **)sub_79A2B0(v31);
                  v33 = *v32;
                  v34 = (unsigned __int64)&(*v32)[*((unsigned int *)v32 + 2)];
                  if ( (unsigned __int64)v33 >= v34 )
                  {
                    if ( v33 == (__int64 *)v34 )
                      return 0;
                    while ( *(_WORD *)(*(_QWORD *)v34 + 32LL) != 388 )
                    {
                      v34 += 8LL;
                      if ( v33 == (__int64 *)v34 )
                        return 0;
                    }
                    v35 = v33;
                  }
                  else
                  {
                    v35 = v33;
                    while ( *(_WORD *)(*v35 + 32) != 388 )
                    {
                      if ( (__int64 *)v34 == ++v35 )
                        return 0;
                    }
                  }
                  if ( v35 == (__int64 *)v34 )
                    return 0;
                  v36 = *v33;
                  if ( *(_WORD *)(*v33 + 32) != 388 )
                  {
                    v37 = v33 + 1;
                    do
                      v36 = *v37++;
                    while ( *(_WORD *)(v36 + 32) != 388 );
                  }
                  if ( (unsigned int)sub_75F770(v36) )
                    return 0;
                  *a2 = a1;
                  *a3 = sub_AC6DA0(a1);
                  *a4 = sub_AC7B80(a1);
                  v38 = *((_DWORD *)a1 + 8);
                  if ( v38 )
                  {
                    v39 = a1 + 24;
                    if ( (*a1 & 0x1FF) != 0x73 )
                      v39 = a1 + 20;
                    v40 = sub_AC7460(v39[v38 - 1]);
                    *a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(sub_AC6DA0(*v39)), _mm_cvtsi32_si128(v40)).m128i_u64[0];
                  }
                  return 1;
                }
LABEL_50:
                v83 = v25;
                v28 = sub_79A2B0(v19);
                v25 = v83;
                v29 = *v28;
                v30 = *v28 + 8LL * *((unsigned int *)v28 + 2);
                if ( v29 < v30 )
                {
                  while ( *(_WORD *)(*(_QWORD *)v29 + 32LL) != 387 )
                  {
                    v29 += 8LL;
                    if ( v30 == v29 )
                      goto LABEL_56;
                  }
                }
                else
                {
                  if ( v29 == v30 )
                    goto LABEL_56;
                  while ( *(_WORD *)(*(_QWORD *)v30 + 32LL) != 387 )
                  {
                    v30 += 8LL;
                    if ( v29 == v30 )
                      goto LABEL_56;
                  }
                }
                if ( v29 != v30 )
                  goto LABEL_33;
LABEL_56:
                if ( !v83 )
                  goto LABEL_57;
                goto LABEL_32;
              }
LABEL_48:
              if ( (v24 & 1) == 0 )
                goto LABEL_57;
              v25 = 0;
              goto LABEL_50;
            case 5LL:
LABEL_35:
              a1 = *((unsigned __int16 **)a1 + 3);
              continue;
            case 7LL:
              v27 = (a1[1] >> 3) & 0x3F;
              if ( ((a1[1] >> 3) & 0x3Fu) <= 0x14 )
              {
                if ( (unsigned __int8)v27 <= 0x12u )
                  goto LABEL_42;
                if ( (unsigned __int8)sub_812CE0(*((_QWORD *)a1 + 2), a2, a3, a4, a5, a6)
                  && (unsigned __int8)sub_812CE0(*((_QWORD *)a1 + 3), a2, a3, a4, a5, a6) )
                {
                  v27 = (a1[1] >> 3) & 0x3F;
LABEL_41:
                  if ( (unsigned int)(unsigned __int8)v27 - 21 > 0xA )
                  {
LABEL_42:
                    *a2 = a1;
                    *a3 = *((_DWORD *)a1 + 1);
                    *a4 = sub_AC7B80(*((_QWORD *)a1 + 2));
                    *a5 = sub_AC7B80(*((_QWORD *)a1 + 3));
                    return 1;
                  }
                }
                return 0;
              }
              if ( (_BYTE)v27 != 32 )
                goto LABEL_41;
              v41 = *((unsigned __int16 **)a1 + 3);
              if ( !v41 )
                BUG();
              v69 = *((_QWORD *)a1 + 3);
              while ( 2 )
              {
                v71 = *(_WORD *)v69 & 0x1FF;
                if ( v71 == 21 )
                  goto LABEL_181;
                if ( v71 <= 0x15u )
                {
                  if ( v71 == 4 )
                  {
                    if ( *(_BYTE *)(v69 + 2) >> 3 != 12 )
                      goto LABEL_85;
                    v70 = *(_QWORD *)(v69 + 16);
                  }
                  else
                  {
                    if ( v71 != 19 )
                      goto LABEL_85;
                    if ( (*(_BYTE *)(v69 + 3) & 1) == 0 )
                      goto LABEL_85;
                    if ( *(char *)(v69 + 2) >= 0 )
                      goto LABEL_85;
                    v70 = *(_QWORD *)(v69 + 16);
                    if ( !v70 )
                      goto LABEL_85;
                  }
                  goto LABEL_157;
                }
                if ( v71 == 58 )
                {
                  if ( (~*(_DWORD *)(v69 + 16) & 0x3FFF8000) == 0 )
                    goto LABEL_85;
                  v70 = *(_QWORD *)(v69
                                  + 8LL
                                  * (((*(_DWORD *)(v69 + 16) >> 15) & 0x7FFF)
                                   + (unsigned int)((*(_BYTE *)(v69 + 19) & 0x40) != 0))
                                  + 32);
                  goto LABEL_157;
                }
                if ( v71 == 78 )
                {
                  if ( ((**(_DWORD **)(v69 + 16) >> 14) & 0xC) != 0 )
                    goto LABEL_85;
                  if ( *(_BYTE *)(v69 + 48) )
LABEL_181:
                    v70 = *(_QWORD *)(v69 + 24);
                  else
                    v70 = *(_QWORD *)(v69 + 32);
LABEL_157:
                  if ( v70 == v69 )
                    goto LABEL_85;
                  v69 = v70;
                  continue;
                }
                break;
              }
              if ( v71 != 53 )
                goto LABEL_85;
              v81 = *(unsigned int *)(v69 + 24);
              if ( (unsigned __int64)(v81 + 63) <= 0x7F )
              {
                v87 = *(void **)(v69 + 16);
                goto LABEL_216;
              }
              sub_2585D40(&v87, v81, (unsigned __int64)(v81 + 63) >> 6, *(_QWORD *)(v69 + 16));
              if ( v88 <= 0x40 )
              {
LABEL_216:
                if ( v87 )
                  goto LABEL_217;
                return 0;
              }
              v86 = v88;
              if ( v86 - (unsigned int)sub_2587400(&v87) <= 0x40 )
              {
                if ( *(_QWORD *)v87 )
                {
LABEL_233:
                  operator delete[](v87);
                  goto LABEL_217;
                }
                if ( v87 )
                  operator delete[](v87);
                return 0;
              }
              if ( v87 )
                goto LABEL_233;
LABEL_217:
              v41 = *((unsigned __int16 **)a1 + 3);
LABEL_85:
              a1 = v41;
              continue;
            case 8LL:
            case 9LL:
              return 0;
            case 12LL:
              goto LABEL_42;
            case 17LL:
              if ( !(unsigned __int8)sub_812CE0(*((_QWORD *)a1 + 4), a2, a3, a4, a5, a6) )
                return 0;
LABEL_87:
              a1 = *((unsigned __int16 **)a1 + 5);
              continue;
            case 18LL:
              a1 = *((unsigned __int16 **)a1 + 6);
              continue;
            default:
              goto LABEL_17;
          }
        }
        if ( (_WORD)v12 != 89 )
        {
          v13 = 1LL << ((unsigned __int8)v12 - 90);
          if ( (v13 & 0x220040) != 0 )
            return 0;
          if ( (v13 & 0xB) != 0 )
            goto LABEL_137;
          if ( (_WORD)v12 == 92 )
          {
            v14 = a1[2] & 0x3F;
            if ( v14 <= 0x11u )
            {
              if ( v14 <= 0xFu )
                goto LABEL_137;
            }
            else if ( ((v14 + 34) & 0x3Fu) > 3 )
            {
              goto LABEL_137;
            }
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_80ED30((__int64)a1, a6)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 42 > 1 )
            {
              v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_80ED30((__int64)a1, a6) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v15 + 16) != 13 || ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1B2 )
              {
                *a2 = a1;
                *a3 = *((_DWORD *)a1 + 5);
                *a4 = *((_QWORD *)a1 + 3);
                return 1;
              }
            }
LABEL_137:
            v84 = sub_80F4C0(*(_QWORD *)((char *)a1 + *((unsigned __int8 *)a1 + 3)));
            if ( !v84 )
              return 0;
            sub_80F620((__int64)a1, a6);
            if ( v65 )
              goto LABEL_139;
            if ( (*(_BYTE *)(v84 + 29) & 1) == 0 )
              return 0;
            v75 = sub_79A2B0(v84);
            v76 = *v75;
            v77 = *v75 + 8LL * *((unsigned int *)v75 + 2);
            if ( v76 < v77 )
            {
              while ( *(_WORD *)(*(_QWORD *)v76 + 32LL) != 329 )
              {
                v76 += 8LL;
                if ( v77 == v76 )
                  goto LABEL_193;
              }
            }
            else
            {
              if ( v76 == v77 )
                goto LABEL_193;
              while ( *(_WORD *)(*(_QWORD *)v77 + 32LL) != 329 )
              {
                v77 += 8LL;
                if ( v76 == v77 )
                  goto LABEL_193;
              }
            }
            if ( v76 != v77 )
            {
LABEL_139:
              *a2 = a1;
              *a3 = sub_AC6DA0(*(_QWORD *)((char *)a1 + *((unsigned __int8 *)a1 + 3)));
              *a4 = sub_AC7B80(*(_QWORD *)((char *)a1 + *((unsigned __int8 *)a1 + 3)));
              v66 = *((_DWORD *)a1 + 4);
              if ( v66 )
              {
                v67 = *((unsigned __int8 *)a1 + 3) + 8LL * ((a1[1] & 8) != 0) + 8;
                v68 = sub_AC7460(*(_QWORD *)((char *)&a1[4 * (v66 - 1)] + v67));
                *a5 = _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(sub_AC6DA0(*(_QWORD *)((char *)a1 + v67))),
                        _mm_cvtsi32_si128(v68)).m128i_u64[0];
              }
              return 1;
            }
LABEL_193:
            if ( (*(_BYTE *)(v84 + 29) & 1) == 0 )
              return 0;
            v78 = sub_79A2B0(v84);
            v79 = *v78;
            v80 = *v78 + 8LL * *((unsigned int *)v78 + 2);
            if ( v79 < v80 )
            {
              while ( *(_WORD *)(*(_QWORD *)v79 + 32LL) != 175 )
              {
                v79 += 8LL;
                if ( v80 == v79 )
                  return 0;
              }
            }
            else
            {
              if ( v79 == v80 )
                return 0;
              while ( *(_WORD *)(*(_QWORD *)v80 + 32LL) != 175 )
              {
                v80 += 8LL;
                if ( v79 == v80 )
                  return 0;
              }
            }
            if ( v79 == v80 )
              return 0;
            goto LABEL_139;
          }
        }
LABEL_17:
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B2 )
          return 0;
LABEL_19:
        *a2 = a1;
        *a3 = sub_8124E0((__int64)a1);
        *a4 = sub_AC7B80(a1);
        return 1;
      }
      break;
    }
    if ( (unsigned __int16)v12 <= 2u )
      goto LABEL_17;
    LOWORD(v12) = (v12 + 509) & 0x1FF;
    switch ( v12 )
    {
      case 0LL:
      case 14LL:
      case 22LL:
        return 0;
      case 1LL:
        v64 = *((_BYTE *)a1 + 2) >> 3;
        if ( v64 == 12 )
          goto LABEL_72;
        if ( v64 > 0xCu )
        {
          if ( v64 == 13 )
            return 0;
        }
        else if ( v64 <= 3u
               || ((v64 + 22) & 0x1Fu) <= 1
               && (((unsigned __int8)byte_8[*(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL) & 0xFFFFFFFFFFFFFFF0LL]
                  | *(_BYTE *)(*((_QWORD *)a1 + 2) + 8LL))
                 & 4) != 0 )
        {
          return 0;
        }
        *a2 = a1;
        *a3 = *((_DWORD *)a1 + 1);
        *a4 = sub_AC7B80(*((_QWORD *)a1 + 2));
        return 1;
      case 8LL:
        v47 = *((_QWORD *)a1 + 2);
        v48 = *(_DWORD *)(v47 + 4);
        if ( !v48 )
          goto LABEL_93;
        v49 = *(unsigned __int16 **)(v47 + 8LL * (unsigned int)(v48 - 1) + 16);
        v50 = *v49 & 0x1FF;
        if ( v50 > 2u )
        {
          if ( v50 > 0x82u )
            goto LABEL_93;
        }
        else if ( v50 != 2 || (v49 = *((unsigned __int16 **)v49 + 2), ((*v49 + 509) & 0x1FFu) > 0x7F) )
        {
LABEL_93:
          v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v51 + 16) == 13 && ((*(_WORD *)(v51 + 18) >> 3) & 0x1FF) == 0x1B2 )
            return 0;
          *a2 = a1;
          *a3 = *((_DWORD *)a1 + 6);
          *a4 = sub_AC7B80(a1);
          return 1;
        }
        goto LABEL_167;
      case 15LL:
        v54 = *((_QWORD *)a1 + 2);
        v55 = *(_WORD *)v54 & 0x1FF;
        if ( ((v55 - 29) & 0xFFFB) == 0 )
          goto LABEL_19;
        if ( v55 <= 0x76u )
        {
          if ( v55 == 4 && *(_BYTE *)(v54 + 2) <= 0x1Fu )
            return 0;
        }
        else if ( v55 <= 0x78u && ((*(_WORD *)(v54 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
        {
          return 0;
        }
        v56 = a1[3];
        if ( !(_WORD)v56 )
          return 0;
        a1 = *(unsigned __int16 **)&a1[4 * v56 + 8];
        if ( !a1 )
          return 0;
        continue;
      case 18LL:
        goto LABEL_35;
      case 24LL:
      case 58LL:
LABEL_72:
        a1 = *((unsigned __int16 **)a1 + 2);
        continue;
      case 26LL:
      case 30LL:
        goto LABEL_19;
      case 31LL:
        if ( (*(_BYTE *)(*(_QWORD *)(a6 + 2160) + 107LL) & 4) != 0 && (a1[13] & 0xFD) == 1 )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v57 + 16) != 13 || ((*(_WORD *)(v57 + 18) >> 3) & 0x1FF) != 0x1B2 )
          {
            if ( (*((_BYTE *)a1 + 27) & 1) != 0 )
            {
              v58 = sub_7B6F20(*((_QWORD *)a1 + 2));
            }
            else
            {
              v82 = sub_8C9100(a1);
              v58 = sub_C87900(v82);
            }
            if ( v58 == 3 )
              goto LABEL_19;
          }
        }
        if ( (*((_BYTE *)a1 + 27) & 1) == 0 )
          return 0;
        v59 = *((_QWORD *)a1 + 2);
        if ( !v59 || (*(_BYTE *)(v59 + 29) & 1) == 0 )
          return 0;
        v60 = sub_79A2B0(v59);
        v61 = *v60;
        v62 = *v60 + 8LL * *((unsigned int *)v60 + 2);
        if ( v61 < v62 )
        {
          while ( *(_WORD *)(*(_QWORD *)v61 + 32LL) != 388 )
          {
            v61 += 8LL;
            if ( v62 == v61 )
              return 0;
          }
        }
        else
        {
          if ( v61 == v62 )
            return 0;
          while ( *(_WORD *)(*(_QWORD *)v62 + 32LL) != 388 )
          {
            v62 += 8LL;
            if ( v61 == v62 )
              return 0;
          }
        }
        if ( v61 == v62 )
          return 0;
        *a2 = a1;
        *a3 = sub_8124E0((__int64)a1);
        return 1;
      case 44LL:
        *a2 = a1;
        v63 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 10));
        *a3 = _mm_cvtsi128_si32(v63);
        *a4 = _mm_shuffle_epi32(v63, 224).m128i_u64[0];
        *a5 = sub_AC7B80(*((_QWORD *)a1 + 2));
        return 1;
      case 46LL:
        v46 = *((_QWORD *)a1 + 2);
        a1 = (unsigned __int16 *)(v46 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v46 & 4) != 0 )
          goto LABEL_87;
        continue;
      case 55LL:
        a1 = *(unsigned __int16 **)&a1[4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)
                                     + 16
                                     + 4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)];
        continue;
      case 70LL:
      case 71LL:
        a1 = *((unsigned __int16 **)a1 + 7);
        continue;
      case 75LL:
        if ( *((_BYTE *)a1 + 48) )
          goto LABEL_35;
        a1 = *((unsigned __int16 **)a1 + 4);
        continue;
      case 77LL:
        v52 = a1[1];
        a1 = *((unsigned __int16 **)a1 + 2);
        if ( ((v52 >> 3) & 0x7F) != 4 )
          continue;
        v53 = *((_QWORD *)a1 + 1);
        if ( (v53 & 4) == 0 && (byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          continue;
        return 0;
      case 84LL:
      case 85LL:
        v41 = *((unsigned __int16 **)a1 + 2);
        if ( !v41 )
        {
          v42 = 0;
          goto LABEL_83;
        }
        v42 = *((_QWORD *)a1 + 2);
        while ( 2 )
        {
          v43 = *(_WORD *)v42 & 0x1FF;
          if ( v43 == 21 )
            goto LABEL_141;
          if ( v43 > 0x15u )
          {
            if ( v43 == 58 )
            {
              if ( (~*(_DWORD *)(v42 + 16) & 0x3FFF8000) == 0 )
                break;
              v44 = *(_QWORD *)(v42
                              + 8LL
                              * (((*(_DWORD *)(v42 + 16) >> 15) & 0x7FFF)
                               + (unsigned int)((*(_BYTE *)(v42 + 19) & 0x40) != 0))
                              + 32);
              goto LABEL_142;
            }
            if ( v43 == 78 && ((**(_DWORD **)(v42 + 16) >> 14) & 0xC) == 0 )
            {
              if ( *(_BYTE *)(v42 + 48) )
LABEL_141:
                v44 = *(_QWORD *)(v42 + 24);
              else
                v44 = *(_QWORD *)(v42 + 32);
LABEL_142:
              if ( v44 == v42 )
                break;
              v42 = v44;
              continue;
            }
          }
          else
          {
            if ( v43 == 4 )
            {
              if ( *(_BYTE *)(v42 + 2) >> 3 != 12 )
                break;
              v44 = *(_QWORD *)(v42 + 16);
              goto LABEL_142;
            }
            if ( v43 == 19 && (*(_BYTE *)(v42 + 3) & 1) != 0 && *(char *)(v42 + 2) < 0 )
            {
              v44 = *(_QWORD *)(v42 + 16);
              if ( v44 )
                goto LABEL_142;
            }
          }
          break;
        }
LABEL_83:
        v45 = (a1[1] >> 3) & 0x7F;
        if ( v45 == 24 )
        {
          v72 = *(_BYTE *)(*(_QWORD *)(a6 + 2160) + 1LL);
          if ( (v72 & 8) == 0 )
            return 0;
          if ( (v72 & 0x10) != 0 )
            return 0;
          v85 = v42;
          if ( !sub_80E9D0(v42) )
            return 0;
          v49 = (unsigned __int16 *)v85;
          if ( (*(_WORD *)v85 & 0x1FF) == 0x48 )
          {
            v73 = *(_QWORD *)(v85 + 16);
            if ( (*(_BYTE *)(v73 + 28) & 0x7Fu) - 38 <= 6 )
            {
              v74 = sub_78CBC0(v73);
              v49 = (unsigned __int16 *)v85;
              if ( v74 <= 3u )
                return 0;
            }
          }
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 1)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) <= 4u )
            return 0;
LABEL_167:
          a1 = v49;
          continue;
        }
        if ( v45 == 20 )
          goto LABEL_85;
        if ( v45 )
        {
          *a2 = a1;
          if ( (*a1 & 0x1FF) == 0x57 )
            *a3 = sub_8C4080(a1);
          else
            *a3 = *((_DWORD *)a1 + 8);
          *a4 = sub_AC7B80(*((_QWORD *)a1 + 2));
          return 1;
        }
        return 0;
      default:
        goto LABEL_17;
    }
  }
}

