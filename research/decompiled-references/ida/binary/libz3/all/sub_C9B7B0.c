__int64 __fastcall sub_C9B7B0(__int64 *a1, _BYTE *a2)
{
  __int64 v2; // rdx
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v8; // al
  int v9; // edx
  int *v10; // r12
  __int64 *v11; // r12
  __int64 v12; // rax
  __int16 v13; // dx
  __int64 *v14; // r14
  __int64 v15; // rax
  _DWORD *v16; // rdx
  int v17; // eax
  int *v18; // rcx
  int *v19; // rax
  __int64 v20; // rdx
  unsigned int v22; // r12d
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r15
  char v26; // al
  int v27; // edx
  int *v28; // r8
  __int16 v29; // ax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // esi
  __int64 v33; // r13
  char v34; // dl
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 *v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // edx
  int *v41; // r12
  __int64 v42; // rdx
  __int64 *v43; // rdx
  __int64 v44; // rax
  _DWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 *v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // edx
  __int64 *v60; // rax
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 *v67; // rax
  __int64 v68; // rbx
  __int64 *v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73[2]; // [rsp+0h] [rbp-208h]
  int v75[2]; // [rsp+20h] [rbp-1E8h]
  int *v76; // [rsp+28h] [rbp-1E0h]
  int *v77; // [rsp+30h] [rbp-1D8h]
  __int64 v78; // [rsp+38h] [rbp-1D0h]
  int v79[32]; // [rsp+40h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-148h]
  void *v81; // [rsp+C8h] [rbp-140h]
  __int64 v82; // [rsp+D0h] [rbp-138h] BYREF
  int v83; // [rsp+D8h] [rbp-130h]

  v2 = a1[9];
  v77 = v79;
  v78 = 0x1000000000LL;
  if ( !v2 )
    return 0;
  v4 = *(_BYTE *)(v2 + 3) >> 6;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
LABEL_4:
      if ( v4 == 2 )
        v5 = (unsigned int)(*(_DWORD *)(v2 + 4) - 1);
      else
        v5 = *(unsigned int *)(v2 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v2 = *(_QWORD *)(v2 + 16);
      v4 = *(_BYTE *)(v2 + 3) >> 6;
    }
    while ( !v4 );
    if ( v4 != 1 )
      goto LABEL_4;
  }
  v5 = (unsigned int)(*(_DWORD *)(v2 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v5 )
    return 0;
  *(_QWORD *)v75 = v5;
  *(_QWORD *)v73 = 0;
  do
  {
    v6 = *a1;
    if ( (*((_BYTE *)a1 + 123) & 0x20) != 0 )
    {
      v7 = *(_QWORD *)(v6 + 864);
      goto LABEL_10;
    }
    v58 = a1[9];
    v59 = 17;
    while ( 1 )
    {
      if ( *(char *)(v58 + 3) < 0 )
      {
        if ( *(_BYTE *)(v58 + 3) >> 6 != 2 )
        {
          v60 = (__int64 *)(*(_QWORD *)(v58 + 16) + 8LL * *(_QWORD *)v73);
          goto LABEL_130;
        }
        goto LABEL_132;
      }
      if ( *(_DWORD *)(v58 + 4) == v73[0] )
        break;
LABEL_132:
      v58 = *(_QWORD *)(v58 + 16);
      if ( !--v59 )
      {
        sub_233F80((__int64 *)(v6 + 616), (_DWORD *)a1 + 18);
        v60 = (__int64 *)(*(_QWORD *)(a1[9] + 16) + 8LL * *(_QWORD *)v73);
        goto LABEL_130;
      }
    }
    v60 = (__int64 *)(v58 + 8);
LABEL_130:
    v7 = *v60;
LABEL_10:
    if ( *(_DWORD *)(v7 + 8) <= 1u )
    {
LABEL_15:
      v11 = &v82;
      v82 = v7;
      ptr = &v82;
      v83 = 0;
      v81 = (void *)0x1000000001LL;
      LODWORD(v12) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = *(_WORD *)(v7 + 4);
          v14 = &v11[2 * (unsigned int)v12];
          if ( v13 == 1 )
            break;
          if ( v13 != 2 )
          {
            if ( v13 )
            {
              sub_1872CE0("");
              sub_1873130(114, 100);
            }
            v22 = *(_DWORD *)(v7 + 24);
            v23 = *((_DWORD *)v14 + 2);
            if ( v23 < v22 )
            {
              while ( 1 )
              {
                v24 = v23++;
                v25 = *(_QWORD *)(v7 + 8 * v24 + 32);
                *((_DWORD *)v14 + 2) = v23;
                if ( *(_DWORD *)(v25 + 8) <= 1u )
                  goto LABEL_44;
                v26 = *(_BYTE *)(v25 + 6);
                if ( (v26 & 1) == 0 )
                  break;
LABEL_49:
                if ( v23 >= v22 )
                {
                  LODWORD(v12) = (_DWORD)v81 - 1;
                  goto LABEL_51;
                }
              }
              *(_BYTE *)(v25 + 6) = v26 | 1;
              v27 = v78;
              if ( (unsigned int)v78 >= HIDWORD(v78) )
              {
                v46 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v78)));
                v27 = v78;
                v28 = (int *)v46;
                if ( (_DWORD)v78 )
                {
                  if ( (unsigned int)(v78 - 1) <= 2 || (int *)v46 == v77 + 2 )
                  {
                    v62 = 0;
                    do
                    {
                      *(_QWORD *)&v28[v62] = *(_QWORD *)&v77[v62];
                      v62 += 2;
                    }
                    while ( 2LL * (unsigned int)v78 != v62 );
                  }
                  else
                  {
                    v47 = 0;
                    do
                    {
                      *(__m128i *)&v28[v47] = _mm_loadu_si128((const __m128i *)&v77[v47]);
                      v47 += 4;
                    }
                    while ( 4LL * ((unsigned int)v78 >> 1) != v47 );
                    if ( (v78 & 1) != 0 )
                      *(_QWORD *)&v28[2 * (v78 & 0xFFFFFFFE)] = *(_QWORD *)&v77[2 * (v78 & 0xFFFFFFFE)];
                  }
                }
                if ( v77 != v79 && v77 )
                {
                  v76 = v28;
                  sub_186B220(v77);
                  v27 = v78;
                  v28 = v76;
                }
                v77 = v28;
                HIDWORD(v78) *= 2;
              }
              else
              {
                v28 = v77;
              }
              *(_QWORD *)&v28[2 * v27] = v25;
              LODWORD(v78) = v27 + 1;
LABEL_44:
              v29 = *(_WORD *)(v25 + 4);
              if ( v29 != 1 )
              {
                if ( v29 == 2 )
                {
                  v42 = (unsigned int)v81;
                  if ( (unsigned int)v81 >= HIDWORD(v81) )
                  {
                    v54 = (unsigned int)(2 * HIDWORD(v81));
                    v11 = (__int64 *)sub_186B270(16 * v54);
                    v55 = (__int64 *)ptr;
                    v56 = 0;
                    v42 = (unsigned int)v81;
                    v57 = 16LL * (unsigned int)v81;
                    if ( (_DWORD)v81 )
                    {
                      do
                      {
                        *(__m128i *)&v11[v56 / 8] = _mm_loadu_si128((const __m128i *)&v55[v56 / 8]);
                        v56 += 16LL;
                      }
                      while ( v57 != v56 );
                    }
                    if ( v55 != &v82 && v55 )
                    {
                      sub_186B220(v55);
                      v42 = (unsigned int)v81;
                    }
                    ptr = v11;
                    HIDWORD(v81) = v54;
                  }
                  else
                  {
                    v11 = (__int64 *)ptr;
                  }
                  v43 = &v11[2 * v42];
                  *v43 = v25;
                  *((_DWORD *)v43 + 2) = 0;
                  v38 = (unsigned int)v81;
                  v39 = (_DWORD)v81 + 1;
                  goto LABEL_64;
                }
                if ( v29 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 73);
                }
                if ( *(_DWORD *)(v25 + 24) )
                {
                  v66 = (unsigned int)v81;
                  if ( (unsigned int)v81 >= HIDWORD(v81) )
                  {
                    v68 = (unsigned int)(2 * HIDWORD(v81));
                    v11 = (__int64 *)sub_186B270(16 * v68);
                    v69 = (__int64 *)ptr;
                    v70 = 0;
                    v66 = (unsigned int)v81;
                    v71 = 16LL * (unsigned int)v81;
                    if ( (_DWORD)v81 )
                    {
                      do
                      {
                        *(__m128i *)&v11[v70 / 8] = _mm_loadu_si128((const __m128i *)&v69[v70 / 8]);
                        v70 += 16LL;
                      }
                      while ( v71 != v70 );
                    }
                    if ( v69 && v69 != &v82 )
                    {
                      sub_186B220(v69);
                      v66 = (unsigned int)v81;
                    }
                    ptr = v11;
                    HIDWORD(v81) = v68;
                  }
                  else
                  {
                    v11 = (__int64 *)ptr;
                  }
                  v67 = &v11[2 * v66];
                  *((_DWORD *)v67 + 2) = 0;
                  v38 = (unsigned int)v81;
                  *v67 = v25;
                  v39 = v38 + 1;
                  goto LABEL_64;
                }
                sub_C98620((__int64)a2, v25);
                goto LABEL_48;
              }
              if ( !a2[26] )
                sub_161D9C();
              v44 = sub_15D1F10(v25);
              if ( a2[24] )
              {
                v45 = *(_DWORD **)(v44 + 24);
                if ( !v45 || *v45 != 5 )
                  goto LABEL_77;
                if ( v45[1] != 1 )
                {
                  if ( !a2[25] )
                    goto LABEL_77;
                  goto LABEL_98;
                }
              }
              else
              {
                if ( !a2[25] )
                  goto LABEL_77;
                v45 = *(_DWORD **)(v44 + 24);
                if ( !v45 || *v45 != 5 )
                  goto LABEL_77;
LABEL_98:
                if ( v45[1] )
                {
LABEL_77:
                  if ( v44 != *(_QWORD *)(*(_QWORD *)a2 + 840LL) )
                    sub_161D9C();
                }
              }
LABEL_48:
              v23 = *((_DWORD *)v14 + 2);
              goto LABEL_49;
            }
