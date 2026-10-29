unsigned __int64 __fastcall sub_93DF80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  __int64 v6; // r9
  unsigned int v7; // r14d
  int v8; // esi
  int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // eax
  bool v14; // cf
  unsigned int v15; // edx
  char v16; // cl
  unsigned __int64 v17; // rax
  int v18; // esi
  unsigned __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rbp
  __int64 v22; // r11
  __int64 v23; // rdx
  _QWORD *v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int v28; // r10d
  __int64 v29; // rdx
  _BYTE *v30; // r9
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // rax
  __int8 v35; // r15
  __int64 v36; // r10
  int *v37; // r11
  __int64 v38; // r12
  __m128i *v39; // r10
  __m128i v40; // xmm0
  const __m128i *v41; // rdx
  __m128i v42; // xmm0
  char v43; // cl
  char v44; // bp
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int64 v47; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned __int64 v52; // rbp
  unsigned int v53; // eax
  int v54; // ecx
  __int64 v55; // rax
  unsigned __int64 v56; // r12
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  unsigned __int64 v61; // r11
  unsigned int v62; // r15d
  unsigned int v63; // eax
  __int64 v64; // r13
  __int64 v65; // r14
  unsigned int *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r10
  __int64 v69; // rax
  unsigned int v70; // r11d
  unsigned __int64 v71; // r9
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // rcx
  char *v75; // rdx
  unsigned __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // r8
  char *v81; // r8
  unsigned int v82; // r14d
  unsigned int v83; // r12d
  unsigned int v84; // r14d
  __int64 v85; // rcx
  __int64 v86; // rdx
  unsigned int *v87; // rax
  __int64 v88; // rsi
  unsigned int v89; // r12d
  _DWORD *v90; // r15
  __int64 v91; // rbx
  unsigned __int64 v92; // rax
  __int64 *v94; // r11
  _QWORD *v95; // r8
  char *v96; // rsi
  signed __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r13
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
  _QWORD *v115; // r12
  unsigned int v116; // eax
  unsigned int v117; // edx
  unsigned int v118; // r10d
  __int64 v119; // r15
  char v120; // al
  unsigned int v121; // r13d
  char v122; // cl
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // r9
  __int64 v127; // rax
  __int64 v129; // [rsp+8h] [rbp-1D0h]
  __int64 v131; // [rsp+18h] [rbp-1C0h]
  __int8 v132; // [rsp+18h] [rbp-1C0h]
  char *v133; // [rsp+18h] [rbp-1C0h]
  __int64 v134; // [rsp+20h] [rbp-1B8h]
  char *v135; // [rsp+20h] [rbp-1B8h]
  _QWORD *v136; // [rsp+28h] [rbp-1B0h]
  unsigned int v137; // [rsp+34h] [rbp-1A4h]
  int v138; // [rsp+34h] [rbp-1A4h]
  __int64 v139; // [rsp+38h] [rbp-1A0h]
  int v140; // [rsp+40h] [rbp-198h]
  unsigned int v141; // [rsp+40h] [rbp-198h]
  unsigned int v142; // [rsp+44h] [rbp-194h]
  __int64 v143; // [rsp+48h] [rbp-190h]
  int v144; // [rsp+48h] [rbp-190h]
  _QWORD *v145; // [rsp+48h] [rbp-190h]
  char v146; // [rsp+50h] [rbp-188h]
  unsigned __int64 v147; // [rsp+50h] [rbp-188h]
  __int64 v148; // [rsp+50h] [rbp-188h]
  __int64 v149; // [rsp+50h] [rbp-188h]
  __int64 v150; // [rsp+58h] [rbp-180h]
  char *v151; // [rsp+58h] [rbp-180h]
  __int64 v152; // [rsp+60h] [rbp-178h]
  __int64 v153; // [rsp+68h] [rbp-170h]
  __int64 v154; // [rsp+68h] [rbp-170h]
  unsigned int v155; // [rsp+70h] [rbp-168h]
  int v156; // [rsp+78h] [rbp-160h]
  char v157; // [rsp+78h] [rbp-160h]
  __int64 v158; // [rsp+80h] [rbp-158h]
  unsigned int v159; // [rsp+88h] [rbp-150h]
  int v160[66]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v161; // [rsp+198h] [rbp-40h]

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_DWORD *)(a1 + 40);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = v4 - v6;
  v11 = *(_QWORD *)(a1 + 248);
  v12 = 1 << *(_DWORD *)(a1 + 256);
  v161 = __readfsqword(0x28u);
  v137 = v10;
  v129 = v11;
  v131 = *(_QWORD *)(a1 + 112);
  v134 = *(_QWORD *)(a1 + 56);
  v142 = *(_DWORD *)(a1 + 24);
  v136 = (_QWORD *)(v6 + v142);
  v13 = v10 - v12;
  v14 = v12 < v10 - v7;
  v15 = *(_DWORD *)(a1 + 268);
  v16 = 6;
  if ( !v14 )
    v13 = v7;
  if ( !v8 )
    v7 = v13;
  if ( v15 <= 6 )
    v16 = *(_DWORD *)(a1 + 268);
  v143 = *(_QWORD *)(a1 + 96);
  v17 = 0xCF1BBCDCBB000000LL * *(_QWORD *)a2;
  v18 = 1 << v16;
  v19 = v17 >> (66 - *(_BYTE *)(v11 + 264));
  v150 = 4 * v19;
  v139 = 16 * v19;
  _mm_prefetch((const char *)(*(_QWORD *)(v11 + 112) + 16 * v19), 1);
  v140 = 0;
  if ( v15 > 6 )
    v140 = 1 << (v15 - 6);
  v146 = 56 - v9;
  if ( *(_DWORD *)(a1 + 300) )
  {
    *(_DWORD *)(a1 + 44) = v10;
    v34 = (v143 ^ v17) >> v146;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 44);
    v153 = v6;
    v21 = *(_QWORD *)(a1 + 56);
    v22 = *(_QWORD *)(a1 + 112);
    v152 = a1 + 64;
    if ( v10 - v20 > 0x180 )
    {
      v106 = v20 + 96;
      if ( v20 >= v20 + 96 )
      {
        v21 = *(_QWORD *)(a1 + 56);
        v22 = *(_QWORD *)(a1 + 112);
        v153 = v6;
      }
      else
      {
        v107 = *(_QWORD *)(a1 + 96);
        v156 = v18;
        v155 = v7;
        while ( 1 )
        {
          v108 = (v107 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v6 + v20 + 8))) >> (56 - (unsigned __int8)v9);
          v109 = (unsigned int)v108 >> 8 << 6;
          _mm_prefetch((const char *)(v134 + v109), 1);
          _mm_prefetch((const char *)(v134 + v109 + 32), 1);
          _mm_prefetch((const char *)(v131 + 4 * v109), 1);
          _mm_prefetch((const char *)(v131 + 4 * v109 + 64), 1);
          v110 = (unsigned int *)(a1 + 64 + 4LL * (v20 & 7));
          v111 = *v110;
          *v110 = v108;
          v112 = v111 >> 8 << 6;
          v113 = (_BYTE *)(v134 + v112);
          v114 = (*(_BYTE *)(v134 + v112) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v134 + v112) - 1) & 0x3F) == 0 )
            v114 = 63;
          *v113 = v114;
          v113[v114] = v111;
          *(_DWORD *)(v131 + 4 * (v112 + v114)) = v20++;
          if ( v106 == v20 )
            break;
          v107 = *(_QWORD *)(a1 + 96);
        }
        v7 = v155;
        v18 = v156;
        v22 = *(_QWORD *)(a1 + 112);
        v21 = *(_QWORD *)(a1 + 56);
        v153 = *(_QWORD *)(a1 + 8);
        v9 = *(_DWORD *)(a1 + 52);
      }
      v115 = (_QWORD *)(v6 + v10 - 32);
      v20 = v10 - 32;
      if ( a2 + 1 >= (unsigned __int64)v115 )
      {
        v116 = a2 + 1 - (_DWORD)v115 + 1;
        if ( v116 > 8 )
          v116 = 8;
        v117 = v116 + v20;
        if ( v20 < v116 + v20 )
        {
          v158 = v6;
          v118 = v10 - 32;
          v159 = v10;
          v119 = *(_QWORD *)(a1 + 96);
          v120 = 56 - v9;
          v157 = v9;
          v121 = v117;
          v122 = v120;
          do
          {
            v123 = 0xCF1BBCDCBB000000LL * *v115;
            v115 = (_QWORD *)((char *)v115 + 1);
            v124 = (v119 ^ v123) >> v122;
            v125 = (unsigned int)v124 >> 8 << 6;
            v126 = 4 * v125;
            _mm_prefetch((const char *)(v21 + v125), 1);
            _mm_prefetch((const char *)(v21 + v125 + 32), 1);
            v127 = v118++ & 7;
            _mm_prefetch((const char *)(v22 + v126), 1);
            _mm_prefetch((const char *)(v22 + v126 + 64), 1);
            *(_DWORD *)(a1 + 4 * v127 + 64) = v124;
          }
          while ( v121 != v118 );
          LOBYTE(v9) = v157;
          v6 = v158;
          v10 = v159;
        }
      }
    }
    if ( v10 > v20 )
    {
      v23 = v153;
      v154 = v6;
      v24 = (_QWORD *)(v23 + v20 + 8);
      do
      {
        v25 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v24)) >> (56 - (unsigned __int8)v9);
        v26 = (unsigned int)v25 >> 8 << 6;
        _mm_prefetch((const char *)(v21 + v26), 1);
        _mm_prefetch((const char *)(v21 + v26 + 32), 1);
        _mm_prefetch((const char *)(v22 + 4 * v26), 1);
        _mm_prefetch((const char *)(v22 + 4 * v26 + 64), 1);
        v27 = (unsigned int *)(v152 + 4LL * (v20 & 7));
        v28 = *v27;
        *v27 = v25;
        v29 = v28 >> 8 << 6;
        v30 = (_BYTE *)(v21 + v29);
        v31 = (*(_BYTE *)(v21 + v29) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v21 + v29) - 1) & 0x3F) == 0 )
          v31 = 63;
        v24 = (_QWORD *)((char *)v24 + 1);
        *v30 = v31;
        v30[v31] = v28;
        *(_DWORD *)(v22 + 4 * (v29 + v31)) = v20++;
      }
      while ( v137 != v20 );
      v6 = v154;
    }
    *(_DWORD *)(a1 + 44) = v10;
    v32 = (v143 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v6 + v10 + 8))) >> v146;
    v34 = (unsigned int)v32 >> 8 << 6;
    _mm_prefetch((const char *)(v131 + 4 * v34), 1);
    _mm_prefetch((const char *)(v131 + 4 * v34 + 64), 1);
    _mm_prefetch((const char *)(v134 + v34), 1);
    _mm_prefetch((const char *)(v134 + v34 + 32), 1);
    v33 = (_DWORD *)(v152 + 4LL * (v10 & 7));
    LODWORD(v34) = *v33;
    *v33 = v32;
  }
  *(_DWORD *)(a1 + 104) += v34;
  v35 = v34;
  *(_OWORD *)v160 = 0;
  v36 = (unsigned int)v34 >> 8 << 6;
  v37 = v160;
  v38 = v131 + 4 * v36;
  v39 = (__m128i *)(v134 + v36);
  v40 = _mm_cvtsi32_si128(v34);
  v132 = v39->m128i_i8[0];
  v41 = v39;
  v42 = _mm_unpacklo_epi8(v40, v40);
  v43 = v39->m128i_i8[0] & 0x3F;
  v44 = v43;
  v45 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v42, v42), 0);
  do
  {
    v46 = _mm_loadu_si128(v41++);
    *v37++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v46, v45));
  }
  while ( &v39[4] != v41 );
  v47 = 0;
  _RAX = __ROR8__(v160[0] | ((__int64)v160[3] << 48) | ((__int64)v160[2] << 32) | ((__int64)v160[1] << 16), v43);
  if ( _RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v50 = (v44 + (_BYTE)_RCX) & 0x3F;
      if ( v50 )
      {
        v51 = *(_DWORD *)(v38 + 4LL * v50);
        if ( v51 < v7 )
          break;
        --v18;
        _mm_prefetch((const char *)(v6 + v51), 1);
        v160[v47++] = v51;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v18 );
  }
  v52 = 3;
  v53 = (v132 + 63) & 0x3F;
  if ( ((v132 + 63) & 0x3F) == 0 )
    v53 = 63;
  v39->m128i_i8[0] = v53;
  v39->m128i_i8[v53] = v35;
  v54 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v54 + 1;
  *(_DWORD *)(v38 + 4LL * v53) = v54;
  if ( v47 )
  {
    v55 = 0;
    v56 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v57 = (unsigned int)v160[v55];
        v58 = (_QWORD *)(v6 + v57);
        if ( *(_DWORD *)(a2 + v52 - 3) == *(_DWORD *)(v6 + v57 + v52 - 3) )
          break;
LABEL_31:
        if ( ++v55 == v47 )
          goto LABEL_39;
      }
      if ( a2 >= v56 )
      {
        v94 = (__int64 *)a2;
      }
      else
      {
        if ( *v58 != *(_QWORD *)a2 )
        {
          _R11 = *(_QWORD *)a2 ^ *v58;
          __asm { tzcnt   r11, r11 }
          v61 = (unsigned int)_R11 >> 3;
          goto LABEL_36;
        }
        v94 = (__int64 *)(a2 + 8);
        v145 = v58 + 1;
        if ( v56 <= a2 + 8 )
        {
          ++v58;
        }
        else
        {
          v98 = v58[1];
          v99 = *(_QWORD *)(a2 + 8);
          if ( v98 != v99 )
          {
LABEL_93:
            _RCX = v99 ^ v98;
            __asm { tzcnt   rcx, rcx }
            v61 = (unsigned __int64)v94 + ((unsigned int)_RCX >> 3) - a2;
            goto LABEL_36;
          }
          v149 = v6;
          v105 = v145;
          while ( 1 )
          {
            ++v94;
            ++v105;
            if ( v56 <= (unsigned __int64)v94 )
              break;
            v98 = *v105;
            v99 = *v94;
            if ( *v105 != *v94 )
            {
              v6 = v149;
              goto LABEL_93;
            }
          }
          v58 = v105;
          v6 = v149;
        }
      }
      if ( (unsigned __int64)v94 < a3 - 3 && *(_DWORD *)v58 == *(_DWORD *)v94 )
      {
        v94 = (__int64 *)((char *)v94 + 4);
        v58 = (_QWORD *)((char *)v58 + 4);
      }
      if ( (unsigned __int64)v94 < a3 - 1 && *(_WORD *)v58 == *(_WORD *)v94 )
      {
        v94 = (__int64 *)((char *)v94 + 2);
        v58 = (_QWORD *)((char *)v58 + 2);
      }
      if ( a3 > (unsigned __int64)v94 )
        v94 = (__int64 *)((char *)v94 + (*(_BYTE *)v58 == *(_BYTE *)v94));
      v61 = (unsigned __int64)v94 - a2;
