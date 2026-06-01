unsigned __int64 __fastcall sub_918C90(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // r9
  unsigned int v7; // r14d
  __int64 v8; // r10
  int v9; // r11d
  int v10; // ecx
  unsigned int v11; // eax
  bool v12; // cf
  unsigned int v13; // edx
  char v14; // cl
  int v15; // esi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // r12
  char v21; // cl
  _QWORD *v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // rdx
  unsigned int v26; // r10d
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 v32; // rax
  __int8 v33; // r12
  __int64 v34; // r8
  __m128i v35; // xmm0
  __int64 v36; // r11
  __m128i *v37; // r8
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int8 v40; // bp
  char v41; // r10
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  char v46; // al
  unsigned __int64 v47; // rbp
  unsigned int v48; // eax
  int v49; // ecx
  __int64 v50; // rax
  unsigned __int64 v51; // r14
  __int64 v52; // rdi
  _QWORD *v53; // rcx
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
  __int64 v95; // r12
  __int64 v96; // rcx
  __int64 v99; // rax
  _QWORD *v102; // r9
  unsigned int v103; // ebp
  __int64 i; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  unsigned int *v107; // rdx
  unsigned int v108; // r10d
  __int64 v109; // rdx
  _BYTE *v110; // rsi
  unsigned int v111; // eax
  _QWORD *v112; // r10
  unsigned int v113; // eax
  unsigned int v114; // ecx
  unsigned int v115; // edx
  __int64 v116; // r14
  char v117; // al
  unsigned int v118; // r11d
  char v119; // cl
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // r9
  __int64 v123; // [rsp+0h] [rbp-1C8h]
  __int64 v125; // [rsp+10h] [rbp-1B8h]
  char *v126; // [rsp+10h] [rbp-1B8h]
  __int64 v127; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v128; // [rsp+18h] [rbp-1B0h]
  unsigned int v129; // [rsp+18h] [rbp-1B0h]
  unsigned int v130; // [rsp+20h] [rbp-1A8h]
  char *v131; // [rsp+20h] [rbp-1A8h]
  _QWORD *v132; // [rsp+20h] [rbp-1A8h]
  _QWORD *v133; // [rsp+28h] [rbp-1A0h]
  int v134; // [rsp+34h] [rbp-194h]
  int v135; // [rsp+34h] [rbp-194h]
  __int64 v136; // [rsp+38h] [rbp-190h]
  int v137; // [rsp+40h] [rbp-188h]
  unsigned int v138; // [rsp+40h] [rbp-188h]
  unsigned int v139; // [rsp+44h] [rbp-184h]
  __int64 v140; // [rsp+48h] [rbp-180h]
  int v141; // [rsp+48h] [rbp-180h]
  __int64 v142; // [rsp+48h] [rbp-180h]
  char v143; // [rsp+50h] [rbp-178h]
  char *v144; // [rsp+50h] [rbp-178h]
  __int64 v145; // [rsp+50h] [rbp-178h]
  __int64 v146; // [rsp+58h] [rbp-170h]
  __int64 v147; // [rsp+58h] [rbp-170h]
  __int64 v148; // [rsp+60h] [rbp-168h]
  __int64 v149; // [rsp+68h] [rbp-160h]
  __int64 v150; // [rsp+70h] [rbp-158h]
  int v151; // [rsp+78h] [rbp-150h]
  char v152; // [rsp+78h] [rbp-150h]
  unsigned int v153; // [rsp+7Ch] [rbp-14Ch]
  _DWORD v154[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v155; // [rsp+188h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_QWORD *)(a1 + 248);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = *(_DWORD *)(a1 + 256);
  v155 = __readfsqword(0x28u);
  v123 = v8;
  v125 = *(_QWORD *)(a1 + 112);
  v127 = *(_QWORD *)(a1 + 56);
  v139 = *(_DWORD *)(a1 + 24);
  v133 = (_QWORD *)(v6 + v139);
  v130 = a2 - v6;
  v134 = a2 - v6;
  v11 = a2 - v6 - (1 << v10);
  v12 = 1 << v10 < (_DWORD)a2 - (_DWORD)v6 - v7;
  v13 = *(_DWORD *)(a1 + 268);
  v14 = 4;
  if ( !v12 )
    v11 = v7;
  if ( !*(_DWORD *)(a1 + 40) )
    v7 = v11;
  if ( v13 <= 4 )
    v14 = *(_DWORD *)(a1 + 268);
  v140 = *(_QWORD *)(a1 + 96);
  v15 = 1 << v14;
  v16 = (0xCF1BBCDCBB000000LL * *(_QWORD *)a2) >> (66 - *(_BYTE *)(v8 + 264));
  v146 = 4 * v16;
  v136 = 16 * v16;
  _mm_prefetch((const char *)(*(_QWORD *)(v8 + 112) + 16 * v16), 1);
  v137 = 0;
  if ( v13 > 4 )
    v137 = 1 << (v13 - 4);
  v143 = 56 - v9;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v32 = (v140 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)a2)) >> v143;
    *(_DWORD *)(a1 + 44) = v130;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 44);
    v18 = v6;
    v19 = *(_QWORD *)(a1 + 56);
    v148 = a1 + 64;
    v20 = *(_QWORD *)(a1 + 112);
    if ( v130 - v17 > 0x180 )
    {
      v103 = v17 + 96;
      if ( v17 >= v17 + 96 )
      {
        v18 = v6;
        v19 = *(_QWORD *)(a1 + 56);
        v20 = *(_QWORD *)(a1 + 112);
      }
      else
      {
        v151 = v15;
        for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(a1 + 96) )
        {
          v105 = (i ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v6 + v17 + 8))) >> (56 - (unsigned __int8)v9);
          v106 = 16 * ((unsigned int)v105 >> 8);
          _mm_prefetch((const char *)(v125 + 4 * v106), 1);
          _mm_prefetch((const char *)(v127 + v106), 1);
          v107 = (unsigned int *)(a1 + 64 + 4LL * (v17 & 7));
          v108 = *v107;
          *v107 = v105;
          v109 = 16 * (v108 >> 8);
          v110 = (_BYTE *)(v127 + v109);
          v111 = (*(_BYTE *)(v127 + v109) - 1) & 0xF;
          if ( ((*(_BYTE *)(v127 + v109) - 1) & 0xF) == 0 )
            v111 = 15;
          *v110 = v111;
          v110[v111] = v108;
          *(_DWORD *)(v125 + 4 * (v109 + v111)) = v17++;
          if ( v103 == v17 )
            break;
        }
        v15 = v151;
        v20 = *(_QWORD *)(a1 + 112);
        v19 = *(_QWORD *)(a1 + 56);
        v9 = *(_DWORD *)(a1 + 52);
        v18 = *(_QWORD *)(a1 + 8);
      }
      v112 = (_QWORD *)(v6 + v130 - 32);
      v17 = v130 - 32;
      if ( a2 + 1 >= (unsigned __int64)v112 )
      {
        v113 = a2 + 1 - (_DWORD)v112 + 1;
        if ( v113 > 8 )
          v113 = 8;
        v114 = v113 + v17;
        if ( v17 < v113 + v17 )
        {
          v150 = v6;
          v115 = v130 - 32;
          v153 = v7;
          v116 = *(_QWORD *)(a1 + 96);
          v117 = 56 - v9;
          v152 = v9;
          v118 = v114;
          v119 = v117;
          do
          {
            v120 = 0xCF1BBCDCBB000000LL * *v112;
            v112 = (_QWORD *)((char *)v112 + 1);
            v121 = (v116 ^ v120) >> v119;
            v122 = 16 * ((unsigned int)v121 >> 8);
            _mm_prefetch((const char *)(v20 + 4 * v122), 1);
            _mm_prefetch((const char *)(v19 + v122), 1);
            LOBYTE(v122) = v115++;
            *(_DWORD *)(a1 + 4 * (v122 & 7) + 64) = v121;
          }
          while ( v118 != v115 );
          LOBYTE(v9) = v152;
          v6 = v150;
          v7 = v153;
        }
      }
    }
    if ( v130 > v17 )
    {
      v149 = v6;
      v21 = 56 - v9;
      v22 = (_QWORD *)(v18 + v17 + 8);
      do
      {
        v23 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v22)) >> v21;
        v24 = 16 * ((unsigned int)v23 >> 8);
        _mm_prefetch((const char *)(v20 + 4 * v24), 1);
        _mm_prefetch((const char *)(v19 + v24), 1);
        v25 = (unsigned int *)(v148 + 4LL * (v17 & 7));
        v26 = *v25;
        *v25 = v23;
        v27 = 16 * (v26 >> 8);
        v28 = (_BYTE *)(v19 + v27);
        v29 = (*(_BYTE *)(v19 + v27) - 1) & 0xF;
        if ( ((*(_BYTE *)(v19 + v27) - 1) & 0xF) == 0 )
          v29 = 15;
        v22 = (_QWORD *)((char *)v22 + 1);
        *v28 = v29;
        v28[v29] = v26;
        *(_DWORD *)(v20 + 4 * (v27 + v29)) = v17++;
      }
      while ( v134 != v17 );
      v6 = v149;
    }
    *(_DWORD *)(a1 + 44) = v130;
    v30 = (v140 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v6 + v130 + 8))) >> v143;
    v32 = 16 * ((unsigned int)v30 >> 8);
    _mm_prefetch((const char *)(v125 + 4 * v32), 1);
    _mm_prefetch((const char *)(v127 + v32), 1);
    v31 = (_DWORD *)(v148 + 4LL * (v130 & 7));
    LODWORD(v32) = *v31;
    *v31 = v30;
  }
  v33 = v32;
  *(_DWORD *)(a1 + 104) += v32;
  v34 = 16 * ((unsigned int)v32 >> 8);
  v35 = _mm_cvtsi32_si128(v32);
  v36 = v125 + 4 * v34;
  v37 = (__m128i *)(v127 + v34);
  v38 = 0;
  v39 = _mm_unpacklo_epi8(v35, v35);
  v40 = v37->m128i_i8[0];
  v41 = v37->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v39, v39), 0), _mm_loadu_si128(v37))),
                             v41);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v44 = (v41 + (_BYTE)_RCX) & 0xF;
      if ( v44 )
      {
        v45 = *(_DWORD *)(v36 + 4LL * v44);
        if ( v45 < v7 )
          break;
        --v15;
        _mm_prefetch((const char *)(v6 + v45), 1);
        v154[v38++] = v45;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v15 );
  }
  v46 = v40 + 15;
  v47 = 3;
  v48 = v46 & 0xF;
  if ( !v48 )
    v48 = 15;
  v37->m128i_i8[0] = v48;
  v37->m128i_i8[v48] = v33;
  v49 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v49 + 1;
  *(_DWORD *)(v36 + 4LL * v48) = v49;
  if ( v38 )
  {
    v50 = 0;
    v51 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v52 = (unsigned int)v154[v50];
        v53 = (_QWORD *)(v6 + v52);
        if ( *(_DWORD *)(a2 + v47 - 3) == *(_DWORD *)(v6 + v52 + v47 - 3) )
          break;
LABEL_29:
        if ( ++v50 == v38 )
          goto LABEL_37;
      }
      if ( a2 >= v51 )
      {
        v91 = (__int64 *)a2;
      }
      else
      {
        if ( *v53 != *(_QWORD *)a2 )
        {
          _R11 = *(_QWORD *)a2 ^ *v53;
          __asm { tzcnt   r11, r11 }
          v56 = (unsigned int)_R11 >> 3;
          goto LABEL_34;
        }
        v91 = (__int64 *)(a2 + 8);
        v132 = v53 + 1;
        if ( v51 <= a2 + 8 )
        {
          ++v53;
        }
        else
        {
          v95 = v53[1];
          v96 = *(_QWORD *)(a2 + 8);
          if ( v96 != v95 )
          {
LABEL_91:
            _RCX = v95 ^ v96;
            __asm { tzcnt   rcx, rcx }
            v56 = (unsigned __int64)v91 + ((unsigned int)_RCX >> 3) - a2;
            goto LABEL_34;
          }
          v142 = v6;
          v102 = v132;
          while ( 1 )
          {
            ++v91;
            ++v102;
            if ( v51 <= (unsigned __int64)v91 )
              break;
            v96 = *v102;
            v95 = *v91;
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
      v56 = (unsigned __int64)v91 - a2;
LABEL_34:
      if ( v47 >= v56 )
        goto LABEL_29;
      *a4 = (unsigned int)(v134 + 3 - v52);
      if ( a3 == a2 + v56 )
      {
        v47 = v56;
        break;
      }
      ++v50;
      v47 = v56;
    }
    while ( v50 != v38 );
  }
LABEL_37:
  v138 = v15 + v137;
  v57 = *(_QWORD *)(v123 + 8);
  v58 = *(_QWORD *)(v123 + 112);
  v126 = *(char **)v123;
  v141 = *(_QWORD *)v123 - v57;
  v59 = 3;
  if ( v138 <= 3 )
    v59 = v138;
  v60 = v59;
  v61 = (unsigned int *)(v58 + v136);
  do
  {
    v62 = *v61++;
    _mm_prefetch((const char *)(v57 + v62), 1);
  }
  while ( (unsigned int *)(v58 + v136 + 12) != v61 );
  _mm_prefetch((const char *)(*(_QWORD *)(v123 + 128) + 4LL * (*(_DWORD *)(v58 + v136 + 12) >> 8)), 1);
  if ( v138 )
  {
    v63 = *(unsigned int *)(v58 + v136);
    v64 = v57 + v63;
    if ( (_DWORD)v63 )
    {
      v65 = *(_QWORD *)(v123 + 8);
      v128 = a2 + 4;
      v66 = 0;
      v67 = v60;
      v68 = 4 * v146 + 4;
      do
      {
        if ( *(_DWORD *)a2 != *(_DWORD *)v64 )
        {
LABEL_44:
          if ( v67 <= ++v66 )
            goto LABEL_56;
          goto LABEL_45;
        }
        v70 = v64 + 4;
        v71 = &v126[a2 - v64];
        if ( a3 < (unsigned __int64)v71 )
          v71 = (char *)a3;
        v72 = (unsigned __int64)(v71 - 7);
        if ( v128 >= (unsigned __int64)(v71 - 7) )
        {
          v92 = (char *)(a2 + 4);
          v93 = (_QWORD *)(v64 + 4);
        }
        else
        {
          v73 = *(_QWORD *)(v64 + 4);
          v74 = *(_QWORD *)(a2 + 4);
          if ( v73 != v74 )
          {
            _RSI = v74 ^ v73;
            __asm { tzcnt   rsi, rsi }
            v77 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_52;
          }
          v92 = (char *)(a2 + 12);
          v93 = (_QWORD *)(v64 + 12);
          if ( v72 > a2 + 12 )
          {
            v145 = *(_QWORD *)(v64 + 12);
            v99 = *(_QWORD *)(a2 + 12);
            if ( v145 != v99 )
            {
              _RAX = v145 ^ v99;
LABEL_95:
              __asm { tzcnt   rax, rax }
              v77 = &v92[((unsigned int)_RAX >> 3) - v128];
LABEL_52:
              if ( v126 != &v77[v70] )
                goto LABEL_53;
LABEL_88:
              v147 = v65;
              v144 = v77;
              v94 = sub_907A60(&v77[v128], v133, a3);
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
        v77 = &v92[-v128];
        if ( v126 == &v92[v70 - v128] )
          goto LABEL_88;
LABEL_53:
        if ( (unsigned __int64)(v77 + 4) <= v47 )
          goto LABEL_44;
        v47 = (unsigned __int64)(v77 + 4);
        *a4 = v141 + v134 - v139 + 3 - (unsigned int)v63;
        if ( (char *)a3 == &v77[a2 + 4] )
          return v47;
        ++v66;
        v58 = *(_QWORD *)(v123 + 112);
        if ( v67 <= v66 )
        {
LABEL_56:
          v78 = v65;
          v79 = *(_DWORD *)(v58 + v136 + 12);
          v80 = (unsigned __int8)v79;
          v81 = v79 >> 8;
          if ( v80 > v138 - v66 )
            v80 = v138 - v66;
          if ( v80 )
          {
            v82 = v81;
            v83 = *(_QWORD *)(v123 + 128);
            v84 = (unsigned int *)(v83 + 4LL * v81);
            do
            {
              v85 = *v84++;
              _mm_prefetch((const char *)(v78 + v85), 1);
            }
            while ( (unsigned int *)(v83 + 4 * (v81 + (unsigned __int64)(v80 - 1)) + 4) != v84 );
            v86 = v80 + v81;
            v87 = (_DWORD *)a2;
            v129 = v86;
            v131 = (char *)(a2 + 4);
            v135 = v141 + v134 - v139 + 3;
            while ( 1 )
            {
              v88 = *(unsigned int *)(v83 + 4 * v82);
              if ( *v87 == *(_DWORD *)(v78 + v88) )
              {
                v89 = sub_916A80(v131, (_QWORD *)(v78 + v88 + 4), a3, v126, v133) + 4;
                if ( v89 > v47 )
                {
                  v47 = v89;
                  *a4 = (unsigned int)(v135 - v88);
                  if ( (_DWORD *)a3 == (_DWORD *)((char *)v87 + v89) )
                    break;
                }
              }
              if ( ++v81 == v129 )
                break;
              v82 = v81;
              v83 = *(_QWORD *)(v123 + 128);
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

