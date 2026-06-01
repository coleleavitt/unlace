unsigned __int64 __fastcall sub_D5940(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r14d
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r12d
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  bool v17; // zf
  int v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  const char *v22; // r13
  int v23; // r8d
  unsigned int v24; // r8d
  __int64 v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rsi
  char v28; // cl
  __int64 v29; // r12
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned int *v33; // rsi
  unsigned int v34; // r11d
  __int64 v35; // rsi
  _BYTE *v36; // r9
  unsigned int v37; // eax
  char v38; // bl
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  _DWORD *v41; // rsi
  unsigned __int64 v42; // rax
  __int8 v43; // r13
  __int64 v44; // r11
  __m128i v45; // xmm0
  __int64 v46; // rbp
  __m128i *v47; // r11
  __m128i v48; // xmm0
  __int8 v49; // r12
  __m128i v50; // xmm0
  char v51; // bl
  __int64 v52; // rsi
  bool v54; // r8
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  int v59; // ecx
  unsigned __int64 v60; // r11
  __int64 v61; // rax
  unsigned __int64 v62; // r14
  bool v63; // r12
  __int64 v64; // rdi
  _QWORD *v65; // r8
  unsigned __int64 v68; // rcx
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  char v71; // di
  __m128i v72; // xmm0
  __int64 v73; // r14
  unsigned int v74; // esi
  char v75; // di
  int v76; // eax
  unsigned int v77; // ebp
  __int64 v79; // rbp
  const char *v80; // r9
  unsigned int v82; // r8d
  unsigned int v83; // r8d
  __int64 v84; // rbx
  unsigned __int64 v85; // r9
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // r8
  char *v95; // r8
  __int64 *v97; // rcx
  _QWORD *v98; // r8
  _QWORD *v99; // rsi
  signed __int64 v100; // rax
  __int64 v101; // rax
  __int64 v104; // rbp
  __int64 v105; // r8
  _QWORD *v108; // r9
  unsigned int v109; // ebp
  char v110; // cl
  unsigned __int64 i; // rdx
  unsigned __int64 v112; // rax
  __int64 v113; // rdx
  unsigned int *v114; // rdx
  unsigned int v115; // r11d
  __int64 v116; // rdx
  _BYTE *v117; // rsi
  unsigned int v118; // eax
  _QWORD *v119; // r11
  unsigned int v120; // eax
  unsigned int v121; // ebp
  __int64 v122; // rax
  int v123; // esi
  __int64 v124; // r14
  unsigned int v125; // r12d
  char v126; // cl
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // rax
  __int64 v129; // r9
  __int64 v130; // rbp
  int v132; // [rsp+14h] [rbp-1D4h]
  int v133; // [rsp+14h] [rbp-1D4h]
  __int64 v134; // [rsp+18h] [rbp-1D0h]
  char *v135; // [rsp+18h] [rbp-1D0h]
  __m128i v136; // [rsp+20h] [rbp-1C8h] BYREF
  char *v137; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v138; // [rsp+38h] [rbp-1B0h]
  __int64 v139; // [rsp+40h] [rbp-1A8h]
  __int64 v140; // [rsp+48h] [rbp-1A0h]
  const __m128i *v141; // [rsp+50h] [rbp-198h]
  unsigned __int64 v142; // [rsp+58h] [rbp-190h]
  const char *v143; // [rsp+60h] [rbp-188h]
  _QWORD *v144; // [rsp+68h] [rbp-180h]
  __int64 v145; // [rsp+70h] [rbp-178h]
  __int64 v146; // [rsp+78h] [rbp-170h]
  __int64 v147; // [rsp+80h] [rbp-168h]
  _QWORD *v148; // [rsp+88h] [rbp-160h]
  __int64 v149; // [rsp+90h] [rbp-158h]
  int v150; // [rsp+98h] [rbp-150h]
  unsigned int v151; // [rsp+9Ch] [rbp-14Ch]
  _DWORD v152[66]; // [rsp+A0h] [rbp-148h]
  unsigned __int64 v153; // [rsp+1A8h] [rbp-40h]

  v5 = (unsigned __int64)a2;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 28);
  v9 = *(_QWORD *)(a1 + 248);
  v10 = *(_DWORD *)(a1 + 256);
  v11 = *(_DWORD *)(a1 + 52);
  v12 = *(_QWORD *)(v9 + 112);
  v153 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(a1 + 112);
  v136.m128i_i64[0] = v6;
  v140 = v9;
  v134 = v13;
  v14 = *(unsigned int *)(a1 + 24);
  v137 = (char *)a2 - v7;
  v150 = v14;
  v144 = (_QWORD *)(v7 + v14);
  v15 = 1 << v10;
  v132 = (_DWORD)a2 - v7;
  v16 = (_DWORD)a2 - v7 - v15;
  if ( v15 >= (_DWORD)a2 - (_DWORD)v7 - v8 )
    v16 = v8;
  v17 = *(_DWORD *)(a1 + 40) == 0;
  v138 = *(_QWORD *)(a1 + 96);
  LOBYTE(v18) = 5;
  if ( v17 )
    v8 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 5u )
    v18 = *(_DWORD *)(a1 + 268);
  v19 = 0xCF1BBCDCBB000000LL * *a2;
  v20 = 1 << v18;
  v142 = v19 >> (56 - *(_BYTE *)(v9 + 52));
  v21 = 32 * ((unsigned int)v142 >> 8);
  v141 = (const __m128i *)(v21 + *(_QWORD *)(v9 + 56));
  v22 = (const char *)(v12 + 4 * v21);
  _mm_prefetch(v22 + 64, 1);
  _mm_prefetch(v22, 1);
  _mm_prefetch(v141->m128i_i8, 1);
  LODWORD(v139) = 56 - v11;
  v23 = *(_DWORD *)(a1 + 300);
  v143 = v22;
  if ( v23 )
  {
    v42 = (v138 ^ v19) >> v139;
    *(_DWORD *)(a1 + 44) = (_DWORD)v137;
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 44);
    v146 = v7;
    v25 = v136.m128i_i64[0];
    v26 = v134;
    v145 = a1 + 64;
    if ( (_DWORD)a2 - (_DWORD)v7 - v24 > 0x180 )
    {
      v109 = v24 + 96;
      if ( v24 >= v24 + 96 )
      {
        v25 = v136.m128i_i64[0];
        v26 = v134;
        v146 = v7;
      }
      else
      {
        LODWORD(v146) = v8;
        LODWORD(v147) = v20;
        v110 = v139;
        v148 = a2;
        for ( i = v138; ; i = *(_QWORD *)(a1 + 96) )
        {
          v112 = (i ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v7 + v24 + 8))) >> v110;
          v113 = 32 * ((unsigned int)v112 >> 8);
          _mm_prefetch((const char *)(v25 + v113), 1);
          _mm_prefetch((const char *)(v134 + 4 * v113), 1);
          _mm_prefetch((const char *)(v134 + 4 * v113 + 64), 1);
          v114 = (unsigned int *)(a1 + 64 + 4LL * (v24 & 7));
          v115 = *v114;
          *v114 = v112;
          v116 = 32 * (v115 >> 8);
          v117 = (_BYTE *)(v25 + v116);
          v118 = (*(_BYTE *)(v25 + v116) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v25 + v116) - 1) & 0x1F) == 0 )
            v118 = 31;
          *v117 = v118;
          v117[v118] = v115;
          *(_DWORD *)(v134 + 4 * (v116 + v118)) = v24++;
          if ( v109 == v24 )
            break;
        }
        v8 = v146;
        v20 = v147;
        v5 = (unsigned __int64)v148;
        v26 = *(_QWORD *)(a1 + 112);
        v25 = *(_QWORD *)(a1 + 56);
        v146 = *(_QWORD *)(a1 + 8);
        v11 = *(_DWORD *)(a1 + 52);
      }
      v119 = (_QWORD *)(v7 + (unsigned int)((_DWORD)v137 - 32));
      v24 = (_DWORD)v137 - 32;
      if ( v5 + 1 >= (unsigned __int64)v119 )
      {
        v120 = v5 + 1 - (_DWORD)v119 + 1;
        if ( v120 > 8 )
          v120 = 8;
        v121 = v120 + v24;
        if ( v24 < v120 + v24 )
        {
          v122 = *(_QWORD *)(a1 + 96);
          v149 = v7;
          v123 = (_DWORD)v137 - 32;
          v151 = v8;
          v147 = v122;
          v124 = v122;
          LOBYTE(v122) = 56 - v11;
          LODWORD(v148) = v11;
          v125 = v121;
          v126 = v122;
          do
          {
            v127 = 0xCF1BBCDCBB000000LL * *v119;
            v119 = (_QWORD *)((char *)v119 + 1);
            v128 = (v124 ^ v127) >> v126;
            v129 = 32 * ((unsigned int)v128 >> 8);
            v130 = 4 * v129;
            _mm_prefetch((const char *)(v25 + v129), 1);
            LOBYTE(v129) = v123++;
            _mm_prefetch((const char *)(v26 + v130), 1);
            _mm_prefetch((const char *)(v26 + v130 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v129 & 7) + 64) = v128;
          }
          while ( v125 != v123 );
          LOBYTE(v11) = (_BYTE)v148;
          v7 = v149;
          v8 = v151;
        }
      }
    }
    if ( (unsigned int)v137 > v24 )
    {
      v27 = v146;
      v146 = v7;
      v148 = (_QWORD *)v5;
      v28 = 56 - v11;
      v29 = v145;
      LODWORD(v147) = v20;
      v30 = (_QWORD *)(v27 + v24 + 8);
      do
      {
        v31 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v30)) >> v28;
        v32 = 32 * ((unsigned int)v31 >> 8);
        _mm_prefetch((const char *)(v25 + v32), 1);
        _mm_prefetch((const char *)(v26 + 4 * v32), 1);
        _mm_prefetch((const char *)(v26 + 4 * v32 + 64), 1);
        v33 = (unsigned int *)(v29 + 4LL * (v24 & 7));
        v34 = *v33;
        *v33 = v31;
        v35 = 32 * (v34 >> 8);
        v36 = (_BYTE *)(v25 + v35);
        v37 = (*(_BYTE *)(v25 + v35) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v25 + v35) - 1) & 0x1F) == 0 )
          v37 = 31;
        v30 = (_QWORD *)((char *)v30 + 1);
        *v36 = v37;
        v36[v37] = v34;
        *(_DWORD *)(v26 + 4 * (v35 + v37)) = v24++;
      }
      while ( v132 != v24 );
      v7 = v146;
      v20 = v147;
      v5 = (unsigned __int64)v148;
    }
    v38 = (char)v137;
    v39 = (unsigned int)v137;
    *(_DWORD *)(a1 + 44) = (_DWORD)v137;
    v40 = ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v7 + v39 + 8)) ^ v138) >> v139;
    v42 = 32 * ((unsigned int)v40 >> 8);
    _mm_prefetch((const char *)(v134 + 4 * v42), 1);
    _mm_prefetch((const char *)(v134 + 4 * v42 + 64), 1);
    _mm_prefetch((const char *)(v136.m128i_i64[0] + v42), 1);
    v41 = (_DWORD *)(v145 + 4LL * (v38 & 7));
    LODWORD(v42) = *v41;
    *v41 = v40;
  }
  v43 = v42;
  *(_DWORD *)(a1 + 104) += v42;
  v44 = 32 * ((unsigned int)v42 >> 8);
  v45 = _mm_cvtsi32_si128(v42);
  v46 = v134 + 4 * v44;
  v47 = (__m128i *)(v136.m128i_i64[0] + v44);
  v48 = _mm_unpacklo_epi8(v45, v45);
  v49 = v47->m128i_i8[0];
  v50 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v48, v48), 0);
  v51 = v47->m128i_i8[0] & 0x1F;
  v52 = 0;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v47), v50))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v50, _mm_loadu_si128(v47 + 1))) << 16),
                         v51);
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v56 = (v51 + (_BYTE)_RCX) & 0x1F;
      if ( v56 )
      {
        v57 = *(_DWORD *)(v46 + 4LL * v56);
        if ( v57 < v8 )
          goto LABEL_23;
        --v20;
        _mm_prefetch((const char *)(v7 + v57), 1);
        v152[v52++] = v57;
      }
      v54 = v20 != 0;
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v20 );
  }
  else
  {
LABEL_23:
    v54 = 1;
  }
  v58 = (v49 + 31) & 0x1F;
  if ( ((v49 + 31) & 0x1F) == 0 )
    v58 = 31;
  v47->m128i_i8[0] = v58;
  v47->m128i_i8[v58] = v43;
  v59 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v59 + 1;
  v60 = 3;
  *(_DWORD *)(v46 + 4LL * v58) = v59;
  if ( !v52 )
    goto LABEL_37;
  LODWORD(v137) = v20;
  v61 = 0;
  v62 = a3 - 7;
  v63 = v54;
  v136.m128i_i64[0] = a3 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v64 = (unsigned int)v152[v61];
      v65 = (_QWORD *)(v7 + v64);
      if ( *(_DWORD *)(v5 + v60 - 3) == *(_DWORD *)(v7 + v64 + v60 - 3) )
        break;