LABEL_36:
      if ( v61 <= v52 )
        goto LABEL_31;
      *a4 = v137 + 3 - (unsigned int)v57;
      if ( a3 == a2 + v61 )
      {
        v52 = v61;
        break;
      }
      ++v55;
      v52 = v61;
    }
    while ( v55 != v47 );
  }
LABEL_39:
  v62 = 3;
  v63 = v18 + v140;
  v141 = v63;
  v64 = *(_QWORD *)(v129 + 8);
  v65 = *(_QWORD *)(v129 + 112);
  v133 = *(char **)v129;
  v144 = *(_QWORD *)v129 - v64;
  if ( v63 <= 3 )
    v62 = v63;
  v66 = (unsigned int *)(v65 + v139);
  do
  {
    v67 = *v66++;
    _mm_prefetch((const char *)(v64 + v67), 1);
  }
  while ( (unsigned int *)(v65 + v139 + 12) != v66 );
  _mm_prefetch((const char *)(*(_QWORD *)(v129 + 128) + 4LL * (*(_DWORD *)(v65 + v139 + 12) >> 8)), 1);
  if ( v141 )
  {
    v68 = *(unsigned int *)(v65 + v139);
    v69 = v64 + v68;
    if ( (_DWORD)v68 )
    {
      v70 = 0;
      v71 = a2 + 4;
      v72 = 4 * v150 + 4;
      do
      {
        if ( *(_DWORD *)a2 != *(_DWORD *)v69 )
        {
LABEL_46:
          if ( v62 <= ++v70 )
            goto LABEL_58;
          goto LABEL_47;
        }
        v74 = v69 + 4;
        v75 = &v133[v71 - 4 - v69];
        if ( a3 < (unsigned __int64)v75 )
          v75 = (char *)a3;
        v76 = (unsigned __int64)(v75 - 7);
        if ( v71 >= (unsigned __int64)(v75 - 7) )
        {
          v95 = (_QWORD *)(v69 + 4);
          v96 = (char *)v71;
        }
        else
        {
          v77 = *(_QWORD *)(v69 + 4);
          v78 = *(_QWORD *)(a2 + 4);
          if ( v77 != v78 )
          {
            _RSI = v78 ^ v77;
            __asm { tzcnt   rsi, rsi }
            v81 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_54;
          }
          v96 = (char *)(a2 + 12);
          v95 = (_QWORD *)(v69 + 12);
          if ( v76 > a2 + 12 )
          {
            v148 = *(_QWORD *)(v69 + 12);
            v102 = *(_QWORD *)(a2 + 12);
            if ( v102 != v148 )
            {
              _RAX = v148 ^ v102;
LABEL_97:
              __asm { tzcnt   rax, rax }
              v81 = &v96[((unsigned int)_RAX >> 3) - v71];
LABEL_54:
              if ( v133 != &v81[v74] )
                goto LABEL_55;
LABEL_90:
              v151 = v81;
              v147 = v71;
              v97 = sub_92B7A0(&v81[v71], v136, a3);
              v71 = v147;
              v81 = &v151[v97];
              goto LABEL_55;
            }
            while ( 1 )
            {
              v96 += 8;
              ++v95;
              if ( v76 <= (unsigned __int64)v96 )
                break;
              if ( *v95 != *(_QWORD *)v96 )
              {
                _RAX = *(_QWORD *)v96 ^ *v95;
                goto LABEL_97;
              }
            }
          }
        }
        if ( v96 < v75 - 3 && *(_DWORD *)v95 == *(_DWORD *)v96 )
        {
          v96 += 4;
          v95 = (_QWORD *)((char *)v95 + 4);
        }
        if ( v96 < v75 - 1 && *(_WORD *)v95 == *(_WORD *)v96 )
        {
          v96 += 2;
          v95 = (_QWORD *)((char *)v95 + 2);
        }
        if ( v75 > v96 )
          v96 += *(_BYTE *)v95 == (unsigned __int8)*v96;
        v81 = &v96[-v71];
        if ( v133 == &v96[v74 - v71] )
          goto LABEL_90;
LABEL_55:
        if ( (unsigned __int64)(v81 + 4) <= v52 )
          goto LABEL_46;
        v52 = (unsigned __int64)(v81 + 4);
        *a4 = v144 + v137 - v142 + 3 - (unsigned int)v68;
        if ( (char *)a3 == &v81[a2 + 4] )
          return v52;
        ++v70;
        v65 = *(_QWORD *)(v129 + 112);
        if ( v62 <= v70 )
        {
LABEL_58:
          v82 = *(_DWORD *)(v65 + v139 + 12);
          v83 = (unsigned __int8)v82;
          v84 = v82 >> 8;
          if ( v83 > v141 - v70 )
            v83 = v141 - v70;
          if ( v83 )
          {
            v85 = v84;
            v86 = *(_QWORD *)(v129 + 128);
            v87 = (unsigned int *)(v86 + 4LL * v84);
            do
            {
              v88 = *v87++;
              _mm_prefetch((const char *)(v64 + v88), 1);
            }
            while ( (unsigned int *)(v86 + 4 * (v84 + (unsigned __int64)(v83 - 1)) + 4) != v87 );
            v89 = v84 + v83;
            v90 = (_DWORD *)a2;
            v135 = (char *)(a2 + 4);
            v138 = v144 + v137 - v142 + 3;
            while ( 1 )
            {
              v91 = *(unsigned int *)(v86 + 4 * v85);
              if ( *v90 == *(_DWORD *)(v64 + v91) )
              {
                v92 = sub_93A7C0(v135, (_QWORD *)(v64 + v91 + 4), a3, v133, v136) + 4;
                if ( v92 > v52 )
                {
                  v52 = v92;
                  *a4 = (unsigned int)(v138 - v91);
                  if ( (_DWORD *)a3 == (_DWORD *)((char *)v90 + v92) )
                    break;
                }
              }
              if ( ++v84 == v89 )
                break;
              v85 = v84;
              v86 = *(_QWORD *)(v129 + 128);
            }
          }
          return v52;
        }
LABEL_47:
        v73 = *(unsigned int *)(v65 + v72);
        v72 += 4;
        LODWORD(v68) = v73;
        v69 = v64 + v73;
      }
      while ( (_DWORD)v68 );
    }
  }
  return v52;
}
