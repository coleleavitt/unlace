__int64 __fastcall sub_C9C360(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  char v7; // al
  int v8; // edx
  __int64 *v9; // rbp
  __int64 *v10; // rbp
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  __int64 *v13; // r15
  unsigned int v14; // r14d
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r12
  char v18; // al
  int v19; // edx
  _BYTE *v20; // r9
  unsigned __int16 v21; // ax
  _DWORD *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  __int64 *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // r14
  char v32; // dl
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 *v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  int v38; // edx
  __int64 *v39; // rbp
  __int64 v40; // rdx
  __int64 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  _DWORD *v53; // rax
  __int64 v54; // rax
  _DWORD *v55; // rax
  __int64 v56; // rax
  int v57; // edx
  __int64 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *v62; // rax
  __int64 v63; // rdx
  _DWORD *v64; // kr08_8
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  _DWORD *v68; // rdx
  __int64 v69; // rdx
  _DWORD *v70; // rdx
  _DWORD *v71; // rdx
  __int64 v72; // rdx
  _DWORD *v73; // rdx
  __int64 v74; // rdx
  _DWORD *v75; // rdx
  __int64 v76; // rbx
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 i; // [rsp+8h] [rbp-210h]
  unsigned __int64 v81; // [rsp+20h] [rbp-1F8h]
  _BYTE *v82; // [rsp+28h] [rbp-1F0h]
  __int64 v83; // [rsp+30h] [rbp-1E8h]
  __int64 *v85; // [rsp+40h] [rbp-1D8h]
  __int64 v86; // [rsp+48h] [rbp-1D0h]
  _BYTE v87[128]; // [rsp+50h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-148h]
  __int64 v89; // [rsp+D8h] [rbp-140h]
  __int64 v90; // [rsp+E0h] [rbp-138h] BYREF
  int v91; // [rsp+E8h] [rbp-130h]

  v2 = *(_QWORD *)(a1 + 72);
  v81 = a1;
  v85 = (__int64 *)v87;
  v86 = 0x1000000000LL;
  if ( !v2 )
    return 0;
  v3 = *(_BYTE *)(v2 + 3) >> 6;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
LABEL_4:
      if ( v3 == 2 )
        v4 = (unsigned int)(*(_DWORD *)(v2 + 4) - 1);
      else
        v4 = *(unsigned int *)(v2 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v2 = *(_QWORD *)(v2 + 16);
      v3 = *(_BYTE *)(v2 + 3) >> 6;
    }
    while ( !v3 );
    if ( v3 != 1 )
      goto LABEL_4;
  }
  v4 = (unsigned int)(*(_DWORD *)(v2 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v4 )
    return 0;
  v83 = v4;
  for ( i = 0; i != v83; ++i )
  {
    v5 = *(_QWORD *)v81;
    if ( (*(_BYTE *)(v81 + 123) & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 864);
      goto LABEL_10;
    }
    v56 = *(_QWORD *)(v81 + 72);
    v57 = 17;
    while ( 1 )
    {
      a1 = *(unsigned __int8 *)(v56 + 3);
      LOBYTE(a1) = (unsigned __int8)a1 >> 6;
      if ( *(char *)(v56 + 3) < 0 )
      {
        if ( (_BYTE)a1 != 2 )
        {
          v5 = i;
          v58 = (__int64 *)(*(_QWORD *)(v56 + 16) + 8 * i);
          goto LABEL_118;
        }
        goto LABEL_120;
      }
      if ( *(_DWORD *)(v56 + 4) == (_DWORD)i )
        break;
LABEL_120:
      v56 = *(_QWORD *)(v56 + 16);
      if ( !--v57 )
      {
        a1 = v5 + 616;
        sub_233F80((__int64 *)(v5 + 616), (_DWORD *)(v81 + 72));
        v5 = i;
        v58 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v81 + 72) + 16LL) + 8 * i);
        goto LABEL_118;
      }
    }
    v58 = (__int64 *)(v56 + 8);
LABEL_118:
    v6 = *v58;
