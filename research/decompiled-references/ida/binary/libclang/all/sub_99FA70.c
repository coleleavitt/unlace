void __fastcall sub_99FA70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // edx
  int v11; // edi
  int v12; // r8d
  int v13; // r9d
  __m128i *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // edx
  unsigned int v18; // eax
  __int64 *v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // esi
  int v26; // edi
  int v27; // r8d
  __int64 v28; // r15
  __m128i *v29; // r14
  unsigned __int64 v30; // rcx
  int v31; // r9d
  __int64 *v32; // rdi
  int v33; // r8d
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // r12d
  unsigned int v41; // edx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // esi
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // edi
  int v54; // esi
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __m128i *v62; // rax
  unsigned __int64 v63; // rdi
  __m128i *v64; // rdx
  int v65; // ecx
  __int64 v66; // r9
  __m128i *v67; // r8
  __int64 v68; // r10
  __m128i v69; // xmm0
  __m128i *v70; // r9
  __m128i *i; // rax
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // ecx
  int v75; // r15d
  _QWORD *v76; // r13
  unsigned int v77; // edi
  _QWORD *v78; // r9
  __int64 v79; // r10
  int v80; // ecx
  unsigned int v81; // eax
  __int64 v82; // r8
  int v83; // r10d
  __int64 *v84; // r9
  __int64 v85; // r10
  __int64 v86; // rax
  unsigned int v87; // edx
  unsigned int v88; // r12d
  int v89; // eax
  int v90; // edx
  __int64 v91; // rax
  unsigned int v92; // esi
  __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // r8
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rsi
  __int64 v100; // r14
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rsi
  unsigned int v104; // ecx
  int v105; // edi
  int v106; // r9d
  int v107; // r8d
  unsigned int v108; // ecx
  __m128i *v109; // rsi
  unsigned int v110; // edx
  __int64 *v111; // rdi
  __int64 v112; // r8
  unsigned int v113; // eax
  __m128i *v114; // rax
  unsigned __int64 v115; // rsi
  __m128i *v116; // rcx
  int v117; // r9d
  __int64 v118; // r10
  __m128i v119; // xmm0
  __int64 v120; // r11
  __m128i *v121; // r10
  __int64 *v122; // rax
  int v123; // esi
  int v124; // esi
  unsigned int v125; // ecx
  _QWORD *v126; // r8
  __int64 v127; // r9
  int v128; // r9d
  int v129; // r8d
  __int64 *v130; // rdx
  unsigned int v131; // r13d
  __int64 v132; // rax
  int v133; // edi
  int v134; // r10d
  __int64 v135; // rcx
  __int64 v136; // r14
  __int64 v137; // r13
  __int64 v138; // rdx
  __int64 v139; // r8
  __m128i v140; // xmm0
  __m128i *v141; // rsi
  __m128i v142; // xmm0
  __int64 v143; // r8
  __m128i *v144; // rdi
  int v145; // r14d
  _QWORD *v146; // r11
  int v147; // edi
  int v148; // r10d
  __int64 v149; // rdi
  int v150; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v151; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v152; // [rsp+18h] [rbp-B0h]
  __int64 v153; // [rsp+28h] [rbp-A0h]
  __int64 v154; // [rsp+30h] [rbp-98h]
  char v155; // [rsp+38h] [rbp-90h]
  int v156; // [rsp+40h] [rbp-88h]
  __int64 v157; // [rsp+50h] [rbp-78h] BYREF
  __int128 v158; // [rsp+58h] [rbp-70h]
  __int64 v159; // [rsp+68h] [rbp-60h]
  __int64 v160; // [rsp+70h] [rbp-58h]
  char v161; // [rsp+78h] [rbp-50h]
  int v162; // [rsp+80h] [rbp-48h]

  v2 = a1;
  if ( *(_DWORD *)(a1 + 48) )
    return;
  while ( 1 )
  {
    v21 = *(_QWORD *)(v2 + 24);
    if ( !v21 )
      return;
    if ( *(_BYTE *)(v21 + 26) )
      return;
    v22 = *(_QWORD *)(v21 + 32);
    if ( *(_BYTE *)(v22 + 52) )
      return;
    v23 = *(_QWORD *)v2;
    if ( (unsigned __int64)*(unsigned int *)(v22 + 20) < *(_QWORD *)v2 )
      return;
    v24 = *(unsigned int *)(v2 + 32);
    if ( *(_DWORD *)(v22 + 16) != (_DWORD)v24 && (_DWORD)v24 )
      v22 = *(_QWORD *)(v21 + (unsigned int)v24 + 32);
    v25 = *(_DWORD *)(v22 + 12);
    if ( v25 == -1 || v23 == 0xFFFFFFFFLL )
      return;
    v26 = *(_QWORD *)v2;
    if ( (_DWORD)v24 != -1 )
    {
      v27 = 0;
      if ( v23 != (unsigned int)v24 )
      {
        v27 = 32;
        if ( *(_QWORD *)(v22 + 32) )
          v27 = 16;
      }
      v26 = v23 - v24 - v27;
    }
    if ( v25 == v26 && v25 )
      return;
    v28 = *(unsigned int *)(a2 + 16);
    v29 = *(__m128i **)a2;
    if ( !(_DWORD)v28 )
    {
      v55 = 0;
LABEL_101:
      v59 = (unsigned int)(v55 - 1) | ((unsigned __int64)(unsigned int)(v55 - 1) >> 1);
      v60 = (((v59 >> 2) | v59) >> 4) | (v59 >> 2) | v59;
      v61 = ((((v60 >> 8) | v60) >> 16) | (v60 >> 8) | v60) + 1;
      if ( (unsigned int)v61 < 0x40 )
        LODWORD(v61) = 64;
      *(_DWORD *)(a2 + 16) = v61;
      v62 = (__m128i *)sub_25CC9C0(8LL * (unsigned int)v61, 8);
      v63 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)a2 = v62;
      v64 = v62;
      v65 = v63;
      v66 = 8 * v63;
      if ( v29 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        v67 = (__m128i *)((char *)v29 + 8 * (unsigned int)v28);
        if ( v66 )
        {
          if ( v66 != 8 )
          {
            v68 = v63 >> 1;
            v69 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
            v70 = &v62[v68];
            if ( ((v68 * 16) & 0x10) == 0 || (*v62 = v69, ++v62, v62 != v70) )
            {
              do
              {
                *v62 = v69;
                v62 += 2;
                v62[-1] = v69;
              }
              while ( v62 != v70 );
            }
            if ( (v63 & 1) == 0 )
              goto LABEL_112;
            v64 = (__m128i *)((char *)v64 + 8 * (v63 & 0xFFFFFFFFFFFFFFFELL));
          }
          v64->m128i_i64[0] = -4096;
        }
LABEL_112:
        for ( i = v29; v67 != i; i = (__m128i *)((char *)i + 8) )
        {
          v72 = i->m128i_i64[0];
          if ( i->m128i_i64[0] != -4096 && v72 != -8192 )
          {
            v73 = *(_DWORD *)(a2 + 16);
            if ( !v73 )
            {
LABEL_303:
              *(_QWORD *)&dword_0 = v72;
              BUG();
            }
            v74 = v73 - 1;
            v75 = 1;
            v76 = nullptr;
            v77 = v74 & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
            v78 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v77);
            v79 = *v78;
            if ( v72 != *v78 )
            {
              while ( v79 != -4096 )
              {
                if ( v79 == -8192 && !v76 )
                  v76 = v78;
                v77 = v74 & (v77 + v75);
                v78 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v77);
                v79 = *v78;
                if ( v72 == *v78 )
                  goto LABEL_117;
                ++v75;
              }
              if ( v76 )
                v78 = v76;
            }
LABEL_117:
            *v78 = v72;
            ++*(_DWORD *)(a2 + 8);
          }
        }
        operator delete();
        v64 = *(__m128i **)a2;
        v65 = *(_DWORD *)(a2 + 16);
        v54 = *(_DWORD *)(a2 + 8) + 1;
        goto LABEL_120;
      }
      *(_QWORD *)(a2 + 8) = 0;
      if ( v62 != (__m128i *)&v62->m128i_i8[v66] )
      {
        if ( v66 != 8 )
        {
          v139 = v63 >> 1;
          v140 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
          v141 = &v62[v139];
          if ( ((v139 * 16) & 0x10) == 0 || (++v62, *v64 = v140, &v64[1] != v141) )
          {
            do
            {
              *v62 = v140;
              v62 += 2;
              v62[-1] = v140;
            }
            while ( v62 != v141 );
          }
          if ( (v63 & 1) == 0 )
            goto LABEL_239;
          v62 = (__m128i *)((char *)v64 + 8 * (v63 & 0xFFFFFFFFFFFFFFFELL));
        }
        v62->m128i_i64[0] = -4096;
      }