LABEL_28:
      if ( ++v61 == v52 )
        goto LABEL_36;
    }
    if ( v5 >= v62 )
    {
      v97 = (__int64 *)v5;
    }
    else
    {
      if ( *v65 != *(_QWORD *)v5 )
      {
        _RCX = *(_QWORD *)v5 ^ *v65;
        __asm { tzcnt   rcx, rcx }
        v68 = (unsigned int)_RCX >> 3;
        goto LABEL_33;
      }
      v97 = (__int64 *)(v5 + 8);
      v138 = (unsigned __int64)(v65 + 1);
      if ( v62 <= v5 + 8 )
      {
        ++v65;
      }
      else
      {
        v104 = v65[1];
        v105 = *(_QWORD *)(v5 + 8);
        if ( v105 != v104 )
        {
LABEL_85:
          _R8 = v104 ^ v105;
          __asm { tzcnt   r8, r8 }
          v68 = (unsigned __int64)v97 + ((unsigned int)_R8 >> 3) - v5;
          goto LABEL_33;
        }
        v139 = v7;
        v108 = (_QWORD *)v138;
        while ( 1 )
        {
          ++v97;
          ++v108;
          if ( v62 <= (unsigned __int64)v97 )
            break;
          v105 = *v108;
          v104 = *v97;
          if ( *v108 != *v97 )
          {
            v7 = v139;
            goto LABEL_85;
          }
        }
        v65 = v108;
        v7 = v139;
      }
    }
    if ( (unsigned __int64)v97 < a3 - 3 && *(_DWORD *)v65 == *(_DWORD *)v97 )
    {
      v97 = (__int64 *)((char *)v97 + 4);
      v65 = (_QWORD *)((char *)v65 + 4);
    }
    if ( (unsigned __int64)v97 < v136.m128i_i64[0] && *(_WORD *)v65 == *(_WORD *)v97 )
    {
      v97 = (__int64 *)((char *)v97 + 2);
      v65 = (_QWORD *)((char *)v65 + 2);
    }
    if ( a3 > (unsigned __int64)v97 )
      v97 = (__int64 *)((char *)v97 + (*(_BYTE *)v65 == *(_BYTE *)v97));
    v68 = (unsigned __int64)v97 - v5;