LABEL_51:
            LODWORD(v81) = v12;
            sub_C98620((__int64)a2, v7);
            v17 = (int)v81;
            v11 = (__int64 *)ptr;
            goto LABEL_20;
          }
          v30 = *(_DWORD *)(v7 + 72);
          v31 = *((_DWORD *)v14 + 2);
          v32 = v30 + *(_DWORD *)(v7 + 76) + 1;
          if ( v31 >= v32 )
            goto LABEL_137;
          if ( v31 )
            goto LABEL_58;
          v33 = *(_QWORD *)(v7 + 24);
          v31 = 1;
          *((_DWORD *)v14 + 2) = 1;
          while ( *(_DWORD *)(v33 + 8) > 1u )
          {
            v34 = *(_BYTE *)(v33 + 6);
            if ( (v34 & 1) == 0 )
            {
              *(_BYTE *)(v33 + 6) = v34 | 1;
              v40 = v78;
              if ( (unsigned int)v78 >= HIDWORD(v78) )
              {
                v52 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v78)));
                v40 = v78;
                v41 = (int *)v52;
                if ( (_DWORD)v78 )
                {
                  if ( (unsigned int)(v78 - 1) <= 2 || (int *)v52 == v77 + 2 )
                  {
                    v65 = 0;
                    do
                    {
                      *(_QWORD *)&v41[v65] = *(_QWORD *)&v77[v65];
                      v65 += 2;
                    }
                    while ( 2LL * (unsigned int)v78 != v65 );
                  }
                  else
                  {
                    v53 = 0;
                    do
                    {
                      *(__m128i *)&v41[v53] = _mm_loadu_si128((const __m128i *)&v77[v53]);
                      v53 += 4;
                    }
                    while ( 4LL * ((unsigned int)v78 >> 1) != v53 );
                    if ( (v78 & 1) != 0 )
                      *(_QWORD *)&v41[2 * (v78 & 0xFFFFFFFE)] = *(_QWORD *)&v77[2 * (v78 & 0xFFFFFFFE)];
                  }
                }
                if ( v77 && v77 != v79 )
                {
                  sub_186B220(v77);
                  v40 = v78;
                }
                v77 = v41;
                HIDWORD(v78) *= 2;
              }
              else
              {
                v41 = v77;
              }
              *(_QWORD *)&v41[2 * v40] = v33;
              LODWORD(v78) = v40 + 1;
              break;
            }
            if ( v31 >= v32 )
            {
LABEL_137:
              v17 = (_DWORD)v81 - 1;
              v61 = a2[26] == 0;
              LODWORD(v81) = (_DWORD)v81 - 1;
              if ( v61 )
                sub_161D9C();
LABEL_20:
              if ( !v17 )
                goto LABEL_28;
              goto LABEL_21;
            }
            v30 = *(_DWORD *)(v7 + 72);