LABEL_10:
    if ( *(_DWORD *)(v6 + 8) <= 1u )
    {
LABEL_15:
      v10 = &v90;
      v90 = v6;
      ptr = &v90;
      v91 = 0;
      v89 = 0x1000000001LL;
      LODWORD(v11) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = *(_WORD *)(v6 + 4);
          v13 = &v10[2 * (unsigned int)v11];
          if ( v12 == 2 )
            break;
          if ( v12 > 2u )
          {
            sub_1872CE0("");
            sub_1873130(114, 100);
          }
          if ( v12 )
            ((void (__noreturn *)(void))sub_161D70)();
          v14 = *(_DWORD *)(v6 + 24);
          v15 = *((_DWORD *)v13 + 2);
          if ( v15 < v14 )
          {
            while ( 1 )
            {
              v16 = v15++;
              v17 = *(_QWORD *)(v6 + 8 * v16 + 32);
              *((_DWORD *)v13 + 2) = v15;
              if ( *(_DWORD *)(v17 + 8) > 1u )
              {
                v18 = *(_BYTE *)(v17 + 6);
                if ( (v18 & 1) != 0 )
                  goto LABEL_32;
                *(_BYTE *)(v17 + 6) = v18 | 1;
                v19 = v86;
                if ( (unsigned int)v86 >= HIDWORD(v86) )
                {
                  v42 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v86)));
                  v19 = v86;
                  a1 = (unsigned __int64)v85;
                  v20 = (_BYTE *)v42;
                  if ( (_DWORD)v86 )
                  {
                    if ( (unsigned int)(v86 - 1) <= 2 || (__int64 *)v42 == v85 + 1 )
                    {
                      v59 = 0;
                      do
                      {
                        *(_QWORD *)&v20[v59 * 8] = v85[v59];
                        ++v59;
                      }
                      while ( (unsigned int)v86 != v59 );
                    }
                    else
                    {
                      v43 = 0;
                      do
                      {
                        *(__m128i *)&v20[v43 * 8] = _mm_loadu_si128((const __m128i *)&v85[v43]);
                        v43 += 2;
                      }
                      while ( 2LL * ((unsigned int)v86 >> 1) != v43 );
                      if ( (v86 & 1) != 0 )
                        *(_QWORD *)&v20[8 * (v86 & 0xFFFFFFFE)] = v85[(unsigned int)v86 & 0xFFFFFFFE];
                    }
                  }
                  if ( v85 != (__int64 *)v87 && v85 )
                  {
                    v82 = v20;
                    sub_186B220(v85);
                    v19 = v86;
                    v20 = v82;
                  }
                  v85 = (__int64 *)v20;
                  HIDWORD(v86) *= 2;
                }
                else
                {
                  v20 = v85;
                }
                *(_QWORD *)&v20[8 * v19] = v17;
                LODWORD(v86) = v19 + 1;
              }
              v21 = *(_WORD *)(v17 + 4);
              if ( v21 == 2 )
              {
                v40 = (unsigned int)v89;
                if ( (unsigned int)v89 >= HIDWORD(v89) )
                {
                  v49 = (unsigned int)(2 * HIDWORD(v89));
                  v10 = (__int64 *)sub_186B270(16 * v49);
                  a1 = (unsigned __int64)ptr;
                  v50 = 0;
                  v40 = (unsigned int)v89;
                  v51 = 16LL * (unsigned int)v89;
                  if ( (_DWORD)v89 )
                  {
                    do
                    {
                      *(__m128i *)&v10[v50 / 8] = _mm_loadu_si128((const __m128i *)(a1 + v50));
                      v50 += 16LL;
                    }
                    while ( v51 != v50 );
                  }
                  if ( (__int64 *)a1 != &v90 && a1 )
                  {
                    sub_186B220((void *)a1);
                    v40 = (unsigned int)v89;
                  }
                  ptr = v10;
                  HIDWORD(v89) = v49;
                }
                else
                {
                  v10 = (__int64 *)ptr;
                }
                v41 = &v10[2 * v40];
                *v41 = v17;
                *((_DWORD *)v41 + 2) = 0;
                v36 = (unsigned int)v89;
                v37 = v89 + 1;
                goto LABEL_61;
              }
              if ( v21 > 2u )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( v21 )
                ((void (__noreturn *)(void))sub_161D70)();
              if ( *(_DWORD *)(v17 + 24) )
              {
                v61 = (unsigned int)v89;
                if ( (unsigned int)v89 >= HIDWORD(v89) )
                {
                  v76 = (unsigned int)(2 * HIDWORD(v89));
                  v10 = (__int64 *)sub_186B270(16 * v76);
                  a1 = (unsigned __int64)ptr;
                  v77 = 0;
                  v61 = (unsigned int)v89;
                  v78 = 16LL * (unsigned int)v89;
                  if ( (_DWORD)v89 )
                  {
                    do
                    {
                      *(__m128i *)&v10[v77 / 8] = _mm_loadu_si128((const __m128i *)(a1 + v77));
                      v77 += 16LL;
                    }
                    while ( v78 != v77 );
                  }
                  if ( (__int64 *)a1 != &v90 && a1 )
                  {
                    sub_186B220((void *)a1);
                    v61 = (unsigned int)v89;
                  }
                  ptr = v10;
                  HIDWORD(v89) = v76;
                }
                else
                {
                  v10 = (__int64 *)ptr;
                }
                v62 = &v10[2 * v61];
                *((_DWORD *)v62 + 2) = 0;
                v36 = (unsigned int)v89;
                *v62 = v17;
                v37 = v36 + 1;
                goto LABEL_61;
              }
              v22 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
              if ( v22 && *v22 == 5 )
              {
                switch ( v22[1] )
                {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 0x15:
                    break;
                  case 0xA:
                  case 0xB:
                  case 0xF:
                  case 0x10:
                    v52 = *(_QWORD *)(v17 + 40);
                    if ( *(_WORD *)(v52 + 4)
                      || (v53 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL)) == nullptr
                      || *v53 != 5
                      || v53[1] )
                    {
                      ((void (__noreturn *)(void))sub_161D70)();
                    }
                    break;
                  case 0x12:
                  case 0x13:
                  case 0x14:
                    ((void (__noreturn *)(void))sub_161D70)();
                  case 0x16:
                    v54 = *(_QWORD *)(v17 + 40);
                    if ( *(_WORD *)(v54 + 4)
                      || (v55 = *(_DWORD **)(*(_QWORD *)(v54 + 16) + 24LL)) == nullptr
                      || *v55 != 5
                      || v55[1] )
                    {
                      ((void (__noreturn *)(void))sub_161D70)();
                    }
                    v15 = *((_DWORD *)v13 + 2);
                    *(_BYTE *)(a2 + 24) = 1;
                    goto LABEL_32;
                  default:
                    ((void (__noreturn *)(void))sub_161D70)();
                }
              }
              v15 = *((_DWORD *)v13 + 2);
