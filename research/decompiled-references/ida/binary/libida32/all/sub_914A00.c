unsigned __int64 __fastcall sub_914A00(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  unsigned int v6; // r15d
  __int64 v7; // rdx
  unsigned int v8; // r14d
  int v9; // r13d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r11
  unsigned __int64 v16; // rbp
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rsi
  _QWORD *v23; // r12
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int *v26; // rax
  unsigned int v27; // r11d
  __int64 v28; // rsi
  _BYTE *v29; // r9
  unsigned int v30; // eax
  unsigned __int64 v31; // rbp
  __int64 v32; // rax
  unsigned int *v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // r8
  int *v37; // r11
  __int64 v38; // rbp
  __m128i *v39; // r8
  __int8 v40; // r12
  const __m128i *v41; // rsi
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  char v44; // cl
  char v45; // bl
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int64 v48; // rsi
  bool v50; // al
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // ecx
  int v55; // r8d
  unsigned __int64 v56; // r11
  __int64 v57; // rcx
  unsigned __int64 v58; // r15
  __int64 v59; // r8
  _QWORD *v60; // rbp
  unsigned __int64 v63; // rdi
  const __m128i *v64; // rdi
  int *v65; // r8
  __m128i v66; // xmm0
  __int64 v67; // r14
  unsigned int v68; // ebx
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  int v71; // r12d
  char v72; // cl
  char v73; // r9
  __m128i v74; // xmm1
  __int64 v76; // rbp
  unsigned int v78; // eax
  unsigned int v79; // eax
  __int64 v80; // rbx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r15
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // rsi
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // r8
  __int64 v88; // rdi
  __int64 v89; // r9
  char *v92; // r8
  __int64 *v94; // rdi
  _QWORD *v95; // r9
  _QWORD *v96; // rdi
  signed __int64 v97; // rax
  __int64 v98; // r12
  __int64 v99; // rbp
  __int64 v102; // rax
  _QWORD *v105; // r9
  unsigned int v106; // ebp
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  unsigned int *v110; // rax
  unsigned int v111; // r14d
  __int64 v112; // rdx
  _BYTE *v113; // rsi
  unsigned int v114; // eax
  _QWORD *v115; // r11
  unsigned int v116; // eax
  unsigned int v117; // r12d
  unsigned int v118; // esi
  __int64 v119; // r14
  char v120; // al
  unsigned int v121; // r13d
  char v122; // cl
  unsigned __int64 v123; // r9
  unsigned __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // r12
  __int64 v127; // rax
  __int64 v129; // [rsp+8h] [rbp-1D0h]
  __int8 v130; // [rsp+8h] [rbp-1D0h]
  char *v131; // [rsp+8h] [rbp-1D0h]
  __int64 v132; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v133; // [rsp+10h] [rbp-1C8h]
  __int64 v134; // [rsp+10h] [rbp-1C8h]
  char *v136; // [rsp+18h] [rbp-1C0h]
  __int64 v137; // [rsp+20h] [rbp-1B8h]
  char v138; // [rsp+28h] [rbp-1B0h]
  _QWORD *v139; // [rsp+28h] [rbp-1B0h]
  __int64 v140; // [rsp+30h] [rbp-1A8h]
  const __m128i *v141; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v142; // [rsp+40h] [rbp-198h]
  int v143; // [rsp+48h] [rbp-190h]
  int v144; // [rsp+48h] [rbp-190h]
  unsigned int v145; // [rsp+4Ch] [rbp-18Ch]
  __int64 v146; // [rsp+50h] [rbp-188h]
  _QWORD *v147; // [rsp+58h] [rbp-180h]
  __int64 v148; // [rsp+60h] [rbp-178h]
  __int64 v149; // [rsp+60h] [rbp-178h]
  __int64 v150; // [rsp+68h] [rbp-170h]
  __int64 v151; // [rsp+68h] [rbp-170h]
  unsigned int v152; // [rsp+68h] [rbp-170h]
  char v153; // [rsp+78h] [rbp-160h]
  __int64 v154; // [rsp+80h] [rbp-158h]
  unsigned int v155; // [rsp+88h] [rbp-150h]
  int v156[66]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v157; // [rsp+198h] [rbp-40h]

  v4 = (unsigned __int64)a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = (_DWORD)a2 - v5;
  v9 = *(_DWORD *)(a1 + 52);
  v157 = __readfsqword(0x28u);
  v132 = v7;
  v143 = (_DWORD)a2 - v5;
  v129 = *(_QWORD *)(a1 + 112);
  v145 = *(_DWORD *)(a1 + 24);
  v147 = (_QWORD *)(v5 + v145);
  v10 = 1 << *(_DWORD *)(a1 + 256);
  v11 = (_DWORD)a2 - v5 - v10;
  if ( v10 >= (_DWORD)a2 - (_DWORD)v5 - v6 )
    v11 = v6;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v11;
  v12 = *(_QWORD *)(a1 + 248);
  v137 = *(_QWORD *)(a1 + 96);
  LOBYTE(v13) = 6;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v13 = *(_DWORD *)(a1 + 268);
  v14 = *(_QWORD *)(v12 + 112);
  v15 = *(_QWORD *)(v12 + 56);
  v140 = *(_QWORD *)(a1 + 248);
  v16 = 0xCF1BBCDCBB000000LL * *a2;
  v17 = 1 << v13;
  v142 = v16 >> (56 - *(_BYTE *)(v12 + 52));
  v18 = (unsigned int)v142 >> 8 << 6;
  _mm_prefetch((const char *)(v15 + v18 + 32), 1);
  _mm_prefetch((const char *)(v14 + 4 * v18 + 64), 1);
  _mm_prefetch((const char *)(v15 + v18), 1);
  v141 = (const __m128i *)(v15 + v18);
  _mm_prefetch((const char *)(v14 + 4 * v18), 1);
  v146 = v14 + 4 * v18;
  v138 = 56 - v9;
  if ( *(_DWORD *)(a1 + 300) )
  {
    *(_DWORD *)(a1 + 44) = v8;
    v34 = (v137 ^ v16) >> v138;
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 44);
    v150 = v5;
    v20 = v132;
    v21 = *(_QWORD *)(a1 + 112);
    v148 = a1 + 64;
    if ( v8 - v19 > 0x180 )
    {
      v106 = v19 + 96;
      if ( v19 >= v19 + 96 )
      {
        v20 = v132;
        v21 = *(_QWORD *)(a1 + 112);
        v150 = v5;
      }
      else
      {
        v107 = *(_QWORD *)(a1 + 96);
        v152 = (_DWORD)a2 - v5;
        while ( 1 )
        {
          v108 = (v107 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v5 + v19 + 8))) >> v138;
          v109 = (unsigned int)v108 >> 8 << 6;
          _mm_prefetch((const char *)(v132 + v109), 1);
          _mm_prefetch((const char *)(v132 + v109 + 32), 1);
          _mm_prefetch((const char *)(v129 + 4 * v109), 1);
          _mm_prefetch((const char *)(v129 + 4 * v109 + 64), 1);
          v110 = (unsigned int *)(a1 + 64 + 4LL * (v19 & 7));
          v111 = *v110;
          *v110 = v108;
          v112 = v111 >> 8 << 6;
          v113 = (_BYTE *)(v132 + v112);
          v114 = (*(_BYTE *)(v132 + v112) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v132 + v112) - 1) & 0x3F) == 0 )
            v114 = 63;
          *v113 = v114;
          v113[v114] = v111;
          *(_DWORD *)(v129 + 4 * (v112 + v114)) = v19++;
          if ( v106 == v19 )
            break;
          v107 = *(_QWORD *)(a1 + 96);
        }
        v8 = v152;
        v17 = 1 << v13;
        v21 = *(_QWORD *)(a1 + 112);
        v20 = *(_QWORD *)(a1 + 56);
        v150 = *(_QWORD *)(a1 + 8);
        v9 = *(_DWORD *)(a1 + 52);
      }
      v115 = (_QWORD *)(v5 + v8 - 32);
      v19 = v8 - 32;
      if ( v4 + 1 >= (unsigned __int64)v115 )
      {
        v116 = v4 + 1 - (_DWORD)v115 + 1;
        if ( v116 > 8 )
          v116 = 8;
        v117 = v116 + v19;
        if ( v19 < v116 + v19 )
        {
          v154 = v5;
          v118 = v8 - 32;
          v155 = v8;
          v119 = *(_QWORD *)(a1 + 96);
          v120 = 56 - v9;
          v153 = v9;
          v121 = v117;
          v122 = v120;
          do
          {
            v123 = 0xCF1BBCDCBB000000LL * *v115;
            v115 = (_QWORD *)((char *)v115 + 1);
            v124 = (v119 ^ v123) >> v122;
            v125 = (unsigned int)v124 >> 8 << 6;
            v126 = 4 * v125;
            _mm_prefetch((const char *)(v20 + v125), 1);
            _mm_prefetch((const char *)(v20 + v125 + 32), 1);
            v127 = v118++ & 7;
            _mm_prefetch((const char *)(v21 + v126), 1);
            _mm_prefetch((const char *)(v21 + v126 + 64), 1);
            *(_DWORD *)(a1 + 4 * v127 + 64) = v124;
          }
          while ( v121 != v118 );
          LOBYTE(v9) = v153;
          v5 = v154;
          v8 = v155;
        }
      }
    }
    if ( v8 > v19 )
    {
      v22 = v150;
      v151 = v5;
      v23 = (_QWORD *)(v22 + v19 + 8);
      do
      {
        v24 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v23)) >> (56 - (unsigned __int8)v9);
        v25 = (unsigned int)v24 >> 8 << 6;
        _mm_prefetch((const char *)(v20 + v25), 1);
        _mm_prefetch((const char *)(v20 + v25 + 32), 1);
        _mm_prefetch((const char *)(v21 + 4 * v25), 1);
        _mm_prefetch((const char *)(v21 + 4 * v25 + 64), 1);
        v26 = (unsigned int *)(v148 + 4LL * (v19 & 7));
        v27 = *v26;
        *v26 = v24;
        v28 = v27 >> 8 << 6;
        v29 = (_BYTE *)(v20 + v28);
        v30 = (*(_BYTE *)(v20 + v28) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v20 + v28) - 1) & 0x3F) == 0 )
          v30 = 63;
        v23 = (_QWORD *)((char *)v23 + 1);
        *v29 = v30;
        v29[v30] = v27;
        *(_DWORD *)(v21 + 4 * (v28 + v30)) = v19++;
      }
      while ( v143 != v19 );
      v5 = v151;
    }
    *(_DWORD *)(a1 + 44) = v8;
    v31 = (v137 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v5 + v8 + 8))) >> v138;
    v32 = (unsigned int)v31 >> 8 << 6;
    _mm_prefetch((const char *)(v129 + 4 * v32), 1);
    _mm_prefetch((const char *)(v129 + 4 * v32 + 64), 1);
    _mm_prefetch((const char *)(v132 + v32), 1);
    _mm_prefetch((const char *)(v132 + v32 + 32), 1);
    v33 = (unsigned int *)(v148 + 4LL * (v8 & 7));
    v34 = *v33;
    *v33 = v31;
  }
  v35 = v129;
  *(_DWORD *)(a1 + 104) += v34;
  v130 = v34;
  v36 = v34 >> 8 << 6;
  *(_OWORD *)v156 = 0;
  v37 = v156;
  v38 = v35 + 4 * v36;
  v39 = (__m128i *)(v132 + v36);
  v40 = v39->m128i_i8[0];
  v41 = v39;
  v42 = _mm_cvtsi32_si128(v34);
  v43 = _mm_unpacklo_epi8(v42, v42);
  v44 = v39->m128i_i8[0] & 0x3F;
  v45 = v44;
  v46 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v43, v43), 0);
  do
  {
    v47 = _mm_loadu_si128(v41++);
    *v37++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v47, v46));
  }
  while ( &v39[4] != v41 );
  v48 = 0;
  _RCX = __ROR8__(((__int64)v156[1] << 16) | v156[0] | ((__int64)v156[3] << 48) | ((__int64)v156[2] << 32), v44);
  if ( _RCX )
  {
    do
    {
      __asm { tzcnt   rax, rcx }
      v52 = (v45 + (_BYTE)_RAX) & 0x3F;
      if ( v52 )
      {
        v53 = *(_DWORD *)(v38 + 4LL * v52);
        if ( v53 < v6 )
          goto LABEL_25;
        --v17;
        _mm_prefetch((const char *)(v5 + v53), 1);
        v156[v48++] = v53;
      }
      v50 = v17 != 0;
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v17 );
  }
  else
  {
LABEL_25:
    v50 = 1;
  }
  v54 = (v40 + 63) & 0x3F;
  if ( ((v40 + 63) & 0x3F) == 0 )
    v54 = 63;
  v39->m128i_i8[0] = v54;
  v39->m128i_i8[v54] = v130;
  v55 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v55 + 1;
  v56 = 3;
  *(_DWORD *)(v38 + 4LL * v54) = v55;
  if ( !v48 )
    goto LABEL_38;
  v57 = 0;
  v58 = (unsigned __int64)a3 - 7;
  while ( 1 )
  {
    while ( 1 )
    {
      v59 = (unsigned int)v156[v57];
      v60 = (_QWORD *)(v5 + v59);
      if ( *(_DWORD *)(v4 + v56 - 3) == *(_DWORD *)(v5 + v59 + v56 - 3) )
        break;
LABEL_30:
      if ( ++v57 == v48 )
        goto LABEL_38;
    }
    if ( v4 >= v58 )
    {
      v94 = (__int64 *)v4;
    }
    else
    {
      if ( *v60 != *(_QWORD *)v4 )
      {
        _RDI = *(_QWORD *)v4 ^ *v60;
        __asm { tzcnt   rdi, rdi }
        v63 = (unsigned int)_RDI >> 3;
        goto LABEL_35;
      }
      v94 = (__int64 *)(v4 + 8);
      v139 = v60 + 1;
      if ( v58 <= v4 + 8 )
      {
        ++v60;
      }
      else
      {
        v98 = v60[1];
        v99 = *(_QWORD *)(v4 + 8);
        if ( v99 != v98 )
        {
LABEL_85:
          _RBP = v98 ^ v99;
          __asm { tzcnt   rbp, rbp }
          v63 = (unsigned __int64)v94 + ((unsigned int)_RBP >> 3) - v4;
          goto LABEL_35;
        }
        v149 = v5;
        v105 = v139;
        while ( 1 )
        {
          ++v94;
          ++v105;
          if ( v58 <= (unsigned __int64)v94 )
            break;
          v99 = *v105;
          v98 = *v94;
          if ( *v105 != *v94 )
          {
            v5 = v149;
            goto LABEL_85;
          }
        }
        v60 = v105;
        v5 = v149;
      }
    }
    if ( v94 < (__int64 *)((char *)a3 - 3) && *(_DWORD *)v60 == *(_DWORD *)v94 )
    {
      v94 = (__int64 *)((char *)v94 + 4);
      v60 = (_QWORD *)((char *)v60 + 4);
    }
    if ( v94 < (__int64 *)((char *)a3 - 1) && *(_WORD *)v60 == *(_WORD *)v94 )
    {
      v94 = (__int64 *)((char *)v94 + 2);
      v60 = (_QWORD *)((char *)v60 + 2);
    }
    if ( a3 > v94 )
      v94 = (__int64 *)((char *)v94 + (*(_BYTE *)v60 == *(_BYTE *)v94));
    v63 = (unsigned __int64)v94 - v4;
LABEL_35:
    if ( v63 <= v56 )
      goto LABEL_30;
    *a4 = (unsigned int)(v143 + 3 - v59);
    if ( a3 == (__int64 *)(v4 + v63) )
      break;
    ++v57;
    v56 = v63;
    if ( v57 == v48 )
      goto LABEL_38;
  }
  v56 = v63;
