unsigned __int64 __fastcall sub_C58E0(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5, int a6)
{
  __int64 v7; // rbp
  __int64 v8; // r11
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r14
  __int64 v18; // r13
  char *v19; // rbp
  char *v20; // rsi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r10
  char *v25; // r9
  char *v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // r15
  unsigned int v29; // r8d
  int v30; // ecx
  int v31; // r8d
  _DWORD *v32; // r8
  unsigned int v33; // ecx
  _QWORD *v34; // rdx
  char *v35; // r8
  unsigned int v36; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  _QWORD *v43; // r15
  char *v44; // rcx
  char *v45; // rdx
  unsigned __int64 v46; // rdi
  signed __int64 v49; // rsi
  signed __int64 v50; // r11
  const __m128i *v51; // r15
  unsigned __int64 v52; // r10
  __m128i *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rsi
  unsigned int v57; // edx
  unsigned __int64 v58; // rax
  unsigned int v59; // r8d
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // rbx
  int v62; // r9d
  unsigned int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // r10
  char *v67; // rsi
  char *v68; // r8
  unsigned __int64 v69; // rdi
  char *v70; // rcx
  __int64 *v71; // r10
  __int64 v72; // rdx
  __int64 v73; // rax
  signed __int64 v76; // rcx
  unsigned __int64 v77; // r10
  unsigned int v78; // eax
  __int64 v79; // rax
  __m128i *v82; // rax
  char *v83; // rdx
  __m128i *v84; // rax
  const __m128i *v85; // rcx
  __m128i v86; // xmm0
  bool v89; // cc
  unsigned __int64 v90; // rcx
  __m128i *v91; // rsi
  __m128i *v92; // rdx
  __int64 v93; // rsi
  unsigned __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // r10
  _QWORD *v97; // rdi
  _QWORD *v98; // r10
  __int64 v99; // rax
  char *v102; // r10
  unsigned int v103; // eax
  unsigned int v104; // eax
  __m128i *v105; // rdi
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned int v108; // eax
  char *v111; // rcx
  signed __int64 v114; // rax
  _DWORD *v115; // rsi
  char *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rdi
  unsigned int v121; // eax
  unsigned int v122; // [rsp+8h] [rbp-F0h]
  char *v123; // [rsp+8h] [rbp-F0h]
  char *v124; // [rsp+8h] [rbp-F0h]
  unsigned int v125; // [rsp+14h] [rbp-E4h]
  unsigned __int64 v126; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v127; // [rsp+18h] [rbp-E0h]
  unsigned int v128; // [rsp+18h] [rbp-E0h]
  char *v129; // [rsp+20h] [rbp-D8h]
  __int64 v130; // [rsp+20h] [rbp-D8h]
  int v131; // [rsp+30h] [rbp-C8h]
  __int64 v132; // [rsp+30h] [rbp-C8h]
  __int64 v133; // [rsp+38h] [rbp-C0h]
  unsigned int v134; // [rsp+40h] [rbp-B8h]
  char v135; // [rsp+44h] [rbp-B4h]
  unsigned __int64 v136; // [rsp+48h] [rbp-B0h]
  unsigned int v137; // [rsp+54h] [rbp-A4h]
  char *v138; // [rsp+58h] [rbp-A0h]
  bool v139; // [rsp+63h] [rbp-95h]
  char v140; // [rsp+64h] [rbp-94h]
  const __m128i *v142; // [rsp+70h] [rbp-88h]
  __int64 v143; // [rsp+78h] [rbp-80h]
  int v144; // [rsp+80h] [rbp-78h]
  unsigned int v145; // [rsp+84h] [rbp-74h]
  __int64 v146; // [rsp+88h] [rbp-70h]
  _QWORD *v148; // [rsp+98h] [rbp-60h]
  char *v149; // [rsp+A0h] [rbp-58h]
  unsigned int v150; // [rsp+A8h] [rbp-50h]
  unsigned int v151; // [rsp+ACh] [rbp-4Ch]
  _QWORD *v152; // [rsp+B0h] [rbp-48h]
  unsigned int v153; // [rsp+B8h] [rbp-40h]
  bool v154; // [rsp+BFh] [rbp-39h]

  v7 = *(_QWORD *)(a1 + 8);
  v138 = (char *)a4;
  v8 = *(_QWORD *)(a1 + 16);
  v146 = v8;
  v143 = *(_DWORD *)(a1 + 276) + (unsigned int)(*(_DWORD *)(a1 + 276) == 0) + 1;
  v9 = (_DWORD)a4 - v7;
  v10 = 1 << *(_DWORD *)(a1 + 256);
  v11 = v9 + a5 - v10;
  if ( v10 >= v9 + (int)a5 - *(_DWORD *)(a1 + 28) )
    v11 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(a1 + 40) )
    v11 = *(_DWORD *)(a1 + 28);
  v12 = v11;
  v125 = v11;
  v13 = v11;
  v152 = (_QWORD *)(v8 + v11);
  v14 = *(_DWORD *)(a1 + 24);
  if ( v12 < v14 )
    v13 = *(_DWORD *)(a1 + 24);
  v150 = v13;
  v148 = (_QWORD *)(v7 + v13);
  v142 = (const __m128i *)((char *)a4 + a5);
  v149 = (char *)(v8 + v13);
  v136 = (unsigned __int64)&a4->m128i_u64[-1] + a5;
  if ( v12 >= v14 )
    return sub_C1910(a1, a2, a3, a4, a5);
  v15 = v9 - v125;
  v153 = 0;
  v145 = a3[1];
  if ( v145 >= v15 )
  {
    v153 = a3[1];
    v145 = 0;
  }
  v134 = *a3;
  if ( *a3 >= v15 )
  {
    v151 = *a3;
    v154 = *a3 != 0;
    v134 = 0;
  }
  else
  {
    v154 = 0;
    v151 = 0;
  }
  v16 = *(_QWORD *)(a1 + 112);
  v18 = *(_QWORD *)(a1 + 8);
  v144 = *(_DWORD *)(a1 + 264);
