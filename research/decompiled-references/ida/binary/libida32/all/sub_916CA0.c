unsigned __int64 __fastcall sub_916CA0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r9
  unsigned int v6; // r15d
  int v7; // ebp
  int v8; // r11d
  unsigned int v9; // r14d
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // eax
  bool v13; // cf
  char v14; // cl
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rbp
  int v18; // eax
  int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // r12
  char v25; // cl
  _DWORD *v26; // r11
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned int *v29; // rdx
  unsigned int v30; // r10d
  __int64 v31; // rdx
  _BYTE *v32; // r9
  unsigned int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned int *v36; // rcx
  unsigned int v37; // eax
  __int8 v38; // r12
  __int64 v39; // r8
  __m128i v40; // xmm0
  __int64 v41; // r11
  __m128i *v42; // r8
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __int8 v45; // bp
  char v46; // r10
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  char v51; // al
  unsigned __int64 v52; // rbp
  unsigned int v53; // eax
  int v54; // ecx
  __int64 v55; // rax
  unsigned __int64 v56; // r14
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
  __int64 v99; // r12
  __int64 v102; // rax
  _QWORD *v105; // r9
  unsigned int v106; // ebp
  unsigned int v107; // eax
  __int64 v108; // rdx
  unsigned int *v109; // rdx
  unsigned int v110; // r12d
  __int64 v111; // rdx
  _BYTE *v112; // r10
  unsigned int v113; // eax
  _DWORD *v114; // r10
  unsigned int v115; // eax
  unsigned int v116; // ecx
  unsigned int v117; // edx
  int v118; // r14d
  char v119; // al
  unsigned int v120; // r11d
  char v121; // cl
  int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // r9
  __int64 v126; // [rsp+8h] [rbp-1C0h]
  __int64 v128; // [rsp+18h] [rbp-1B0h]
  char *v129; // [rsp+18h] [rbp-1B0h]
  __int64 v130; // [rsp+20h] [rbp-1A8h]
  char *v131; // [rsp+20h] [rbp-1A8h]
  _QWORD *v132; // [rsp+28h] [rbp-1A0h]
  __int64 v133; // [rsp+30h] [rbp-198h]
  int v134; // [rsp+38h] [rbp-190h]
  int v135; // [rsp+38h] [rbp-190h]
  int v136; // [rsp+3Ch] [rbp-18Ch]
  unsigned int v137; // [rsp+3Ch] [rbp-18Ch]
  char v138; // [rsp+40h] [rbp-188h]
  int v139; // [rsp+40h] [rbp-188h]
  _QWORD *v140; // [rsp+40h] [rbp-188h]
  __int64 v141; // [rsp+48h] [rbp-180h]
  unsigned __int64 v142; // [rsp+48h] [rbp-180h]
  __int64 v143; // [rsp+48h] [rbp-180h]
  int v144; // [rsp+50h] [rbp-178h]
  char *v145; // [rsp+50h] [rbp-178h]
  __int64 v146; // [rsp+50h] [rbp-178h]
  __int64 v147; // [rsp+58h] [rbp-170h]
  __int64 v148; // [rsp+60h] [rbp-168h]
  unsigned int v149; // [rsp+68h] [rbp-160h]
  char v150; // [rsp+6Ch] [rbp-15Ch]
  __int64 v151; // [rsp+70h] [rbp-158h]
  unsigned int v152; // [rsp+78h] [rbp-150h]
  _DWORD v153[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v154; // [rsp+188h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = *(_DWORD *)(a1 + 52);
  v9 = a2 - v5;
  v10 = *(_DWORD *)(a1 + 268);
  v11 = 1 << *(_DWORD *)(a1 + 256);
  v154 = __readfsqword(0x28u);
  v134 = a2 - v5;
  v128 = *(_QWORD *)(a1 + 112);
  v130 = *(_QWORD *)(a1 + 56);
  v149 = *(_DWORD *)(a1 + 24);
  v132 = (_QWORD *)(v5 + v149);
  v12 = a2 - v5 - v11;
  v13 = v11 < (_DWORD)a2 - (_DWORD)v5 - v6;
  v14 = 4;
  v15 = *(_QWORD *)(a1 + 96);
  if ( !v13 )
    v12 = v6;
  v16 = v7 == 0;
  v17 = *(_QWORD *)(a1 + 248);
  if ( v16 )
    v6 = v12;
  v126 = *(_QWORD *)(a1 + 248);
  if ( v10 <= 4 )
    v14 = v10;
  v18 = -1640531535 * *(_DWORD *)a2;
  v19 = 1 << v14;
  v20 = (unsigned int)(-1640531535 * *(_DWORD *)a2) >> (34 - *(_BYTE *)(v17 + 264));
  v141 = 4 * v20;
  v133 = 16 * v20;
  _mm_prefetch((const char *)(*(_QWORD *)(v17 + 112) + 16 * v20), 1);
  v136 = 0;
  if ( v10 > 4 )
    v136 = 1 << (v10 - 4);
  v144 = *(_QWORD *)(a1 + 96);
  v138 = 24 - v8;
  if ( *(_DWORD *)(a1 + 300) )
  {
    *(_DWORD *)(a1 + 44) = v9;
    v37 = ((unsigned int)v15 ^ v18) >> v138;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 44);
    v22 = v5;
    v23 = *(_QWORD *)(a1 + 56);
    v147 = a1 + 64;
    v24 = *(_QWORD *)(a1 + 112);
    if ( v9 - v21 > 0x180 )
    {
      v106 = v21 + 96;
      if ( v21 >= v21 + 96 )
      {
        v22 = v5;
        v23 = *(_QWORD *)(a1 + 56);
        v24 = *(_QWORD *)(a1 + 112);
      }
      else
      {
        while ( 1 )
        {
          v107 = ((unsigned int)v15 ^ (-1640531535 * *(_DWORD *)(v5 + v21 + 8))) >> (24 - v8);
          v108 = 16 * (v107 >> 8);
          _mm_prefetch((const char *)(v128 + 4 * v108), 1);
          _mm_prefetch((const char *)(v130 + v108), 1);
          v109 = (unsigned int *)(a1 + 64 + 4LL * (v21 & 7));
          v110 = *v109;
          *v109 = v107;
          v111 = 16 * (v110 >> 8);
          v112 = (_BYTE *)(v130 + v111);
          v113 = (*(_BYTE *)(v130 + v111) - 1) & 0xF;
          if ( ((*(_BYTE *)(v130 + v111) - 1) & 0xF) == 0 )
            v113 = 15;
          *v112 = v113;
          v112[v113] = v110;
          *(_DWORD *)(v128 + 4 * (v111 + v113)) = v21++;
          if ( v106 == v21 )
            break;
          v15 = *(_QWORD *)(a1 + 96);
        }
        v24 = *(_QWORD *)(a1 + 112);
        v23 = *(_QWORD *)(a1 + 56);
        v8 = *(_DWORD *)(a1 + 52);
        v22 = *(_QWORD *)(a1 + 8);
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
          v151 = v5;
          v117 = v9 - 32;
          v152 = v9;
          v118 = *(_DWORD *)(a1 + 96);
          v119 = 24 - v8;
          v150 = v8;
          v120 = v116;
          v121 = v119;
          do
          {
            v122 = -1640531535 * *v114;
            v114 = (_DWORD *)((char *)v114 + 1);
            v123 = (v118 ^ (unsigned int)v122) >> v121;
            v124 = 16 * (v123 >> 8);
            _mm_prefetch((const char *)(v24 + 4 * v124), 1);
            _mm_prefetch((const char *)(v23 + v124), 1);
            LOBYTE(v124) = v117++;
            *(_DWORD *)(a1 + 4 * (v124 & 7) + 64) = v123;
          }
          while ( v120 != v117 );
          LOBYTE(v8) = v150;
          v5 = v151;
          v9 = v152;
        }
      }
    }
    if ( v9 > v21 )
    {
      v148 = v5;
      v25 = 24 - v8;
      v26 = (_DWORD *)(v22 + v21 + 8);
      do
      {
        v27 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v26)) >> v25;
        v28 = 16 * (v27 >> 8);
        _mm_prefetch((const char *)(v24 + 4 * v28), 1);
        _mm_prefetch((const char *)(v23 + v28), 1);
        v29 = (unsigned int *)(v147 + 4LL * (v21 & 7));
        v30 = *v29;
        *v29 = v27;
        v31 = 16 * (v30 >> 8);
        v32 = (_BYTE *)(v23 + v31);
        v33 = (*(_BYTE *)(v23 + v31) - 1) & 0xF;
        if ( ((*(_BYTE *)(v23 + v31) - 1) & 0xF) == 0 )
          v33 = 15;
        v26 = (_DWORD *)((char *)v26 + 1);
        *v32 = v33;
        v32[v33] = v30;
        *(_DWORD *)(v24 + 4 * (v31 + v33)) = v21++;
      }
      while ( v134 != v21 );
      v5 = v148;
    }
    *(_DWORD *)(a1 + 44) = v9;
    v34 = (v144 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v9 + 8))) >> v138;
    v35 = 16 * (v34 >> 8);
    _mm_prefetch((const char *)(v128 + 4 * v35), 1);
    _mm_prefetch((const char *)(v130 + v35), 1);
    v36 = (unsigned int *)(v147 + 4LL * (v9 & 7));
    v37 = *v36;
    *v36 = v34;
  }
  v38 = v37;
  *(_DWORD *)(a1 + 104) += v37;
  v39 = 16 * (v37 >> 8);
  v40 = _mm_cvtsi32_si128(v37);
  v41 = v128 + 4 * v39;
  v42 = (__m128i *)(v130 + v39);
  v43 = 0;
  v44 = _mm_unpacklo_epi8(v40, v40);
  v45 = v42->m128i_i8[0];
  v46 = v42->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v44, v44), 0), _mm_loadu_si128(v42))),
                             v46);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v49 = (v46 + (_BYTE)_RCX) & 0xF;
      if ( v49 )
      {
        v50 = *(_DWORD *)(v41 + 4LL * v49);
        if ( v50 < v6 )
          break;
        --v19;
        _mm_prefetch((const char *)(v5 + v50), 1);
        v153[v43++] = v50;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v51 = v45 + 15;
  v52 = 3;
  v53 = v51 & 0xF;
  if ( !v53 )
    v53 = 15;
  v42->m128i_i8[0] = v53;
  v42->m128i_i8[v53] = v38;
  v54 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v54 + 1;
  *(_DWORD *)(v41 + 4LL * v53) = v54;
  if ( v43 )
  {
    v55 = 0;
    v56 = a3 - 7;
    do
    {
      while ( 1 )
      {
        v57 = (unsigned int)v153[v55];
        v58 = (_QWORD *)(v5 + v57);
        if ( *(_DWORD *)(a2 + v52 - 3) == *(_DWORD *)(v5 + v57 + v52 - 3) )
          break;
LABEL_29:
        if ( ++v55 == v43 )
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
        v140 = v58 + 1;
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
LABEL_91:
            _RCX = v99 ^ v98;
            __asm { tzcnt   rcx, rcx }
            v61 = (unsigned __int64)v94 + ((unsigned int)_RCX >> 3) - a2;
            goto LABEL_34;
          }
          v146 = v5;
          v105 = v140;
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
              v5 = v146;
              goto LABEL_91;
            }
          }
          v58 = v105;
          v5 = v146;
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
      *a4 = (unsigned int)(v134 + 3 - v57);
      if ( a3 == a2 + v61 )
      {
        v52 = v61;
        break;
      }
      ++v55;
      v52 = v61;
    }
    while ( v55 != v43 );
  }