LABEL_58:
            v35 = v31 - 1;
            if ( v30 < v31 )
              v35 = (unsigned int)v35 - v30;
            ++v31;
            v33 = *(_QWORD *)(16LL * *(unsigned int *)(v7 + 20) + v7 + 8 * v35 + 80);
            *((_DWORD *)v14 + 2) = v31;
          }
          v36 = (unsigned int)v81;
          if ( (unsigned int)v81 >= HIDWORD(v81) )
          {
            v48 = (unsigned int)(2 * HIDWORD(v81));
            v11 = (__int64 *)sub_186B270(16 * v48);
            v49 = (__int64 *)ptr;
            v50 = 0;
            v36 = (unsigned int)v81;
            v51 = 16LL * (unsigned int)v81;
            if ( (_DWORD)v81 )
            {
              do
              {
                *(__m128i *)&v11[v50 / 8] = _mm_loadu_si128((const __m128i *)&v49[v50 / 8]);
                v50 += 16LL;
              }
              while ( v50 != v51 );
            }
            if ( v49 != &v82 && v49 )
            {
              sub_186B220(v49);
              v36 = (unsigned int)v81;
            }
            ptr = v11;
            HIDWORD(v81) = v48;
          }
          else
          {
            v11 = (__int64 *)ptr;
          }
          v37 = &v11[2 * v36];
          *v37 = v33;
          *((_DWORD *)v37 + 2) = 0;
          v38 = (unsigned int)v81;
          v39 = (_DWORD)v81 + 1;