LABEL_13:
  while ( 1 )
  {
    v19 = v138 + 1;
    v129 = v138 + 128;
    v20 = &v138[v143];
    v21 = (unsigned __int64)&v138[v143 + 1];
    if ( v136 <= v21 )
      break;
    switch ( a6 )
    {
      case 6:
        v22 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v138) >> (64 - (unsigned __int8)v144);
        v126 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v138 + 1)) >> (64 - (unsigned __int8)v144);
        break;
      case 7:
        v22 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)v138) >> (64 - (unsigned __int8)v144);
        v126 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)(v138 + 1)) >> (64 - (unsigned __int8)v144);
        break;
      case 5:
        v22 = (0xCF1BBCDCBB000000LL * *(_QWORD *)v138) >> (64 - (unsigned __int8)v144);
        v126 = (0xCF1BBCDCBB000000LL * *(_QWORD *)(v138 + 1)) >> (64 - (unsigned __int8)v144);
        break;
      default:
        v22 = (unsigned int)(-1640531535 * *(_DWORD *)v138) >> (32 - v144);
        v126 = (unsigned int)(-1640531535 * *(_DWORD *)(v138 + 1)) >> (32 - v144);
        break;
    }
    v23 = *(unsigned int *)(v16 + 4 * v22);
    v24 = v146;
    v25 = v138;
    if ( v150 <= (unsigned int)v23 )
      v24 = v18;
    v139 = v134 != 0;
    v133 = v143;
    v135 = 64 - v144;
    v140 = 32 - v144;
    while ( 1 )
    {
      v28 = v18;
      v29 = (_DWORD)v20 - v18 - v134;
      v137 = v29;
      if ( v150 > v29 )
        v28 = v146;
      v30 = v150 + v134 - ((_DWORD)v20 - (_DWORD)v18) > 3 && v134 ? *(_DWORD *)(v28 + v29) : *(_DWORD *)v20 ^ 1;
      *(_DWORD *)(v16 + 4 * v22) = (_DWORD)v25 - v18;
      v122 = (_DWORD)v25 - v18;
      if ( *(_DWORD *)v20 == v30 )
        break;
      v31 = *(_DWORD *)v25 ^ 1;
      if ( v125 <= (unsigned int)v23 )
        v31 = *(_DWORD *)(v24 + (unsigned int)v23);
      if ( v31 == *(_DWORD *)v25 )
      {
        v33 = v122 - v23;
        if ( v150 > (unsigned int)v23 )
        {
LABEL_112:
          v34 = v152;
          v35 = v149;
          goto LABEL_113;
        }
LABEL_50:
        v34 = v148;
        v35 = (char *)v142;
LABEL_113:
        v77 = v23 + v24;
        v131 = v33 + 3;
        if ( v77 <= (unsigned __int64)v34 || v138 >= v25 )
        {
          v103 = v134;
          v42 = v77;
          v134 = v33;
          v40 = 4;
          v145 = v103;
        }
        else
        {
          v42 = v77;
          if ( *(v25 - 1) == *(_BYTE *)(v77 - 1) )
          {
            do
            {
              --v42;
              --v25;
              v40 = v77 + 4 - v42;
            }
            while ( v138 < v25 && v42 > (unsigned __int64)v34 && *(v25 - 1) == *(_BYTE *)(v42 - 1) );
            v78 = v134;
            v134 = v33;
            v145 = v78;
          }
          else
          {
            v104 = v134;
            v40 = 4;
            v134 = v33;
            v145 = v104;
          }
        }
        goto LABEL_68;
      }
      v24 = v18;
      v32 = (_DWORD *)(v16 + 4 * v126);
      v23 = (unsigned int)*v32;
      if ( v150 > (unsigned int)v23 )
        v24 = v146;
      switch ( a6 )
      {
        case 6:
          v22 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v20) >> v135;
          break;
        case 7:
          v22 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)v20) >> v135;
          break;
        case 5:
          v22 = (0xCF1BBCDCBB000000LL * *(_QWORD *)v20) >> v135;
          break;
        default:
          v22 = (unsigned int)(-1640531535 * *(_DWORD *)v20) >> v140;
          break;
      }
      v122 = (_DWORD)v19 - v18;
      *v32 = (_DWORD)v19 - v18;
      if ( v125 <= (unsigned int)v23 )
      {
        if ( *(_DWORD *)(v24 + (unsigned int)v23) == *(_DWORD *)v19 )
          goto LABEL_49;
      }
      else if ( (*(_DWORD *)v19 ^ 1) == *(_DWORD *)v19 )
      {
LABEL_49:
        v25 = v19;
        v126 = v22;
        v19 = v20;
        v33 = v122 - v23;
        if ( v150 > (unsigned int)v23 )
          goto LABEL_112;
        goto LABEL_50;
      }
      v23 = *(unsigned int *)(v16 + 4 * v22);
      v24 = v18;
      if ( v150 > (unsigned int)v23 )
        v24 = v146;
      switch ( a6 )
      {
        case 6:
          v126 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v21) >> v135;
          break;
        case 7:
          v126 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)v21) >> v135;
          break;
        case 5:
          v126 = (0xCF1BBCDCBB000000LL * *(_QWORD *)v21) >> v135;
          break;
        default:
          v126 = (unsigned int)(-1640531535 * *(_DWORD *)v21) >> v140;
          break;
      }
      v26 = &v20[v133];
      v27 = v21 + v133;
      if ( &v20[v133] >= v129 )
      {
        _mm_prefetch((const char *)(v21 + 64), 1);
        _mm_prefetch((const char *)(v21 + 128), 1);
        ++v133;
        v129 += 128;
      }
      v25 = v20;
      v19 = (char *)v21;
      if ( v136 <= v27 )
        goto LABEL_60;
      v21 = v27;
      v20 = v26;
    }
    v131 = 1;
    v35 = (char *)v142;
    v38 = v137 + v28;
    if ( v150 > v137 )
      v35 = v149;
    v39 = *(v20 - 1) == *(_BYTE *)(v38 - 1);
    v40 = v39 + 4;
    v41 = -v39;
    v25 = &v20[v41];
    v42 = v38 + v41;