LABEL_32:
              if ( v15 >= v14 )
              {
                LODWORD(v11) = v89 - 1;
                break;
              }
            }
          }
          v23 = *(_QWORD *)(v6 + 16);
          LODWORD(v89) = v11;
          v24 = *(_DWORD **)(v23 + 24);
          if ( v24 && *v24 == 5 )
          {
            v64 = v24;
            v63 = (unsigned int)v24[1];
            switch ( v63 )
            {
              case 0LL:
              case 1LL:
              case 2LL:
              case 3LL:
              case 4LL:
              case 5LL:
              case 6LL:
              case 7LL:
              case 8LL:
              case 21LL:
                break;
              case 9LL:
                if ( *(_DWORD *)(v6 + 24) != 2 )
                  break;
                a1 = *(_QWORD *)(v6 + 32);
                v71 = *(_DWORD **)(sub_15D1F10(a1) + 24);
                LODWORD(v11) = v89;
                if ( !v71 )
                  break;
                if ( *v71 != 5 )
                  break;
                if ( v71[1] )
                  break;
                v72 = *(_QWORD *)(v6 + 32);
                if ( !*(_WORD *)(v72 + 4) )
                {
                  v73 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL);
                  if ( v73 )
                  {
                    if ( *v73 == 5 )
                    {
                      a1 = (unsigned int)v73[1];
                      if ( !(_DWORD)a1 )
                        break;
                    }
                  }
                }
                v74 = *(_QWORD *)(v6 + 40);
                if ( !*(_WORD *)(v74 + 4) )
                {
                  v75 = *(_DWORD **)(*(_QWORD *)(v74 + 16) + 24LL);
                  if ( v75 )
                  {
                    if ( *v75 == 5 )
                    {
                      v5 = (unsigned int)v75[1];
                      if ( !(_DWORD)v5 )
                        break;
                    }
                  }
                }
                goto LABEL_152;
              case 10LL:
              case 11LL:
              case 15LL:
              case 16LL:
                v67 = *(_QWORD *)(v6 + 40);
                if ( *(_WORD *)(v67 + 4)
                  || (v68 = *(_DWORD **)(*(_QWORD *)(v67 + 16) + 24LL)) == nullptr
                  || *v68 != 5
                  || v68[1] )
                {
                  ((void (__noreturn *)(void))sub_161D70)();
                }
                break;
              case 18LL:
              case 19LL:
              case 20LL:
                sub_161D70(a1, v5, v63);
              case 22LL:
                v69 = *(_QWORD *)(v6 + 40);
                if ( *(_WORD *)(v69 + 4)
                  || (v70 = *(_DWORD **)(*(_QWORD *)(v69 + 16) + 24LL)) == nullptr
                  || *v70 != 5
                  || v70[1] )
                {
                  ((void (__noreturn *)(void))sub_161D70)();
                }
LABEL_152:
                v5 = a2;
                *(_BYTE *)(a2 + 24) = 1;
                break;
              default:
                sub_161D70(a1, v5, v64);
            }
          }
          v10 = (__int64 *)ptr;
          if ( !(_DWORD)v11 )
          {
            if ( ptr && ptr != &v90 )
            {
              a1 = (unsigned __int64)ptr;
              sub_186B220(ptr);
            }
            goto LABEL_42;
          }
          v11 = (unsigned int)(v11 - 1);
          v6 = *((_QWORD *)ptr + 2 * v11);
        }
        v29 = *(_DWORD *)(v6 + 72);
        v30 = *((_DWORD *)v13 + 2);
        a1 = v29 + *(_DWORD *)(v6 + 76) + 1;
        if ( v30 >= (unsigned int)a1 )
          goto LABEL_182;
        if ( v30 )
          goto LABEL_55;
        v31 = *(_QWORD *)(v6 + 24);
        v30 = 1;
        *((_DWORD *)v13 + 2) = 1;
        if ( *(_DWORD *)(v31 + 8) > 1u )
          break;
