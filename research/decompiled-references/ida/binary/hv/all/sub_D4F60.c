unsigned __int64 __fastcall sub_D4F60(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r13d
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // ebp
  int v12; // r12d
  __int64 v13; // r11
  char *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  bool v18; // cf
  __int64 v19; // rsi
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  const char *v24; // r14
  int v25; // r8d
  unsigned int v26; // r8d
  __int64 v27; // r14
  char *v28; // rbx
  __int64 v29; // rsi
  char v30; // cl
  __int64 v31; // r12
  _DWORD *v32; // rbp
  unsigned int v33; // eax
  __int64 v34; // rsi
  unsigned int *v35; // rsi
  unsigned int v36; // r11d
  __int64 v37; // rsi
  _BYTE *v38; // r9
  unsigned int v39; // eax
  char v40; // bl
  char *v41; // r14
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned int *v45; // rsi
  unsigned int v46; // eax
  char *v47; // rbx
  __int8 v48; // r14
  __int64 v49; // r11
  __m128i v50; // xmm0
  char *v51; // rbp
  __m128i *v52; // r11
  __m128i v53; // xmm0
  __int8 v54; // r12
  __m128i v55; // xmm0
  char v56; // bl
  __int64 v57; // rsi
  bool v59; // r8
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // eax
  int v64; // ecx
  unsigned __int64 v65; // r11
  __int64 v66; // rax
  unsigned __int64 v67; // r14
  bool v68; // r12
  __int64 v69; // rdi
  _QWORD *v70; // r8
  unsigned __int64 v73; // rcx
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  char v76; // di
  __m128i v77; // xmm0
  __int64 v78; // r14
  unsigned int v79; // esi
  __m128i v80; // xmm1
  char v81; // di
  int v82; // eax
  unsigned int v83; // ebp
  __int64 v85; // rbp
  const char *v86; // r9
  unsigned int v88; // r8d
  unsigned int v89; // r8d
  __int64 v90; // rbx
  unsigned __int64 v91; // r9
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // r8
  char *v101; // r8
  char *v103; // rcx
  _QWORD *v104; // r8
  _QWORD *v105; // rsi
  signed __int64 v106; // rax
  __int64 v107; // rax
  __int64 v110; // rbp
  __int64 v111; // r8
  _QWORD *v114; // r9
  unsigned int v115; // ebx
  char v116; // cl
  char *v117; // r11
  __int64 v118; // r13
  unsigned int v119; // eax
  __int64 v120; // rdx
  unsigned int *v121; // rdx
  unsigned int v122; // r12d
  __int64 v123; // rdx
  _BYTE *v124; // rsi
  unsigned int v125; // eax
  _DWORD *v126; // r11
  unsigned int v127; // eax
  unsigned int v128; // ebp
  int v129; // eax
  int v130; // esi
  int v131; // r13d
  unsigned int v132; // r12d
  char v133; // cl
  int v134; // eax
  unsigned int v135; // eax
  __int64 v136; // r9
  __int64 v137; // rbp
  int v139; // [rsp+Ch] [rbp-1CCh]
  int v140; // [rsp+Ch] [rbp-1CCh]
  __m128i v141; // [rsp+10h] [rbp-1C8h] BYREF
  char *v142; // [rsp+20h] [rbp-1B8h]
  char *v143; // [rsp+28h] [rbp-1B0h]
  _QWORD *v144; // [rsp+30h] [rbp-1A8h]
  __int64 v145; // [rsp+38h] [rbp-1A0h]
  const __m128i *v146; // [rsp+40h] [rbp-198h]
  unsigned int v147; // [rsp+48h] [rbp-190h]
  int v148; // [rsp+4Ch] [rbp-18Ch]
  const char *v149; // [rsp+50h] [rbp-188h]
  _QWORD *v150; // [rsp+58h] [rbp-180h]
  __int64 v151; // [rsp+60h] [rbp-178h]
  __int64 v152; // [rsp+68h] [rbp-170h]
  __int64 v153; // [rsp+70h] [rbp-168h]
  _QWORD *v154; // [rsp+78h] [rbp-160h]
  __int64 v155; // [rsp+80h] [rbp-158h]
  int v156; // [rsp+88h] [rbp-150h]
  unsigned int v157; // [rsp+8Ch] [rbp-14Ch]
  _DWORD v158[66]; // [rsp+90h] [rbp-148h]
  unsigned __int64 v159; // [rsp+198h] [rbp-40h]

  v5 = (unsigned __int64)a2;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 28);
  v9 = *(_QWORD *)(a1 + 248);
  v10 = *(_DWORD *)(a1 + 256);
  v11 = (_DWORD)a2 - v7;
  v12 = *(_DWORD *)(a1 + 52);
  v13 = *(_QWORD *)(v9 + 112);
  v159 = __readfsqword(0x28u);
  v14 = *(char **)(a1 + 112);
  v141.m128i_i64[0] = v6;
  v145 = v9;
  v142 = v14;
  v15 = *(unsigned int *)(a1 + 24);
  v143 = (char *)a2 - v7;
  v148 = v15;
  v150 = (_QWORD *)(v7 + v15);
  v16 = 1 << v10;
  v139 = (_DWORD)a2 - v7;
  v17 = (_DWORD)a2 - v7 - v16;
  v18 = v16 < (_DWORD)a2 - (_DWORD)v7 - v8;
  v19 = *(_QWORD *)(a1 + 96);
  if ( !v18 )
    v17 = v8;
  LOBYTE(v20) = 5;
  if ( !*(_DWORD *)(a1 + 40) )
    v8 = v17;
  if ( *(_DWORD *)(a1 + 268) <= 5u )
    v20 = *(_DWORD *)(a1 + 268);
  v21 = -1640531535 * *(_DWORD *)v5;
  v22 = 1 << v20;
  v147 = v21 >> (24 - *(_BYTE *)(v9 + 52));
  v23 = 32 * (v147 >> 8);
  v146 = (const __m128i *)(v23 + *(_QWORD *)(v9 + 56));
  v24 = (const char *)(v13 + 4 * v23);
  _mm_prefetch(v24 + 64, 1);
  _mm_prefetch(v24, 1);
  _mm_prefetch(v146->m128i_i8, 1);
  LODWORD(v144) = 24 - v12;
  v25 = *(_DWORD *)(a1 + 300);
  v149 = v24;
  LODWORD(v151) = v19;
  if ( v25 )
  {
    v46 = ((unsigned int)v19 ^ v21) >> (char)v144;
    *(_DWORD *)(a1 + 44) = (_DWORD)v143;
  }
  else
  {
    v26 = *(_DWORD *)(a1 + 44);
    v153 = v7;
    v27 = v141.m128i_i64[0];
    v28 = v142;
    v152 = a1 + 64;
    if ( v11 - v26 > 0x180 )
    {
      v115 = v26 + 96;
      if ( v26 >= v26 + 96 )
      {
        v27 = v141.m128i_i64[0];
        v28 = v142;
        v153 = v7;
      }
      else
      {
        LODWORD(v153) = v8;
        v116 = (char)v144;
        v117 = v142;
        v118 = v141.m128i_i64[0];
        v156 = v22;
        while ( 1 )
        {
          v119 = ((unsigned int)v19 ^ (-1640531535 * *(_DWORD *)(v7 + v26 + 8))) >> v116;
          v120 = 32 * (v119 >> 8);
          _mm_prefetch((const char *)(v118 + v120), 1);
          _mm_prefetch(&v117[4 * v120], 1);
          _mm_prefetch(&v117[4 * v120 + 64], 1);
          v121 = (unsigned int *)(a1 + 64 + 4LL * (v26 & 7));
          v122 = *v121;
          *v121 = v119;
          v123 = 32 * (v122 >> 8);
          v124 = (_BYTE *)(v118 + v123);
          v125 = (*(_BYTE *)(v118 + v123) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v118 + v123) - 1) & 0x1F) == 0 )
            v125 = 31;
          *v124 = v125;
          v124[v125] = v122;
          *(_DWORD *)&v117[4 * v123 + 4 * v125] = v26++;
          if ( v115 == v26 )
            break;
          v19 = *(_QWORD *)(a1 + 96);
        }
        v8 = v153;
        v22 = v156;
        v28 = *(char **)(a1 + 112);
        v27 = *(_QWORD *)(a1 + 56);
        v12 = *(_DWORD *)(a1 + 52);
        v153 = *(_QWORD *)(a1 + 8);
      }
      v126 = (_DWORD *)(v7 + (unsigned int)((_DWORD)v143 - 32));
      v26 = (_DWORD)v143 - 32;
      if ( v5 + 1 >= (unsigned __int64)v126 )
      {
        v127 = v5 + 1 - (_DWORD)v126 + 1;
        if ( v127 > 8 )
          v127 = 8;
        v128 = v127 + v26;
        if ( v26 < v127 + v26 )
        {
          v129 = *(_DWORD *)(a1 + 96);
          v155 = v7;
          v130 = (_DWORD)v143 - 32;
          v157 = v8;
          v156 = v129;
          v131 = v129;
          LOBYTE(v129) = 24 - v12;
          LODWORD(v154) = v12;
          v132 = v128;
          v133 = v129;
          do
          {
            v134 = -1640531535 * *v126;
            v126 = (_DWORD *)((char *)v126 + 1);
            v135 = (v131 ^ (unsigned int)v134) >> v133;
            v136 = 32 * (v135 >> 8);
            v137 = 4 * v136;
            _mm_prefetch((const char *)(v27 + v136), 1);
            LOBYTE(v136) = v130++;
            _mm_prefetch(&v28[v137], 1);
            _mm_prefetch(&v28[v137 + 64], 1);
            *(_DWORD *)(a1 + 4 * (v136 & 7) + 64) = v135;
          }
          while ( v132 != v130 );
          LOBYTE(v12) = (_BYTE)v154;
          v7 = v155;
          v8 = v157;
        }
      }
    }
    if ( (unsigned int)v143 > v26 )
    {
      v29 = v153;
      v153 = v7;
      v154 = (_QWORD *)v5;
      v30 = 24 - v12;
      v31 = v152;
      v156 = v22;
      v32 = (_DWORD *)(v29 + v26 + 8);
      do
      {
        v33 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v32)) >> v30;
        v34 = 32 * (v33 >> 8);
        _mm_prefetch((const char *)(v27 + v34), 1);
        _mm_prefetch(&v28[4 * v34], 1);
        _mm_prefetch(&v28[4 * v34 + 64], 1);
        v35 = (unsigned int *)(v31 + 4LL * (v26 & 7));
        v36 = *v35;
        *v35 = v33;
        v37 = 32 * (v36 >> 8);
        v38 = (_BYTE *)(v27 + v37);
        v39 = (*(_BYTE *)(v27 + v37) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v27 + v37) - 1) & 0x1F) == 0 )
          v39 = 31;
        v32 = (_DWORD *)((char *)v32 + 1);
        *v38 = v39;
        v38[v39] = v36;
        *(_DWORD *)&v28[4 * v37 + 4 * v39] = v26++;
      }
      while ( v139 != v26 );
      v7 = v153;
      v22 = v156;
      v5 = (unsigned __int64)v154;
    }
    v40 = (char)v143;
    v41 = v142;
    v42 = (unsigned int)v143;
    *(_DWORD *)(a1 + 44) = (_DWORD)v143;
    v43 = ((-1640531535 * *(_DWORD *)(v7 + v42 + 8)) ^ (unsigned int)v151) >> (char)v144;
    v44 = 32 * (v43 >> 8);
    _mm_prefetch(&v41[4 * v44], 1);
    _mm_prefetch(&v41[4 * v44 + 64], 1);
    _mm_prefetch((const char *)(v141.m128i_i64[0] + v44), 1);
    v45 = (unsigned int *)(v152 + 4LL * (v40 & 7));
    v46 = *v45;
    *v45 = v43;
  }
  v47 = v142;
  LODWORD(v142) = v46;
  v48 = v46;
  *(_DWORD *)(a1 + 104) += v46;
  v49 = 32 * (v46 >> 8);
  v50 = _mm_cvtsi32_si128((unsigned int)v142);
  v51 = &v47[4 * v49];
  v52 = (__m128i *)(v141.m128i_i64[0] + v49);
  v53 = _mm_unpacklo_epi8(v50, v50);
  v54 = v52->m128i_i8[0];
  v55 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v53, v53), 0);
  v56 = v52->m128i_i8[0] & 0x1F;
  v57 = 0;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v52), v55))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v55, _mm_loadu_si128(v52 + 1))) << 16),
                         v56);
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v61 = (v56 + (_BYTE)_RCX) & 0x1F;
      if ( v61 )
      {
        v62 = *(_DWORD *)&v51[4 * v61];
        if ( v62 < v8 )
          goto LABEL_23;
        --v22;
        _mm_prefetch((const char *)(v7 + v62), 1);
        v158[v57++] = v62;
      }
      v59 = v22 != 0;
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v22 );
  }
  else
  {
LABEL_23:
    v59 = 1;
  }
  v63 = (v54 + 31) & 0x1F;
  if ( ((v54 + 31) & 0x1F) == 0 )
    v63 = 31;
  v52->m128i_i8[0] = v63;
  v52->m128i_i8[v63] = v48;
  v64 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v64 + 1;
  v65 = 3;
  *(_DWORD *)&v51[4 * v63] = v64;
  if ( !v57 )
    goto LABEL_37;
  LODWORD(v143) = v22;
  v66 = 0;
  v67 = a3 - 7;
  v68 = v59;
  v142 = (char *)(a3 - 3);
  v141.m128i_i64[0] = a3 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v69 = (unsigned int)v158[v66];
      v70 = (_QWORD *)(v7 + v69);
      if ( *(_DWORD *)(v5 + v65 - 3) == *(_DWORD *)(v7 + v69 + v65 - 3) )
        break;