LABEL_37:
  v62 = 3;
  v63 = v19 + v136;
  v137 = v63;
  v64 = *(_QWORD *)(v126 + 8);
  v65 = *(_QWORD *)(v126 + 112);
  v129 = *(char **)v126;
  v139 = *(_QWORD *)v126 - v64;
  if ( v63 <= 3 )
    v62 = v63;
  v66 = (unsigned int *)(v65 + v133);
  do
  {
    v67 = *v66++;
    _mm_prefetch((const char *)(v64 + v67), 1);
  }
  while ( (unsigned int *)(v65 + v133 + 12) != v66 );
  _mm_prefetch((const char *)(*(_QWORD *)(v126 + 128) + 4LL * (*(_DWORD *)(v65 + v133 + 12) >> 8)), 1);
  if ( v137 )
  {
    v68 = *(unsigned int *)(v65 + v133);
    v69 = v64 + v68;
    if ( (_DWORD)v68 )
    {
      v70 = 0;
      v71 = a2 + 4;
      v72 = 4 * v141 + 4;
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
        v75 = &v129[v71 - 4 - v69];
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
            v143 = *(_QWORD *)(v69 + 12);
            v102 = *(_QWORD *)(a2 + 12);
            if ( v143 != v102 )
            {
              _RAX = v143 ^ v102;
LABEL_95:
              __asm { tzcnt   rax, rax }
              v81 = &v96[((unsigned int)_RAX >> 3) - v71];
LABEL_52:
              if ( v129 != &v81[v74] )
                goto LABEL_53;
LABEL_88:
              v145 = v81;
              v142 = v71;
              v97 = sub_907A60(&v81[v71], v132, a3);
              v71 = v142;
              v81 = &v145[v97];
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
        if ( v129 == &v96[v74 - v71] )
          goto LABEL_88;
LABEL_53:
        if ( (unsigned __int64)(v81 + 4) <= v52 )
          goto LABEL_44;
        v52 = (unsigned __int64)(v81 + 4);
        *a4 = v139 + v134 - v149 + 3 - (unsigned int)v68;
        if ( (char *)a3 == &v81[a2 + 4] )
          return v52;
        ++v70;
        v65 = *(_QWORD *)(v126 + 112);
        if ( v62 <= v70 )
        {
LABEL_56:
          v82 = *(_DWORD *)(v65 + v133 + 12);
          v83 = (unsigned __int8)v82;
          v84 = v82 >> 8;
          if ( v83 > v137 - v70 )
            v83 = v137 - v70;
          if ( v83 )
          {
            v85 = v84;
            v86 = *(_QWORD *)(v126 + 128);
            v87 = (unsigned int *)(v86 + 4LL * v84);
            do
            {
              v88 = *v87++;
              _mm_prefetch((const char *)(v64 + v88), 1);
            }
            while ( (unsigned int *)(v86 + 4 * (v84 + (unsigned __int64)(v83 - 1)) + 4) != v87 );
            v89 = v84 + v83;
            v90 = (_DWORD *)a2;
            v131 = (char *)(a2 + 4);
            v135 = v139 + v134 - v149 + 3;
            while ( 1 )
            {
              v91 = *(unsigned int *)(v86 + 4 * v85);
              if ( *v90 == *(_DWORD *)(v64 + v91) )
              {
                v92 = sub_916A80(v131, (_QWORD *)(v64 + v91 + 4), a3, v129, v132) + 4;
                if ( v92 > v52 )
                {
                  v52 = v92;
                  *a4 = (unsigned int)(v135 - v91);
                  if ( (_DWORD *)a3 == (_DWORD *)((char *)v90 + v92) )
                    break;
                }
              }
              if ( ++v84 == v89 )
                break;
              v85 = v84;
              v86 = *(_QWORD *)(v126 + 128);
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