LABEL_68:
    v43 = (_QWORD *)(v40 + v42);
    v44 = &v25[v40];
    v45 = &v25[v40 + v35 - (char *)v43];
    if ( v142 < (const __m128i *)v45 )
      v45 = (char *)v142;
    v46 = (unsigned __int64)(v45 - 7);
    if ( v44 >= v45 - 7 )
    {
      v66 = v43;
      v67 = &v25[v40];
    }
    else
    {
      if ( *v43 != *(_QWORD *)v44 )
      {
        _RSI = *v43 ^ *(_QWORD *)v44;
        __asm { tzcnt   rsi, rsi }
        v49 = (unsigned int)_RSI >> 3;
        goto LABEL_73;
      }
      v67 = v44 + 8;
      v66 = v43 + 1;
      if ( v46 > (unsigned __int64)(v44 + 8) )
      {
        v130 = v43[1];
        v79 = *((_QWORD *)v44 + 1);
        if ( v79 != v130 )
        {
LABEL_125:
          _RAX = v130 ^ v79;
          __asm { tzcnt   rax, rax }
          v49 = &v67[(unsigned int)_RAX >> 3] - v44;
LABEL_73:
          if ( v35 != (char *)v43 + v49 )
            goto LABEL_74;
LABEL_106:
          v68 = &v44[v49];
          v69 = (unsigned __int64)&v142[-1].m128i_u64[1] + 1;
          if ( &v44[v49] >= &v142[-1].m128i_i8[9] )
          {
            v71 = v148;
            v70 = &v44[v49];
          }
          else
          {
            if ( *v148 != *(_QWORD *)v68 )
            {
              _RAX = *(_QWORD *)v68 ^ *v148;
              __asm { tzcnt   rcx, rax }
              v76 = (unsigned int)_RCX >> 3;
              goto LABEL_146;
            }
            v70 = v68 + 8;
            v71 = v148 + 1;
            if ( v69 > (unsigned __int64)(v68 + 8) )
            {
              v72 = v148[1];
              v73 = *((_QWORD *)v68 + 1);
              if ( v73 != v72 )
              {
LABEL_110:
                _RAX = v72 ^ v73;
                __asm { tzcnt   rax, rax }
                v76 = &v70[(unsigned int)_RAX >> 3] - v68;
LABEL_146:
                v49 += v76;
                goto LABEL_74;
              }
              while ( 1 )
              {
                v70 += 8;
                ++v71;
                if ( v69 <= (unsigned __int64)v70 )
                  break;
                v72 = *v71;
                v73 = *(_QWORD *)v70;
                if ( *v71 != *(_QWORD *)v70 )
                  goto LABEL_110;
              }
            }
          }
          if ( v70 < &v142[-1].m128i_i8[13] && *(_DWORD *)v71 == *(_DWORD *)v70 )
          {
            v70 += 4;
            v71 = (__int64 *)((char *)v71 + 4);
          }
          if ( v70 < &v142[-1].m128i_i8[15] && *(_WORD *)v71 == *(_WORD *)v70 )
          {
            v70 += 2;
            v71 = (__int64 *)((char *)v71 + 2);
          }
          if ( v142 > (const __m128i *)v70 )
            v70 += *(_BYTE *)v71 == (unsigned __int8)*v70;
          v76 = v70 - v68;
          goto LABEL_146;
        }
        while ( 1 )
        {
          v67 += 8;
          ++v66;
          if ( v46 <= (unsigned __int64)v67 )
            break;
          v130 = *v66;
          v79 = *(_QWORD *)v67;
          if ( *v66 != *(_QWORD *)v67 )
            goto LABEL_125;
        }
      }
    }
    if ( v67 < v45 - 3 && *(_DWORD *)v66 == *(_DWORD *)v67 )
    {
      v67 += 4;
      v66 = (__int64 *)((char *)v66 + 4);
    }
    if ( v67 < v45 - 1 && *(_WORD *)v66 == *(_WORD *)v67 )
    {
      v67 += 2;
      v66 = (__int64 *)((char *)v66 + 2);
    }
    if ( v45 > v67 )
      v67 += *(_BYTE *)v66 == (unsigned __int8)*v67;
    v49 = v67 - v44;
    if ( v35 == (char *)v43 + v49 )
      goto LABEL_106;