LABEL_28:
      if ( ++v66 == v57 )
        goto LABEL_36;
    }
    if ( v5 >= v67 )
    {
      v103 = (char *)v5;
    }
    else
    {
      if ( *v70 != *(_QWORD *)v5 )
      {
        _RCX = *(_QWORD *)v5 ^ *v70;
        __asm { tzcnt   rcx, rcx }
        v73 = (unsigned int)_RCX >> 3;
        goto LABEL_33;
      }
      v103 = (char *)(v5 + 8);
      v144 = v70 + 1;
      if ( v67 <= v5 + 8 )
      {
        ++v70;
      }
      else
      {
        v110 = v70[1];
        v111 = *(_QWORD *)(v5 + 8);
        if ( v111 != v110 )
        {
LABEL_85:
          _R8 = v110 ^ v111;
          __asm { tzcnt   r8, r8 }
          v73 = (unsigned __int64)&v103[((unsigned int)_R8 >> 3) - v5];
          goto LABEL_33;
        }
        v151 = v7;
        v114 = v144;
        while ( 1 )
        {
          v103 += 8;
          ++v114;
          if ( v67 <= (unsigned __int64)v103 )
            break;
          v111 = *v114;
          v110 = *(_QWORD *)v103;
          if ( *v114 != *(_QWORD *)v103 )
          {
            v7 = v151;
            goto LABEL_85;
          }
        }
        v70 = v114;
        v7 = v151;
      }
    }
    if ( v103 < v142 && *(_DWORD *)v70 == *(_DWORD *)v103 )
    {
      v103 += 4;
      v70 = (_QWORD *)((char *)v70 + 4);
    }
    if ( (unsigned __int64)v103 < v141.m128i_i64[0] && *(_WORD *)v70 == *(_WORD *)v103 )
    {
      v103 += 2;
      v70 = (_QWORD *)((char *)v70 + 2);
    }
    if ( a3 > (unsigned __int64)v103 )
      v103 += *(_BYTE *)v70 == (unsigned __int8)*v103;
    v73 = (unsigned __int64)&v103[-v5];
