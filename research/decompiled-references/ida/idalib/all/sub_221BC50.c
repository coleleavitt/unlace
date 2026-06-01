void __fastcall sub_221BC50(__int64 a1, __int64 a2)
{
  char *v3; // r13
  char *v4; // rbp
  char *v5; // rsi
  _BYTE *v6; // rdi
  unsigned __int64 v7; // r12
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __m128i *v11; // rdx
  char *v12; // r12
  _BYTE *v13; // rsi
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r13d
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // rax
  void *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE *v32; // rdx
  _WORD *v33; // rdx
  int v34; // r8d
  int v35; // esi
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  _DWORD *v39; // rax
  _DWORD *i; // rdx
  __int64 v41; // r13
  unsigned __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdi
  int v46; // esi
  void *v47; // rbp
  __int64 v48; // rax
  void *v49; // rdi
  void *v50; // rdi
  int v51; // edi
  int v52; // edi
  unsigned int v53; // ecx
  int v54; // r8d
  int v55; // r10d
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  _DWORD *v59; // rax
  int v60; // ecx
  _DWORD *j; // rdx
  int v62; // r13d
  __int64 v63; // rbp
  unsigned __int64 v64; // rbx
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rdi
  int v68; // r8d
  void *v69; // r12
  __int64 v70; // rax
  void *v71; // rdi
  void *v72; // rdi
  int v73; // edi
  int v74; // edi
  unsigned int v75; // ecx
  int v76; // r8d
  int v77; // r10d
  __m128i si128; // xmm0
  _DWORD *v79; // rcx
  _DWORD *v80; // rdx
  _DWORD *v81; // rsi
  _DWORD *v82; // rdx
  int v83; // r9d
  __int64 v84; // r11
  int v85; // r11d
  __int64 v86; // rdx
  char *v88; // [rsp+10h] [rbp-1A8h]
  unsigned __int64 v89; // [rsp+30h] [rbp-188h]
  unsigned __int64 v90; // [rsp+30h] [rbp-188h]
  int v91; // [rsp+3Ch] [rbp-17Ch]
  int v92; // [rsp+3Ch] [rbp-17Ch]
  __int64 v93; // [rsp+40h] [rbp-178h]
  char *v94; // [rsp+40h] [rbp-178h]
  __int64 v95; // [rsp+48h] [rbp-170h]
  void *v96[2]; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v97[2]; // [rsp+60h] [rbp-158h] BYREF
  void *base; // [rsp+70h] [rbp-148h] BYREF
  __int64 v99; // [rsp+78h] [rbp-140h]
  _BYTE v100[312]; // [rsp+80h] [rbp-138h] BYREF

  v3 = *(char **)(a1 + 80);
  v4 = *(char **)(a1 + 72);
  v5 = v100;
  v6 = v100;
  base = v100;
  v7 = (v3 - v4) >> 5;
  v99 = 0x1000000000LL;
  if ( v7 > 0x10 )
  {
    sub_2237220(&base, v100, (v3 - v4) >> 5, 16);
    v6 = base;
    LODWORD(v7) = v99 + v7;
    v5 = (char *)base + 16 * (unsigned int)v99;
  }
  if ( v4 != v3 )
  {
    v8 = v4;
    do
    {
      v9 = *(_QWORD *)v8;
      v8 += 32;
      v5 += 16;
      *((_QWORD *)v5 - 2) = v9;
      *((_QWORD *)v5 - 1) = *((_QWORD *)v8 - 3);
    }
    while ( v3 != v8 );
    v6 = base;
  }
  LODWORD(v99) = v7;
  v10 = 16LL * (unsigned int)v7;
  if ( (unsigned __int64)v10 > 0x10 )
    qsort(v6, v10 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
  if ( !(_BYTE)byte_2D0A7C0 && __cxa_guard_acquire(&byte_2D0A7C0) )
    sub_221A7A0((const char *)&byte_2D0A7C0);
  v11 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v11 > 0x14u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB9F0);
    v11[1].m128i_i32[0] = 980641141;
    v11[1].m128i_i8[4] = 10;
    *v11 = si128;
    *(_QWORD *)(a2 + 32) += 21LL;
  }
  else
  {
    sub_227BF10(a2, "Counters and values:\n", 21);
  }
  v12 = (char *)base;
  v88 = (char *)base + 16 * (unsigned int)v99;
  if ( v88 != base )
  {
    while ( 1 )
    {
      v13 = *(_BYTE **)v12;
      v14 = 0;
      v15 = *(_QWORD *)v12 + *((_QWORD *)v12 + 1);
      v96[0] = v97;
      sub_221A510(v96, v13, v15);
      v16 = sub_221BB50(a1 + 24, (__int64)v96);
      if ( v16 != a1 + 32 )
        v14 = *(_DWORD *)(v16 + 64);
      if ( v96[0] != v97 )
        operator delete(v96[0]);
      v20 = dword_2D0A7F0;
      v21 = qword_2D0A7E0;
      if ( !dword_2D0A7F0 )
        goto LABEL_39;
      v22 = (unsigned int)(dword_2D0A7F0 - 1);
      v17 = (unsigned int)(37 * v14);
      LODWORD(v23) = v22 & (37 * v14);
      v24 = qword_2D0A7E0 + ((unsigned __int64)(unsigned int)v23 << 7);
      v25 = *(_DWORD *)v24;
      if ( v14 != *(_DWORD *)v24 )
        break;
LABEL_19:
      v26 = v24 + 8;
      v27 = *(_QWORD *)(a1 + 72) + 32LL * (unsigned int)(v14 - 1);
      v28 = *(void **)v27;
      v96[1] = *(void **)(v27 + 8);
      v96[0] = v28;
      v97[0] = 0x100000020LL;
      v29 = sub_227CB30(a2, v96);
      v30 = *(_QWORD *)(v29 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v29 + 24) - v30) > 2 )
      {
        *(_BYTE *)(v30 + 2) = 123;
        *(_WORD *)v30 = 8250;
        *(_QWORD *)(v29 + 32) += 3LL;
      }
      else
      {
        v29 = sub_227BF10(v29, ": {", 3);
      }
      v31 = sub_227B930(v29, *(_QWORD *)v26);
      v32 = *(_BYTE **)(v31 + 32);
      if ( *(_BYTE **)(v31 + 24) == v32 )
      {
        sub_227BF10(v31, ",", 1);
      }
      else
      {
        *v32 = 44;
        ++*(_QWORD *)(v31 + 32);
      }
      sub_221B1E0(a2, *(__int64 **)(v26 + 56), *(unsigned int *)(v26 + 64));
      v33 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v33 > 1u )
      {
        v12 += 16;
        *v33 = 2685;
        *(_QWORD *)(a2 + 32) += 2LL;
        if ( v88 == v12 )
        {
LABEL_25:
          v12 = (char *)base;
          goto LABEL_26;
        }
      }
      else
      {
        v12 += 16;
        sub_227BF10(a2, "}\n", 2);
        if ( v88 == v12 )
          goto LABEL_25;
      }
    }
    v34 = 1;
    v19 = 0;
    if ( v25 != -1 )
    {
      while ( 1 )
      {
        if ( !v19 && v25 == -2 )
          v19 = v24;
        v23 = (unsigned int)v22 & ((_DWORD)v23 + v34);
        v24 = qword_2D0A7E0 + (v23 << 7);
        v25 = *(_DWORD *)v24;
        if ( v14 == *(_DWORD *)v24 )
          goto LABEL_19;
        if ( v25 == -1 )
          break;
        ++v34;
      }
      if ( v19 )
        v24 = v19;
    }
    v35 = qword_2D0A7E8 + 1;
    v18 = (unsigned int)(4 * (qword_2D0A7E8 + 1));
    if ( (unsigned int)v18 >= 3 * dword_2D0A7F0 )
    {
LABEL_39:
      v37 = (((((((unsigned int)(2 * dword_2D0A7F0 - 1) | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * dword_2D0A7F0 - 1)
              | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * dword_2D0A7F0 - 1) | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * dword_2D0A7F0 - 1)
            | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * dword_2D0A7F0 - 1) | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * dword_2D0A7F0 - 1)
            | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * dword_2D0A7F0 - 1) | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * dword_2D0A7F0 - 1)
          | ((unsigned __int64)(unsigned int)(2 * dword_2D0A7F0 - 1) >> 1);
      v38 = ((v37 >> 16) | v37) + 1;
      if ( (unsigned int)v38 < 0x40 )
        LODWORD(v38) = 64;
      dword_2D0A7F0 = v38;
      v39 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v38 << 7, 8, 64, v17, v18, v19);
      qword_2D0A7E0 = (__int64)v39;
      if ( v21 )
      {
        qword_2D0A7E8 = 0;
        v89 = (unsigned __int64)v20 << 7;
        for ( i = &v39[32 * (unsigned __int64)(unsigned int)dword_2D0A7F0]; i != v39; v39 += 32 )
          *v39 = -1;
        v41 = v21;
        if ( v21 != v21 + v89 )
        {
          v93 = a2;
          v42 = v21 + v89;
          v91 = v14;
          do
          {
            while ( 1 )
            {
              v43 = *(_DWORD *)v41;
              if ( (unsigned int)(*(_DWORD *)v41 + 2) > 1 )
              {
                if ( !dword_2D0A7F0 )
                {
                  dword_0 = 0;
                  BUG();
                }
                LODWORD(v44) = (dword_2D0A7F0 - 1) & (37 * v43);
                v45 = qword_2D0A7E0 + ((unsigned __int64)(unsigned int)v44 << 7);
                v46 = *(_DWORD *)v45;
                if ( *(_DWORD *)v45 != v43 )
                {
                  v83 = 1;
                  v84 = 0;
                  if ( v46 != -1 )
                  {
                    while ( 1 )
                    {
                      if ( !v84 && v46 == -2 )
                        v84 = v45;
                      v44 = (dword_2D0A7F0 - 1) & (unsigned int)(v44 + v83);
                      v45 = qword_2D0A7E0 + (v44 << 7);
                      v46 = *(_DWORD *)v45;
                      if ( v43 == *(_DWORD *)v45 )
                        break;
                      if ( v46 == -1 )
                      {
                        if ( v84 )
                          v45 = v84;
                        break;
                      }
                      ++v83;
                    }
                  }
                }
                *(_DWORD *)v45 = v43;
                v47 = (void *)(v41 + 48);
                *(_QWORD *)(v45 + 8) = *(_QWORD *)(v41 + 8);
                *(_QWORD *)(v45 + 16) = *(_QWORD *)(v41 + 16);
                *(_BYTE *)(v45 + 24) = *(_BYTE *)(v41 + 24);
                *(_QWORD *)(v45 + 32) = v45 + 48;
                v48 = *(_QWORD *)(v41 + 32);
                if ( v48 == v41 + 48 )
                {
                  *(__m128i *)(v45 + 48) = _mm_loadu_si128((const __m128i *)(v41 + 48));
                }
                else
                {
                  *(_QWORD *)(v45 + 32) = v48;
                  *(_QWORD *)(v45 + 48) = *(_QWORD *)(v41 + 48);
                }
                *(_QWORD *)(v45 + 40) = *(_QWORD *)(v41 + 40);
                *(_QWORD *)(v41 + 32) = v47;
                *(_QWORD *)(v41 + 40) = 0;
                *(_BYTE *)(v41 + 48) = 0;
                *(_QWORD *)(v45 + 64) = v45 + 80;
                *(_QWORD *)(v45 + 72) = 0x300000000LL;
                if ( *(_DWORD *)(v41 + 72) )
                  sub_200E7A0((char ***)(v45 + 64), (char ***)(v41 + 64));
                v49 = *(void **)(v41 + 64);
                LODWORD(qword_2D0A7E8) = qword_2D0A7E8 + 1;
                if ( v49 != (void *)(v41 + 80) )
                  free(v49);
                v50 = *(void **)(v41 + 32);
                if ( v50 != v47 )
                  break;
              }
              v41 += 128;
              if ( v42 == v41 )
                goto LABEL_58;
            }
            operator delete(v50);
            v41 += 128;
          }
          while ( v42 != v41 );
LABEL_58:
          v14 = v91;
          a2 = v93;
        }
        operator delete(v21, v89, 8);
        v51 = dword_2D0A7F0;
        v39 = (_DWORD *)qword_2D0A7E0;
        v35 = qword_2D0A7E8 + 1;
      }
      else
      {
        qword_2D0A7E8 = 0;
        v51 = dword_2D0A7F0;
        v79 = &v39[32 * (unsigned __int64)(unsigned int)dword_2D0A7F0];
        if ( v39 != v79 )
        {
          v80 = v39;
          do
          {
            *v80 = -1;
            v80 += 32;
          }
          while ( v79 != v80 );
        }
        v35 = 1;
      }
      if ( !v51 )
      {
LABEL_143:
        LODWORD(qword_2D0A7E8) = qword_2D0A7E8 + 1;
        BUG();
      }
      v52 = v51 - 1;
      v53 = v52 & (37 * v14);
      v24 = (__int64)&v39[32 * (unsigned __int64)v53];
      v54 = *(_DWORD *)v24;
      if ( v14 != *(_DWORD *)v24 )
      {
        v55 = 1;
        v56 = 0;
        if ( v54 != -1 )
        {
          while ( 1 )
          {
            if ( !v56 && v54 == -2 )
              v56 = v24;
            v53 = v52 & (v55 + v53);
            v24 = (__int64)&v39[32 * (unsigned __int64)v53];
            v54 = *(_DWORD *)v24;
            if ( v14 == *(_DWORD *)v24 )
              break;
            if ( v54 == -1 )
            {
LABEL_68:
              if ( v56 )
                v24 = v56;
              break;
            }
            ++v55;
          }
        }
      }
    }
    else
    {
      v36 = (unsigned int)dword_2D0A7F0 >> 3;
      if ( dword_2D0A7F0 - HIDWORD(qword_2D0A7E8) - v35 <= (unsigned int)v36 )
      {
        v57 = (((v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 4) | (v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2);
        v58 = ((((v57 >> 8) | v57) >> 16) | (v57 >> 8) | v57) + 1;
        if ( (unsigned int)v58 < 0x40 )
          LODWORD(v58) = 64;
        dword_2D0A7F0 = v58;
        v59 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v58 << 7, 8, 64, v17, v36, v19);
        qword_2D0A7E0 = (__int64)v59;
        v60 = 37 * v14;
        if ( v21 )
        {
          qword_2D0A7E8 = 0;
          v90 = (unsigned __int64)v20 << 7;
          for ( j = &v59[32 * (unsigned __int64)(unsigned int)dword_2D0A7F0]; j != v59; v59 += 32 )
            *v59 = -1;
          v92 = v14;
          v62 = 37 * v14;
          v63 = v21;
          v95 = a2;
          v64 = v21 + v90;
          v94 = v12;
          do
          {
            while ( 1 )
            {
              v65 = *(_DWORD *)v63;
              if ( (unsigned int)(*(_DWORD *)v63 + 2) > 1 )
              {
                if ( !dword_2D0A7F0 )
                  JUMPOUT(0x2EBB04);
                LODWORD(v66) = (dword_2D0A7F0 - 1) & (37 * v65);
                v67 = qword_2D0A7E0 + ((unsigned __int64)(unsigned int)v66 << 7);
                v68 = *(_DWORD *)v67;
                if ( v65 != *(_DWORD *)v67 )
                {
                  v85 = 1;
                  v86 = 0;
                  if ( v68 != -1 )
                  {
                    while ( 1 )
                    {
                      if ( v68 == -2 && !v86 )
                        v86 = v67;
                      v66 = (dword_2D0A7F0 - 1) & (unsigned int)(v66 + v85);
                      v67 = qword_2D0A7E0 + (v66 << 7);
                      v68 = *(_DWORD *)v67;
                      if ( v65 == *(_DWORD *)v67 )
                        break;
                      if ( v68 == -1 )
                      {
                        if ( v86 )
                          v67 = v86;
                        break;
                      }
                      ++v85;
                    }
                  }
                }
                *(_DWORD *)v67 = v65;
                v69 = (void *)(v63 + 48);
                *(_QWORD *)(v67 + 8) = *(_QWORD *)(v63 + 8);
                *(_QWORD *)(v67 + 16) = *(_QWORD *)(v63 + 16);
                *(_BYTE *)(v67 + 24) = *(_BYTE *)(v63 + 24);
                *(_QWORD *)(v67 + 32) = v67 + 48;
                v70 = *(_QWORD *)(v63 + 32);
                if ( v70 == v63 + 48 )
                {
                  *(__m128i *)(v67 + 48) = _mm_loadu_si128((const __m128i *)(v63 + 48));
                }
                else
                {
                  *(_QWORD *)(v67 + 32) = v70;
                  *(_QWORD *)(v67 + 48) = *(_QWORD *)(v63 + 48);
                }
                *(_QWORD *)(v67 + 40) = *(_QWORD *)(v63 + 40);
                *(_QWORD *)(v63 + 32) = v69;
                *(_QWORD *)(v63 + 40) = 0;
                *(_BYTE *)(v63 + 48) = 0;
                *(_QWORD *)(v67 + 64) = v67 + 80;
                *(_QWORD *)(v67 + 72) = 0x300000000LL;
                if ( *(_DWORD *)(v63 + 72) )
                  sub_200E7A0((char ***)(v67 + 64), (char ***)(v63 + 64));
                v71 = *(void **)(v63 + 64);
                LODWORD(qword_2D0A7E8) = qword_2D0A7E8 + 1;
                if ( v71 != (void *)(v63 + 80) )
                  free(v71);
                v72 = *(void **)(v63 + 32);
                if ( v72 != v69 )
                  break;
              }
              v63 += 128;
              if ( v64 == v63 )
                goto LABEL_89;
            }
            operator delete(v72);
            v63 += 128;
          }
          while ( v64 != v63 );
LABEL_89:
          v14 = v92;
          v12 = v94;
          a2 = v95;
          operator delete(v21, v90, 8);
          v73 = dword_2D0A7F0;
          v59 = (_DWORD *)qword_2D0A7E0;
          v35 = qword_2D0A7E8 + 1;
          v60 = v62;
        }
        else
        {
          qword_2D0A7E8 = 0;
          v73 = dword_2D0A7F0;
          v81 = &v59[32 * (unsigned __int64)(unsigned int)dword_2D0A7F0];
          if ( v59 != v81 )
          {
            v82 = v59;
            do
            {
              *v82 = -1;
              v82 += 32;
            }
            while ( v81 != v82 );
          }
          v35 = 1;
        }
        if ( !v73 )
          goto LABEL_143;
        v74 = v73 - 1;
        v75 = v74 & v60;
        v24 = (__int64)&v59[32 * (unsigned __int64)v75];
        v76 = *(_DWORD *)v24;
        if ( v14 != *(_DWORD *)v24 )
        {
          v77 = 1;
          v56 = 0;
          if ( v76 != -1 )
          {
            while ( 1 )
            {
              if ( !v56 && v76 == -2 )
                v56 = v24;
              v75 = v74 & (v77 + v75);
              v24 = (__int64)&v59[32 * (unsigned __int64)v75];
              v76 = *(_DWORD *)v24;
              if ( v14 == *(_DWORD *)v24 )
                break;
              if ( v76 == -1 )
                goto LABEL_68;
              ++v77;
            }
          }
        }
      }
    }
    LODWORD(qword_2D0A7E8) = v35;
    if ( *(_DWORD *)v24 != -1 )
      --HIDWORD(qword_2D0A7E8);
    *(_DWORD *)v24 = v14;
    memset((void *)(v24 + 8), 0, 0x78u);
    *(_QWORD *)(v24 + 32) = v24 + 48;
    *(_QWORD *)(v24 + 64) = v24 + 80;
    *(_QWORD *)(v24 + 72) = 0x300000000LL;
    goto LABEL_19;
  }
LABEL_26:
  if ( v12 != v100 )
    free(v12);
}