LABEL_74:
    v50 = v49 + v40;
    v51 = v142 - 2;
    v52 = v25 - v138;
    v53 = *(__m128i **)(a2 + 24);
    if ( v25 > v142[-2].m128i_i8 )
    {
      sub_C02D0(v53, (const __m128i *)v138, (unsigned __int64)v25, v142 - 2);
LABEL_94:
      *(_QWORD *)(a2 + 24) += v52;
      v54 = *(_QWORD *)(a2 + 8);
      if ( v52 > 0xFFFF )
      {
        v65 = v54 - *(_QWORD *)a2;
        *(_DWORD *)(a2 + 72) = 1;
        *(_DWORD *)(a2 + 76) = v65 >> 3;
      }
      goto LABEL_77;
    }
    *v53 = _mm_loadu_si128((const __m128i *)v138);
    if ( v52 > 0x10 )
    {
      v82 = *(__m128i **)(a2 + 24);
      v82[1] = _mm_loadu_si128((const __m128i *)v138 + 1);
      if ( (__int64)(v52 - 16) > 16 )
      {
        v83 = &v82->m128i_i8[v52];
        v84 = v82 + 2;
        v85 = (const __m128i *)(v138 + 32);
        do
        {
          v86 = _mm_loadu_si128(v85);
          v84 += 2;
          v85 += 2;
          v84[-2] = v86;
          v84[-1] = _mm_loadu_si128(v85 - 1);
        }
        while ( v83 > (char *)v84 );
      }
      goto LABEL_94;
    }
    *(_QWORD *)(a2 + 24) += v52;
    v54 = *(_QWORD *)(a2 + 8);
