unsigned __int64 __fastcall sub_D9AD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r9
  unsigned int v6; // r15d
  int v7; // r11d
  int v8; // r12d
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
  __int64 v22; // r13
  __int64 v23; // r11
  __int64 v24; // rdx
  _DWORD *v25; // rbp
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int *v28; // rdx
  unsigned int v29; // r10d
  __int64 v30; // rdx
  _BYTE *v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned int *v35; // rcx
  unsigned int v36; // eax
  __int8 v37; // r12
  __int64 v38; // r8
  __m128i v39; // xmm0
  __int64 v40; // r11
  __m128i *v41; // r8
  __m128i v42; // xmm0
  __int8 v43; // bp
  __m128i v44; // xmm0
  char v45; // r10
  __int64 v47; // rcx
  unsigned int v49; // edx
  unsigned int v50; // edx
  char v51; // al
  unsigned __int64 v52; // rbp
  unsigned int v53; // eax
  int v54; // edx
  __int64 v55; // rax
  unsigned __int64 v56; // r12
  __int64 v57; // rdi
  _QWORD *v58; // rdx
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
  __int64 v98; // r13
  __int64 v99; // rdx
  __int64 v102; // rax
  _QWORD *v105; // r9
  unsigned int v106; // r11d
  unsigned int v107; // eax
  __int64 v108; // rdx
  unsigned int *v109; // rdx
  unsigned int v110; // r13d
  __int64 v111; // rdx
  _BYTE *v112; // r10
  unsigned int v113; // eax
  _DWORD *v114; // rbp
  unsigned int v115; // eax
  unsigned int v116; // edx
  unsigned int v117; // r10d
  int v118; // r14d
  char v119; // al
  unsigned int v120; // r12d
  char v121; // cl
  int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // r9
  __int64 v127; // [rsp+10h] [rbp-1C8h]
  __int64 v129; // [rsp+20h] [rbp-1B8h]
  char *v130; // [rsp+20h] [rbp-1B8h]
  __int64 v131; // [rsp+28h] [rbp-1B0h]
  char *v132; // [rsp+28h] [rbp-1B0h]
  _QWORD *v133; // [rsp+30h] [rbp-1A8h]
  __int64 v134; // [rsp+38h] [rbp-1A0h]
  int v135; // [rsp+40h] [rbp-198h]
  int v136; // [rsp+40h] [rbp-198h]
  int v137; // [rsp+44h] [rbp-194h]
  unsigned int v138; // [rsp+44h] [rbp-194h]
  char v139; // [rsp+48h] [rbp-190h]
  int v140; // [rsp+48h] [rbp-190h]
  _QWORD *v141; // [rsp+48h] [rbp-190h]
  __int64 v142; // [rsp+50h] [rbp-188h]
  unsigned __int64 v143; // [rsp+50h] [rbp-188h]
  __int64 v144; // [rsp+50h] [rbp-188h]
  int v145; // [rsp+58h] [rbp-180h]
  char *v146; // [rsp+58h] [rbp-180h]
  __int64 v147; // [rsp+58h] [rbp-180h]
  __int64 v148; // [rsp+60h] [rbp-178h]
  __int64 v149; // [rsp+68h] [rbp-170h]
  __int64 v150; // [rsp+68h] [rbp-170h]
  unsigned int v151; // [rsp+70h] [rbp-168h]
  char v152; // [rsp+78h] [rbp-160h]
  __int64 v153; // [rsp+80h] [rbp-158h]
  unsigned int v154; // [rsp+88h] [rbp-150h]
  _DWORD v155[66]; // [rsp+90h] [rbp-148h]
  unsigned __int64 v156; // [rsp+198h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 52);
  v9 = a2 - v5;
  v10 = *(_DWORD *)(a1 + 268);
  v11 = 1 << *(_DWORD *)(a1 + 256);
  v156 = __readfsqword(0x28u);
  v135 = a2 - v5;
  v129 = *(_QWORD *)(a1 + 112);
  v131 = *(_QWORD *)(a1 + 56);
  v151 = *(_DWORD *)(a1 + 24);
  v133 = (_QWORD *)(v5 + v151);
  v12 = a2 - v5 - v11;
  v13 = v11 < (_DWORD)a2 - (_DWORD)v5 - v6;
  v14 = 5;
  v15 = *(_QWORD *)(a1 + 96);
  if ( !v13 )
    v12 = v6;
  v16 = v7 == 0;
  v17 = *(_QWORD *)(a1 + 248);
  if ( v16 )
    v6 = v12;
  v127 = *(_QWORD *)(a1 + 248);
  if ( v10 <= 5 )
    v14 = v10;
  v18 = -1640531535 * *(_DWORD *)a2;
  v19 = 1 << v14;
  v20 = (unsigned int)(-1640531535 * *(_DWORD *)a2) >> (34 - *(_BYTE *)(v17 + 264));
  v142 = 4 * v20;
  v134 = 16 * v20;
  _mm_prefetch((const char *)(*(_QWORD *)(v17 + 112) + 16 * v20), 1);
  v137 = 0;
  if ( v10 > 5 )
    v137 = 1 << (v10 - 5);
  v145 = *(_QWORD *)(a1 + 96);
  v139 = 24 - v8;
  if ( *(_DWORD *)(a1 + 300) )
  {
    *(_DWORD *)(a1 + 44) = v9;
    v36 = ((unsigned int)v15 ^ v18) >> v139;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 44);
    v149 = v5;
    v22 = *(_QWORD *)(a1 + 56);
    v23 = *(_QWORD *)(a1 + 112);
    v148 = a1 + 64;
    if ( v9 - v21 > 0x180 )
    {
      v106 = v21 + 96;
      if ( v21 >= v21 + 96 )
      {
        v22 = *(_QWORD *)(a1 + 56);
        v23 = *(_QWORD *)(a1 + 112);
        v149 = v5;
      }
      else
      {
        while ( 1 )
        {
          v107 = ((unsigned int)v15 ^ (-1640531535 * *(_DWORD *)(v5 + v21 + 8))) >> (24 - v8);
          v108 = 32 * (v107 >> 8);
          _mm_prefetch((const char *)(v131 + v108), 1);
          _mm_prefetch((const char *)(v129 + 4 * v108), 1);
          _mm_prefetch((const char *)(v129 + 4 * v108 + 64), 1);
          v109 = (unsigned int *)(a1 + 64 + 4LL * (v21 & 7));
          v110 = *v109;
          *v109 = v107;
          v111 = 32 * (v110 >> 8);
          v112 = (_BYTE *)(v131 + v111);
          v113 = (*(_BYTE *)(v131 + v111) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v131 + v111) - 1) & 0x1F) == 0 )
            v113 = 31;
          *v112 = v113;
          v112[v113] = v110;
          *(_DWORD *)(v129 + 4 * (v111 + v113)) = v21++;
          if ( v106 == v21 )
            break;
          v15 = *(_QWORD *)(a1 + 96);
        }
        v23 = *(_QWORD *)(a1 + 112);
        v22 = *(_QWORD *)(a1 + 56);
        v8 = *(_DWORD *)(a1 + 52);
        v149 = *(_QWORD *)(a1 + 8);
      }
      v114 = (_DWORD *)(v5 + v9 - 32);
      v21 = v9 - 32;
      if ( a2 + 1 >= (unsigned __int64)v114 )
      {
        v115 = a2 + 1 - (_DWORD)v114 + 1;
        if ( v115 > 8 )
          v115 = 8;
        v116 = v115 + v21;
        if ( v21 < v115 + v21 )
        {
          v153 = v5;
          v117 = v9 - 32;
          v154 = v9;
          v118 = *(_DWORD *)(a1 + 96);
          v119 = 24 - v8;
          v152 = v8;
          v120 = v116;
          v121 = v119;
          do
          {
            v122 = -1640531535 * *v114;
            v114 = (_DWORD *)((char *)v114 + 1);
            v123 = (v118 ^ (unsigned int)v122) >> v121;
            v124 = 32 * (v123 >> 8);
            v125 = 4 * v124;
            _mm_prefetch((const char *)(v22 + v124), 1);
            LOBYTE(v124) = v117++;
            _mm_prefetch((const char *)(v23 + v125), 1);
            _mm_prefetch((const char *)(v23 + v125 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v124 & 7) + 64) = v123;
          }
          while ( v120 != v117 );
          LOBYTE(v8) = v152;
          v5 = v153;
          v9 = v154;
        }
      }
    }
    if ( v9 > v21 )
    {
      v24 = v149;
      v150 = v5;
      v25 = (_DWORD *)(v24 + v21 + 8);
      do
      {
        v26 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v25)) >> (24 - v8);
        v27 = 32 * (v26 >> 8);
        _mm_prefetch((const char *)(v22 + v27), 1);
        _mm_prefetch((const char *)(v23 + 4 * v27), 1);
        _mm_prefetch((const char *)(v23 + 4 * v27 + 64), 1);
        v28 = (unsigned int *)(v148 + 4LL * (v21 & 7));
        v29 = *v28;
        *v28 = v26;
        v30 = 32 * (v29 >> 8);
        v31 = (_BYTE *)(v22 + v30);
        v32 = (*(_BYTE *)(v22 + v30) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v22 + v30) - 1) & 0x1F) == 0 )
          v32 = 31;
        v25 = (_DWORD *)((char *)v25 + 1);
        *v31 = v32;
        v31[v32] = v29;
        *(_DWORD *)(v23 + 4 * (v30 + v32)) = v21++;
      }
      while ( v135 != v21 );
      v5 = v150;
    }
    *(_DWORD *)(a1 + 44) = v9;
    v33 = (v145 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v9 + 8))) >> v139;
    v34 = 32 * (v33 >> 8);
    _mm_prefetch((const char *)(v129 + 4 * v34), 1);
    _mm_prefetch((const char *)(v129 + 4 * v34 + 64), 1);
    _mm_prefetch((const char *)(v131 + v34), 1);
    v35 = (unsigned int *)(v148 + 4LL * (v9 & 7));
    v36 = *v35;
    *v35 = v33;
  }
  v37 = v36;
  *(_DWORD *)(a1 + 104) += v36;
  v38 = 32 * (v36 >> 8);
  v39 = _mm_cvtsi32_si128(v36);
  v40 = v129 + 4 * v38;
  v41 = (__m128i *)(v131 + v38);
  v42 = _mm_unpacklo_epi8(v39, v39);
  v43 = v41->m128i_i8[0];
  v44 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v42, v42), 0);
  v45 = v41->m128i_i8[0] & 0x1F;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v41), v44))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v44, _mm_loadu_si128(v41 + 1))) << 16),
                         v45);
  v47 = 0;
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v49 = (v45 + (_BYTE)_RDX) & 0x1F;
      if ( v49 )
      {
        v50 = *(_DWORD *)(v40 + 4LL * v49);
        if ( v50 < v6 )
          break;
        --v19;
        _mm_prefetch((const char *)(v5 + v50), 1);
        v155[v47++] = v50;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v51 = v43 + 31;
  v52 = 3;
  v53 = v51 & 0x1F;
  if ( !v53 )
    v53 = 31;
  v41->m128i_i8[0] = v53;
  v41->m128i_i8[v53] = v37;
  v54 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v54 + 1;
  *(_DWORD *)(v40 + 4LL * v53) = v54;
  if ( v47 )
  {
    v55 = 0;
    v56 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v57 = (unsigned int)v155[v55];
        v58 = (_QWORD *)(v5 + v57);
        if ( *(_DWORD *)(a2 + v52 - 3) == *(_DWORD *)(v5 + v57 + v52 - 3) )
          break;
LABEL_29:
        if ( ++v55 == v47 )
          goto LABEL_37;
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
          goto LABEL_34;
        }
        v94 = (__int64 *)(a2 + 8);
        v141 = v58 + 1;
        if ( v56 <= a2 + 8 )
        {
          ++v58;
        }
        else
        {
          v98 = v58[1];
          v99 = *(_QWORD *)(a2 + 8);
          if ( v99 != v98 )
          {
LABEL_91:
            _RDX = v98 ^ v99;
            __asm { tzcnt   rdx, rdx }
            v61 = (unsigned __int64)v94 + ((unsigned int)_RDX >> 3) - a2;
            goto LABEL_34;
          }
          v147 = v5;
          v105 = v141;
          while ( 1 )
          {
            ++v94;
            ++v105;
            if ( v56 <= (unsigned __int64)v94 )
              break;
            v99 = *v105;
            v98 = *v94;
            if ( *v105 != *v94 )
            {
              v5 = v147;
              goto LABEL_91;
            }
          }
          v58 = v105;
          v5 = v147;
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
LABEL_34:
      if ( v61 <= v52 )
        goto LABEL_29;
      *a4 = (unsigned int)(v135 + 3 - v57);
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
LABEL_37:
  v62 = 3;
  v63 = v19 + v137;
  v138 = v63;
  v64 = *(_QWORD *)(v127 + 8);
  v65 = *(_QWORD *)(v127 + 112);
  v130 = *(char **)v127;
  v140 = *(_QWORD *)v127 - v64;
  if ( v63 <= 3 )
    v62 = v63;
  v66 = (unsigned int *)(v65 + v134);
  do
  {
    v67 = *v66++;
    _mm_prefetch((const char *)(v64 + v67), 1);
  }
  while ( (unsigned int *)(v65 + v134 + 12) != v66 );
  _mm_prefetch((const char *)(*(_QWORD *)(v127 + 128) + 4LL * (*(_DWORD *)(v65 + v134 + 12) >> 8)), 1);
  if ( v138 )
  {
    v68 = *(unsigned int *)(v65 + v134);
    v69 = v64 + v68;
    if ( (_DWORD)v68 )
    {
      v70 = 0;
      v71 = a2 + 4;
      v72 = 4 * v142 + 4;
      do
      {
        if ( *(_DWORD *)a2 != *(_DWORD *)v69 )
        {
LABEL_44:
          if ( v62 <= ++v70 )
            goto LABEL_56;
          goto LABEL_45;
        }
        v74 = v69 + 4;
        v75 = &v130[v71 - 4 - v69];
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
            goto LABEL_52;
          }
          v96 = (char *)(a2 + 12);
          v95 = (_QWORD *)(v69 + 12);
          if ( v76 > a2 + 12 )
          {
            v144 = *(_QWORD *)(v69 + 12);
            v102 = *(_QWORD *)(a2 + 12);
            if ( v144 != v102 )
            {
              _RAX = v144 ^ v102;
LABEL_95:
              __asm { tzcnt   rax, rax }
              v81 = &v96[((unsigned int)_RAX >> 3) - v71];
LABEL_52:
              if ( v130 != &v81[v74] )
                goto LABEL_53;
LABEL_88:
              v146 = v81;
              v143 = v71;
              v97 = sub_C9E40(&v81[v71], v133, a3);
              v71 = v143;
              v81 = &v146[v97];
              goto LABEL_53;
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
                goto LABEL_95;
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
        if ( v130 == &v96[v74 - v71] )
          goto LABEL_88;
LABEL_53:
        if ( v52 >= (unsigned __int64)(v81 + 4) )
          goto LABEL_44;
        v52 = (unsigned __int64)(v81 + 4);
        *a4 = v140 + v135 - v151 + 3 - (unsigned int)v68;
        if ( (char *)a3 == &v81[a2 + 4] )
          return v52;
        ++v70;
        v65 = *(_QWORD *)(v127 + 112);
        if ( v62 <= v70 )
        {
LABEL_56:
          v82 = *(_DWORD *)(v65 + v134 + 12);
          v83 = (unsigned __int8)v82;
          v84 = v82 >> 8;
          if ( v83 > v138 - v70 )
            v83 = v138 - v70;
          if ( v83 )
          {
            v85 = v84;
            v86 = *(_QWORD *)(v127 + 128);
            v87 = (unsigned int *)(v86 + 4LL * v84);
            do
            {
              v88 = *v87++;
              _mm_prefetch((const char *)(v64 + v88), 1);
            }
            while ( (unsigned int *)(v86 + 4 * (v84 + (unsigned __int64)(v83 - 1)) + 4) != v87 );
            v89 = v84 + v83;
            v90 = (_DWORD *)a2;
            v132 = (char *)(a2 + 4);
            v136 = v140 + v135 - v151 + 3;
            while ( 1 )
            {
              v91 = *(unsigned int *)(v86 + 4 * v85);
              if ( *v90 == *(_DWORD *)(v64 + v91) )
              {
                v92 = sub_D8E60(v132, (_QWORD *)(v64 + v91 + 4), a3, v130, v133) + 4;
                if ( v92 > v52 )
                {
                  v52 = v92;
                  *a4 = (unsigned int)(v136 - v91);
                  if ( (_DWORD *)a3 == (_DWORD *)((char *)v90 + v92) )
                    break;
                }
              }
              if ( ++v84 == v89 )
                break;
              v85 = v84;
              v86 = *(_QWORD *)(v127 + 128);
            }
          }
          return v52;
        }
LABEL_45:
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