LABEL_64:
          LODWORD(v81) = v39;
          LODWORD(v12) = v39 - 1;
          v7 = v11[2 * v38];
        }
        if ( !a2[26] )
          sub_161D9C();
        v15 = sub_15D1F10(v7);
        if ( a2[24] )
        {
          v16 = *(_DWORD **)(v15 + 24);
          if ( v16 && *v16 == 5 )
          {
            if ( v16[1] == 1 )
              goto LABEL_27;
            if ( a2[25] )
            {
LABEL_82:
              if ( !v16[1] )
                goto LABEL_27;
            }
          }
        }
        else if ( a2[25] )
        {
          v16 = *(_DWORD **)(v15 + 24);
          if ( v16 )
          {
            if ( *v16 == 5 )
              goto LABEL_82;
          }
        }
        if ( v15 != *(_QWORD *)(*(_QWORD *)a2 + 840LL) )
          sub_161D9C();
LABEL_27:
        v11 = (__int64 *)ptr;
        v17 = (_DWORD)v81 - 1;
        LODWORD(v81) = v17;
        if ( !v17 )
        {
LABEL_28:
          if ( v11 && v11 != &v82 )
            sub_186B220(v11);
          goto LABEL_31;
        }
LABEL_21:
        v12 = (unsigned int)(v17 - 1);
        v7 = v11[2 * v12];
      }
    }
    v8 = *(_BYTE *)(v7 + 6);
    if ( (v8 & 1) == 0 )
    {
      *(_BYTE *)(v7 + 6) = v8 | 1;
      v9 = v78;
      if ( (unsigned int)v78 >= HIDWORD(v78) )
      {
        v63 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v78)));
        v9 = v78;
        v10 = (int *)v63;
        if ( (_DWORD)v78 )
        {
          if ( (unsigned int)(v78 - 1) <= 2 || (int *)v63 == v77 + 2 )
          {
            v72 = 0;
            do
            {
              *(_QWORD *)&v10[v72] = *(_QWORD *)&v77[v72];
              v72 += 2;
            }
            while ( v72 != 2LL * (unsigned int)v78 );
          }
          else
          {
            v64 = 0;
            do
            {
              *(__m128i *)&v10[v64] = _mm_loadu_si128((const __m128i *)&v77[v64]);
              v64 += 4;
            }
            while ( 4LL * ((unsigned int)v78 >> 1) != v64 );
            if ( (v78 & 1) != 0 )
              *(_QWORD *)&v10[2 * (v78 & 0xFFFFFFFE)] = *(_QWORD *)&v77[2 * (v78 & 0xFFFFFFFE)];
          }
        }
        if ( v77 != v79 && v77 )
        {
          sub_186B220(v77);
          v9 = v78;
        }
        v77 = v10;
        HIDWORD(v78) *= 2;
      }
      else
      {
        v10 = v77;
      }
      *(_QWORD *)&v10[2 * v9] = v7;
      LODWORD(v78) = v9 + 1;
      goto LABEL_15;
    }
LABEL_31:
    ++*(_QWORD *)v73;
  }
  while ( *(_QWORD *)v75 != *(_QWORD *)v73 );
  v18 = &v77[2 * (unsigned int)v78];
  if ( v77 != v18 )
  {
    v19 = v77;
    do
    {
      v20 = *(_QWORD *)v19;
      v19 += 2;
      *(_BYTE *)(v20 + 6) &= ~1u;
    }
    while ( v18 != v19 );
  }
  if ( v77 != v79 && v77 != nullptr )
    sub_186B220(v77);
  return 0;
}