LABEL_58:
        v34 = (unsigned int)v89;
        if ( (unsigned int)v89 >= HIDWORD(v89) )
        {
          v44 = (unsigned int)(2 * HIDWORD(v89));
          v10 = (__int64 *)sub_186B270(16 * v44);
          a1 = (unsigned __int64)ptr;
          v45 = 0;
          v34 = (unsigned int)v89;
          v46 = 16LL * (unsigned int)v89;
          if ( (_DWORD)v89 )
          {
            do
            {
              *(__m128i *)&v10[v45 / 8] = _mm_loadu_si128((const __m128i *)(a1 + v45));
              v45 += 16LL;
            }
            while ( v45 != v46 );
          }
          if ( a1 && (__int64 *)a1 != &v90 )
          {
            sub_186B220((void *)a1);
            v34 = (unsigned int)v89;
          }
          ptr = v10;
          HIDWORD(v89) = v44;
        }
        else
        {
          v10 = (__int64 *)ptr;
        }
        v35 = &v10[2 * v34];
        *v35 = v31;
        *((_DWORD *)v35 + 2) = 0;
        v36 = (unsigned int)v89;
        v37 = v89 + 1;
LABEL_61:
        LODWORD(v89) = v37;
        LODWORD(v11) = v37 - 1;
        v6 = v10[2 * v36];
      }
      while ( 1 )
      {
        v32 = *(_BYTE *)(v31 + 6);
        if ( (v32 & 1) == 0 )
        {
          *(_BYTE *)(v31 + 6) = v32 | 1;
          v38 = v86;
          if ( (unsigned int)v86 >= HIDWORD(v86) )
          {
            v47 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v86)));
            v38 = v86;
            a1 = (unsigned __int64)v85;
            v39 = (__int64 *)v47;
            if ( (_DWORD)v86 )
            {
              if ( (unsigned int)(v86 - 1) <= 2 || (__int64 *)v47 == v85 + 1 )
              {
                v60 = 0;
                do
                {
                  v39[v60] = v85[v60];
                  ++v60;
                }
                while ( (unsigned int)v86 != v60 );
              }
              else
              {
                v48 = 0;
                do
                {
                  *(__m128i *)&v39[v48] = _mm_loadu_si128((const __m128i *)&v85[v48]);
                  v48 += 2;
                }
                while ( 2LL * ((unsigned int)v86 >> 1) != v48 );
                if ( (v86 & 1) != 0 )
                  v39[(unsigned int)v86 & 0xFFFFFFFE] = v85[(unsigned int)v86 & 0xFFFFFFFE];
              }
            }
            if ( v85 != (__int64 *)v87 && v85 )
            {
              sub_186B220(v85);
              v38 = v86;
            }
            v85 = v39;
            HIDWORD(v86) *= 2;
          }
          else
          {
            v39 = v85;
          }
          v39[v38] = v31;
          LODWORD(v86) = v38 + 1;
          goto LABEL_58;
        }
        if ( v30 >= (unsigned int)a1 )
        {
LABEL_182:
          LODWORD(v89) = v89 - 1;
          ((void (__noreturn *)(void))sub_161D70)();
        }
        v29 = *(_DWORD *)(v6 + 72);