LABEL_33:
    if ( v73 <= v65 )
      goto LABEL_28;
    *a4 = (unsigned int)(v139 + 3 - v69);
    if ( a3 == v5 + v73 )
      break;
    ++v66;
    v65 = v73;
    if ( v66 == v57 )
    {
LABEL_36:
      v22 = (int)v143;
      v59 = v68;
      goto LABEL_37;
    }
  }
  v59 = v68;
  v22 = (int)v143;
  v65 = v73;
LABEL_37:
  v74 = _mm_cvtsi32_si128(v147);
  v75 = _mm_unpacklo_epi8(v74, v74);
  v76 = v146->m128i_i8[0];
  v77 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v75, v75), 0);
  v78 = *(_QWORD *)(v145 + 8);
  v79 = *(_DWORD *)(v145 + 24);
  v141 = _mm_loadu_si128(v146);
  v80 = _mm_cmpeq_epi8(_mm_load_si128(&v141), v77);
  v142 = *(char **)v145;
  v81 = v76 & 0x1F;
  v82 = (_DWORD)v142 - v78;
  v83 = __ROR4__(
          _mm_movemask_epi8(v80) | (_mm_movemask_epi8(_mm_cmpeq_epi8(v77, _mm_loadu_si128(v146 + 1))) << 16),
          v81);
  _RCX = v83;
  if ( v83 && v59 )
  {
    v85 = 0;
    v86 = v149;
    do
    {
      __asm { tzcnt   r8, rcx }
      v88 = (v81 + (_BYTE)_R8) & 0x1F;
      if ( v88 )
      {
        v89 = *(_DWORD *)&v86[4 * v88];
        if ( v79 > v89 )
          break;
        --v22;
        _mm_prefetch((const char *)(v78 + v89), 1);
        v158[v85++] = v89;
      }
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v22 );
    if ( v85 )
    {
      v90 = 0;
      v140 = v82 + v139 - v148 + 3;
      v91 = v5 + 4;
      while ( 2 )
      {
        v92 = (unsigned int)v158[v90];
        v93 = v78 + v92;
        if ( *(_DWORD *)v5 != *(_DWORD *)(v78 + v92) )
          goto LABEL_47;
        v94 = v93 + 4;
        v95 = (unsigned __int64)&v142[v91 - 4 - v93];
        if ( a3 < v95 )
          v95 = a3;
        v96 = v95 - 7;
        if ( v91 >= v95 - 7 )
        {
          v104 = (_QWORD *)(v93 + 4);
          v105 = (_QWORD *)v91;
        }
        else
        {
          v97 = *(_QWORD *)(v93 + 4);
          v98 = *(_QWORD *)(v5 + 4);
          if ( v97 != v98 )
          {
            _RSI = v98 ^ v97;
            __asm { tzcnt   rsi, rsi }
            v101 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_54;
          }
          v105 = (_QWORD *)(v5 + 12);
          v104 = (_QWORD *)(v93 + 12);
          if ( v96 > v5 + 12 )
          {
            v141.m128i_i64[0] = *(_QWORD *)(v93 + 12);
            v107 = *(_QWORD *)(v5 + 12);
            if ( v141.m128i_i64[0] != v107 )
            {
              _RAX = v141.m128i_i64[0] ^ v107;
LABEL_82:
              __asm { tzcnt   r8, rax }
              v101 = (char *)v105 + ((unsigned int)_R8 >> 3) - v91;
LABEL_54:
              if ( v142 != &v101[v94] )
              {
LABEL_55:
                if ( (unsigned __int64)(v101 + 4) > v65 )
                {
                  v65 = (unsigned __int64)(v101 + 4);
                  *a4 = (unsigned int)(v140 - v92);
                  if ( (char *)a3 == &v101[v5 + 4] )
                    return v65;
                }
LABEL_47:
                if ( ++v90 == v85 )
                  return v65;
                continue;
              }
LABEL_78:
              v143 = v101;
              v141.m128i_i64[0] = v91;
              v106 = sub_C9E40(&v101[v91], v150, a3);
              v91 = v141.m128i_i64[0];
              v101 = &v143[v106];
              goto LABEL_55;
            }
            v141.m128i_i64[0] = v95;
            while ( 1 )
            {
              ++v105;
              ++v104;
              if ( v96 <= (unsigned __int64)v105 )
                break;
              if ( *v104 != *v105 )
              {
                _RAX = *v105 ^ *v104;
                goto LABEL_82;
              }
            }
            v95 = v141.m128i_i64[0];
          }
        }
        break;
      }
      if ( (unsigned __int64)v105 < v95 - 3 && *(_DWORD *)v104 == *(_DWORD *)v105 )
      {
        v105 = (_QWORD *)((char *)v105 + 4);
        v104 = (_QWORD *)((char *)v104 + 4);
      }
      if ( (unsigned __int64)v105 < v95 - 1 && *(_WORD *)v104 == *(_WORD *)v105 )
      {
        v105 = (_QWORD *)((char *)v105 + 2);
        v104 = (_QWORD *)((char *)v104 + 2);
      }
      if ( v95 > (unsigned __int64)v105 )
        v105 = (_QWORD *)((char *)v105 + (*(_BYTE *)v104 == *(_BYTE *)v105));
      v101 = (char *)v105 - v91;
      if ( v142 != (char *)v105 + v94 - v91 )
        goto LABEL_55;
      goto LABEL_78;
    }
  }
  return v65;
}

