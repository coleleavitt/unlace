unsigned __int64 __fastcall sub_93BED0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r9
  unsigned int v6; // r15d
  int v7; // r11d
  int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // eax
  bool v13; // cf
  char v14; // cl
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // r11
  int v18; // eax
  int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rbp
  __int64 v23; // r11
  __int64 v24; // rdx
  _DWORD *v25; // r12
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int *v28; // rax
  unsigned int v29; // r10d
  __int64 v30; // rdx
  _BYTE *v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned int *v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r10
  int *v39; // r11
  __int64 v40; // r12
  __m128i *v41; // r10
  __int8 v42; // r14
  const __m128i *v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  char v46; // cl
  char v47; // bp
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rdx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned __int64 v55; // rbp
  unsigned int v56; // eax
  int v57; // ecx
  __int64 v58; // rax
  unsigned __int64 v59; // r12
  __int64 v60; // rdi
  _QWORD *v61; // rcx
  unsigned __int64 v64; // r11
  unsigned int v65; // r15d
  unsigned int v66; // eax
  __int64 v67; // r13
  __int64 v68; // r14
  unsigned int *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r10
  __int64 v72; // rax
  unsigned int v73; // r11d
  unsigned __int64 v74; // r9
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // rcx
  char *v78; // rdx
  unsigned __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // r8
  char *v84; // r8
  unsigned int v85; // r14d
  unsigned int v86; // r12d
  unsigned int v87; // r14d
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned int *v90; // rax
  __int64 v91; // rsi
  unsigned int v92; // r12d
  _DWORD *v93; // r15
  __int64 v94; // rbx
  unsigned __int64 v95; // rax
  __int64 *v97; // r11
  _QWORD *v98; // r8
  char *v99; // rsi
  signed __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r13
  __int64 v105; // rax
  _QWORD *v108; // r9
  unsigned int v109; // r11d
  __int64 v110; // rax
  unsigned int v111; // edx
  __int64 v112; // rax
  unsigned int *v113; // rax
  unsigned int v114; // r14d
  __int64 v115; // rdx
  _BYTE *v116; // r10
  unsigned int v117; // eax
  _DWORD *v118; // r12
  unsigned int v119; // eax
  unsigned int v120; // edx
  unsigned int v121; // r10d
  int v122; // r14d
  char v123; // al
  unsigned int v124; // r13d
  char v125; // cl
  int v126; // edx
  unsigned int v127; // edx
  __int64 v128; // rax
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v132; // [rsp+10h] [rbp-1C8h]
  __int64 v134; // [rsp+20h] [rbp-1B8h]
  __int8 v135; // [rsp+20h] [rbp-1B8h]
  char *v136; // [rsp+20h] [rbp-1B8h]
  __int64 v137; // [rsp+28h] [rbp-1B0h]
  char *v138; // [rsp+28h] [rbp-1B0h]
  _QWORD *v139; // [rsp+30h] [rbp-1A8h]
  __int64 v140; // [rsp+38h] [rbp-1A0h]
  int v141; // [rsp+40h] [rbp-198h]
  int v142; // [rsp+40h] [rbp-198h]
  int v143; // [rsp+44h] [rbp-194h]
  unsigned int v144; // [rsp+44h] [rbp-194h]
  char v145; // [rsp+48h] [rbp-190h]
  int v146; // [rsp+48h] [rbp-190h]
  _QWORD *v147; // [rsp+48h] [rbp-190h]
  __int64 v148; // [rsp+50h] [rbp-188h]
  unsigned __int64 v149; // [rsp+50h] [rbp-188h]
  __int64 v150; // [rsp+50h] [rbp-188h]
  int v151; // [rsp+58h] [rbp-180h]
  char *v152; // [rsp+58h] [rbp-180h]
  __int64 v153; // [rsp+58h] [rbp-180h]
  __int64 v154; // [rsp+60h] [rbp-178h]
  __int64 v155; // [rsp+68h] [rbp-170h]
  __int64 v156; // [rsp+68h] [rbp-170h]
  unsigned int v157; // [rsp+68h] [rbp-170h]
  unsigned int v158; // [rsp+70h] [rbp-168h]
  char v159; // [rsp+78h] [rbp-160h]
  __int64 v160; // [rsp+80h] [rbp-158h]
  unsigned int v161; // [rsp+88h] [rbp-150h]
  int v162[66]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v163; // [rsp+198h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 52);
  v9 = a2 - v5;
  v10 = *(_DWORD *)(a1 + 268);
  v11 = 1 << *(_DWORD *)(a1 + 256);
  v163 = __readfsqword(0x28u);
  v141 = a2 - v5;
  v134 = *(_QWORD *)(a1 + 112);
  v137 = *(_QWORD *)(a1 + 56);
  v158 = *(_DWORD *)(a1 + 24);
  v139 = (_QWORD *)(v5 + v158);
  v12 = a2 - v5 - v11;
  v13 = v11 < (_DWORD)a2 - (_DWORD)v5 - v6;
  v14 = 6;
  v15 = *(_QWORD *)(a1 + 96);
  if ( !v13 )
    v12 = v6;
  v16 = v7 == 0;
  v17 = *(_QWORD *)(a1 + 248);
  if ( v16 )
    v6 = v12;
  v132 = *(_QWORD *)(a1 + 248);
  if ( v10 <= 6 )
    v14 = v10;
  v18 = -1640531535 * *(_DWORD *)a2;
  v19 = 1 << v14;
  v20 = (unsigned int)(-1640531535 * *(_DWORD *)a2) >> (34 - *(_BYTE *)(v17 + 264));
  v148 = 4 * v20;
  v140 = 16 * v20;
  _mm_prefetch((const char *)(*(_QWORD *)(v17 + 112) + 16 * v20), 1);
  v143 = 0;
  if ( v10 > 6 )
    v143 = 1 << (v10 - 6);
  v151 = *(_QWORD *)(a1 + 96);
  v145 = 24 - v8;
  if ( *(_DWORD *)(a1 + 300) )
  {
    *(_DWORD *)(a1 + 44) = v9;
    v36 = ((unsigned int)v15 ^ v18) >> v145;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 44);
    v155 = v5;
    v22 = *(_QWORD *)(a1 + 56);
    v23 = *(_QWORD *)(a1 + 112);
    v154 = a1 + 64;
    if ( v9 - v21 > 0x180 )
    {
      v109 = v21 + 96;
      if ( v21 >= v21 + 96 )
      {
        v22 = *(_QWORD *)(a1 + 56);
        v23 = *(_QWORD *)(a1 + 112);
        v155 = v5;
      }
      else
      {
        LODWORD(v110) = *(_QWORD *)(a1 + 96);
        v157 = v9;
        while ( 1 )
        {
          v111 = ((unsigned int)v110 ^ (-1640531535 * *(_DWORD *)(v5 + v21 + 8))) >> (24 - v8);
          v112 = v111 >> 8 << 6;
          _mm_prefetch((const char *)(v137 + v112), 1);
          _mm_prefetch((const char *)(v137 + v112 + 32), 1);
          _mm_prefetch((const char *)(v134 + 4 * v112), 1);
          _mm_prefetch((const char *)(v134 + 4 * v112 + 64), 1);
          v113 = (unsigned int *)(a1 + 64 + 4LL * (v21 & 7));
          v114 = *v113;
          *v113 = v111;
          v115 = v114 >> 8 << 6;
          v116 = (_BYTE *)(v137 + v115);
          v117 = (*(_BYTE *)(v137 + v115) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v137 + v115) - 1) & 0x3F) == 0 )
            v117 = 63;
          *v116 = v117;
          v116[v117] = v114;
          *(_DWORD *)(v134 + 4 * (v115 + v117)) = v21++;
          if ( v109 == v21 )
            break;
          v110 = *(_QWORD *)(a1 + 96);
        }
        v9 = v157;
        v23 = *(_QWORD *)(a1 + 112);
        v22 = *(_QWORD *)(a1 + 56);
        v8 = *(_DWORD *)(a1 + 52);
        v155 = *(_QWORD *)(a1 + 8);
      }
      v118 = (_DWORD *)(v5 + v9 - 32);
      v21 = v9 - 32;
      if ( a2 + 1 >= (unsigned __int64)v118 )
      {
        v119 = a2 + 1 - (_DWORD)v118 + 1;
        if ( v119 > 8 )
          v119 = 8;
        v120 = v119 + v21;
        if ( v21 < v119 + v21 )
        {
          v160 = v5;
          v121 = v9 - 32;
          v161 = v9;
          v122 = *(_DWORD *)(a1 + 96);
          v123 = 24 - v8;
          v159 = v8;
          v124 = v120;
          v125 = v123;
          do
          {
            v126 = -1640531535 * *v118;
            v118 = (_DWORD *)((char *)v118 + 1);
            v127 = (v122 ^ (unsigned int)v126) >> v125;
            v128 = v127 >> 8 << 6;
            v129 = 4 * v128;
            _mm_prefetch((const char *)(v22 + v128), 1);
            _mm_prefetch((const char *)(v22 + v128 + 32), 1);
            v130 = v121++ & 7;
            _mm_prefetch((const char *)(v23 + v129), 1);
            _mm_prefetch((const char *)(v23 + v129 + 64), 1);
            *(_DWORD *)(a1 + 4 * v130 + 64) = v127;
          }
          while ( v124 != v121 );
          LOBYTE(v8) = v159;
          v5 = v160;
          v9 = v161;
        }
      }
    }
    if ( v9 > v21 )
    {
      v24 = v155;
      v156 = v5;
      v25 = (_DWORD *)(v24 + v21 + 8);
      do
      {
        v26 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v25)) >> (24 - v8);
        v27 = v26 >> 8 << 6;
        _mm_prefetch((const char *)(v22 + v27), 1);
        _mm_prefetch((const char *)(v22 + v27 + 32), 1);
        _mm_prefetch((const char *)(v23 + 4 * v27), 1);
        _mm_prefetch((const char *)(v23 + 4 * v27 + 64), 1);
        v28 = (unsigned int *)(v154 + 4LL * (v21 & 7));
        v29 = *v28;
        *v28 = v26;
        v30 = v29 >> 8 << 6;
        v31 = (_BYTE *)(v22 + v30);
        v32 = (*(_BYTE *)(v22 + v30) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v22 + v30) - 1) & 0x3F) == 0 )
          v32 = 63;
        v25 = (_DWORD *)((char *)v25 + 1);
        *v31 = v32;
        v31[v32] = v29;
        *(_DWORD *)(v23 + 4 * (v30 + v32)) = v21++;
      }
      while ( v141 != v21 );
      v5 = v156;
    }
    *(_DWORD *)(a1 + 44) = v9;
    v33 = (v151 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v9 + 8))) >> v145;
    v34 = v33 >> 8 << 6;
    _mm_prefetch((const char *)(v134 + 4 * v34), 1);
    _mm_prefetch((const char *)(v134 + 4 * v34 + 64), 1);
    _mm_prefetch((const char *)(v137 + v34), 1);
    _mm_prefetch((const char *)(v137 + v34 + 32), 1);
    v35 = (unsigned int *)(v154 + 4LL * (v9 & 7));
    v36 = *v35;
    *v35 = v33;
  }
  v37 = v134;
  *(_DWORD *)(a1 + 104) += v36;
  v135 = v36;
  v38 = v36 >> 8 << 6;
  *(_OWORD *)v162 = 0;
  v39 = v162;
  v40 = v37 + 4 * v38;
  v41 = (__m128i *)(v137 + v38);
  v42 = v41->m128i_i8[0];
  v43 = v41;
  v44 = _mm_cvtsi32_si128(v36);
  v45 = _mm_unpacklo_epi8(v44, v44);
  v46 = v41->m128i_i8[0] & 0x3F;
  v47 = v46;
  v48 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v45, v45), 0);
  do
  {
    v49 = _mm_loadu_si128(v43++);
    *v39++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v49, v48));
  }
  while ( &v41[4] != v43 );
  v50 = 0;
  _RAX = __ROR8__(v162[0] | ((__int64)v162[3] << 48) | ((__int64)v162[2] << 32) | ((__int64)v162[1] << 16), v46);
  if ( _RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v53 = (v47 + (_BYTE)_RCX) & 0x3F;
      if ( v53 )
      {
        v54 = *(_DWORD *)(v40 + 4LL * v53);
        if ( v54 < v6 )
          break;
        --v19;
        _mm_prefetch((const char *)(v5 + v54), 1);
        v162[v50++] = v54;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v55 = 3;
  v56 = (v42 + 63) & 0x3F;
  if ( ((v42 + 63) & 0x3F) == 0 )
    v56 = 63;
  v41->m128i_i8[0] = v56;
  v41->m128i_i8[v56] = v135;
  v57 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v57 + 1;
  *(_DWORD *)(v40 + 4LL * v56) = v57;
  if ( v50 )
  {
    v58 = 0;
    v59 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v60 = (unsigned int)v162[v58];
        v61 = (_QWORD *)(v5 + v60);
        if ( *(_DWORD *)(a2 + v55 - 3) == *(_DWORD *)(v5 + v60 + v55 - 3) )
          break;
LABEL_31:
        if ( ++v58 == v50 )
          goto LABEL_39;
      }
      if ( a2 >= v59 )
      {
        v97 = (__int64 *)a2;
      }
      else
      {
        if ( *v61 != *(_QWORD *)a2 )
        {
          _R11 = *(_QWORD *)a2 ^ *v61;
          __asm { tzcnt   r11, r11 }
          v64 = (unsigned int)_R11 >> 3;
          goto LABEL_36;
        }
        v97 = (__int64 *)(a2 + 8);
        v147 = v61 + 1;
        if ( v59 <= a2 + 8 )
        {
          ++v61;
        }
        else
        {
          v101 = v61[1];
          v102 = *(_QWORD *)(a2 + 8);
          if ( v101 != v102 )
          {
LABEL_93:
            _RCX = v102 ^ v101;
            __asm { tzcnt   rcx, rcx }
            v64 = (unsigned __int64)v97 + ((unsigned int)_RCX >> 3) - a2;
            goto LABEL_36;
          }
          v153 = v5;
          v108 = v147;
          while ( 1 )
          {
            ++v97;
            ++v108;
            if ( v59 <= (unsigned __int64)v97 )
              break;
            v101 = *v108;
            v102 = *v97;
            if ( *v108 != *v97 )
            {
              v5 = v153;
              goto LABEL_93;
            }
          }
          v61 = v108;
          v5 = v153;
        }
      }
      if ( (unsigned __int64)v97 < a3 - 3 && *(_DWORD *)v61 == *(_DWORD *)v97 )
      {
        v97 = (__int64 *)((char *)v97 + 4);
        v61 = (_QWORD *)((char *)v61 + 4);
      }
      if ( (unsigned __int64)v97 < a3 - 1 && *(_WORD *)v61 == *(_WORD *)v97 )
      {
        v97 = (__int64 *)((char *)v97 + 2);
        v61 = (_QWORD *)((char *)v61 + 2);
      }
      if ( a3 > (unsigned __int64)v97 )
        v97 = (__int64 *)((char *)v97 + (*(_BYTE *)v61 == *(_BYTE *)v97));
      v64 = (unsigned __int64)v97 - a2;
LABEL_36:
      if ( v64 <= v55 )
        goto LABEL_31;
      *a4 = (unsigned int)(v141 + 3 - v60);
      if ( a3 == a2 + v64 )
      {
        v55 = v64;
        break;
      }
      ++v58;
      v55 = v64;
    }
    while ( v58 != v50 );
  }
