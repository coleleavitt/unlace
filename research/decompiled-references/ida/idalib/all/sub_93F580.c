unsigned __int64 __fastcall sub_93F580(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // r14d
  __int64 v8; // r10
  int v9; // r12d
  int v10; // ecx
  unsigned int v11; // eax
  bool v12; // cf
  unsigned int v13; // edx
  char v14; // cl
  int v15; // esi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // r13
  __int64 v19; // r11
  __int64 v20; // rdx
  _QWORD *v21; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int *v24; // rdx
  unsigned int v25; // r10d
  __int64 v26; // rdx
  _BYTE *v27; // r9
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  _DWORD *v30; // rcx
  unsigned __int64 v31; // rax
  __int8 v32; // r12
  __int64 v33; // r8
  __m128i v34; // xmm0
  __int64 v35; // r11
  __m128i *v36; // r8
  __m128i v37; // xmm0
  __int8 v38; // bp
  __m128i v39; // xmm0
  char v40; // r10
  __int64 v42; // rcx
  unsigned int v44; // edx
  unsigned int v45; // edx
  char v46; // al
  unsigned __int64 v47; // rbp
  unsigned int v48; // eax
  int v49; // edx
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  __int64 v52; // rdi
  _QWORD *v53; // rdx
  unsigned __int64 v56; // r11
  __int64 v57; // r13
  __int64 v58; // r14
  int v59; // eax
  int v60; // r9d
  unsigned int *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r10
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // r11d
  unsigned int v67; // r13d
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // r9
  char *v71; // rdx
  unsigned __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // r8
  char *v77; // r8
  __int64 v78; // r13
  unsigned int v79; // r14d
  unsigned int v80; // r12d
  unsigned int v81; // r14d
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned int *v84; // rax
  __int64 v85; // rsi
  unsigned int v86; // eax
  _DWORD *v87; // r12
  __int64 v88; // rbx
  unsigned __int64 v89; // rax
  __int64 *v91; // r11
  char *v92; // rsi
  _QWORD *v93; // r8
  signed __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r13
  __int64 v99; // rax
  _QWORD *v102; // r9
  unsigned int v103; // ebp
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  unsigned int *v107; // rdx
  unsigned int v108; // ebx
  __int64 v109; // rdx
  _BYTE *v110; // rsi
  unsigned int v111; // eax
  _QWORD *v112; // rbp
  unsigned int v113; // eax
  unsigned int v114; // edx
  unsigned int v115; // r10d
  __int64 v116; // r14
  char v117; // al
  unsigned int v118; // r12d
  char v119; // cl
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r9
  __int64 v124; // [rsp+8h] [rbp-1D0h]
  __int64 v126; // [rsp+18h] [rbp-1C0h]
  char *v127; // [rsp+18h] [rbp-1C0h]
  __int64 v128; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v129; // [rsp+20h] [rbp-1B8h]
  unsigned int v130; // [rsp+20h] [rbp-1B8h]
  unsigned int v131; // [rsp+28h] [rbp-1B0h]
  char *v132; // [rsp+28h] [rbp-1B0h]
  _QWORD *v133; // [rsp+28h] [rbp-1B0h]
  _QWORD *v134; // [rsp+30h] [rbp-1A8h]
  __int64 v135; // [rsp+38h] [rbp-1A0h]
  int v136; // [rsp+40h] [rbp-198h]
  int v137; // [rsp+40h] [rbp-198h]
  int v138; // [rsp+44h] [rbp-194h]
  unsigned int v139; // [rsp+44h] [rbp-194h]
  __int64 v140; // [rsp+48h] [rbp-190h]
  int v141; // [rsp+48h] [rbp-190h]
  __int64 v142; // [rsp+48h] [rbp-190h]
  char v143; // [rsp+50h] [rbp-188h]
  char *v144; // [rsp+50h] [rbp-188h]
  __int64 v145; // [rsp+50h] [rbp-188h]
  __int64 v146; // [rsp+58h] [rbp-180h]
  __int64 v147; // [rsp+58h] [rbp-180h]
  __int64 v148; // [rsp+60h] [rbp-178h]
  __int64 v149; // [rsp+68h] [rbp-170h]
  __int64 v150; // [rsp+68h] [rbp-170h]
  int v151; // [rsp+70h] [rbp-168h]
  _QWORD *v152; // [rsp+78h] [rbp-160h]
  char v153; // [rsp+78h] [rbp-160h]
  __int64 v154; // [rsp+80h] [rbp-158h]
  unsigned int v155; // [rsp+88h] [rbp-150h]
  unsigned int v156; // [rsp+8Ch] [rbp-14Ch]
  _DWORD v157[66]; // [rsp+90h] [rbp-148h]
  unsigned __int64 v158; // [rsp+198h] [rbp-40h]

  v5 = (unsigned __int64)a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_QWORD *)(a1 + 248);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = *(_DWORD *)(a1 + 256);
  v158 = __readfsqword(0x28u);
  v124 = v8;
  v126 = *(_QWORD *)(a1 + 112);
  v128 = *(_QWORD *)(a1 + 56);
  v155 = *(_DWORD *)(a1 + 24);
  v134 = (_QWORD *)(v6 + v155);
  v131 = (_DWORD)a2 - v6;
  v136 = (_DWORD)a2 - v6;
  v11 = (_DWORD)a2 - v6 - (1 << v10);
  v12 = 1 << v10 < (_DWORD)a2 - (_DWORD)v6 - v7;
  v13 = *(_DWORD *)(a1 + 268);
  v14 = 5;
  if ( !v12 )
    v11 = v7;
  if ( !*(_DWORD *)(a1 + 40) )
    v7 = v11;
  if ( v13 <= 5 )
    v14 = *(_DWORD *)(a1 + 268);
  v140 = *(_QWORD *)(a1 + 96);
  v15 = 1 << v14;
  v16 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v5) >> (66 - *(_BYTE *)(v8 + 264));
  v146 = 4 * v16;
  v135 = 16 * v16;
  _mm_prefetch((const char *)(*(_QWORD *)(v8 + 112) + 16 * v16), 1);
  v138 = 0;
  if ( v13 > 5 )
    v138 = 1 << (v13 - 5);
  v143 = 56 - v9;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v31 = (v140 ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v5)) >> v143;
    *(_DWORD *)(a1 + 44) = v131;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 44);
    v149 = v6;
    v18 = *(_QWORD *)(a1 + 56);
    v19 = *(_QWORD *)(a1 + 112);
    v148 = a1 + 64;
    if ( v131 - v17 > 0x180 )
    {
      v103 = v17 + 96;
      if ( v17 >= v17 + 96 )
      {
        v18 = *(_QWORD *)(a1 + 56);
        v19 = *(_QWORD *)(a1 + 112);
        v149 = v6;
      }
      else
      {
        v151 = v15;
        v104 = *(_QWORD *)(a1 + 96);
        v152 = (_QWORD *)v5;
        while ( 1 )
        {
          v105 = (v104 ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v6 + v17 + 8))) >> (56 - (unsigned __int8)v9);
          v106 = 32 * ((unsigned int)v105 >> 8);
          _mm_prefetch((const char *)(v128 + v106), 1);
          _mm_prefetch((const char *)(v126 + 4 * v106), 1);
          _mm_prefetch((const char *)(v126 + 4 * v106 + 64), 1);
          v107 = (unsigned int *)(a1 + 64 + 4LL * (v17 & 7));
          v108 = *v107;
          *v107 = v105;
          v109 = 32 * (v108 >> 8);
          v110 = (_BYTE *)(v128 + v109);
          v111 = (*(_BYTE *)(v128 + v109) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v128 + v109) - 1) & 0x1F) == 0 )
            v111 = 31;
          *v110 = v111;
          v110[v111] = v108;
          *(_DWORD *)(v126 + 4 * (v109 + v111)) = v17++;
          if ( v103 == v17 )
            break;
          v104 = *(_QWORD *)(a1 + 96);
        }
        v15 = v151;
        v5 = (unsigned __int64)v152;
        v19 = *(_QWORD *)(a1 + 112);
        v18 = *(_QWORD *)(a1 + 56);
        v149 = *(_QWORD *)(a1 + 8);
        v9 = *(_DWORD *)(a1 + 52);
      }
      v112 = (_QWORD *)(v6 + v131 - 32);
      v17 = v131 - 32;
      if ( v5 + 1 >= (unsigned __int64)v112 )
      {
        v113 = v5 + 1 - (_DWORD)v112 + 1;
        if ( v113 > 8 )
          v113 = 8;
        v114 = v113 + v17;
        if ( v17 < v113 + v17 )
        {
          v154 = v6;
          v115 = v131 - 32;
          v156 = v7;
          v116 = *(_QWORD *)(a1 + 96);
          v117 = 56 - v9;
          v153 = v9;
          v118 = v114;
          v119 = v117;
          do
          {
            v120 = 0xCF1BBCDCBF9B0000LL * *v112;
            v112 = (_QWORD *)((char *)v112 + 1);
            v121 = (v116 ^ v120) >> v119;
            v122 = 32 * ((unsigned int)v121 >> 8);
            v123 = 4 * v122;
            _mm_prefetch((const char *)(v18 + v122), 1);
            LOBYTE(v122) = v115++;
            _mm_prefetch((const char *)(v19 + v123), 1);
            _mm_prefetch((const char *)(v19 + v123 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v122 & 7) + 64) = v121;
          }
          while ( v118 != v115 );
          LOBYTE(v9) = v153;
          v6 = v154;
          v7 = v156;
        }
      }
    }
    if ( v131 > v17 )
    {
      v20 = v149;
      v150 = v6;
      v21 = (_QWORD *)(v20 + v17 + 8);
      do
      {
        v22 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBF9B0000LL * *v21)) >> (56 - (unsigned __int8)v9);
        v23 = 32 * ((unsigned int)v22 >> 8);
        _mm_prefetch((const char *)(v18 + v23), 1);
        _mm_prefetch((const char *)(v19 + 4 * v23), 1);
        _mm_prefetch((const char *)(v19 + 4 * v23 + 64), 1);
        v24 = (unsigned int *)(v148 + 4LL * (v17 & 7));
        v25 = *v24;
        *v24 = v22;
        v26 = 32 * (v25 >> 8);
        v27 = (_BYTE *)(v18 + v26);
        v28 = (*(_BYTE *)(v18 + v26) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v18 + v26) - 1) & 0x1F) == 0 )
          v28 = 31;
        v21 = (_QWORD *)((char *)v21 + 1);
        *v27 = v28;
        v27[v28] = v25;
        *(_DWORD *)(v19 + 4 * (v26 + v28)) = v17++;
      }
      while ( v136 != v17 );
      v6 = v150;
    }
    *(_DWORD *)(a1 + 44) = v131;
    v29 = (v140 ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v6 + v131 + 8))) >> v143;
    v31 = 32 * ((unsigned int)v29 >> 8);
    _mm_prefetch((const char *)(v126 + 4 * v31), 1);
    _mm_prefetch((const char *)(v126 + 4 * v31 + 64), 1);
    _mm_prefetch((const char *)(v128 + v31), 1);
    v30 = (_DWORD *)(v148 + 4LL * (v131 & 7));
    LODWORD(v31) = *v30;
    *v30 = v29;
  }
  v32 = v31;
  *(_DWORD *)(a1 + 104) += v31;
  v33 = 32 * ((unsigned int)v31 >> 8);
  v34 = _mm_cvtsi32_si128(v31);
  v35 = v126 + 4 * v33;
  v36 = (__m128i *)(v128 + v33);
  v37 = _mm_unpacklo_epi8(v34, v34);
  v38 = v36->m128i_i8[0];
  v39 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v37, v37), 0);
  v40 = v36->m128i_i8[0] & 0x1F;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v36), v39))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v39, _mm_loadu_si128(v36 + 1))) << 16),
                         v40);
  v42 = 0;
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v44 = (v40 + (_BYTE)_RDX) & 0x1F;
      if ( v44 )
      {
        v45 = *(_DWORD *)(v35 + 4LL * v44);
        if ( v45 < v7 )
          break;
        --v15;
        _mm_prefetch((const char *)(v6 + v45), 1);
        v157[v42++] = v45;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v15 );
  }
  v46 = v38 + 31;
  v47 = 3;
  v48 = v46 & 0x1F;
  if ( !v48 )
    v48 = 31;
  v36->m128i_i8[0] = v48;
  v36->m128i_i8[v48] = v32;
  v49 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v49 + 1;
  *(_DWORD *)(v35 + 4LL * v48) = v49;
  if ( v42 )
  {
    v50 = 0;
    v51 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v52 = (unsigned int)v157[v50];
        v53 = (_QWORD *)(v6 + v52);
        if ( *(_DWORD *)(v5 + v47 - 3) == *(_DWORD *)(v6 + v52 + v47 - 3) )
          break;
LABEL_29:
        if ( ++v50 == v42 )
          goto LABEL_37;
      }
      if ( v5 >= v51 )
      {
        v91 = (__int64 *)v5;
      }
      else
      {
        if ( *v53 != *(_QWORD *)v5 )
        {
          _R11 = *(_QWORD *)v5 ^ *v53;
          __asm { tzcnt   r11, r11 }
          v56 = (unsigned int)_R11 >> 3;
          goto LABEL_34;
        }
        v91 = (__int64 *)(v5 + 8);
        v133 = v53 + 1;
        if ( v51 <= v5 + 8 )
        {
          ++v53;
        }
        else
        {
          v95 = v53[1];
          v96 = *(_QWORD *)(v5 + 8);
          if ( v95 != v96 )
          {
LABEL_91:
            _RDX = v96 ^ v95;
            __asm { tzcnt   rdx, rdx }
            v56 = (unsigned __int64)v91 + ((unsigned int)_RDX >> 3) - v5;
            goto LABEL_34;
          }
          v142 = v6;
          v102 = v133;
          while ( 1 )
          {
            ++v91;
            ++v102;
            if ( v51 <= (unsigned __int64)v91 )
              break;
            v95 = *v102;
            v96 = *v91;
            if ( *v102 != *v91 )
            {
              v6 = v142;
              goto LABEL_91;
            }
          }
          v53 = v102;
          v6 = v142;
        }
      }
      if ( (unsigned __int64)v91 < a3 - 3 && *(_DWORD *)v53 == *(_DWORD *)v91 )
      {
        v91 = (__int64 *)((char *)v91 + 4);
        v53 = (_QWORD *)((char *)v53 + 4);
      }
      if ( (unsigned __int64)v91 < a3 - 1 && *(_WORD *)v53 == *(_WORD *)v91 )
      {
        v91 = (__int64 *)((char *)v91 + 2);
        v53 = (_QWORD *)((char *)v53 + 2);
      }
      if ( a3 > (unsigned __int64)v91 )
        v91 = (__int64 *)((char *)v91 + (*(_BYTE *)v53 == *(_BYTE *)v91));
      v56 = (unsigned __int64)v91 - v5;