LABEL_33:
    if ( v68 <= v60 )
      goto LABEL_28;
    *a4 = (unsigned int)(v132 + 3 - v64);
    if ( a3 == v5 + v68 )
      break;
    ++v61;
    v60 = v68;
    if ( v61 == v52 )
    {
LABEL_36:
      v20 = (int)v137;
      v54 = v63;
      goto LABEL_37;
    }
  }
  v54 = v63;
  v20 = (int)v137;
  v60 = v68;
LABEL_37:
  v69 = _mm_cvtsi32_si128(v142);
  v70 = _mm_unpacklo_epi8(v69, v69);
  v71 = v141->m128i_i8[0];
  v72 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v70, v70), 0);
  v73 = *(_QWORD *)(v140 + 8);
  v74 = *(_DWORD *)(v140 + 24);
  v136 = _mm_loadu_si128(v141);
  v135 = *(char **)v140;
  v75 = v71 & 0x1F;
  v76 = *(_QWORD *)v140 - v73;
  v77 = __ROR4__(
          _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v136), v72))
        | (_mm_movemask_epi8(_mm_cmpeq_epi8(v72, _mm_loadu_si128(v141 + 1))) << 16),
          v75);
  _RCX = v77;
  if ( v77 && v54 )
  {
    v79 = 0;
    v80 = v143;
    do
    {
      __asm { tzcnt   r8, rcx }
      v82 = (v75 + (_BYTE)_R8) & 0x1F;
      if ( v82 )
      {
        v83 = *(_DWORD *)&v80[4 * v82];
        if ( v74 > v83 )
          break;
        --v20;
        _mm_prefetch((const char *)(v73 + v83), 1);
        v152[v79++] = v83;
      }
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v20 );
    if ( v79 )
    {
      v84 = 0;
      v133 = v76 + v132 - v150 + 3;
      v85 = v5 + 4;
      while ( 2 )
      {
        v86 = (unsigned int)v152[v84];
        v87 = v73 + v86;
        if ( *(_DWORD *)v5 != *(_DWORD *)(v73 + v86) )
          goto LABEL_47;
        v88 = v87 + 4;
        v89 = (unsigned __int64)&v135[v85 - 4 - v87];
        if ( a3 < v89 )
          v89 = a3;
        v90 = v89 - 7;
        if ( v85 >= v89 - 7 )
        {
          v98 = (_QWORD *)(v87 + 4);
          v99 = (_QWORD *)v85;
        }
        else
        {
          v91 = *(_QWORD *)(v87 + 4);
          v92 = *(_QWORD *)(v5 + 4);
          if ( v91 != v92 )
          {
            _RSI = v92 ^ v91;
            __asm { tzcnt   rsi, rsi }
            v95 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_54;
          }
          v99 = (_QWORD *)(v5 + 12);
          v98 = (_QWORD *)(v87 + 12);
          if ( v90 > v5 + 12 )
          {
            v136.m128i_i64[0] = *(_QWORD *)(v87 + 12);
            v101 = *(_QWORD *)(v5 + 12);
            if ( v136.m128i_i64[0] != v101 )
            {
              _RAX = v136.m128i_i64[0] ^ v101;
LABEL_82:
              __asm { tzcnt   r8, rax }
              v95 = (char *)v99 + ((unsigned int)_R8 >> 3) - v85;
LABEL_54:
              if ( v135 != &v95[v88] )
              {
LABEL_55:
                if ( v60 < (unsigned __int64)(v95 + 4) )
                {
                  v60 = (unsigned __int64)(v95 + 4);
                  *a4 = (unsigned int)(v133 - v86);
                  if ( (char *)a3 == &v95[v5 + 4] )
                    return v60;
                }
LABEL_47:
                if ( v79 == ++v84 )
                  return v60;
                continue;
              }
LABEL_78:
              v137 = v95;
              v136.m128i_i64[0] = v85;
              v100 = sub_C9E40(&v95[v85], v144, a3);
              v85 = v136.m128i_i64[0];
              v95 = &v137[v100];
              goto LABEL_55;
            }
            v136.m128i_i64[0] = v89;
            while ( 1 )
            {
              ++v99;
              ++v98;
              if ( v90 <= (unsigned __int64)v99 )
                break;
              if ( *v98 != *v99 )
              {
                _RAX = *v99 ^ *v98;
                goto LABEL_82;
              }
            }
            v89 = v136.m128i_i64[0];
          }
        }
        break;
      }
      if ( (unsigned __int64)v99 < v89 - 3 && *(_DWORD *)v98 == *(_DWORD *)v99 )
      {
        v99 = (_QWORD *)((char *)v99 + 4);
        v98 = (_QWORD *)((char *)v98 + 4);
      }
      if ( (unsigned __int64)v99 < v89 - 1 && *(_WORD *)v98 == *(_WORD *)v99 )
      {
        v99 = (_QWORD *)((char *)v99 + 2);
        v98 = (_QWORD *)((char *)v98 + 2);
      }
      if ( v89 > (unsigned __int64)v99 )
        v99 = (_QWORD *)((char *)v99 + (*(_BYTE *)v98 == *(_BYTE *)v99));
      v95 = (char *)v99 - v85;
      if ( v135 != (char *)v99 + v88 - v85 )
        goto LABEL_55;
      goto LABEL_78;
    }
  }
  return v60;
}

