unsigned __int64 __fastcall sub_9121F0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned int v7; // r14d
  __int64 v8; // r11
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  const char *v18; // r12
  const char *v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rbp
  char v24; // cl
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  unsigned int *v28; // rsi
  unsigned int v29; // r11d
  __int64 v30; // rsi
  _BYTE *v31; // r9
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  _DWORD *v34; // rsi
  unsigned __int64 v35; // rax
  __int8 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // r11
  __m128i v39; // xmm0
  __int64 v40; // rbp
  __m128i *v41; // r11
  __m128i v42; // xmm0
  __int8 v43; // r12
  char v44; // bl
  bool v46; // r8
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  int v51; // ecx
  unsigned __int64 v52; // r11
  __int64 v53; // rax
  unsigned __int64 v54; // r14
  bool v55; // r12
  __int64 v56; // rdi
  _QWORD *v57; // r8
  unsigned __int64 v60; // rcx
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __int64 v63; // r14
  unsigned int v64; // esi
  char v65; // di
  int v66; // eax
  unsigned __int16 v67; // r9
  __int64 v69; // rbp
  unsigned int v71; // r8d
  unsigned int v72; // r8d
  __int64 v73; // rbx
  unsigned __int64 v74; // r9
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // r8
  char *v84; // r8
  __int64 *v86; // rcx
  _QWORD *v87; // r8
  _QWORD *v88; // rsi
  signed __int64 v89; // rax
  __int64 v90; // rax
  __int64 v93; // rbp
  __int64 v94; // r8
  _QWORD *v97; // r9
  unsigned int v98; // ebp
  __int64 i; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  unsigned int *v102; // rdx
  unsigned int v103; // r10d
  __int64 v104; // rdx
  _BYTE *v105; // rsi
  unsigned int v106; // eax
  _QWORD *v107; // r11
  unsigned int v108; // eax
  unsigned int v109; // ecx
  unsigned int v110; // esi
  __int64 v111; // r14
  char v112; // al
  unsigned int v113; // ebx
  char v114; // cl
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rax
  __int64 v117; // r9
  __int64 v119; // [rsp+8h] [rbp-1C0h]
  char *v120; // [rsp+8h] [rbp-1C0h]
  __int64 v121; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v122; // [rsp+10h] [rbp-1B8h]
  __int64 v123; // [rsp+10h] [rbp-1B8h]
  unsigned int v124; // [rsp+18h] [rbp-1B0h]
  char *v125; // [rsp+18h] [rbp-1B0h]
  __int64 v126; // [rsp+20h] [rbp-1A8h]
  _QWORD *v127; // [rsp+20h] [rbp-1A8h]
  char v128; // [rsp+28h] [rbp-1A0h]
  __int64 v129; // [rsp+28h] [rbp-1A0h]
  __int64 v130; // [rsp+30h] [rbp-198h]
  const __m128i *v131; // [rsp+38h] [rbp-190h]
  unsigned __int64 v132; // [rsp+40h] [rbp-188h]
  int v133; // [rsp+48h] [rbp-180h]
  int v134; // [rsp+48h] [rbp-180h]
  unsigned int v135; // [rsp+4Ch] [rbp-17Ch]
  const char *v136; // [rsp+50h] [rbp-178h]
  _QWORD *v137; // [rsp+58h] [rbp-170h]
  __int64 v138; // [rsp+60h] [rbp-168h]
  __int64 v139; // [rsp+68h] [rbp-160h]
  __int64 v141; // [rsp+70h] [rbp-158h]
  int v142; // [rsp+78h] [rbp-150h]
  char v143; // [rsp+78h] [rbp-150h]
  unsigned int v144; // [rsp+7Ch] [rbp-14Ch]
  _DWORD v145[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v146; // [rsp+188h] [rbp-40h]

  v5 = (unsigned __int64)a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_QWORD *)(a1 + 248);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(_DWORD *)(a1 + 256);
  v146 = __readfsqword(0x28u);
  v121 = v9;
  v130 = v8;
  v11 = *(_DWORD *)(a1 + 52);
  v119 = *(_QWORD *)(a1 + 112);
  v124 = (_DWORD)a2 - v6;
  v135 = *(_DWORD *)(a1 + 24);
  v137 = (_QWORD *)(v6 + v135);
  v133 = (_DWORD)a2 - v6;
  v12 = 1 << v10;
  v13 = (_DWORD)a2 - v6 - v12;
  if ( v12 >= (_DWORD)a2 - (_DWORD)v6 - v7 )
    v13 = v7;
  v126 = *(_QWORD *)(a1 + 96);
  LOBYTE(v14) = 4;
  if ( !*(_DWORD *)(a1 + 40) )
    v7 = v13;
  if ( *(_DWORD *)(a1 + 268) <= 4u )
    v14 = *(_DWORD *)(a1 + 268);
  v15 = 0xCF1BBCDCBF9B0000LL * *a2;
  v16 = 1 << v14;
  v132 = v15 >> (56 - *(_BYTE *)(v8 + 52));
  v17 = 16 * ((unsigned int)v132 >> 8);
  v18 = (const char *)(v17 + *(_QWORD *)(v8 + 56));
  v19 = (const char *)(*(_QWORD *)(v8 + 112) + 4 * v17);
  _mm_prefetch(v19, 1);
  _mm_prefetch(v18, 1);
  v128 = 56 - v11;
  v131 = (const __m128i *)v18;
  v136 = v19;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v35 = (v126 ^ v15) >> v128;
    *(_DWORD *)(a1 + 44) = v124;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 44);
    v21 = v121;
    v138 = a1 + 64;
    v22 = *(_QWORD *)(a1 + 112);
    v23 = v6;
    if ( (_DWORD)a2 - (_DWORD)v6 - v20 > 0x180 )
    {
      v98 = v20 + 96;
      if ( v20 >= v20 + 96 )
      {
        v23 = v6;
        v21 = v121;
        v22 = *(_QWORD *)(a1 + 112);
      }
      else
      {
        v142 = v16;
        for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(a1 + 96) )
        {
          v100 = (i ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v6 + v20 + 8))) >> v128;
          v101 = 16 * ((unsigned int)v100 >> 8);
          _mm_prefetch((const char *)(v119 + 4 * v101), 1);
          _mm_prefetch((const char *)(v121 + v101), 1);
          v102 = (unsigned int *)(a1 + 64 + 4LL * (v20 & 7));
          v103 = *v102;
          *v102 = v100;
          v104 = 16 * (v103 >> 8);
          v105 = (_BYTE *)(v121 + v104);
          v106 = (*(_BYTE *)(v121 + v104) - 1) & 0xF;
          if ( ((*(_BYTE *)(v121 + v104) - 1) & 0xF) == 0 )
            v106 = 15;
          *v105 = v106;
          v105[v106] = v103;
          *(_DWORD *)(v119 + 4 * (v104 + v106)) = v20++;
          if ( v98 == v20 )
            break;
        }
        v16 = v142;
        v5 = (unsigned __int64)a2;
        v22 = *(_QWORD *)(a1 + 112);
        v21 = *(_QWORD *)(a1 + 56);
        v11 = *(_DWORD *)(a1 + 52);
        v23 = *(_QWORD *)(a1 + 8);
      }
      v107 = (_QWORD *)(v6 + v124 - 32);
      v20 = v124 - 32;
      if ( v5 + 1 >= (unsigned __int64)v107 )
      {
        v108 = v5 + 1 - (_DWORD)v107 + 1;
        if ( v108 > 8 )
          v108 = 8;
        v109 = v108 + v20;
        if ( v20 < v108 + v20 )
        {
          v141 = v6;
          v110 = v124 - 32;
          v144 = v7;
          v111 = *(_QWORD *)(a1 + 96);
          v112 = 56 - v11;
          v143 = v11;
          v113 = v109;
          v114 = v112;
          do
          {
            v115 = 0xCF1BBCDCBF9B0000LL * *v107;
            v107 = (_QWORD *)((char *)v107 + 1);
            v116 = (v111 ^ v115) >> v114;
            v117 = 16 * ((unsigned int)v116 >> 8);
            _mm_prefetch((const char *)(v22 + 4 * v117), 1);
            _mm_prefetch((const char *)(v21 + v117), 1);
            LOBYTE(v117) = v110++;
            *(_DWORD *)(a1 + 4 * (v117 & 7) + 64) = v116;
          }
          while ( v113 != v110 );
          LOBYTE(v11) = v143;
          v6 = v141;
          v7 = v144;
        }
      }
    }
    if ( v124 > v20 )
    {
      v139 = v6;
      v24 = 56 - v11;
      v25 = (_QWORD *)(v23 + v20 + 8);
      do
      {
        v26 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBF9B0000LL * *v25)) >> v24;
        v27 = 16 * ((unsigned int)v26 >> 8);
        _mm_prefetch((const char *)(v22 + 4 * v27), 1);
        _mm_prefetch((const char *)(v21 + v27), 1);
        v28 = (unsigned int *)(v138 + 4LL * (v20 & 7));
        v29 = *v28;
        *v28 = v26;
        v30 = 16 * (v29 >> 8);
        v31 = (_BYTE *)(v21 + v30);
        v32 = (*(_BYTE *)(v21 + v30) - 1) & 0xF;
        if ( ((*(_BYTE *)(v21 + v30) - 1) & 0xF) == 0 )
          v32 = 15;
        v25 = (_QWORD *)((char *)v25 + 1);
        *v31 = v32;
        v31[v32] = v29;
        *(_DWORD *)(v22 + 4 * (v30 + v32)) = v20++;
      }
      while ( v133 != v20 );
      v6 = v139;
    }
    *(_DWORD *)(a1 + 44) = v124;
    v33 = ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v6 + v124 + 8)) ^ v126) >> v128;
    v35 = 16 * ((unsigned int)v33 >> 8);
    _mm_prefetch((const char *)(v119 + 4 * v35), 1);
    _mm_prefetch((const char *)(v121 + v35), 1);
    v34 = (_DWORD *)(v138 + 4LL * (v124 & 7));
    LODWORD(v35) = *v34;
    *v34 = v33;
  }
  v36 = v35;
  *(_DWORD *)(a1 + 104) += v35;
  v37 = 0;
  v38 = 16 * ((unsigned int)v35 >> 8);
  v39 = _mm_cvtsi32_si128(v35);
  v40 = v119 + 4 * v38;
  v41 = (__m128i *)(v121 + v38);
  v42 = _mm_unpacklo_epi8(v39, v39);
  v43 = v41->m128i_i8[0];
  v44 = v41->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v42, v42), 0), _mm_loadu_si128(v41))),
                             v44);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v48 = (v44 + (_BYTE)_RCX) & 0xF;
      if ( v48 )
      {
        v49 = *(_DWORD *)(v40 + 4LL * v48);
        if ( v49 < v7 )
          goto LABEL_23;
        --v16;
        _mm_prefetch((const char *)(v6 + v49), 1);
        v145[v37++] = v49;
      }
      v46 = v16 != 0;
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v16 );
  }
  else
  {
LABEL_23:
    v46 = 1;
  }
  v50 = (v43 + 15) & 0xF;
  if ( ((v43 + 15) & 0xF) == 0 )
    v50 = 15;
  v41->m128i_i8[0] = v50;
  v41->m128i_i8[v50] = v36;
  v51 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v51 + 1;
  v52 = 3;
  *(_DWORD *)(v40 + 4LL * v50) = v51;
  if ( !v37 )
    goto LABEL_37;
  v53 = 0;
  v54 = a3 - 7;
  v55 = v46;
  while ( 1 )
  {
    while ( 1 )
    {
      v56 = (unsigned int)v145[v53];
      v57 = (_QWORD *)(v6 + v56);
      if ( *(_DWORD *)(v5 + v52 - 3) == *(_DWORD *)(v6 + v56 + v52 - 3) )
        break;
LABEL_28:
      if ( ++v53 == v37 )
        goto LABEL_36;
    }
    if ( v5 >= v54 )
    {
      v86 = (__int64 *)v5;
    }
    else
    {
      if ( *v57 != *(_QWORD *)v5 )
      {
        _RCX = *(_QWORD *)v5 ^ *v57;
        __asm { tzcnt   rcx, rcx }
        v60 = (unsigned int)_RCX >> 3;
        goto LABEL_33;
      }
      v86 = (__int64 *)(v5 + 8);
      v127 = v57 + 1;
      if ( v54 <= v5 + 8 )
      {
        ++v57;
      }
      else
      {
        v93 = v57[1];
        v94 = *(_QWORD *)(v5 + 8);
        if ( v94 != v93 )
        {
LABEL_85:
          _R8 = v93 ^ v94;
          __asm { tzcnt   r8, r8 }
          v60 = (unsigned __int64)v86 + ((unsigned int)_R8 >> 3) - v5;
          goto LABEL_33;
        }
        v129 = v6;
        v97 = v127;
        while ( 1 )
        {
          ++v86;
          ++v97;
          if ( v54 <= (unsigned __int64)v86 )
            break;
          v94 = *v97;
          v93 = *v86;
          if ( *v97 != *v86 )
          {
            v6 = v129;
            goto LABEL_85;
          }
        }
        v57 = v97;
        v6 = v129;
      }
    }
    if ( (unsigned __int64)v86 < a3 - 3 && *(_DWORD *)v57 == *(_DWORD *)v86 )
    {
      v86 = (__int64 *)((char *)v86 + 4);
      v57 = (_QWORD *)((char *)v57 + 4);
    }
    if ( (unsigned __int64)v86 < a3 - 1 && *(_WORD *)v57 == *(_WORD *)v86 )
    {
      v86 = (__int64 *)((char *)v86 + 2);
      v57 = (_QWORD *)((char *)v57 + 2);
    }
    if ( a3 > (unsigned __int64)v86 )
      v86 = (__int64 *)((char *)v86 + (*(_BYTE *)v57 == *(_BYTE *)v86));
    v60 = (unsigned __int64)v86 - v5;
LABEL_33:
    if ( v60 <= v52 )
      goto LABEL_28;
    *a4 = (unsigned int)(v133 + 3 - v56);
    if ( a3 == v5 + v60 )
      break;
    ++v53;
    v52 = v60;
    if ( v53 == v37 )
    {
LABEL_36:
      v46 = v55;
      goto LABEL_37;
    }
  }
  v46 = v55;
  v52 = v60;
