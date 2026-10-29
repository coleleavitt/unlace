unsigned __int64 __fastcall sub_D83C0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned int v8; // r15d
  int v9; // r13d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  bool v12; // cf
  __int64 v13; // rsi
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r11
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rsi
  _DWORD *v25; // r12
  unsigned int v26; // esi
  __int64 v27; // rax
  unsigned int *v28; // rax
  unsigned int v29; // r11d
  __int64 v30; // rsi
  _BYTE *v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned int *v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // r8
  int *v39; // r11
  __int64 v40; // rbp
  __m128i *v41; // r8
  __int8 v42; // r12
  const __m128i *v43; // rsi
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  char v46; // cl
  char v47; // bl
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rsi
  bool v52; // al
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // ecx
  int v57; // r8d
  unsigned __int64 v58; // r11
  __int64 v59; // rcx
  unsigned __int64 v60; // r15
  __int64 v61; // r8
  _QWORD *v62; // rbp
  unsigned __int64 v65; // rdi
  __m128i v66; // xmm0
  int *v67; // r8
  __m128i v68; // xmm0
  __int64 v69; // r14
  unsigned int v70; // ebx
  __m128i v71; // xmm0
  const __m128i *v72; // rdi
  int v73; // r12d
  char v74; // cl
  char v75; // r9
  __m128i v76; // xmm1
  __int64 v78; // rbp
  unsigned int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // rbx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // r15
  __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // r8
  __int64 v90; // rdi
  __int64 v91; // r9
  char *v94; // r8
  __int64 *v96; // rdi
  _QWORD *v97; // r9
  _QWORD *v98; // rdi
  signed __int64 v99; // rax
  __int64 v100; // r12
  __int64 v101; // rbp
  __int64 v104; // rax
  _QWORD *v107; // r9
  unsigned int v108; // ebx
  __int64 v109; // rax
  unsigned int v110; // esi
  __int64 v111; // rax
  unsigned int *v112; // rax
  unsigned int v113; // r14d
  __int64 v114; // rsi
  _BYTE *v115; // r11
  unsigned int v116; // eax
  _DWORD *v117; // r11
  unsigned int v118; // eax
  unsigned int v119; // r12d
  unsigned int v120; // esi
  int v121; // r15d
  char v122; // al
  unsigned int v123; // r13d
  char v124; // cl
  int v125; // r9d
  unsigned int v126; // r9d
  __int64 v127; // rax
  __int64 v128; // r12
  __int64 v129; // rax
  int v131; // [rsp+14h] [rbp-1C4h]
  int v132; // [rsp+14h] [rbp-1C4h]
  __int64 v133; // [rsp+18h] [rbp-1C0h]
  __int8 v134; // [rsp+18h] [rbp-1C0h]
  char *v135; // [rsp+18h] [rbp-1C0h]
  __int64 v136; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v137; // [rsp+20h] [rbp-1B8h]
  __int64 v138; // [rsp+20h] [rbp-1B8h]
  char *v140; // [rsp+28h] [rbp-1B0h]
  __int64 v141; // [rsp+30h] [rbp-1A8h]
  const __m128i *v142; // [rsp+38h] [rbp-1A0h]
  char v143; // [rsp+40h] [rbp-198h]
  unsigned int v144; // [rsp+44h] [rbp-194h]
  __int64 v145; // [rsp+48h] [rbp-190h]
  _QWORD *v146; // [rsp+50h] [rbp-188h]
  unsigned int v147; // [rsp+58h] [rbp-180h]
  _QWORD *v148; // [rsp+58h] [rbp-180h]
  __int64 v149; // [rsp+60h] [rbp-178h]
  __int64 v150; // [rsp+60h] [rbp-178h]
  __int64 v151; // [rsp+68h] [rbp-170h]
  __int64 v152; // [rsp+68h] [rbp-170h]
  unsigned int v153; // [rsp+70h] [rbp-168h]
  unsigned int v154; // [rsp+74h] [rbp-164h]
  char v155; // [rsp+78h] [rbp-160h]
  __int64 v156; // [rsp+80h] [rbp-158h]
  unsigned int v157; // [rsp+88h] [rbp-150h]
  int v158[66]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v159; // [rsp+198h] [rbp-40h]

  v4 = (unsigned __int64)a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = (_DWORD)a2 - v5;
  v9 = *(_DWORD *)(a1 + 52);
  v159 = __readfsqword(0x28u);
  v136 = v7;
  v131 = (_DWORD)a2 - v5;
  v133 = *(_QWORD *)(a1 + 112);
  v153 = *(_DWORD *)(a1 + 24);
  v146 = (_QWORD *)(v5 + v153);
  v10 = 1 << *(_DWORD *)(a1 + 256);
  v11 = (_DWORD)a2 - v5 - v10;
  v12 = v10 < (_DWORD)a2 - (_DWORD)v5 - v6;
  v13 = *(_QWORD *)(a1 + 96);
  if ( !v12 )
    v11 = v6;
  LOBYTE(v14) = 6;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v11;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v14 = *(_DWORD *)(a1 + 268);
  v15 = -1640531535 * *(_DWORD *)v4;
  v16 = 1 << v14;
  v17 = *(_QWORD *)(a1 + 248);
  v18 = *(_QWORD *)(v17 + 112);
  v19 = *(_QWORD *)(v17 + 56);
  v141 = v17;
  v144 = v15 >> (24 - *(_BYTE *)(v17 + 52));
  v20 = v144 >> 8 << 6;
  _mm_prefetch((const char *)(v19 + v20 + 32), 1);
  _mm_prefetch((const char *)(v18 + 4 * v20 + 64), 1);
  _mm_prefetch((const char *)(v19 + v20), 1);
  v142 = (const __m128i *)(v19 + v20);
  _mm_prefetch((const char *)(v18 + 4 * v20), 1);
  v145 = v18 + 4 * v20;
  v147 = *(_QWORD *)(a1 + 96);
  v143 = 24 - v9;
  if ( *(_DWORD *)(a1 + 300) )
  {
    *(_DWORD *)(a1 + 44) = v8;
    v36 = ((unsigned int)v13 ^ v15) >> v143;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 44);
    v151 = v5;
    v22 = v136;
    v23 = *(_QWORD *)(a1 + 112);
    v149 = a1 + 64;
    if ( v8 - v21 > 0x180 )
    {
      v108 = v21 + 96;
      if ( v21 >= v21 + 96 )
      {
        v22 = v136;
        v23 = *(_QWORD *)(a1 + 112);
        v151 = v5;
      }
      else
      {
        LODWORD(v109) = *(_QWORD *)(a1 + 96);
        v154 = v6;
        while ( 1 )
        {
          v110 = ((unsigned int)v109 ^ (-1640531535 * *(_DWORD *)(v5 + v21 + 8))) >> v143;
          v111 = v110 >> 8 << 6;
          _mm_prefetch((const char *)(v136 + v111), 1);
          _mm_prefetch((const char *)(v136 + v111 + 32), 1);
          _mm_prefetch((const char *)(v133 + 4 * v111), 1);
          _mm_prefetch((const char *)(v133 + 4 * v111 + 64), 1);
          v112 = (unsigned int *)(a1 + 64 + 4LL * (v21 & 7));
          v113 = *v112;
          *v112 = v110;
          v114 = v113 >> 8 << 6;
          v115 = (_BYTE *)(v136 + v114);
          v116 = (*(_BYTE *)(v136 + v114) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v136 + v114) - 1) & 0x3F) == 0 )
            v116 = 63;
          *v115 = v116;
          v115[v116] = v113;
          *(_DWORD *)(v133 + 4 * (v114 + v116)) = v21++;
          if ( v108 == v21 )
            break;
          v109 = *(_QWORD *)(a1 + 96);
        }
        v6 = v154;
        v23 = *(_QWORD *)(a1 + 112);
        v22 = *(_QWORD *)(a1 + 56);
        v9 = *(_DWORD *)(a1 + 52);
        v151 = *(_QWORD *)(a1 + 8);
      }
      v117 = (_DWORD *)(v5 + v8 - 32);
      v21 = v8 - 32;
      if ( v4 + 1 >= (unsigned __int64)v117 )
      {
        v118 = v4 + 1 - (_DWORD)v117 + 1;
        if ( v118 > 8 )
          v118 = 8;
        v119 = v118 + v21;
        if ( v21 < v118 + v21 )
        {
          v156 = v5;
          v120 = v8 - 32;
          v157 = v8;
          v121 = *(_DWORD *)(a1 + 96);
          v122 = 24 - v9;
          v155 = v9;
          v123 = v119;
          v124 = v122;
          do
          {
            v125 = -1640531535 * *v117;
            v117 = (_DWORD *)((char *)v117 + 1);
            v126 = (v121 ^ (unsigned int)v125) >> v124;
            v127 = v126 >> 8 << 6;
            v128 = 4 * v127;
            _mm_prefetch((const char *)(v22 + v127), 1);
            _mm_prefetch((const char *)(v22 + v127 + 32), 1);
            v129 = v120++ & 7;
            _mm_prefetch((const char *)(v23 + v128), 1);
            _mm_prefetch((const char *)(v23 + v128 + 64), 1);
            *(_DWORD *)(a1 + 4 * v129 + 64) = v126;
          }
          while ( v123 != v120 );
          LOBYTE(v9) = v155;
          v5 = v156;
          v8 = v157;
        }
      }
    }
    if ( v8 > v21 )
    {
      v24 = v151;
      v152 = v5;
      v25 = (_DWORD *)(v24 + v21 + 8);
      do
      {
        v26 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v25)) >> (24 - v9);
        v27 = v26 >> 8 << 6;
        _mm_prefetch((const char *)(v22 + v27), 1);
        _mm_prefetch((const char *)(v22 + v27 + 32), 1);
        _mm_prefetch((const char *)(v23 + 4 * v27), 1);
        _mm_prefetch((const char *)(v23 + 4 * v27 + 64), 1);
        v28 = (unsigned int *)(v149 + 4LL * (v21 & 7));
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
      while ( v131 != v21 );
      v5 = v152;
    }
    *(_DWORD *)(a1 + 44) = v8;
    v33 = ((-1640531535 * *(_DWORD *)(v5 + v8 + 8)) ^ v147) >> v143;
    v34 = v33 >> 8 << 6;
    _mm_prefetch((const char *)(v133 + 4 * v34), 1);
    _mm_prefetch((const char *)(v133 + 4 * v34 + 64), 1);
    _mm_prefetch((const char *)(v136 + v34), 1);
    _mm_prefetch((const char *)(v136 + v34 + 32), 1);
    v35 = (unsigned int *)(v149 + 4LL * (v8 & 7));
    v36 = *v35;
    *v35 = v33;
  }
  v37 = v133;
  *(_DWORD *)(a1 + 104) += v36;
  v134 = v36;
  v38 = v36 >> 8 << 6;
  *(_OWORD *)v158 = 0;
  v39 = v158;
  v40 = v37 + 4 * v38;
  v41 = (__m128i *)(v136 + v38);
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
  _RCX = __ROR8__(((__int64)v158[1] << 16) | v158[0] | ((__int64)v158[3] << 48) | ((__int64)v158[2] << 32), v46);
  if ( _RCX )
  {
    do
    {
      __asm { tzcnt   rax, rcx }
      v54 = (v47 + (_BYTE)_RAX) & 0x3F;
      if ( v54 )
      {
        v55 = *(_DWORD *)(v40 + 4LL * v54);
        if ( v55 < v6 )
          goto LABEL_25;
        --v16;
        _mm_prefetch((const char *)(v5 + v55), 1);
        v158[v50++] = v55;
      }
      v52 = v16 != 0;
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v16 );
  }
  else
  {
LABEL_25:
    v52 = 1;
  }
  v56 = (v42 + 63) & 0x3F;
  if ( ((v42 + 63) & 0x3F) == 0 )
    v56 = 63;
  v41->m128i_i8[0] = v56;
  v41->m128i_i8[v56] = v134;
  v57 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v57 + 1;
  v58 = 3;
  *(_DWORD *)(v40 + 4LL * v56) = v57;
  if ( !v50 )
    goto LABEL_38;
  v59 = 0;
  v60 = a3 - 7;
  while ( 1 )
  {
    while ( 1 )
    {
      v61 = (unsigned int)v158[v59];
      v62 = (_QWORD *)(v5 + v61);
      if ( *(_DWORD *)(v4 + v58 - 3) == *(_DWORD *)(v5 + v61 + v58 - 3) )
        break;
LABEL_30:
      if ( ++v59 == v50 )
        goto LABEL_38;
    }
    if ( v4 >= v60 )
    {
      v96 = (__int64 *)v4;
    }
    else
    {
      if ( *v62 != *(_QWORD *)v4 )
      {
        _RDI = *(_QWORD *)v4 ^ *v62;
        __asm { tzcnt   rdi, rdi }
        v65 = (unsigned int)_RDI >> 3;
        goto LABEL_35;
      }
      v96 = (__int64 *)(v4 + 8);
      v148 = v62 + 1;
      if ( v60 <= v4 + 8 )
      {
        ++v62;
      }
      else
      {
        v100 = v62[1];
        v101 = *(_QWORD *)(v4 + 8);
        if ( v101 != v100 )
        {
LABEL_85:
          _RBP = v100 ^ v101;
          __asm { tzcnt   rbp, rbp }
          v65 = (unsigned __int64)v96 + ((unsigned int)_RBP >> 3) - v4;
          goto LABEL_35;
        }
        v150 = v5;
        v107 = v148;
        while ( 1 )
        {
          ++v96;
          ++v107;
          if ( v60 <= (unsigned __int64)v96 )
            break;
          v101 = *v107;
          v100 = *v96;
          if ( *v107 != *v96 )
          {
            v5 = v150;
            goto LABEL_85;
          }
        }
        v62 = v107;
        v5 = v150;
      }
    }
    if ( (unsigned __int64)v96 < a3 - 3 && *(_DWORD *)v62 == *(_DWORD *)v96 )
    {
      v96 = (__int64 *)((char *)v96 + 4);
      v62 = (_QWORD *)((char *)v62 + 4);
    }
    if ( (unsigned __int64)v96 < a3 - 1 && *(_WORD *)v62 == *(_WORD *)v96 )
    {
      v96 = (__int64 *)((char *)v96 + 2);
      v62 = (_QWORD *)((char *)v62 + 2);
    }
    if ( a3 > (unsigned __int64)v96 )
      v96 = (__int64 *)((char *)v96 + (*(_BYTE *)v62 == *(_BYTE *)v96));
    v65 = (unsigned __int64)v96 - v4;
LABEL_35:
    if ( v65 <= v58 )
      goto LABEL_30;
    *a4 = (unsigned int)(v131 + 3 - v61);
    if ( a3 == v4 + v65 )
      break;
    ++v59;
    v58 = v65;
    if ( v59 == v50 )
      goto LABEL_38;
  }
  v58 = v65;