LABEL_55:
        v33 = v30 - 1;
        v5 = 16LL * *(unsigned int *)(v6 + 20);
        if ( v29 < v30 )
          v33 = (unsigned int)v33 - v29;
        ++v30;
        v31 = *(_QWORD *)(v5 + v6 + 8 * v33 + 80);
        *((_DWORD *)v13 + 2) = v30;
        if ( *(_DWORD *)(v31 + 8) <= 1u )
          goto LABEL_58;
      }
    }
    v7 = *(_BYTE *)(v6 + 6);
    if ( (v7 & 1) == 0 )
    {
      *(_BYTE *)(v6 + 6) = v7 | 1;
      v8 = v86;
      if ( (unsigned int)v86 >= HIDWORD(v86) )
      {
        v65 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v86)));
        v8 = v86;
        a1 = (unsigned __int64)v85;
        v9 = (__int64 *)v65;
        if ( (_DWORD)v86 )
        {
          if ( (unsigned int)(v86 - 1) <= 2 || (__int64 *)v65 == v85 + 1 )
          {
            v79 = 0;
            v5 = 8LL * (unsigned int)v86;
            do
            {
              v9[v79 / 8] = v85[v79 / 8];
              v79 += 8LL;
            }
            while ( v79 != v5 );
          }
          else
          {
            v66 = 0;
            do
            {
              *(__m128i *)&v9[v66] = _mm_loadu_si128((const __m128i *)&v85[v66]);
              v66 += 2;
            }
            while ( 2LL * ((unsigned int)v86 >> 1) != v66 );
            if ( (v86 & 1) != 0 )
              v9[(unsigned int)v86 & 0xFFFFFFFE] = v85[(unsigned int)v86 & 0xFFFFFFFE];
          }
        }
        if ( v85 != (__int64 *)v87 && v85 )
        {
          sub_186B220(v85);
          v8 = v86;
        }
        v85 = v9;
        HIDWORD(v86) *= 2;
      }
      else
      {
        v9 = v85;
      }
      v9[v8] = v6;
      LODWORD(v86) = v8 + 1;
      goto LABEL_15;
    }
LABEL_42:
    ;
  }
  v25 = &v85[(unsigned int)v86];
  if ( v85 != v25 )
  {
    v26 = v85;
    do
    {
      v27 = *v26++;
      *(_BYTE *)(v27 + 6) &= ~1u;
    }
    while ( v25 != v26 );
  }
  if ( v85 != (__int64 *)v87 && v85 != nullptr )
    sub_186B220(v85);
  return 0;
}