LABEL_239:
      v54 = 1;
LABEL_120:
      if ( !v65 )
        goto LABEL_304;
      v80 = v65 - 1;
      v81 = v80 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
      v32 = &v64->m128i_i64[v81];
      v82 = *v32;
      if ( v21 != *v32 )
      {
        v83 = 1;
        v84 = nullptr;
        while ( v82 != -4096 )
        {
          if ( v82 == -8192 && !v84 )
            v84 = v32;
          v81 = v80 & (v83 + v81);
          v32 = &v64->m128i_i64[v81];
          v82 = *v32;
          if ( v21 == *v32 )
            goto LABEL_92;
          ++v83;
        }
        if ( v84 )
          v32 = v84;
      }
      goto LABEL_92;
    }
    v30 = (unsigned int)(v28 - 1);
    v31 = 1;
    v32 = nullptr;
    v33 = v30 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
    v34 = &v29->m128i_i64[v33];
    v35 = *v34;
    if ( v21 == *v34 )
      goto LABEL_49;
    while ( v35 != -4096 )
    {
      if ( v35 == -8192 && !v32 )
        v32 = v34;
      v33 = v30 & (v31 + v33);
      v34 = &v29->m128i_i64[v33];
      v35 = *v34;
      if ( v21 == *v34 )
        goto LABEL_49;
      ++v31;
    }
    if ( !v32 )
      v32 = v34;
    v54 = *(_DWORD *)(a2 + 8) + 1;
    v55 = 2 * v28;
    if ( 4 * v54 >= (unsigned int)(3 * v28) )
      goto LABEL_101;
    if ( (unsigned int)v28 >> 3 >= (int)v28 - *(_DWORD *)(a2 + 12) - v54 )
    {
      v113 = (((((((((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 4) | ((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 8)
              | ((((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 4)
              | ((v30 | (v30 >> 1)) >> 2)
              | v30
              | (v30 >> 1)) >> 16)
            | ((((((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 4) | ((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 8)
            | ((((v30 | (v30 >> 1)) >> 2) | v30 | (v30 >> 1)) >> 4)
            | ((v30 | (v30 >> 1)) >> 2)
            | v30
            | (v30 >> 1))
           + 1;
      if ( v113 < 0x40 )
        v113 = 64;
      *(_DWORD *)(a2 + 16) = v113;
      v114 = (__m128i *)sub_25CC9C0(8LL * v113, 8);
      v115 = *(unsigned int *)(a2 + 16);
      *(_QWORD *)a2 = v114;
      v116 = v114;
      v117 = v115;
      v118 = 8 * v115;
      if ( v29 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        if ( v118 )
        {
          if ( v118 == 8 )
            goto LABEL_200;
          v119 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
          v120 = v115 >> 1;
          v121 = &v114[v120];
          if ( ((v120 * 16) & 0x10) == 0 || (*v114 = v119, ++v114, v114 != v121) )
          {
            do
            {
              *v114 = v119;
              v114 += 2;
              v114[-1] = v119;
            }
            while ( v114 != v121 );
          }
          if ( (v115 & 1) != 0 )
          {
            v116 = (__m128i *)((char *)v116 + 8 * (v115 & 0xFFFFFFFFFFFFFFFELL));
LABEL_200:
            v116->m128i_i64[0] = -4096;
          }
        }
        v122 = (__int64 *)v29;
        do
        {
          v72 = *v122;
          if ( *v122 != -4096 && v72 != -8192 )
          {
            v123 = *(_DWORD *)(a2 + 16);
            if ( !v123 )
              goto LABEL_303;
            v124 = v123 - 1;
            v125 = v124 & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
            v126 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v125);
            v127 = *v126;
            if ( v72 != *v126 )
            {
              v150 = 1;
              v146 = nullptr;
              while ( v127 != -4096 )
              {
                if ( v127 == -8192 && !v146 )
                  v146 = v126;
                v125 = v124 & (v150 + v125);
                v126 = (_QWORD *)(*(_QWORD *)a2 + 8LL * v125);
                v127 = *v126;
                if ( v72 == *v126 )
                  goto LABEL_206;
                ++v150;
              }
              if ( v146 )
                v126 = v146;
            }
LABEL_206:
            *v126 = v72;
            ++*(_DWORD *)(a2 + 8);
          }
          ++v122;
        }
        while ( (__int64 *)((char *)v29 + 8 * v28) != v122 );
        operator delete();
        v116 = *(__m128i **)a2;
        v117 = *(_DWORD *)(a2 + 16);
        v54 = *(_DWORD *)(a2 + 8) + 1;
LABEL_209:
        if ( !v117 )
        {
LABEL_304:
          *(_DWORD *)(a2 + 8) = v54;
          BUG();
        }
        v128 = v117 - 1;
        v129 = 1;
        v130 = nullptr;
        v131 = v128 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
        v32 = &v116->m128i_i64[v131];
        v132 = *v32;
        if ( v21 != *v32 )
        {
          while ( v132 != -4096 )
          {
            if ( v132 == -8192 && !v130 )
              v130 = v32;
            v131 = v128 & (v129 + v131);
            v32 = &v116->m128i_i64[v131];
            v132 = *v32;
            if ( v21 == *v32 )
              goto LABEL_92;
            ++v129;
          }
          if ( v130 )
            v32 = v130;
        }
        goto LABEL_92;
      }
      *(_QWORD *)(a2 + 8) = 0;
      if ( v114 != (__m128i *)&v114->m128i_i8[v118] )
      {
        if ( v118 == 8 )
          goto LABEL_248;
        v142 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
        v143 = v115 >> 1;
        v144 = &v114[v143];
        if ( ((v143 * 16) & 0x10) == 0 || (++v114, *v116 = v142, &v116[1] != v144) )
        {
          do
          {
            *v114 = v142;
            v114 += 2;
            v114[-1] = v142;
          }
          while ( v114 != v144 );
        }
        if ( (v115 & 1) != 0 )
        {
          v114 = (__m128i *)((char *)v116 + 8 * (v115 & 0xFFFFFFFFFFFFFFFELL));
LABEL_248:
          v114->m128i_i64[0] = -4096;
        }
      }
      v54 = 1;
      goto LABEL_209;
    }
LABEL_92:
    *(_DWORD *)(a2 + 8) = v54;
    if ( *v32 != -4096 )
      --*(_DWORD *)(a2 + 12);
    *v32 = v21;
    v56 = *(unsigned int *)(a2 + 32);
    if ( *(unsigned int *)(a2 + 36) < (unsigned __int64)(v56 + 1) )
    {
      sub_25D6060(a2 + 24, a2 + 40, v56 + 1, 8);
      v56 = *(unsigned int *)(a2 + 32);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v56) = v21;
    ++*(_DWORD *)(a2 + 32);
    v38 = *(_DWORD *)(v2 + 48);
    if ( v38 == 1 )
    {
      v36 = *(_QWORD *)(v2 + 24);
      v37 = v36;
      goto LABEL_52;
    }
    if ( v38 )
    {
      if ( (unsigned int)(v38 - 2) <= 1 )
        return;
      v37 = *(_QWORD *)(v2 + 24);
      v36 = *(_QWORD *)(v37 + 32);
      goto LABEL_52;
    }
    v21 = *(_QWORD *)(v2 + 24);
    v24 = *(unsigned int *)(v2 + 32);
LABEL_49:
    v36 = *(_QWORD *)(v21 + 32);
    v37 = v21;
    if ( (_DWORD)v24 == *(_DWORD *)(v36 + 16) || !(_DWORD)v24 )
    {
      v38 = 0;
      goto LABEL_53;
    }
    v36 = *(_QWORD *)(v21 + v24 + 32);
    v38 = 0;
LABEL_52:
    if ( !v36 )
      return;
LABEL_53:
    v39 = *(_QWORD *)(v36 + 24);
    if ( v39 )
    {
      v136 = *(_QWORD *)(v39 + 280);
      v137 = v136 + 24LL * *(unsigned int *)(v39 + 288);
      if ( v137 != v136 )
      {
        while ( 1 )
        {
          v138 = (unsigned int)(*(_DWORD *)v2 + *(_DWORD *)(v136 + 8));
          v136 += 24;
          sub_A1C030(&v157, v37, v138, (unsigned int)v138);
          sub_99FA70(&v157, a2);
          sub_A1C0C0(&v157);
          if ( v137 == v136 )
            break;
          v37 = *(_QWORD *)(v2 + 24);
        }
      }
      return;
    }
    if ( *(_BYTE *)(v36 + 51) )
      break;
    if ( *(_DWORD *)(v36 + 40) != 13 )
      return;
    v4 = *(_QWORD *)v2;
    if ( v38 )
      goto LABEL_10;
    v5 = *(_QWORD *)(v37 + 32);
    v6 = *(unsigned int *)(v2 + 32);
    if ( *(_DWORD *)(v5 + 16) != (_DWORD)v6 && (_DWORD)v6 )
      v5 = *(_QWORD *)(v37 + (unsigned int)v6 + 32);
    if ( !*(_BYTE *)(v5 + 51) || (v2 = v37 + v4 + 72, v6 != v4) )
LABEL_10:
      v2 = v37 + v4 + 40;
    if ( *(_DWORD *)(v2 + 48) )
      return;
    v7 = *(_QWORD *)(v2 + 24);
    if ( !v7 )
      return;
    if ( *(_BYTE *)(v7 + 26) )
      return;
    v8 = *(_QWORD *)(v7 + 32);
    if ( *(_BYTE *)(v8 + 52) )
      return;
    v9 = *(_QWORD *)v2;
    if ( (unsigned __int64)*(unsigned int *)(v8 + 20) < *(_QWORD *)v2 )
      return;
    v10 = *(_DWORD *)(v2 + 32);
    if ( *(_DWORD *)(v8 + 16) != v10 && v10 )
      v8 = *(_QWORD *)(v7 + v10 + 32);
    v11 = *(_DWORD *)(v8 + 12);
    if ( v11 == -1 || v9 == 0xFFFFFFFFLL )
      return;
    v12 = *(_QWORD *)v2;
    if ( v10 != -1 )
    {
      v13 = 0;
      if ( v9 != v10 )
      {
        v13 = 32;
        if ( *(_QWORD *)(v8 + 32) )
          v13 = 16;
      }
      v12 = v9 - v10 - v13;
    }
    if ( v11 && v11 == v12 )
      return;
    v14 = *(__m128i **)a2;
    v15 = *(unsigned int *)(a2 + 16);
    v16 = *(_QWORD *)a2 + 8 * v15;
    if ( (_DWORD)v15 )
    {
      v17 = v15 - 1;
      v18 = v17 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v19 = &v14->m128i_i64[v18];
      v20 = *v19;
      if ( v7 == *v19 )
      {
LABEL_30:
        if ( (__int64 *)v16 != v19 )
          return;
      }
      else
      {
        v133 = 1;
        while ( v20 != -4096 )
        {
          v134 = v133 + 1;
          v18 = v17 & (v133 + v18);
          v19 = &v14->m128i_i64[v18];
          v20 = *v19;
          if ( v7 == *v19 )
            goto LABEL_30;
          v133 = v134;
        }
      }
    }
  }
  v40 = 0;
  if ( *(_QWORD *)(v36 + 32) )
  {
    v41 = *(_DWORD *)(v36 + 12);
    v42 = 0;
    if ( v41 == -1 )
      goto LABEL_58;
    while ( 2 )
    {
      v42 = v41 / *(_DWORD *)(v36 + 8);
LABEL_58:
      if ( v40 == v42 )
        return;
      v43 = *(_DWORD *)(v2 + 48);
      if ( v43 == 1 )
      {
        v57 = *(_QWORD *)(v2 + 24);
        v58 = *(_QWORD *)(v2 + 32);
        v151 = v40;
        v156 = 1;
        v154 = v58;
        v153 = v57;
        v152 = 0;
        goto LABEL_99;
      }
      if ( v43 == 2 )
      {
        v86 = *(_QWORD *)(v2 + 24);
        v151 = v40;
        v156 = 2;
        v153 = v86;
        v154 = 0;
        v155 = 1;
        v152 = 0;
        sub_A1BFE0(&v157, &v151);
        goto LABEL_79;
      }
      v44 = *(_DWORD *)(v2 + 32);
      if ( v44 == -1 )
      {
        if ( v43 == 3 )
          goto LABEL_302;
        sub_A1C030(
          &v151,
          *(_QWORD *)(v2 + 24),
          0xFFFFFFFFLL,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 32LL) + 12LL));
      }
      else
      {
        if ( v43 )
        {
          if ( v43 == 3 )
            goto LABEL_305;
          v45 = *(_QWORD *)(v2 + 24);
          v46 = v44;
          v47 = *(_QWORD *)(v45 + 32);
          v48 = *(unsigned int *)(v47 + 8) * (unsigned __int64)v40;
        }
        else
        {
          v45 = *(_QWORD *)(v2 + 24);
          if ( !v45 )
            goto LABEL_258;
          v47 = *(_QWORD *)(v45 + 32);
          v46 = v44;
          if ( *(_DWORD *)(v47 + 16) != v44 && v44 )
            v47 = *(_QWORD *)(v45 + v44 + 32);
          v48 = *(unsigned int *)(v47 + 8) * (unsigned __int64)v40;
        }
        v49 = v48 + 32;
        if ( *(_QWORD *)(v47 + 32) )
          v49 = v48 + 16;
        sub_A1C030(&v151, v45, v44, v49 + v46);
      }
      if ( v156 || !v153 )
      {
LABEL_99:
        sub_A1BFE0(&v157, &v151);
        goto LABEL_79;
      }
      v50 = *(_QWORD *)(v153 + 32);
      if ( (_DWORD)v154 == 0 || *(_DWORD *)(v50 + 16) == (_DWORD)v154 )
      {
        if ( *(_DWORD *)(v50 + 12) == -1 )
          goto LABEL_99;
        v51 = v151;
        if ( (_DWORD)v154 != -1 )
        {
          if ( v151 == 0xFFFFFFFF || *(unsigned int *)(v50 + 20) < v151 )
            goto LABEL_78;
          v52 = (unsigned int)v154;
          v53 = *(_DWORD *)(v50 + 12);
          if ( v151 == (unsigned int)v154 )
          {
            if ( (_DWORD)v151 - (_DWORD)v154 == v53 && v53 )
              goto LABEL_78;
            v85 = *(_QWORD *)(v153 + 32);
LABEL_136:
            if ( *(_BYTE *)(v50 + 51) && !*(_QWORD *)(v50 + 32) )
            {
              if ( v52 == v51 )
              {
                sub_A1C030(&v157, v153, (unsigned int)v154, v52 + 32);
                goto LABEL_79;
              }
            }
            else
            {
              if ( v52 != v51 )
              {
                sub_A1C030(&v157, v153, (unsigned int)v51, v51);
                goto LABEL_79;
              }
              if ( *(_BYTE *)(v85 + 51) )
              {
                sub_A1C030(&v157, v153, (unsigned int)(v154 + 16), (unsigned int)(v154 + 16));
                goto LABEL_79;
              }
            }
            goto LABEL_99;
          }
          v85 = *(_QWORD *)(v153 + 32);
LABEL_253:
          v145 = 32;
          if ( *(_QWORD *)(v85 + 32) )
            v145 = 16;
          if ( (_DWORD)v51 - (_DWORD)v154 - v145 == v53 && v53 )
          {
LABEL_78:
            sub_A1C030(&v157, v153, (unsigned int)v154, 0xFFFFFFFFLL);
            goto LABEL_79;
          }
          if ( (_DWORD)v154 == 0 || *(_DWORD *)(v50 + 16) == (_DWORD)v154 )
            goto LABEL_136;
LABEL_135:
          v50 = *(_QWORD *)(v153 + v52 + 32);
          goto LABEL_136;
        }
      }
      else
      {
        v52 = (unsigned int)v154;
        v85 = *(_QWORD *)(v153 + (unsigned int)v154 + 32);
        if ( *(_DWORD *)(v85 + 12) == -1 )
          goto LABEL_99;
        v51 = v151;
        if ( (_DWORD)v154 != -1 )
        {
          if ( v151 == 0xFFFFFFFF || *(unsigned int *)(v50 + 20) < v151 )
            goto LABEL_78;
          v53 = *(_DWORD *)(v85 + 12);
          if ( (unsigned int)v154 != v151 )
            goto LABEL_253;
          goto LABEL_135;
        }
      }
      if ( v51 )
        v51 = 0xFFFFFFFFLL;
      sub_A1C030(&v157, v153, 16, v51);
LABEL_79:
      ++v40;
      sub_A1C0C0(&v151);
      sub_99FA70(&v157, a2);
      sub_A1C0C0(&v157);
      v41 = *(_DWORD *)(v36 + 12);
      v42 = 0;
      if ( v41 != -1 )
        continue;
      goto LABEL_58;
    }
  }
  if ( *(_DWORD *)(v36 + 40) == 13 )
  {
    v87 = *(_DWORD *)(v36 + 12);
    v88 = 0;
    v89 = 0;
    if ( v87 == -1 )
      goto LABEL_146;
    while ( 2 )
    {
      v89 = v87 / *(_DWORD *)(v36 + 8);
LABEL_146:
      if ( v88 == v89 )
        return;
      v90 = *(_DWORD *)(v2 + 48);
      v91 = v88;
      if ( v90 == 1 )
      {
        v98 = *(_QWORD *)(v2 + 24);
        v135 = *(_QWORD *)(v2 + 32);
        v157 = v88;
        v162 = 1;
        v160 = v135;
        v159 = v98;
        v158 = 0;
        goto LABEL_162;
      }
      if ( v90 == 2 )
      {
        v98 = *(_QWORD *)(v2 + 24);
        v157 = v88;
        v162 = 2;
        v159 = v98;
        v160 = 0;
        v161 = 1;
        v158 = 0;
        goto LABEL_162;
      }
      v92 = *(_DWORD *)(v2 + 32);
      if ( v92 == -1 )
      {
        if ( v90 == 3 )
LABEL_302:
          BUG();
        sub_A1C030(
          &v157,
          *(_QWORD *)(v2 + 24),
          0xFFFFFFFFLL,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 32LL) + 12LL));
      }
      else
      {
        if ( v90 )
        {
          if ( v90 == 3 )
LABEL_305:
            BUG();
          v93 = *(_QWORD *)(v2 + 24);
          v94 = v92;
          v95 = *(_QWORD *)(v93 + 32);
          v96 = *(unsigned int *)(v95 + 8) * (unsigned __int64)v88;
        }
        else
        {
          v93 = *(_QWORD *)(v2 + 24);
          if ( !v93 )
LABEL_258:
            BUG();
          v95 = *(_QWORD *)(v93 + 32);
          v94 = v92;
          if ( *(_DWORD *)(v95 + 16) != v92 && v92 )
            v95 = *(_QWORD *)(v93 + v92 + 32);
          v96 = *(unsigned int *)(v95 + 8) * (unsigned __int64)v88;
        }
        v97 = v96 + 32;
        if ( *(_QWORD *)(v95 + 32) )
          v97 = v96 + 16;
        sub_A1C030(&v157, v93, v92, v97 + v94);
      }
      v91 = v157;
      v98 = v159;
      if ( v162 )
        goto LABEL_162;
      v99 = *(_QWORD *)(v159 + 32);
      if ( *(_DWORD *)(v99 + 16) != (_DWORD)v160 && (_DWORD)v160 )
        v99 = *(_QWORD *)(v159 + (unsigned int)v160 + 32);
      if ( !*(_BYTE *)(v99 + 51) || (v100 = v159 + v157 + 72, (unsigned int)v160 != v157) )
LABEL_162:
        v100 = v98 + v91 + 40;
      sub_A1C0C0(&v157);
      if ( !*(_DWORD *)(v100 + 48) )
      {
        v101 = *(_QWORD *)(v100 + 24);
        if ( v101 )
        {
          if ( !*(_BYTE *)(v101 + 26) )
          {
            v102 = *(_QWORD *)(v101 + 32);
            if ( !*(_BYTE *)(v102 + 52) )
            {
              v103 = *(_QWORD *)v100;
              if ( (unsigned __int64)*(unsigned int *)(v102 + 20) >= *(_QWORD *)v100 )
              {
                v104 = *(_DWORD *)(v100 + 32);
                if ( *(_DWORD *)(v102 + 16) != v104 && v104 )
                  v102 = *(_QWORD *)(v101 + v104 + 32);
                v105 = *(_DWORD *)(v102 + 12);
                if ( v105 != -1 && v103 != 0xFFFFFFFFLL )
                {
                  v106 = *(_QWORD *)v100;
                  if ( v104 != -1 )
                  {
                    v107 = 0;
                    if ( v103 != v104 )
                    {
                      if ( *(_QWORD *)(v102 + 32) )
                        v107 = 16;
                      else
                        v107 = 32;
                    }
                    v106 = v103 - v104 - v107;
                  }
                  if ( v105 != v106 || !v105 )
                  {
                    v108 = *(_DWORD *)(a2 + 16);
                    v109 = *(__m128i **)a2;
                    if ( v108 )
                    {
                      v110 = (v108 - 1) & (((unsigned int)v101 >> 9) ^ ((unsigned int)v101 >> 4));
                      v111 = &v109->m128i_i64[v110];
                      v112 = *v111;
                      if ( v101 == *v111 )
                      {
LABEL_182:
                        if ( v111 != (__int64 *)((char *)v109 + 8 * v108) )
                          goto LABEL_183;
                      }
                      else
                      {
                        v147 = 1;
                        while ( v112 != -4096 )
                        {
                          v148 = v147 + 1;
                          v149 = (v108 - 1) & (v110 + v147);
                          v110 = v149;
                          v111 = &v109->m128i_i64[v149];
                          v112 = *v111;
                          if ( v101 == *v111 )
                            goto LABEL_182;
                          v147 = v148;
                        }
                      }
                    }
                    sub_99FA70(v100, a2);
                  }
                }
              }
            }
          }
        }
      }
LABEL_183:
      v87 = *(_DWORD *)(v36 + 12);
      ++v88;
      v89 = 0;
      if ( v87 != -1 )
        continue;
      goto LABEL_146;
    }
  }
}