LABEL_34:
      if ( v47 >= v56 )
        goto LABEL_29;
      *a4 = (unsigned int)(v136 + 3 - v52);
      if ( a3 == v5 + v56 )
      {
        v47 = v56;
        break;
      }
      ++v50;
      v47 = v56;
    }
    while ( v50 != v42 );
  }
LABEL_37:
  v57 = *(_QWORD *)(v124 + 8);
  v139 = v15 + v138;
  v58 = *(_QWORD *)(v124 + 112);
  v127 = *(char **)v124;
  v141 = *(_QWORD *)v124 - v57;
  v59 = 3;
  if ( v139 <= 3 )
    v59 = v139;
  v60 = v59;
  v61 = (unsigned int *)(v58 + v135);
  do
  {
    v62 = *v61++;
    _mm_prefetch((const char *)(v57 + v62), 1);
  }
  while ( (unsigned int *)(v58 + v135 + 12) != v61 );
  _mm_prefetch((const char *)(*(_QWORD *)(v124 + 128) + 4LL * (*(_DWORD *)(v58 + v135 + 12) >> 8)), 1);
  if ( v139 )
  {
    v63 = *(unsigned int *)(v58 + v135);
    v64 = v57 + v63;
    if ( (_DWORD)v63 )
    {
      v65 = *(_QWORD *)(v124 + 8);
      v66 = 0;
      v67 = v60;
      v68 = 4 * v146 + 4;
      v129 = v5 + 4;
      do
      {
        if ( *(_DWORD *)v5 != *(_DWORD *)v64 )
        {
LABEL_44:
          if ( v67 <= ++v66 )
            goto LABEL_56;
          goto LABEL_45;
        }
        v70 = v64 + 4;
        v71 = &v127[v5 - v64];
        if ( a3 < (unsigned __int64)v71 )
          v71 = (char *)a3;
        v72 = (unsigned __int64)(v71 - 7);
        if ( v129 >= (unsigned __int64)(v71 - 7) )
        {
          v92 = (char *)(v5 + 4);
          v93 = (_QWORD *)(v64 + 4);
        }
        else
        {
          v73 = *(_QWORD *)(v64 + 4);
          v74 = *(_QWORD *)(v5 + 4);
          if ( v73 != v74 )
          {
            _RSI = v74 ^ v73;
            __asm { tzcnt   rsi, rsi }
            v77 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_52;
          }
          v92 = (char *)(v5 + 12);
          v93 = (_QWORD *)(v64 + 12);
          if ( v72 > v5 + 12 )
          {
            v145 = *(_QWORD *)(v64 + 12);
            v99 = *(_QWORD *)(v5 + 12);
            if ( v145 != v99 )
            {
              _RAX = v145 ^ v99;
LABEL_95:
              __asm { tzcnt   rax, rax }
              v77 = &v92[((unsigned int)_RAX >> 3) - v129];
LABEL_52:
              if ( v127 != &v77[v70] )
                goto LABEL_53;
LABEL_88:
              v147 = v65;
              v144 = v77;
              v94 = sub_92B7A0(&v77[v129], v134, a3);
              v65 = v147;
              v77 = &v144[v94];
              goto LABEL_53;
            }
            while ( 1 )
            {
              v92 += 8;
              ++v93;
              if ( v72 <= (unsigned __int64)v92 )
                break;
              if ( *v93 != *(_QWORD *)v92 )
              {
                _RAX = *(_QWORD *)v92 ^ *v93;
                goto LABEL_95;
              }
            }
          }
        }
        if ( v92 < v71 - 3 && *(_DWORD *)v93 == *(_DWORD *)v92 )
        {
          v92 += 4;
          v93 = (_QWORD *)((char *)v93 + 4);
        }
        if ( v92 < v71 - 1 && *(_WORD *)v93 == *(_WORD *)v92 )
        {
          v92 += 2;
          v93 = (_QWORD *)((char *)v93 + 2);
        }
        if ( v71 > v92 )
          v92 += *(_BYTE *)v93 == (unsigned __int8)*v92;
        v77 = &v92[-v129];
        if ( v127 == &v92[v70 - v129] )
          goto LABEL_88;
LABEL_53:
        if ( (unsigned __int64)(v77 + 4) <= v47 )
          goto LABEL_44;
        v47 = (unsigned __int64)(v77 + 4);
        *a4 = v141 + v136 - v155 + 3 - (unsigned int)v63;
        if ( (char *)a3 == &v77[v5 + 4] )
          return v47;
        ++v66;
        v58 = *(_QWORD *)(v124 + 112);
        if ( v67 <= v66 )
        {
LABEL_56:
          v78 = v65;
          v79 = *(_DWORD *)(v58 + v135 + 12);
          v80 = (unsigned __int8)v79;
          v81 = v79 >> 8;
          if ( v80 > v139 - v66 )
            v80 = v139 - v66;
          if ( v80 )
          {
            v82 = v81;
            v83 = *(_QWORD *)(v124 + 128);
            v84 = (unsigned int *)(v83 + 4LL * v81);
            do
            {
              v85 = *v84++;
              _mm_prefetch((const char *)(v78 + v85), 1);
            }
            while ( (unsigned int *)(v83 + 4 * (v81 + (unsigned __int64)(v80 - 1)) + 4) != v84 );
            v86 = v80 + v81;
            v87 = (_DWORD *)v5;
            v130 = v86;
            v132 = (char *)(v5 + 4);
            v137 = v141 + v136 - v155 + 3;
            while ( 1 )
            {
              v88 = *(unsigned int *)(v83 + 4 * v82);
              if ( *v87 == *(_DWORD *)(v78 + v88) )
              {
                v89 = sub_93A7C0(v132, (_QWORD *)(v78 + v88 + 4), a3, v127, v134) + 4;
                if ( v89 > v47 )
                {
                  v47 = v89;
                  *a4 = (unsigned int)(v137 - v88);
                  if ( (_DWORD *)a3 == (_DWORD *)((char *)v87 + v89) )
                    break;
                }
              }
              if ( ++v81 == v130 )
                break;
              v82 = v81;
              v83 = *(_QWORD *)(v124 + 128);
            }
          }
          return v47;
        }
LABEL_45:
        v69 = *(unsigned int *)(v58 + v68);
        v68 += 4;
        LODWORD(v63) = v69;
        v64 = v65 + v69;
      }
      while ( (_DWORD)v63 );
    }
  }
  return v47;
}