LABEL_77:
    *(_WORD *)(v54 + 4) = v52;
    **(_DWORD **)(a2 + 8) = v131;
    v55 = *(_QWORD *)(a2 + 8);
    if ( (unsigned __int64)(v50 - 3) > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v55 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v55 + 6) = v50 - 3;
    *(_QWORD *)(a2 + 8) += 8LL;
    v138 = &v25[v50];
    if ( &v25[v50] > v19 )
      *(_DWORD *)(v16 + 4 * v126) = (_DWORD)v19 - v18;
    if ( v136 >= (unsigned __int64)v138 )
    {
      v56 = (_QWORD *)(v18 + v122 + 2);
      v57 = v122 + 2;
      switch ( a6 )
      {
        case 6:
          *(_DWORD *)(v16 + 4 * ((0xCF1BBCDCBF9B0000LL * *v56) >> (64 - (unsigned __int8)v144))) = v57;
          v58 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v138 - 2)) >> (64 - (unsigned __int8)v144);
          break;
        case 7:
          *(_DWORD *)(v16 + 4 * ((0xCF1BBCDCBFA56300LL * *v56) >> (64 - (unsigned __int8)v144))) = v57;
          v58 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)(v138 - 2)) >> (64 - (unsigned __int8)v144);
          break;
        case 5:
          *(_DWORD *)(v16 + 4 * ((0xCF1BBCDCBB000000LL * *v56) >> (64 - (unsigned __int8)v144))) = v57;
          v58 = (0xCF1BBCDCBB000000LL * *(_QWORD *)(v138 - 2)) >> (64 - (unsigned __int8)v144);
          break;
        default:
          *(_DWORD *)(v16 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)v56) >> (32 - v144))) = v57;
          v58 = (unsigned int)(-1640531535 * *(_DWORD *)(v138 - 2)) >> (32 - v144);
          break;
      }
      *(_DWORD *)(v16 + 4 * v58) = (_DWORD)v138 - 2 - v18;
      v59 = v145;
      v60 = (unsigned __int64)&v25[v50];
      v61 = (unsigned __int64)&v142[-1].m128i_u64[1] + 1;
      while ( 1 )
      {
        v62 = v60 - v18;
        v63 = v60 - v18 - v59;
        v64 = v18 + v63;
        if ( v150 > v63 )
          v64 = v146 + v63;
        if ( v59 + v150 - 1 - v62 <= 2 || !v59 || *(_DWORD *)v64 != *(_DWORD *)v60 )
        {
          v145 = v59;
          v138 = (char *)v60;
          goto LABEL_13;
        }
        v89 = v150 <= v63;
        v90 = v60 + 4;
        v91 = (__m128i *)v142;
        if ( !v89 )
          v91 = (__m128i *)v149;
        v92 = v91;
        v123 = (char *)v91;
        v93 = v64 + 4;
        v94 = (unsigned __int64)v92->m128i_u64 + v60 - v64;
        if ( (unsigned __int64)v142 < v94 )
          v94 = (unsigned __int64)v142;
        v127 = v94 - 7;
        if ( v90 >= v94 - 7 )
          break;
        v95 = *(_QWORD *)(v64 + 4);
        v96 = *(_QWORD *)(v60 + 4);
        if ( v95 != v96 )
        {
          _RDI = v96 ^ v95;
          __asm { tzcnt   rdi, rdi }
          v102 = (char *)((unsigned int)_RDI >> 3);
          goto LABEL_177;
        }
        v97 = (_QWORD *)(v60 + 12);
        v98 = (_QWORD *)(v64 + 12);
        if ( v127 <= v60 + 12 )
          goto LABEL_168;
        v132 = *(_QWORD *)(v64 + 12);
        v99 = *(_QWORD *)(v60 + 12);
        if ( v132 == v99 )
        {
          while ( 1 )
          {
            ++v97;
            ++v98;
            if ( v127 <= (unsigned __int64)v97 )
              goto LABEL_168;
            if ( *v98 != *v97 )
            {
              _RAX = *v97 ^ *v98;
              goto LABEL_161;
            }
          }
        }
        _RAX = v132 ^ v99;
LABEL_161:
        __asm { tzcnt   rax, rax }
        v102 = (char *)v97 + ((unsigned int)_RAX >> 3) - v90;
LABEL_177:
        if ( v123 != &v102[v93] )
          goto LABEL_178;
        v111 = &v102[v90];
        if ( (unsigned __int64)v111 >= v61 )
        {
          v115 = v148;
          v116 = v111;
LABEL_198:
          if ( v116 < &v142[-1].m128i_i8[13] && *v115 == *(_DWORD *)v116 )
          {
            v116 += 4;
            ++v115;
          }
          if ( v116 < &v142[-1].m128i_i8[15] && *(_WORD *)v115 == *(_WORD *)v116 )
          {
            v116 += 2;
            v115 = (_DWORD *)((char *)v115 + 2);
          }
          if ( v142 > (const __m128i *)v116 )
            v116 += *(_BYTE *)v115 == (unsigned __int8)*v116;
          v114 = v116 - v111;
          goto LABEL_193;
        }
        if ( *v148 == *(_QWORD *)v111 )
        {
          v116 = v111 + 8;
          v115 = v148 + 1;
          if ( v61 <= (unsigned __int64)(v111 + 8) )
            goto LABEL_198;
          v117 = v148[1];
          v118 = *((_QWORD *)v111 + 1);
          if ( v117 == v118 )
          {
            do
            {
              v116 += 8;
              v115 += 2;
              if ( v61 <= (unsigned __int64)v116 )
                goto LABEL_198;
              v117 = *(_QWORD *)v115;
              v118 = *(_QWORD *)v116;
            }
            while ( *(_QWORD *)v115 == *(_QWORD *)v116 );
          }
          _RDX = v118 ^ v117;
          __asm { tzcnt   rdx, rdx }
          v114 = &v116[(unsigned int)_RDX >> 3] - v111;
        }
        else
        {
          _RAX = *(_QWORD *)v111 ^ *v148;
          __asm { tzcnt   rax, rax }
          v114 = (unsigned int)_RAX >> 3;
        }
LABEL_193:
        v102 += v114;
LABEL_178:
        v124 = v102 + 4;
        v105 = *(__m128i **)(a2 + 24);
        if ( (unsigned __int64)v51 < v60 )
        {
          v128 = v59;
          sub_C02D0(v105, (const __m128i *)v60, v60, v51);
          v59 = v128;
        }
        else
        {
          *v105 = _mm_loadu_si128((const __m128i *)v60);
        }
        *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
        **(_DWORD **)(a2 + 8) = 1;
        v106 = *(_QWORD *)(a2 + 8);
        if ( (unsigned __int64)(v102 + 1) > 0xFFFF )
        {
          *(_DWORD *)(a2 + 72) = 2;
          *(_DWORD *)(a2 + 76) = (v106 - *(_QWORD *)a2) >> 3;
        }
        *(_WORD *)(v106 + 6) = (_WORD)v102 + 1;
        *(_QWORD *)(a2 + 8) += 8LL;
        switch ( a6 )
        {
          case 6:
            v107 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v60) >> (64 - (unsigned __int8)v144);
            break;
          case 7:
            v107 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)v60) >> (64 - (unsigned __int8)v144);
            break;
          case 5:
            v107 = (0xCF1BBCDCBB000000LL * *(_QWORD *)v60) >> (64 - (unsigned __int8)v144);
            break;
          default:
            v107 = (unsigned int)(-1640531535 * *(_DWORD *)v60) >> (32 - v144);
            break;
        }
        *(_DWORD *)(v16 + 4 * v107) = v62;
        v60 += (unsigned __int64)v124;
        if ( v136 < v60 )
        {
          v121 = v134;
          v138 = (char *)v60;
          v134 = v59;
          v145 = v121;
          goto LABEL_13;
        }
        v108 = v59;
        v59 = v134;
        v134 = v108;
      }
      v98 = (_QWORD *)(v64 + 4);
      v97 = (_QWORD *)(v60 + 4);
LABEL_168:
      if ( (unsigned __int64)v97 < v94 - 3 && *(_DWORD *)v98 == *(_DWORD *)v97 )
      {
        v97 = (_QWORD *)((char *)v97 + 4);
        v98 = (_QWORD *)((char *)v98 + 4);
      }
      if ( (unsigned __int64)v97 < v94 - 1 && *(_WORD *)v98 == *(_WORD *)v97 )
      {
        v97 = (_QWORD *)((char *)v97 + 2);
        v98 = (_QWORD *)((char *)v98 + 2);
      }
      if ( v94 > (unsigned __int64)v97 )
        v97 = (_QWORD *)((char *)v97 + (*(_BYTE *)v98 == *(_BYTE *)v97));
      v102 = (char *)v97 - v90;
      goto LABEL_177;
    }
  }
  v139 = v134 != 0;
LABEL_60:
  if ( !v154 || !v139 )
  {
    if ( !v134 )
      v134 = v151;
    v151 = v153;
  }
  *a3 = v134;
  v36 = v145;
  if ( !v145 )
    v36 = v151;
  a3[1] = v36;
  return (char *)v142 - v138;
}