LABEL_38:
  v66 = _mm_cvtsi32_si128(v144);
  v67 = v158;
  v68 = _mm_unpacklo_epi8(v66, v66);
  *(_OWORD *)v158 = 0;
  v69 = *(_QWORD *)(v141 + 8);
  v70 = *(_DWORD *)(v141 + 24);
  v71 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v68, v68), 0);
  v135 = *(char **)v141;
  v72 = v142;
  v73 = *(_QWORD *)v141 - v69;
  v74 = v142->m128i_i8[0] & 0x3F;
  v75 = v74;
  do
  {
    v76 = _mm_loadu_si128(v72++);
    *v67++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v76, v71));
  }
  while ( &v142[4] != v72 );
  _RCX = __ROR8__(((__int64)v158[1] << 16) | v158[0] | ((__int64)v158[3] << 48) | ((__int64)v158[2] << 32), v74);
  if ( _RCX && v52 )
  {
    v78 = 0;
    do
    {
      __asm { tzcnt   rax, rcx }
      v80 = (v75 + (_BYTE)_RAX) & 0x3F;
      if ( v80 )
      {
        v81 = *(_DWORD *)(v145 + 4LL * v80);
        if ( v70 > v81 )
          break;
        --v16;
        _mm_prefetch((const char *)(v69 + v81), 1);
        v158[v78++] = v81;
      }
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v16 );
    if ( v78 )
    {
      v82 = 0;
      v83 = v4 + 4;
      v84 = a3;
      v132 = v73 + v131 - v153 + 3;
      while ( 2 )
      {
        while ( 1 )
        {
          v85 = (unsigned int)v158[v82];
          v86 = v69 + v85;
          if ( *(_DWORD *)v4 == *(_DWORD *)(v69 + v85) )
            break;
LABEL_50:
          if ( v78 == ++v82 )
            return v58;
        }
        v87 = v86 + 4;
        v88 = (unsigned __int64)&v135[v83 - 4 - v86];
        if ( v84 < v88 )
          v88 = v84;
        v89 = v88 - 7;
        if ( v83 >= v88 - 7 )
        {
          v97 = (_QWORD *)(v86 + 4);
          v98 = (_QWORD *)v83;
        }
        else
        {
          v90 = *(_QWORD *)(v86 + 4);
          v91 = *(_QWORD *)(v4 + 4);
          if ( v90 != v91 )
          {
            _RDI = v91 ^ v90;
            __asm { tzcnt   rdi, rdi }
            v94 = (char *)((unsigned int)_RDI >> 3);
            goto LABEL_57;
          }
          v98 = (_QWORD *)(v4 + 12);
          v97 = (_QWORD *)(v86 + 12);
          if ( v89 > v4 + 12 )
          {
            v138 = *(_QWORD *)(v86 + 12);
            v104 = *(_QWORD *)(v4 + 12);
            if ( v138 != v104 )
            {
              _RAX = v138 ^ v104;
LABEL_89:
              __asm { tzcnt   r8, rax }
              v94 = (char *)v98 + ((unsigned int)_R8 >> 3) - v83;
LABEL_57:
              if ( v135 != &v94[v87] )
              {
LABEL_58:
                if ( v58 >= (unsigned __int64)(v94 + 4) )
                  goto LABEL_50;
                *a4 = (unsigned int)(v132 - v85);
                if ( (char *)v84 == &v94[v4 + 4] )
                  return (unsigned __int64)(v94 + 4);
                ++v82;
                v58 = (unsigned __int64)(v94 + 4);
                if ( v78 == v82 )
                  return v58;
                continue;
              }
LABEL_82:
              v140 = v94;
              v137 = v83;
              v99 = sub_C9E40(&v94[v83], v146, v84);
              v83 = v137;
              v94 = &v140[v99];
              goto LABEL_58;
            }
            while ( 1 )
            {
              ++v98;
              ++v97;
              if ( v89 <= (unsigned __int64)v98 )
                break;
              if ( *v97 != *v98 )
              {
                _RAX = *v98 ^ *v97;
                goto LABEL_89;
              }
            }
          }
        }
        break;
      }
      if ( (unsigned __int64)v98 < v88 - 3 && *(_DWORD *)v97 == *(_DWORD *)v98 )
      {
        v98 = (_QWORD *)((char *)v98 + 4);
        v97 = (_QWORD *)((char *)v97 + 4);
      }
      if ( (unsigned __int64)v98 < v88 - 1 && *(_WORD *)v97 == *(_WORD *)v98 )
      {
        v98 = (_QWORD *)((char *)v98 + 2);
        v97 = (_QWORD *)((char *)v97 + 2);
      }
      if ( v88 > (unsigned __int64)v98 )
        v98 = (_QWORD *)((char *)v98 + (*(_BYTE *)v97 == *(_BYTE *)v98));
      v94 = (char *)v98 - v83;
      if ( v135 != (char *)v98 + v87 - v83 )
        goto LABEL_58;
      goto LABEL_82;
    }
  }
  return v58;
}