LABEL_39:
  v65 = 3;
  v66 = v19 + v143;
  v144 = v66;
  v67 = *(_QWORD *)(v132 + 8);
  v68 = *(_QWORD *)(v132 + 112);
  v136 = *(char **)v132;
  v146 = *(_QWORD *)v132 - v67;
  if ( v66 <= 3 )
    v65 = v66;
  v69 = (unsigned int *)(v68 + v140);
  do
  {
    v70 = *v69++;
    _mm_prefetch((const char *)(v67 + v70), 1);
  }
  while ( (unsigned int *)(v68 + v140 + 12) != v69 );
  _mm_prefetch((const char *)(*(_QWORD *)(v132 + 128) + 4LL * (*(_DWORD *)(v68 + v140 + 12) >> 8)), 1);
  if ( v144 )
  {
    v71 = *(unsigned int *)(v68 + v140);
    v72 = v67 + v71;
    if ( (_DWORD)v71 )
    {
      v73 = 0;
      v74 = a2 + 4;
      v75 = 4 * v148 + 4;
      do
      {
        if ( *(_DWORD *)a2 != *(_DWORD *)v72 )
        {
LABEL_46:
          if ( v65 <= ++v73 )
            goto LABEL_58;
          goto LABEL_47;
        }
        v77 = v72 + 4;
        v78 = &v136[v74 - 4 - v72];
        if ( a3 < (unsigned __int64)v78 )
          v78 = (char *)a3;
        v79 = (unsigned __int64)(v78 - 7);
        if ( v74 >= (unsigned __int64)(v78 - 7) )
        {
          v98 = (_QWORD *)(v72 + 4);
          v99 = (char *)v74;
        }
        else
        {
          v80 = *(_QWORD *)(v72 + 4);
          v81 = *(_QWORD *)(a2 + 4);
          if ( v80 != v81 )
          {
            _RSI = v81 ^ v80;
            __asm { tzcnt   rsi, rsi }
            v84 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_54;
          }
          v99 = (char *)(a2 + 12);
          v98 = (_QWORD *)(v72 + 12);
          if ( v79 > a2 + 12 )
          {
            v150 = *(_QWORD *)(v72 + 12);
            v105 = *(_QWORD *)(a2 + 12);
            if ( v150 != v105 )
            {
              _RAX = v150 ^ v105;
LABEL_97:
              __asm { tzcnt   rax, rax }
              v84 = &v99[((unsigned int)_RAX >> 3) - v74];
LABEL_54:
              if ( v136 != &v84[v77] )
                goto LABEL_55;
LABEL_90:
              v152 = v84;
              v149 = v74;
              v100 = sub_92B7A0(&v84[v74], v139, a3);
              v74 = v149;
              v84 = &v152[v100];
              goto LABEL_55;
            }
            while ( 1 )
            {
              v99 += 8;
              ++v98;
              if ( v79 <= (unsigned __int64)v99 )
                break;
              if ( *v98 != *(_QWORD *)v99 )
              {
                _RAX = *(_QWORD *)v99 ^ *v98;
                goto LABEL_97;
              }
            }
          }
        }
        if ( v99 < v78 - 3 && *(_DWORD *)v98 == *(_DWORD *)v99 )
        {
          v99 += 4;
          v98 = (_QWORD *)((char *)v98 + 4);
        }
        if ( v99 < v78 - 1 && *(_WORD *)v98 == *(_WORD *)v99 )
        {
          v99 += 2;
          v98 = (_QWORD *)((char *)v98 + 2);
        }
        if ( v78 > v99 )
          v99 += *(_BYTE *)v98 == (unsigned __int8)*v99;
        v84 = &v99[-v74];
        if ( v136 == &v99[v77 - v74] )
          goto LABEL_90;
LABEL_55:
        if ( (unsigned __int64)(v84 + 4) <= v55 )
          goto LABEL_46;
        v55 = (unsigned __int64)(v84 + 4);
        *a4 = v146 + v141 - v158 + 3 - (unsigned int)v71;
        if ( (char *)a3 == &v84[a2 + 4] )
          return v55;
        ++v73;
        v68 = *(_QWORD *)(v132 + 112);
        if ( v65 <= v73 )
        {
LABEL_58:
          v85 = *(_DWORD *)(v68 + v140 + 12);
          v86 = (unsigned __int8)v85;
          v87 = v85 >> 8;
          if ( v86 > v144 - v73 )
            v86 = v144 - v73;
          if ( v86 )
          {
            v88 = v87;
            v89 = *(_QWORD *)(v132 + 128);
            v90 = (unsigned int *)(v89 + 4LL * v87);
            do
            {
              v91 = *v90++;
              _mm_prefetch((const char *)(v67 + v91), 1);
            }
            while ( (unsigned int *)(v89 + 4 * (v87 + (unsigned __int64)(v86 - 1)) + 4) != v90 );
            v92 = v87 + v86;
            v93 = (_DWORD *)a2;
            v138 = (char *)(a2 + 4);
            v142 = v146 + v141 - v158 + 3;
            while ( 1 )
            {
              v94 = *(unsigned int *)(v89 + 4 * v88);
              if ( *v93 == *(_DWORD *)(v67 + v94) )
              {
                v95 = sub_93A7C0(v138, (_QWORD *)(v67 + v94 + 4), a3, v136, v139) + 4;
                if ( v55 < v95 )
                {
                  v55 = v95;
                  *a4 = (unsigned int)(v142 - v94);
                  if ( (_DWORD *)a3 == (_DWORD *)((char *)v93 + v95) )
                    break;
                }
              }
              if ( ++v87 == v92 )
                break;
              v88 = v87;
              v89 = *(_QWORD *)(v132 + 128);
            }
          }
          return v55;
        }
LABEL_47:
        v76 = *(unsigned int *)(v68 + v75);
        v75 += 4;
        LODWORD(v71) = v76;
        v72 = v67 + v76;
      }
      while ( (_DWORD)v71 );
    }
  }
  return v55;
}