LABEL_38:
  v64 = v141;
  v65 = v156;
  v66 = _mm_cvtsi32_si128(v142);
  *(_OWORD *)v156 = 0;
  v67 = *(_QWORD *)(v140 + 8);
  v68 = *(_DWORD *)(v140 + 24);
  v69 = _mm_unpacklo_epi8(v66, v66);
  v70 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v69, v69), 0);
  v131 = *(char **)v140;
  v71 = *(_QWORD *)v140 - v67;
  v72 = v141->m128i_i8[0] & 0x3F;
  v73 = v72;
  do
  {
    v74 = _mm_loadu_si128(v64++);
    *v65++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v74, v70));
  }
  while ( &v141[4] != v64 );
  _RCX = __ROR8__(((__int64)v156[1] << 16) | v156[0] | ((__int64)v156[3] << 48) | ((__int64)v156[2] << 32), v72);
  if ( _RCX && v50 )
  {
    v76 = 0;
    do
    {
      __asm { tzcnt   rax, rcx }
      v78 = (v73 + (_BYTE)_RAX) & 0x3F;
      if ( v78 )
      {
        v79 = *(_DWORD *)(v146 + 4LL * v78);
        if ( v68 > v79 )
          break;
        --v17;
        _mm_prefetch((const char *)(v67 + v79), 1);
        v156[v76++] = v79;
      }
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v17 );
    if ( v76 )
    {
      v80 = 0;
      v81 = v4 + 4;
      v82 = (unsigned __int64)a3;
      v144 = v71 + v143 - v145 + 3;
      while ( 2 )
      {
        while ( 1 )
        {
          v83 = (unsigned int)v156[v80];
          v84 = v67 + v83;
          if ( *(_DWORD *)v4 == *(_DWORD *)(v67 + v83) )
            break;
LABEL_50:
          if ( v76 == ++v80 )
            return v56;
        }
        v85 = v84 + 4;
        v86 = (unsigned __int64)&v131[v81 - 4 - v84];
        if ( v82 < v86 )
          v86 = v82;
        v87 = v86 - 7;
        if ( v81 >= v86 - 7 )
        {
          v95 = (_QWORD *)(v84 + 4);
          v96 = (_QWORD *)v81;
        }
        else
        {
          v88 = *(_QWORD *)(v84 + 4);
          v89 = *(_QWORD *)(v4 + 4);
          if ( v88 != v89 )
          {
            _RDI = v89 ^ v88;
            __asm { tzcnt   rdi, rdi }
            v92 = (char *)((unsigned int)_RDI >> 3);
            goto LABEL_57;
          }
          v96 = (_QWORD *)(v4 + 12);
          v95 = (_QWORD *)(v84 + 12);
          if ( v87 > v4 + 12 )
          {
            v134 = *(_QWORD *)(v84 + 12);
            v102 = *(_QWORD *)(v4 + 12);
            if ( v134 != v102 )
            {
              _RAX = v134 ^ v102;
LABEL_89:
              __asm { tzcnt   r8, rax }
              v92 = (char *)v96 + ((unsigned int)_R8 >> 3) - v81;
LABEL_57:
              if ( v131 != &v92[v85] )
              {
LABEL_58:
                if ( (unsigned __int64)(v92 + 4) <= v56 )
                  goto LABEL_50;
                *a4 = (unsigned int)(v144 - v83);
                if ( (char *)v82 == &v92[v4 + 4] )
                  return (unsigned __int64)(v92 + 4);
                ++v80;
                v56 = (unsigned __int64)(v92 + 4);
                if ( v76 == v80 )
                  return v56;
                continue;
              }
LABEL_82:
              v136 = v92;
              v133 = v81;
              v97 = sub_907A60(&v92[v81], v147, v82);
              v81 = v133;
              v92 = &v136[v97];
              goto LABEL_58;
            }
            while ( 1 )
            {
              ++v96;
              ++v95;
              if ( v87 <= (unsigned __int64)v96 )
                break;
              if ( *v95 != *v96 )
              {
                _RAX = *v96 ^ *v95;
                goto LABEL_89;
              }
            }
          }
        }
        break;
      }
      if ( (unsigned __int64)v96 < v86 - 3 && *(_DWORD *)v95 == *(_DWORD *)v96 )
      {
        v96 = (_QWORD *)((char *)v96 + 4);
        v95 = (_QWORD *)((char *)v95 + 4);
      }
      if ( (unsigned __int64)v96 < v86 - 1 && *(_WORD *)v95 == *(_WORD *)v96 )
      {
        v96 = (_QWORD *)((char *)v96 + 2);
        v95 = (_QWORD *)((char *)v95 + 2);
      }
      if ( v86 > (unsigned __int64)v96 )
        v96 = (_QWORD *)((char *)v96 + (*(_BYTE *)v95 == *(_BYTE *)v96));
      v92 = (char *)v96 - v81;
      if ( v131 != (char *)v96 + v85 - v81 )
        goto LABEL_58;
      goto LABEL_82;
    }
  }
  return v56;
}