LABEL_37:
  v61 = _mm_cvtsi32_si128(v132);
  v62 = _mm_unpacklo_epi8(v61, v61);
  v63 = *(_QWORD *)(v130 + 8);
  v64 = *(_DWORD *)(v130 + 24);
  v65 = v131->m128i_i8[0] & 0xF;
  v120 = *(char **)v130;
  v66 = *(_QWORD *)v130 - v63;
  v67 = __ROR2__(
          _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v62, v62), 0), _mm_loadu_si128(v131))),
          v65);
  _RCX = v67;
  if ( v67 && v46 )
  {
    v69 = 0;
    do
    {
      __asm { tzcnt   r8, rcx }
      v71 = (v65 + (_BYTE)_R8) & 0xF;
      if ( v71 )
      {
        v72 = *(_DWORD *)&v136[4 * v71];
        if ( v64 > v72 )
          break;
        --v16;
        _mm_prefetch((const char *)(v63 + v72), 1);
        v145[v69++] = v72;
      }
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v16 );
    if ( v69 )
    {
      v73 = 0;
      v134 = v66 + v133 - v135 + 3;
      v74 = v5 + 4;
      while ( 2 )
      {
        v75 = (unsigned int)v145[v73];
        v76 = v63 + v75;
        if ( *(_DWORD *)v5 != *(_DWORD *)(v63 + v75) )
          goto LABEL_47;
        v77 = v76 + 4;
        v78 = (unsigned __int64)&v120[v74 - 4 - v76];
        if ( a3 < v78 )
          v78 = a3;
        v79 = v78 - 7;
        if ( v74 >= v78 - 7 )
        {
          v87 = (_QWORD *)(v76 + 4);
          v88 = (_QWORD *)v74;
        }
        else
        {
          v80 = *(_QWORD *)(v76 + 4);
          v81 = *(_QWORD *)(v5 + 4);
          if ( v80 != v81 )
          {
            _RSI = v81 ^ v80;
            __asm { tzcnt   rsi, rsi }
            v84 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_54;
          }
          v88 = (_QWORD *)(v5 + 12);
          v87 = (_QWORD *)(v76 + 12);
          if ( v79 > v5 + 12 )
          {
            v123 = *(_QWORD *)(v76 + 12);
            v90 = *(_QWORD *)(v5 + 12);
            if ( v123 != v90 )
            {
              _RAX = v123 ^ v90;
LABEL_82:
              __asm { tzcnt   r8, rax }
              v84 = (char *)v88 + ((unsigned int)_R8 >> 3) - v74;
LABEL_54:
              if ( v120 != &v84[v77] )
              {
LABEL_55:
                if ( (unsigned __int64)(v84 + 4) > v52 )
                {
                  v52 = (unsigned __int64)(v84 + 4);
                  *a4 = (unsigned int)(v134 - v75);
                  if ( (char *)a3 == &v84[v5 + 4] )
                    return v52;
                }
LABEL_47:
                if ( ++v73 == v69 )
                  return v52;
                continue;
              }
LABEL_78:
              v125 = v84;
              v122 = v74;
              v89 = sub_907A60(&v84[v74], v137, a3);
              v74 = v122;
              v84 = &v125[v89];
              goto LABEL_55;
            }
            while ( 1 )
            {
              ++v88;
              ++v87;
              if ( v79 <= (unsigned __int64)v88 )
                break;
              if ( *v87 != *v88 )
              {
                _RAX = *v88 ^ *v87;
                goto LABEL_82;
              }
            }
          }
        }
        break;
      }
      if ( (unsigned __int64)v88 < v78 - 3 && *(_DWORD *)v87 == *(_DWORD *)v88 )
      {
        v88 = (_QWORD *)((char *)v88 + 4);
        v87 = (_QWORD *)((char *)v87 + 4);
      }
      if ( (unsigned __int64)v88 < v78 - 1 && *(_WORD *)v87 == *(_WORD *)v88 )
      {
        v88 = (_QWORD *)((char *)v88 + 2);
        v87 = (_QWORD *)((char *)v87 + 2);
      }
      if ( v78 > (unsigned __int64)v88 )
        v88 = (_QWORD *)((char *)v88 + (*(_BYTE *)v87 == *(_BYTE *)v88));
      v84 = (char *)v88 - v74;
      if ( v120 != (char *)v88 + v77 - v74 )
        goto LABEL_55;
      goto LABEL_78;
    }
  }
  return v52;
}

