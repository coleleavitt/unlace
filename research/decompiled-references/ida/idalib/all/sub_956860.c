unsigned __int64 __fastcall sub_956860(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  __int64 v6; // r12
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdi
  const __m128i *v13; // r9
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r10
  bool v18; // zf
  __int64 v19; // r9
  unsigned int v20; // esi
  _QWORD *v21; // rdi
  unsigned __int64 v22; // r15
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  char v25; // al
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  const char *v29; // r15
  char v30; // al
  __int64 v31; // rbx
  int v32; // ecx
  int v33; // edx
  unsigned int v34; // esi
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned __int64 v37; // rbp
  __int64 v38; // rdx
  char *v39; // rcx
  unsigned __int64 v40; // rbx
  __int64 v41; // rbp
  unsigned __int64 v42; // r12
  _QWORD *v43; // r10
  int v44; // ebx
  int v45; // r15d
  int v46; // eax
  unsigned int v47; // edx
  __int64 v48; // rsi
  unsigned int v49; // ecx
  unsigned int v50; // r13d
  unsigned int v51; // r13d
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  _QWORD *v54; // r10
  int v55; // ebx
  unsigned int v56; // edx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // r9
  __m128i *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // r10
  __int64 v64; // rsi
  _QWORD *v65; // rdi
  unsigned int v66; // r8d
  unsigned int v67; // r8d
  char v68; // al
  __int64 v69; // rbx
  char v70; // r11
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  const char *v73; // r15
  char v74; // al
  int v75; // eax
  unsigned int v76; // edx
  __int64 v77; // rsi
  unsigned int v78; // ecx
  __int64 v79; // rsi
  _QWORD *v80; // rsi
  unsigned __int64 v81; // rax
  unsigned int v82; // edx
  unsigned int v83; // ebx
  int v84; // edx
  int v85; // eax
  unsigned int v86; // ecx
  unsigned int v87; // edx
  __int64 v88; // rsi
  unsigned int v89; // edi
  __int64 v90; // rsi
  __int64 v92; // rdx
  _QWORD *v93; // rsi
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rax
  __int64 v98; // rdx
  bool v99; // cc
  char *v100; // rcx
  signed __int64 v101; // rax
  unsigned __int64 v102; // rax
  char *v103; // rcx
  signed __int64 v104; // rax
  __m128i *v105; // rdi
  signed __int64 v106; // r9
  signed __int64 v107; // r10
  unsigned __int64 v108; // r9
  __int64 v109; // rax
  unsigned int v110; // eax
  __m128i *v111; // rax
  char *v112; // rcx
  __m128i *v113; // rax
  const __m128i *v114; // rdx
  __m128i v115; // xmm0
  char *v116; // rcx
  unsigned __int64 v117; // rax
  unsigned int v118; // eax
  char v119; // [rsp+0h] [rbp-F8h]
  int v120; // [rsp+0h] [rbp-F8h]
  int v121; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v122; // [rsp+10h] [rbp-E8h]
  char v123; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v124; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v125; // [rsp+20h] [rbp-D8h]
  char v126; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v127; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v128; // [rsp+28h] [rbp-D0h]
  int v129; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v130; // [rsp+30h] [rbp-C8h]
  int v131; // [rsp+38h] [rbp-C0h]
  unsigned int v132; // [rsp+3Ch] [rbp-BCh]
  __int64 v133; // [rsp+48h] [rbp-B0h]
  __int64 v135; // [rsp+58h] [rbp-A0h]
  int v136; // [rsp+60h] [rbp-98h]
  unsigned int v137; // [rsp+64h] [rbp-94h]
  unsigned int v138; // [rsp+68h] [rbp-90h]
  unsigned int v139; // [rsp+6Ch] [rbp-8Ch]
  const __m128i *v140; // [rsp+70h] [rbp-88h]
  const __m128i *v141; // [rsp+78h] [rbp-80h]
  _QWORD *v142; // [rsp+80h] [rbp-78h]
  char *v143; // [rsp+88h] [rbp-70h]
  unsigned int v144; // [rsp+90h] [rbp-68h]
  unsigned int v145; // [rsp+94h] [rbp-64h]
  _QWORD *v146; // [rsp+98h] [rbp-60h]
  _QWORD *v148; // [rsp+A8h] [rbp-50h]
  _QWORD v149[9]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = (unsigned __int64)a4->m128i_u64 + a5;
  v6 = a1;
  v140 = a4;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 6;
  v10 = 6;
  v149[1] = __readfsqword(0x28u);
  v11 = *(unsigned int *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 16);
  v125 = v5;
  v124 = v5 - 16;
  v13 = (const __m128i *)(v8 + v11);
  v132 = v11;
  v143 = (char *)(v12 + v11);
  v135 = v12;
  v133 = v8;
  v148 = (_QWORD *)(v12 + *(unsigned int *)(v6 + 28));
  if ( *(_DWORD *)(v6 + 272) <= 6u )
    v9 = *(_DWORD *)(v6 + 272);
  v142 = (_QWORD *)(v8 + v11);
  v145 = *(_DWORD *)(v6 + 268);
  v129 = *(_DWORD *)(v6 + 256);
  v14 = 4;
  if ( v9 < 4 )
    v9 = 4;
  if ( *(_DWORD *)(v6 + 268) <= 6u )
    v10 = *(_DWORD *)(v6 + 268);
  if ( v10 >= 4 )
    v14 = v10;
  v131 = v14;
  v137 = *a3;
  v15 = a3[1];
  v16 = *(unsigned int *)(v6 + 44);
  v17 = *(_QWORD *)(v6 + 56);
  *(_DWORD *)(v6 + 300) = 0;
  v144 = v15;
  v18 = a4 == v13;
  v19 = *(_QWORD *)(v6 + 112);
  v20 = v16;
  v21 = (_QWORD *)(v8 + v16);
  v22 = (unsigned __int64)a4->m128i_u64 + v18;
  if ( v5 - 16 >= (unsigned __int64)v21 )
  {
    v23 = v124 - (_DWORD)v21 + 1;
    if ( v23 > 8 )
      v23 = 8;
    v24 = v20 + v23;
    if ( v20 < v24 )
    {
      v25 = *(_DWORD *)(v6 + 52) + 8;
      v121 = *(_QWORD *)(v6 + 96);
      v119 = 64 - v25;
      v26 = *(_QWORD *)(v6 + 96);
      v126 = 32 - v25;
      do
      {
        if ( v9 == 5 )
        {
          v27 = (v26 ^ (0xCF1BBCDCBB000000LL * *v21)) >> v119;
        }
        else if ( v9 == 6 )
        {
          v27 = (v26 ^ (0xCF1BBCDCBF9B0000LL * *v21)) >> v119;
        }
        else
        {
          LODWORD(v27) = (v121 ^ (unsigned int)(-1640531535 * *(_DWORD *)v21)) >> v126;
        }
        v28 = (unsigned int)v27 >> 8 << v131;
        v29 = (const char *)(v17 + v28);
        _mm_prefetch((const char *)(v19 + 4 * v28), 1);
        if ( v145 <= 4 )
        {
          _mm_prefetch(v29, 1);
        }
        else
        {
          _mm_prefetch((const char *)(v19 + 4 * v28 + 64), 1);
          _mm_prefetch(v29, 1);
          if ( v145 != 5 )
            _mm_prefetch((const char *)(v17 + v28 + 32), 1);
        }
        v30 = v20++;
        v21 = (_QWORD *)((char *)v21 + 1);
        *(_DWORD *)(v6 + 4LL * (v30 & 7) + 64) = v27;
      }
      while ( v24 != v20 );
      v22 = (unsigned __int64)a4->m128i_u64 + v18;
    }
  }
  if ( v124 <= v22 )
    goto LABEL_124;
  v139 = 1 << v129;
  v138 = v132 - 1;
  v141 = (const __m128i *)(v125 - 32);
  do
  {
    v31 = v133;
    v32 = *(_DWORD *)(v6 + 28);
    v33 = v22 - v133 + 1;
    v120 = v22 - v133;
    v34 = v33 - v32;
    if ( v139 < v33 - v32 )
      v32 = v22 - v133 + 1 - v139;
    v35 = v33 - v32;
    if ( !*(_DWORD *)(v6 + 40) )
      v34 = v35;
    v36 = v22 - v133 - v137 + 1;
    if ( v132 > v36 )
      v31 = v135;
    if ( v138 - v36 <= 2 || v137 > v34 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 0;
      v38 = v36 + v31;
      if ( *(_DWORD *)v38 == *(_DWORD *)(v22 + 1) )
      {
        v39 = (char *)v125;
        if ( v132 > v36 )
          v39 = v143;
        v37 = sub_93A7C0((char *)(v22 + 5), (_QWORD *)(v38 + 4), v125, v39, v142) + 4;
      }
    }
    v149[0] = 999999999;
    if ( v9 == 5 )
    {
      if ( v131 == 5 )
      {
        v40 = sub_92C940(v6, (_QWORD *)v22, v125, v149);
      }
      else if ( v131 == 6 )
      {
        v40 = sub_92D620(v6, (_QWORD *)v22, v125, v149);
      }
      else
      {
        v40 = sub_9441C0(v6, (_QWORD *)v22, v125, v149);
      }
    }
    else if ( v9 == 6 )
    {
      if ( v131 == 5 )
      {
        v40 = sub_92C2A0(v6, (_QWORD *)v22, v125, v149);
      }
      else if ( v131 == 6 )
      {
        v40 = sub_92E420(v6, (_QWORD *)v22, v125, v149);
      }
      else
      {
        v40 = sub_944A40(v6, (_QWORD *)v22, v125, v149);
      }
    }
    else if ( v131 == 5 )
    {
      v40 = sub_92CFE0(v6, (_QWORD *)v22, v125, v149);
    }
    else if ( v131 == 6 )
    {
      v40 = sub_92DD50(v6, (_QWORD *)v22, v125, v149);
    }
    else
    {
      v40 = sub_9439C0(v6, (_QWORD *)v22, v125, v149);
    }
    if ( v37 < v40 )
    {
      v130 = v22;
      v122 = v149[0];
      if ( v40 <= 3 )
      {
LABEL_148:
        v97 = (v22 - (unsigned __int64)v140) >> 8;
        v22 += v97 + 1;
        *(_DWORD *)(v6 + 300) = v97 > 8;
        continue;
      }
    }
    else
    {
      v122 = 1;
      v40 = v37;
      v130 = v22 + 1;
      if ( v37 <= 3 )
        goto LABEL_148;
    }
    v127 = v40;
    v41 = v6;
    v42 = v22;
    while ( 1 )
    {
      v43 = (_QWORD *)(v42 + 1);
      v44 = v127;
      v45 = v120 + 1;
      if ( v122 )
      {
        v46 = *(_DWORD *)(v41 + 28);
        v136 = v122;
        v47 = v45 - v46;
        if ( v139 < v45 - v46 )
          v46 = v45 - v139;
        if ( !*(_DWORD *)(v41 + 40) )
          v47 = v45 - v46;
        v48 = v133;
        v49 = v45 - v137;
        if ( v132 > v45 - v137 )
          v48 = v135;
        _BitScanReverse(&v50, v122);
        v51 = v50 ^ 0x1F;
        if ( v138 + v137 - v45 > 2 && v137 <= v47 )
        {
          v52 = v49 + v48;
          if ( *(_DWORD *)v52 == *(_DWORD *)(v42 + 1) )
          {
            v99 = v132 <= v49;
            v100 = (char *)v125;
            if ( !v99 )
              v100 = v143;
            v101 = sub_93A7C0((char *)(v42 + 5), (_QWORD *)(v52 + 4), v125, v100, v142);
            v43 = (_QWORD *)(v42 + 1);
            v102 = v101 + 4;
            if ( 3 * (int)v102 > (int)(v51 + 3 * v127 - 30) && v102 > 3 )
            {
              v44 = v102;
              v130 = v42 + 1;
              v51 = 31;
              v127 = v102;
              v136 = 1;
              v122 = 1;
            }
          }
        }
      }
      else
      {
        v51 = 32;
        v136 = 0;
      }
      v146 = v43;
      v149[0] = 999999999;
      if ( v9 == 5 )
      {
        if ( v131 == 5 )
        {
          v53 = sub_92C940(v41, v43, v125, v149);
          v54 = v146;
        }
        else
        {
          v53 = v131 == 6 ? sub_92D620(v41, v43, v125, v149) : sub_9441C0(v41, v43, v125, v149);
          v54 = v146;
        }
      }
      else if ( v9 == 6 )
      {
        if ( v131 == 5 )
        {
          v53 = sub_92C2A0(v41, v43, v125, v149);
          v54 = v146;
        }
        else
        {
          v53 = v131 == 6 ? sub_92E420(v41, v43, v125, v149) : sub_944A40(v41, v43, v125, v149);
          v54 = v146;
        }
      }
      else if ( v131 == 5 )
      {
        v53 = sub_92CFE0(v41, v43, v125, v149);
        v54 = v146;
      }
      else
      {
        v53 = v131 == 6 ? sub_92DD50(v41, v43, v125, v149) : sub_9439C0(v41, v43, v125, v149);
        v54 = v146;
      }
      v55 = 4 * v44;
      _BitScanReverse(&v56, v149[0]);
      if ( (int)((v56 ^ 0x1F) + 4 * v53 - 31) <= (int)(v55 + v51 - 31 + 4) || v53 <= 3 )
        break;
      ++v120;
      v42 = (unsigned __int64)v54;
      v122 = v149[0];
      v127 = v53;
LABEL_66:
      v130 = v42;
      if ( v124 <= v42 )
      {
        v6 = v41;
        v57 = v127;
        v136 = v122;
        if ( v122 <= 3 )
          goto LABEL_68;
        goto LABEL_135;
      }
    }
    if ( v124 > (unsigned __int64)v54 )
    {
      v120 += 2;
      if ( v122 )
      {
        v75 = *(_DWORD *)(v41 + 28);
        v76 = v120 - v75;
        if ( v139 < v120 - v75 )
          v75 = v120 - v139;
        if ( !*(_DWORD *)(v41 + 40) )
          v76 = v120 - v75;
        v77 = v133;
        v78 = v120 - v137;
        if ( v132 > v120 - v137 )
          v77 = v135;
        if ( v137 + v138 - v120 > 2 && v137 <= v76 )
        {
          v79 = v78 + v77;
          if ( *(_DWORD *)v79 == *(_DWORD *)(v42 + 2) )
          {
            v99 = v132 <= v78;
            v116 = (char *)v125;
            if ( !v99 )
              v116 = v143;
            v117 = sub_93A7C0((char *)(v42 + 6), (_QWORD *)(v79 + 4), v125, v116, v142) + 4;
            if ( 4 * (int)v117 > (int)(v55 + v51 - 31 + 1) && v117 > 3 )
            {
              v55 = 4 * v117;
              v130 = v42 + 2;
              v51 = 31;
              v127 = v117;
              v136 = 1;
              v122 = 1;
            }
          }
        }
      }
      else
      {
        v51 = 32;
        v136 = 0;
      }
      v80 = (_QWORD *)(v42 + 2);
      v149[0] = 999999999;
      if ( v9 == 5 )
      {
        if ( v131 == 5 )
          v81 = sub_92C940(v41, v80, v125, v149);
        else
          v81 = v131 == 6 ? sub_92D620(v41, v80, v125, v149) : sub_9441C0(v41, v80, v125, v149);
      }
      else if ( v9 == 6 )
      {
        if ( v131 == 5 )
          v81 = sub_92C2A0(v41, v80, v125, v149);
        else
          v81 = v131 == 6 ? sub_92E420(v41, v80, v125, v149) : sub_944A40(v41, v80, v125, v149);
      }
      else if ( v131 == 5 )
      {
        v81 = sub_92CFE0(v41, v80, v125, v149);
      }
      else
      {
        v81 = v131 == 6 ? sub_92DD50(v41, v80, v125, v149) : sub_9439C0(v41, v80, v125, v149);
      }
      _BitScanReverse(&v82, v149[0]);
      if ( (int)((v82 ^ 0x1F) + 4 * v81 - 31) > (int)(v55 + v51 - 24) && v81 > 3 )
      {
        v122 = v149[0];
        v42 += 2LL;
        v127 = v81;
        goto LABEL_66;
      }
    }
    v57 = v127;
    v6 = v41;
    if ( v122 <= 3 )
      goto LABEL_68;
LABEL_135:
    v92 = (unsigned int)(v130 - v133 - v136 + 3);
    if ( v132 <= (unsigned int)v92 )
    {
      v94 = v133 + v92;
      v93 = v142;
    }
    else
    {
      v93 = v148;
      v94 = v135 + v92;
    }
    if ( (unsigned __int64)v93 < v94 && (unsigned __int64)v140 < v130 && *(_BYTE *)(v94 - 1) == *(_BYTE *)(v130 - 1) )
    {
      v95 = v130;
      do
      {
        --v95;
        --v94;
        v96 = v130 + v57 - v95;
      }
      while ( (unsigned __int64)v140 < v95 && v94 > (unsigned __int64)v93 && *(_BYTE *)(v95 - 1) == *(_BYTE *)(v94 - 1) );
    }
    else
    {
      v96 = v57;
      v95 = v130;
    }
    v130 = v95;
    v57 = v96;
    v144 = v137;
    v137 = v136 - 3;
LABEL_68:
    v58 = v130 - (_QWORD)v140;
    v59 = *(__m128i **)(a2 + 24);
    if ( v130 > (unsigned __int64)v141 )
    {
      sub_92B710(v59, v140, v130, v141);
LABEL_156:
      *(_QWORD *)(a2 + 24) += v58;
      v60 = *(_QWORD *)(a2 + 8);
      if ( v58 > 0xFFFF )
      {
        v98 = v60 - *(_QWORD *)a2;
        *(_DWORD *)(a2 + 72) = 1;
        *(_DWORD *)(a2 + 76) = v98 >> 3;
      }
      goto LABEL_71;
    }
    *v59 = _mm_loadu_si128(v140);
    if ( v58 > 0x10 )
    {
      v111 = *(__m128i **)(a2 + 24);
      v111[1] = _mm_loadu_si128(v140 + 1);
      if ( (__int64)(v58 - 16) > 16 )
      {
        v112 = &v111->m128i_i8[v58];
        v113 = v111 + 2;
        v114 = v140 + 2;
        do
        {
          v115 = _mm_loadu_si128(v114);
          v113 += 2;
          v114 += 2;
          v113[-2] = v115;
          v113[-1] = _mm_loadu_si128(v114 - 1);
        }
        while ( v112 > (char *)v113 );
      }
      goto LABEL_156;
    }
    *(_QWORD *)(a2 + 24) += v58;
    v60 = *(_QWORD *)(a2 + 8);
LABEL_71:
    *(_WORD *)(v60 + 4) = v58;
    **(_DWORD **)(a2 + 8) = v136;
    v61 = *(_QWORD *)(a2 + 8);
    if ( v57 - 3 > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v61 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v61 + 6) = v57 - 3;
    *(_QWORD *)(a2 + 8) += 8LL;
    v22 = v57 + v130;
    if ( *(_DWORD *)(v6 + 300) )
    {
      v62 = *(_QWORD *)(v6 + 112);
      v63 = *(_QWORD *)(v6 + 56);
      v64 = *(unsigned int *)(v6 + 44);
      v65 = (_QWORD *)(v133 + v64);
      if ( v124 >= v133 + v64 )
      {
        v66 = v124 - (_DWORD)v65 + 1;
        if ( v66 > 8 )
          v66 = 8;
        v67 = v64 + v66;
        if ( (unsigned int)v64 < v67 )
        {
          v68 = *(_DWORD *)(v6 + 52) + 8;
          v69 = *(_QWORD *)(v6 + 96);
          v70 = 64 - v68;
          v128 = v22;
          v123 = 32 - v68;
          do
          {
            if ( v9 == 5 )
            {
              v71 = (v69 ^ (0xCF1BBCDCBB000000LL * *v65)) >> v70;
            }
            else if ( v9 == 6 )
            {
              v71 = (v69 ^ (0xCF1BBCDCBF9B0000LL * *v65)) >> v70;
            }
            else
            {
              LODWORD(v71) = ((unsigned int)v69 ^ (-1640531535 * *(_DWORD *)v65)) >> v123;
            }
            v72 = (unsigned int)v71 >> 8 << v131;
            v73 = (const char *)(v63 + v72);
            _mm_prefetch((const char *)(v62 + 4 * v72), 1);
            if ( v145 <= 4 )
            {
              _mm_prefetch(v73, 1);
            }
            else
            {
              _mm_prefetch((const char *)(v62 + 4 * v72 + 64), 1);
              _mm_prefetch(v73, 1);
              if ( v145 != 5 )
                _mm_prefetch((const char *)(v63 + v72 + 32), 1);
            }
            v74 = v64;
            LODWORD(v64) = v64 + 1;
            v65 = (_QWORD *)((char *)v65 + 1);
            *(_DWORD *)(v6 + 4LL * (v74 & 7) + 64) = v71;
          }
          while ( v67 != (_DWORD)v64 );
          v22 = v128;
        }
      }
      *(_DWORD *)(v6 + 300) = 0;
    }
    if ( v124 < v22 )
    {
LABEL_122:
      v140 = (const __m128i *)v22;
    }
    else
    {
      v83 = v144;
      while ( 1 )
      {
        v84 = *(_DWORD *)(v6 + 28);
        v85 = v22 - v133;
        v86 = v22 - v133 - v84;
        if ( v139 < v86 )
          v84 = v22 - v133 - v139;
        v87 = v85 - v84;
        v88 = v133;
        if ( !*(_DWORD *)(v6 + 40) )
          v86 = v87;
        v89 = v22 - v133 - v83;
        if ( v132 > v89 )
          v88 = v135;
        v90 = v89 + v88;
        if ( v83 + v138 - v85 <= 2 || v83 > v86 || *(_DWORD *)v90 != *(_DWORD *)v22 )
        {
          v144 = v83;
          goto LABEL_122;
        }
        v103 = (char *)v125;
        if ( v132 > v89 )
          v103 = v143;
        v104 = sub_93A7C0((char *)(v22 + 4), (_QWORD *)(v90 + 4), v125, v103, v142);
        v105 = *(__m128i **)(a2 + 24);
        v106 = v104;
        v107 = v104 + 4;
        if ( (unsigned __int64)v141 < v22 )
          sub_92B710(v105, (const __m128i *)v22, v22, v141);
        else
          *v105 = _mm_loadu_si128((const __m128i *)v22);
        v108 = v106 + 1;
        *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
        **(_DWORD **)(a2 + 8) = 1;
        v109 = *(_QWORD *)(a2 + 8);
        if ( v108 > 0xFFFF )
        {
          *(_DWORD *)(a2 + 72) = 2;
          *(_DWORD *)(a2 + 76) = (v109 - *(_QWORD *)a2) >> 3;
        }
        *(_WORD *)(v109 + 6) = v108;
        v22 += v107;
        *(_QWORD *)(a2 + 8) += 8LL;
        if ( v124 < v22 )
          break;
        v110 = v83;
        v83 = v137;
        v137 = v110;
      }
      v118 = v137;
      v140 = (const __m128i *)v22;
      v137 = v83;
      v144 = v118;
    }
  }
  while ( v124 > v22 );
LABEL_124:
  *a3 = v137;
  a3[1] = v144;
  return v125 - (_QWORD)v140;
}
