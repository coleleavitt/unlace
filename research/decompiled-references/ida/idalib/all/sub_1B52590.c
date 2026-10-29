__int64 __fastcall sub_1B52590(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  _QWORD *v6; // rax
  int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // esi
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // r12
  __int64 *v23; // r14
  __int64 *v24; // r13
  _QWORD *v25; // rax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // esi
  __int64 v30; // rax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r13
  void **v42; // r15
  void **v43; // r12
  __int64 v44; // r13
  __int64 v45; // r12
  __int64 v46; // rax
  int v47; // edx
  int v48; // edx
  _QWORD *v49; // rax
  int v50; // edx
  unsigned int v51; // eax
  int v52; // eax
  int v53; // esi
  __int64 *v54; // rdx
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // r12
  __int64 v66; // rsi
  _QWORD *v67; // r13
  _QWORD *v68; // rdi
  bool v69; // zf
  __int64 v70; // rax
  int v71; // edx
  int v72; // edx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rax
  int v76; // edx
  int v77; // edx
  __int64 v78; // rax
  int v79; // edx
  int v80; // edx
  __int64 v81; // rdi
  __int64 v82; // rax
  int v83; // edx
  int v84; // edx
  __int64 v85; // rax
  int v86; // edx
  int v87; // edx
  __m128i v89; // xmm6
  __m128i v90; // xmm3
  __int64 v91; // rcx
  bool v92; // di
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // xmm6_8^8
  __m128i v96; // xmm7
  __int64 v97; // rdi
  __m128i v98; // xmm6
  __m128i v99; // xmm7
  __int64 v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // rax
  bool v103; // dl
  __int64 v104; // rcx
  __m128i v105; // xmm1
  __int64 v106; // rax
  bool v107; // dl
  __int64 v108; // rcx
  __m128i v109; // xmm2
  __int64 v110; // rax
  bool v111; // dl
  __int64 v112; // rcx
  __m128i v113; // xmm7
  __int64 v114; // rax
  bool v115; // dl
  __int64 v116; // rcx
  __m128i v117; // xmm3
  __m128i v118; // xmm5
  __int64 v119; // rcx
  bool v120; // di
  __int64 v121; // rsi
  int v122; // r9d
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // xmm2_8^8
  __int64 v127; // rdx
  __m128i v128; // xmm1
  __m128i v129; // xmm2
  __int64 v130; // xmm1_8^8
  __int64 v131; // rdx
  __m128i v132; // xmm2
  __m128i v133; // xmm1
  __int64 v134; // xmm5_8^8
  __int64 v135; // rdx
  __m128i v136; // xmm0
  __m128i v137; // xmm6
  __int64 v138; // xmm7_8^8
  __int64 v139; // rdx
  __m128i v140; // xmm3
  __m128i v141; // xmm4
  __m128i v142; // [rsp+0h] [rbp-68h] BYREF
  __m128i v143; // [rsp+10h] [rbp-58h]
  __int64 v144; // [rsp+20h] [rbp-48h]

  v2 = a2;
  v3 = a1;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 8), 40LL * *(unsigned int *)(a1 + 16), 8);
  v6 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = 1;
  if ( a1 + 328 == a1 + 8 )
  {
    v7 = 0;
  }
  else
  {
    do
    {
      *v6 = -4096;
      v6 += 5;
    }
    while ( (_QWORD *)(a1 + 328) != v6 );
    v7 = *(_DWORD *)a1 >> 1;
  }
  v8 = *(_DWORD *)a2 & 0xFFFFFFFE;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 1 | (2 * v7);
  *(_DWORD *)a1 = v8 | *(_DWORD *)a1 & 1;
  v9 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v9;
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v94 = *(_QWORD *)(a1 + 8);
      v22 = (__int64 *)(a1 + 328);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = v94;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 16) = v10;
      goto LABEL_36;
    }
    v11 = (__int64 *)(a1 + 8);
    v12 = (__int64 *)(a2 + 8);
    v2 = a1;
    v3 = a2;
    goto LABEL_11;
  }
  v11 = (__int64 *)(a2 + 8);
  v12 = (__int64 *)(a1 + 8);
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v10 = *(_DWORD *)(a2 + 16);
LABEL_11:
    *(_BYTE *)v2 |= 1u;
    v13 = *v12;
    v14 = *(_QWORD *)(v2 + 8);
    *v11 = *v12;
    if ( v13 != -8192 && v13 != -4096 )
    {
      *(__m128i *)(v11 + 1) = _mm_loadu_si128((const __m128i *)(v12 + 1));
      *(__m128i *)(v11 + 3) = _mm_loadu_si128((const __m128i *)(v12 + 3));
    }
    v15 = v12[5];
    v11[5] = v15;
    if ( v15 != -8192 && v15 != -4096 )
    {
      *((__m128i *)v11 + 3) = _mm_loadu_si128((const __m128i *)v12 + 3);
      *((__m128i *)v11 + 4) = _mm_loadu_si128((const __m128i *)v12 + 4);
    }
    v16 = v12[10];
    v11[10] = v16;
    if ( v16 != -8192 && v16 != -4096 )
    {
      *(__m128i *)(v11 + 11) = _mm_loadu_si128((const __m128i *)(v12 + 11));
      *(__m128i *)(v11 + 13) = _mm_loadu_si128((const __m128i *)(v12 + 13));
    }
    v17 = v12[15];
    v11[15] = v17;
    if ( v17 != -8192 && v17 != -4096 )
    {
      *((__m128i *)v11 + 8) = _mm_loadu_si128((const __m128i *)v12 + 8);
      *((__m128i *)v11 + 9) = _mm_loadu_si128((const __m128i *)v12 + 9);
    }
    v18 = v12[20];
    v11[20] = v18;
    if ( v18 != -8192 && v18 != -4096 )
    {
      *(__m128i *)(v11 + 21) = _mm_loadu_si128((const __m128i *)(v12 + 21));
      *(__m128i *)(v11 + 23) = _mm_loadu_si128((const __m128i *)(v12 + 23));
    }
    v19 = v12[25];
    v11[25] = v19;
    if ( v19 != -8192 && v19 != -4096 )
    {
      *((__m128i *)v11 + 13) = _mm_loadu_si128((const __m128i *)v12 + 13);
      *((__m128i *)v11 + 14) = _mm_loadu_si128((const __m128i *)v12 + 14);
    }
    v20 = v12[30];
    v11[30] = v20;
    if ( v20 != -8192 && v20 != -4096 )
    {
      *(__m128i *)(v11 + 31) = _mm_loadu_si128((const __m128i *)(v12 + 31));
      *(__m128i *)(v11 + 33) = _mm_loadu_si128((const __m128i *)(v12 + 33));
    }
    v21 = v12[35];
    v11[35] = v21;
    if ( v21 != -8192 && v21 != -4096 )
    {
      *((__m128i *)v11 + 18) = _mm_loadu_si128((const __m128i *)v12 + 18);
      *((__m128i *)v11 + 19) = _mm_loadu_si128((const __m128i *)v12 + 19);
    }
    *(_BYTE *)v3 &= ~1u;
    *(_QWORD *)(v3 + 8) = v14;
    *(_DWORD *)(v3 + 16) = v10;
    v22 = (__int64 *)(a1 + 328);
    goto LABEL_36;
  }
  v22 = (__int64 *)(a1 + 328);
  do
  {
    v91 = *v12;
    v92 = *v12 != -8192 && *v12 != -4096;
    v93 = *v11;
    if ( *v11 == -4096 || v93 == -8192 )
    {
      *v12 = v93;
      *v11 = v91;
      if ( v92 )
      {
        *(__m128i *)(v11 + 1) = _mm_loadu_si128((const __m128i *)(v12 + 1));
        *(__m128i *)(v11 + 3) = _mm_loadu_si128((const __m128i *)(v12 + 3));
      }
    }
    else if ( v92 )
    {
      v95 = _mm_loadu_si128((const __m128i *)v12).m128i_i64[1];
      v96 = _mm_loadu_si128((const __m128i *)v12 + 1);
      *v12 = v93;
      v97 = v12[4];
      v142.m128i_i64[1] = v95;
      v98 = _mm_loadu_si128((const __m128i *)(v11 + 1));
      v143 = v96;
      v99 = _mm_loadu_si128((const __m128i *)&v142.m128i_u64[1]);
      *(__m128i *)(v12 + 1) = v98;
      v100 = v11[3];
      v144 = v97;
      v12[3] = v100;
      *((_BYTE *)v12 + 32) = *((_BYTE *)v11 + 32);
      *v11 = v91;
      v101 = v143.m128i_i64[1];
      *(__m128i *)(v11 + 1) = v99;
      v11[3] = v101;
      *((_BYTE *)v11 + 32) = v97;
    }
    else
    {
      *v12 = v93;
      v90 = _mm_loadu_si128((const __m128i *)(v11 + 1));
      *v11 = v91;
      *(__m128i *)(v12 + 1) = v90;
      *(__m128i *)(v12 + 3) = _mm_loadu_si128((const __m128i *)(v11 + 3));
    }
    v12 += 5;
    v11 += 5;
  }
  while ( v22 != v12 );
LABEL_36:
  v23 = (__int64 *)(a2 + 328);
  v24 = v22;
  if ( (*(_BYTE *)(a1 + 328) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 336), 24LL * *(unsigned int *)(a1 + 344), 8);
  v25 = (_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 328) = 1;
  if ( a1 + 432 == a1 + 336 )
  {
    v26 = 0;
  }
  else
  {
    do
    {
      *v25 = -4096;
      v25 += 3;
    }
    while ( (_QWORD *)(a1 + 432) != v25 );
    v26 = *(_DWORD *)(a1 + 328) >> 1;
  }
  v27 = *(_DWORD *)(a2 + 328) & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 328) = *(_DWORD *)(a2 + 328) & 1 | (2 * v26);
  *(_DWORD *)(a1 + 328) = v27 | *(_DWORD *)(a1 + 328) & 1;
  v28 = *(_DWORD *)(a1 + 332);
  *(_DWORD *)(a1 + 332) = *(_DWORD *)(a2 + 332);
  *(_DWORD *)(a2 + 332) = v28;
  if ( (*(_BYTE *)(a1 + 328) & 1) == 0 )
  {
    v29 = *(_DWORD *)(a1 + 344);
    if ( (*(_BYTE *)(a2 + 328) & 1) == 0 )
    {
      v125 = *(_QWORD *)(a1 + 336);
      *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
      *(_QWORD *)(a2 + 336) = v125;
      *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 344);
      *(_DWORD *)(a2 + 344) = v29;
      goto LABEL_57;
    }
    v24 = (__int64 *)(a2 + 328);
    v30 = a1 + 336;
    v23 = v22;
    v31 = (__int64 *)(a2 + 336);
    goto LABEL_44;
  }
  v30 = a2 + 336;
  v31 = (__int64 *)(a1 + 336);
  if ( (*(_BYTE *)(a2 + 328) & 1) == 0 )
  {
    v29 = *(_DWORD *)(a2 + 344);
LABEL_44:
    *(_BYTE *)v23 |= 1u;
    v32 = *v31;
    v33 = v23[1];
    *(_QWORD *)v30 = *v31;
    if ( v32 != -4096 && v32 != -8192 )
      *(__m128i *)(v30 + 8) = _mm_loadu_si128((const __m128i *)(v31 + 1));
    v34 = v31[3];
    *(_QWORD *)(v30 + 24) = v34;
    if ( v34 != -8192 && v34 != -4096 )
      *(__m128i *)(v30 + 32) = _mm_loadu_si128((const __m128i *)v31 + 2);
    v35 = v31[6];
    *(_QWORD *)(v30 + 48) = v35;
    if ( v35 != -8192 && v35 != -4096 )
      *(__m128i *)(v30 + 56) = _mm_loadu_si128((const __m128i *)(v31 + 7));
    v36 = v31[9];
    *(_QWORD *)(v30 + 72) = v36;
    if ( v36 != -8192 && v36 != -4096 )
      *(__m128i *)(v30 + 80) = _mm_loadu_si128((const __m128i *)v31 + 5);
    *(_BYTE *)v24 &= ~1u;
    v24[1] = v33;
    *((_DWORD *)v24 + 4) = v29;
    goto LABEL_57;
  }
  v102 = *(_QWORD *)(a1 + 336);
  v103 = v102 != -8192 && v102 != -4096;
  v104 = *(_QWORD *)(a2 + 336);
  if ( v104 == -4096 || v104 == -8192 )
  {
    *(_QWORD *)(a1 + 336) = v104;
    *(_QWORD *)(a2 + 336) = v102;
    if ( v103 )
      *(__m128i *)(a2 + 344) = _mm_loadu_si128((const __m128i *)(a1 + 344));
  }
  else if ( v103 )
  {
    v130 = _mm_loadu_si128((const __m128i *)(a1 + 336)).m128i_i64[1];
    v131 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 336) = v104;
    v132 = _mm_loadu_si128((const __m128i *)(a2 + 344));
    v142.m128i_i64[1] = v130;
    v143.m128i_i64[0] = v131;
    v133 = _mm_loadu_si128((const __m128i *)&v142.m128i_u64[1]);
    *(__m128i *)(a1 + 344) = v132;
    *(_QWORD *)(a2 + 336) = v102;
    *(__m128i *)(a2 + 344) = v133;
  }
  else
  {
    *(_QWORD *)(a1 + 336) = v104;
    v105 = _mm_loadu_si128((const __m128i *)(a2 + 344));
    *(_QWORD *)(a2 + 336) = v102;
    *(__m128i *)(a1 + 344) = v105;
  }
  v106 = *(_QWORD *)(a1 + 360);
  v107 = v106 != -8192 && v106 != -4096;
  v108 = *(_QWORD *)(a2 + 360);
  if ( v108 == -4096 || v108 == -8192 )
  {
    *(_QWORD *)(a1 + 360) = v108;
    *(_QWORD *)(a2 + 360) = v106;
    if ( v107 )
      *(__m128i *)(a2 + 368) = _mm_loadu_si128((const __m128i *)(a1 + 368));
  }
  else if ( v107 )
  {
    v126 = _mm_loadu_si128((const __m128i *)(a1 + 360)).m128i_i64[1];
    v127 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 360) = v108;
    v128 = _mm_loadu_si128((const __m128i *)(a2 + 368));
    v142.m128i_i64[1] = v126;
    v143.m128i_i64[0] = v127;
    v129 = _mm_loadu_si128((const __m128i *)&v142.m128i_u64[1]);
    *(__m128i *)(a1 + 368) = v128;
    *(_QWORD *)(a2 + 360) = v106;
    *(__m128i *)(a2 + 368) = v129;
  }
  else
  {
    *(_QWORD *)(a1 + 360) = v108;
    v109 = _mm_loadu_si128((const __m128i *)(a2 + 368));
    *(_QWORD *)(a2 + 360) = v106;
    *(__m128i *)(a1 + 368) = v109;
  }
  v110 = *(_QWORD *)(a1 + 384);
  v111 = v110 != -8192 && v110 != -4096;
  v112 = *(_QWORD *)(a2 + 384);
  if ( v112 == -4096 || v112 == -8192 )
  {
    *(_QWORD *)(a1 + 384) = v112;
    *(_QWORD *)(a2 + 384) = v110;
    if ( v111 )
      *(__m128i *)(a2 + 392) = _mm_loadu_si128((const __m128i *)(a1 + 392));
  }
  else if ( v111 )
  {
    v138 = _mm_loadu_si128((const __m128i *)(a1 + 384)).m128i_i64[1];
    v139 = *(_QWORD *)(a1 + 400);
    *(_QWORD *)(a1 + 384) = v112;
    v140 = _mm_loadu_si128((const __m128i *)(a2 + 392));
    v142.m128i_i64[1] = v138;
    v143.m128i_i64[0] = v139;
    v141 = _mm_loadu_si128((const __m128i *)&v142.m128i_u64[1]);
    *(__m128i *)(a1 + 392) = v140;
    *(_QWORD *)(a2 + 384) = v110;
    *(__m128i *)(a2 + 392) = v141;
  }
  else
  {
    *(_QWORD *)(a1 + 384) = v112;
    v113 = _mm_loadu_si128((const __m128i *)(a2 + 392));
    *(_QWORD *)(a2 + 384) = v110;
    *(__m128i *)(a1 + 392) = v113;
  }
  v114 = *(_QWORD *)(a1 + 408);
  v115 = v114 != -8192 && v114 != -4096;
  v116 = *(_QWORD *)(a2 + 408);
  if ( v116 == -4096 || v116 == -8192 )
  {
    *(_QWORD *)(a1 + 408) = v116;
    *(_QWORD *)(a2 + 408) = v114;
    if ( v115 )
      *(__m128i *)(a2 + 416) = _mm_loadu_si128((const __m128i *)(a1 + 416));
  }
  else if ( v115 )
  {
    v134 = _mm_loadu_si128((const __m128i *)(a1 + 408)).m128i_i64[1];
    v135 = *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 408) = v116;
    v136 = _mm_loadu_si128((const __m128i *)(a2 + 416));
    v142.m128i_i64[1] = v134;
    v143.m128i_i64[0] = v135;
    v137 = _mm_loadu_si128((const __m128i *)&v142.m128i_u64[1]);
    *(__m128i *)(a1 + 416) = v136;
    *(_QWORD *)(a2 + 408) = v114;
    *(__m128i *)(a2 + 416) = v137;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = v116;
    v117 = _mm_loadu_si128((const __m128i *)(a2 + 416));
    *(_QWORD *)(a2 + 408) = v114;
    *(__m128i *)(a1 + 416) = v117;
  }
LABEL_57:
  if ( (*(_BYTE *)(a1 + 432) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 440), 16LL * *(unsigned int *)(a1 + 448), 8);
  v37 = (_QWORD *)(a1 + 440);
  for ( *(_QWORD *)(a1 + 432) = 1; (_QWORD *)(a1 + 568) != v37; v37 += 2 )
    *v37 = -4096;
  sub_1B51CC0(a1 + 432, a2 + 432);
  if ( (*(_BYTE *)(a1 + 568) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 576), 16LL * *(unsigned int *)(a1 + 584), 8);
  v38 = (_QWORD *)(a1 + 576);
  for ( *(_QWORD *)(a1 + 568) = 1; (_QWORD *)(a1 + 704) != v38; v38 += 2 )
    *v38 = -4096;
  sub_1B51CC0(a1 + 568, a2 + 568);
  v39 = *(unsigned int *)(a1 + 720);
  if ( (_DWORD)v39 )
  {
    v40 = *(_QWORD *)(a1 + 704);
    v41 = v40 + 1184 * v39;
    do
    {
      if ( *(_QWORD *)v40 != -4096 && *(_QWORD *)v40 != -8192 )
      {
        v42 = *(void ***)(v40 + 8);
        v43 = &v42[18 * *(unsigned int *)(v40 + 16)];
        if ( v42 != v43 )
        {
          do
          {
            while ( 1 )
            {
              v43 -= 18;
              if ( *v43 == v43 + 2 )
                break;
              free(*v43);
              if ( v42 == v43 )
                goto LABEL_72;
            }
          }
          while ( v42 != v43 );
LABEL_72:
          v43 = *(void ***)(v40 + 8);
        }
        if ( v43 != (void **)(v40 + 24) )
          free(v43);
      }
      v40 += 1184;
    }
    while ( v41 != v40 );
    v39 = *(unsigned int *)(a1 + 720);
  }
  v44 = a2 + 728;
  v45 = a1 + 728;
  operator delete(*(_QWORD *)(a1 + 704), 1184 * v39, 8);
  *(_QWORD *)(a1 + 704) = 0;
  v46 = *(_QWORD *)(a2 + 704);
  *(_QWORD *)(a1 + 712) = 0;
  *(_DWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 704) = v46;
  LODWORD(v46) = *(_DWORD *)(a2 + 712);
  *(_QWORD *)(a2 + 704) = 0;
  *(_DWORD *)(a1 + 712) = v46;
  v47 = *(_DWORD *)(a2 + 716);
  *(_DWORD *)(a2 + 712) = 0;
  LODWORD(v46) = *(_DWORD *)(a1 + 716);
  *(_DWORD *)(a1 + 716) = v47;
  v48 = *(_DWORD *)(a2 + 720);
  *(_DWORD *)(a2 + 716) = v46;
  LODWORD(v46) = *(_DWORD *)(a1 + 720);
  *(_DWORD *)(a1 + 720) = v48;
  *(_DWORD *)(a2 + 720) = v46;
  if ( (*(_BYTE *)(a1 + 728) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 736), 24LL * *(unsigned int *)(a1 + 744), 8);
  v49 = (_QWORD *)(a1 + 736);
  *(_QWORD *)(a1 + 728) = 1;
  if ( a1 + 928 == a1 + 736 )
  {
    v50 = 0;
  }
  else
  {
    do
    {
      *v49 = -4096;
      v49 += 3;
    }
    while ( (_QWORD *)(a1 + 928) != v49 );
    v50 = *(_DWORD *)(a1 + 728) >> 1;
  }
  v51 = *(_DWORD *)(a2 + 728) & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 728) = *(_DWORD *)(a2 + 728) & 1 | (2 * v50);
  *(_DWORD *)(a1 + 728) = v51 | *(_DWORD *)(a1 + 728) & 1;
  v52 = *(_DWORD *)(a1 + 732);
  *(_DWORD *)(a1 + 732) = *(_DWORD *)(a2 + 732);
  *(_DWORD *)(a2 + 732) = v52;
  if ( (*(_BYTE *)(a1 + 728) & 1) == 0 )
  {
    v53 = *(_DWORD *)(a1 + 744);
    if ( (*(_BYTE *)(a2 + 728) & 1) == 0 )
    {
      v124 = *(_QWORD *)(a1 + 736);
      *(_QWORD *)(a1 + 736) = *(_QWORD *)(a2 + 736);
      *(_QWORD *)(a2 + 736) = v124;
      *(_DWORD *)(a1 + 744) = *(_DWORD *)(a2 + 744);
      *(_DWORD *)(a2 + 744) = v53;
      goto LABEL_110;
    }
    v54 = (__int64 *)(a1 + 736);
    v44 = a1 + 728;
    v55 = (__int64 *)(a2 + 736);
    v45 = a2 + 728;
    goto LABEL_85;
  }
  v54 = (__int64 *)(a2 + 736);
  v55 = (__int64 *)(a1 + 736);
  if ( (*(_BYTE *)(a2 + 728) & 1) == 0 )
  {
    v53 = *(_DWORD *)(a2 + 744);
LABEL_85:
    *(_BYTE *)v44 |= 1u;
    v56 = *v55;
    v57 = *(_QWORD *)(v44 + 8);
    *v54 = *v55;
    if ( v56 != -8192 && v56 != -4096 )
      *(__m128i *)(v54 + 1) = _mm_loadu_si128((const __m128i *)(v55 + 1));
    v58 = v55[3];
    v54[3] = v58;
    if ( v58 != -8192 && v58 != -4096 )
      *((__m128i *)v54 + 2) = _mm_loadu_si128((const __m128i *)v55 + 2);
    v59 = v55[6];
    v54[6] = v59;
    if ( v59 != -8192 && v59 != -4096 )
      *(__m128i *)(v54 + 7) = _mm_loadu_si128((const __m128i *)(v55 + 7));
    v60 = v55[9];
    v54[9] = v60;
    if ( v60 != -8192 && v60 != -4096 )
      *((__m128i *)v54 + 5) = _mm_loadu_si128((const __m128i *)v55 + 5);
    v61 = v55[12];
    v54[12] = v61;
    if ( v61 != -8192 && v61 != -4096 )
      *(__m128i *)(v54 + 13) = _mm_loadu_si128((const __m128i *)(v55 + 13));
    v62 = v55[15];
    v54[15] = v62;
    if ( v62 != -4096 && v62 != -8192 )
      *((__m128i *)v54 + 8) = _mm_loadu_si128((const __m128i *)v55 + 8);
    v63 = v55[18];
    v54[18] = v63;
    if ( v63 != -4096 && v63 != -8192 )
      *(__m128i *)(v54 + 19) = _mm_loadu_si128((const __m128i *)(v55 + 19));
    v64 = v55[21];
    v54[21] = v64;
    if ( v64 != -8192 && v64 != -4096 )
      *((__m128i *)v54 + 11) = _mm_loadu_si128((const __m128i *)v55 + 11);
    *(_BYTE *)v45 &= ~1u;
    *(_QWORD *)(v45 + 8) = v57;
    *(_DWORD *)(v45 + 16) = v53;
    goto LABEL_110;
  }
  do
  {
    v119 = *v55;
    v120 = *v55 != -4096 && *v55 != -8192;
    v121 = *v54;
    if ( *v54 == -4096 || v121 == -8192 )
    {
      *v55 = v121;
      *v54 = v119;
      if ( v120 )
        *(__m128i *)(v54 + 1) = _mm_loadu_si128((const __m128i *)(v55 + 1));
    }
    else if ( v120 )
    {
      v122 = *((_DWORD *)v55 + 2);
      v123 = v55[2];
      *v55 = v121;
      *((_DWORD *)v55 + 2) = *((_DWORD *)v54 + 2);
      v55[2] = v54[2];
      *v54 = v119;
      *((_DWORD *)v54 + 2) = v122;
      v54[2] = v123;
    }
    else
    {
      v118 = _mm_loadu_si128((const __m128i *)(v54 + 1));
      *v55 = v121;
      *v54 = v119;
      *(__m128i *)(v55 + 1) = v118;
    }
    v55 += 3;
    v54 += 3;
  }
  while ( v55 != (__int64 *)(a1 + 928) );
LABEL_110:
  v65 = *(_QWORD **)(a1 + 1032);
  *(_DWORD *)(a1 + 928) = *(_DWORD *)(a2 + 928);
  *(_DWORD *)(a1 + 932) = *(_DWORD *)(a2 + 932);
  *(__m128i *)(a1 + 936) = _mm_loadu_si128((const __m128i *)(a2 + 936));
  *(__m128i *)(a1 + 952) = _mm_loadu_si128((const __m128i *)(a2 + 952));
  *(_QWORD *)(a1 + 968) = *(_QWORD *)(a2 + 968);
  *(_DWORD *)(a1 + 976) = *(_DWORD *)(a2 + 976);
  *(__m128i *)(a1 + 984) = _mm_loadu_si128((const __m128i *)(a2 + 984));
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a2 + 1000);
  *(_QWORD *)(a1 + 1008) = *(_QWORD *)(a2 + 1008);
  *(_QWORD *)(a1 + 1016) = *(_QWORD *)(a2 + 1016);
  *(_DWORD *)(a1 + 1024) = *(_DWORD *)(a2 + 1024);
  v66 = 88LL * *(unsigned int *)(a1 + 1048);
  if ( *(_DWORD *)(a1 + 1048) )
  {
    v67 = &v65[11 * *(unsigned int *)(a1 + 1048)];
    do
    {
      if ( *v65 != -4096 && *v65 != -8192 )
      {
        v68 = (_QWORD *)v65[1];
        if ( v68 != v65 + 3 )
          free(v68);
      }
      v65 += 11;
    }
    while ( v67 != v65 );
    v65 = *(_QWORD **)(a1 + 1032);
    v66 = 88LL * *(unsigned int *)(a1 + 1048);
  }
  operator delete(v65, v66, 8);
  v69 = *(_BYTE *)(a1 + 1072) == 0;
  *(_QWORD *)(a1 + 1032) = 0;
  v70 = *(_QWORD *)(a2 + 1032);
  *(_QWORD *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1032) = v70;
  LODWORD(v70) = *(_DWORD *)(a2 + 1040);
  *(_QWORD *)(a2 + 1032) = 0;
  *(_DWORD *)(a1 + 1040) = v70;
  v71 = *(_DWORD *)(a2 + 1044);
  *(_DWORD *)(a2 + 1040) = 0;
  LODWORD(v70) = *(_DWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 1044) = v71;
  v72 = *(_DWORD *)(a2 + 1048);
  *(_DWORD *)(a2 + 1044) = v70;
  LODWORD(v70) = *(_DWORD *)(a1 + 1048);
  *(_DWORD *)(a1 + 1048) = v72;
  *(_DWORD *)(a2 + 1048) = v70;
  if ( v69 )
  {
    if ( *(_BYTE *)(a2 + 1072) )
    {
      v89 = _mm_loadu_si128((const __m128i *)(a2 + 1056));
      *(_BYTE *)(a1 + 1072) = 1;
      *(__m128i *)(a1 + 1056) = v89;
    }
  }
  else if ( *(_BYTE *)(a2 + 1072) )
  {
    *(__m128i *)(a1 + 1056) = _mm_loadu_si128((const __m128i *)(a2 + 1056));
  }
  else
  {
    *(_BYTE *)(a1 + 1072) = 0;
  }
  v73 = *(unsigned int *)(a1 + 1152);
  v74 = *(_QWORD *)(a1 + 1136);
  *(_BYTE *)(a1 + 1080) = *(_BYTE *)(a2 + 1080);
  *(_DWORD *)(a1 + 1084) = *(_DWORD *)(a2 + 1084);
  *(_BYTE *)(a1 + 1088) = *(_BYTE *)(a2 + 1088);
  *(_QWORD *)(a1 + 1096) = *(_QWORD *)(a2 + 1096);
  *(_BYTE *)(a1 + 1104) = *(_BYTE *)(a2 + 1104);
  *(_BYTE *)(a1 + 1105) = *(_BYTE *)(a2 + 1105);
  *(_BYTE *)(a1 + 1106) = *(_BYTE *)(a2 + 1106);
  *(_BYTE *)(a1 + 1107) = *(_BYTE *)(a2 + 1107);
  *(_BYTE *)(a1 + 1108) = *(_BYTE *)(a2 + 1108);
  *(_DWORD *)(a1 + 1112) = *(_DWORD *)(a2 + 1112);
  *(_DWORD *)(a1 + 1116) = *(_DWORD *)(a2 + 1116);
  *(_DWORD *)(a1 + 1120) = *(_DWORD *)(a2 + 1120);
  *(_QWORD *)(a1 + 1128) = *(_QWORD *)(a2 + 1128);
  operator delete(v74, 8 * v73, 8);
  *(_QWORD *)(a1 + 1136) = 0;
  v75 = *(_QWORD *)(a2 + 1136);
  *(_QWORD *)(a1 + 1144) = 0;
  *(_DWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1136) = v75;
  LODWORD(v75) = *(_DWORD *)(a2 + 1144);
  *(_QWORD *)(a2 + 1136) = 0;
  *(_DWORD *)(a1 + 1144) = v75;
  v76 = *(_DWORD *)(a2 + 1148);
  *(_DWORD *)(a2 + 1144) = 0;
  LODWORD(v75) = *(_DWORD *)(a1 + 1148);
  *(_DWORD *)(a1 + 1148) = v76;
  v77 = *(_DWORD *)(a2 + 1152);
  *(_DWORD *)(a2 + 1148) = v75;
  LODWORD(v75) = *(_DWORD *)(a1 + 1152);
  *(_DWORD *)(a1 + 1152) = v77;
  *(_DWORD *)(a2 + 1152) = v75;
  sub_1576230((char ***)(a1 + 1160), (char ***)(a2 + 1160));
  operator delete(*(_QWORD *)(a1 + 1208), 8LL * *(unsigned int *)(a1 + 1224), 8);
  *(_QWORD *)(a1 + 1208) = 0;
  v78 = *(_QWORD *)(a2 + 1208);
  *(_QWORD *)(a1 + 1216) = 0;
  *(_DWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1208) = v78;
  LODWORD(v78) = *(_DWORD *)(a2 + 1216);
  *(_QWORD *)(a2 + 1208) = 0;
  *(_DWORD *)(a1 + 1216) = v78;
  v79 = *(_DWORD *)(a2 + 1220);
  *(_DWORD *)(a2 + 1216) = 0;
  LODWORD(v78) = *(_DWORD *)(a1 + 1220);
  *(_DWORD *)(a1 + 1220) = v79;
  v80 = *(_DWORD *)(a2 + 1224);
  *(_DWORD *)(a2 + 1220) = v78;
  LODWORD(v78) = *(_DWORD *)(a1 + 1224);
  *(_DWORD *)(a1 + 1224) = v80;
  *(_DWORD *)(a2 + 1224) = v78;
  sub_1B52350((char ***)(a1 + 1232), (char ***)(a2 + 1232));
  operator delete(*(_QWORD *)(a1 + 1280), 8LL * *(unsigned int *)(a1 + 1296), 8);
  v81 = *(_QWORD *)(a1 + 1304);
  *(_QWORD *)(a1 + 1280) = 0;
  v82 = *(_QWORD *)(a2 + 1280);
  *(_QWORD *)(a1 + 1288) = 0;
  *(_DWORD *)(a1 + 1296) = 0;
  *(_QWORD *)(a1 + 1280) = v82;
  LODWORD(v82) = *(_DWORD *)(a2 + 1288);
  *(_QWORD *)(a2 + 1280) = 0;
  *(_DWORD *)(a1 + 1288) = v82;
  v83 = *(_DWORD *)(a2 + 1292);
  *(_DWORD *)(a2 + 1288) = 0;
  LODWORD(v82) = *(_DWORD *)(a1 + 1292);
  *(_DWORD *)(a1 + 1292) = v83;
  v84 = *(_DWORD *)(a2 + 1296);
  *(_DWORD *)(a2 + 1292) = v82;
  LODWORD(v82) = *(_DWORD *)(a1 + 1296);
  *(_DWORD *)(a1 + 1296) = v84;
  *(_DWORD *)(a2 + 1296) = v82;
  operator delete(v81, 16LL * *(unsigned int *)(a1 + 1320), 8);
  *(_QWORD *)(a1 + 1304) = 0;
  v85 = *(_QWORD *)(a2 + 1304);
  *(_QWORD *)(a1 + 1312) = 0;
  *(_DWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1304) = v85;
  LODWORD(v85) = *(_DWORD *)(a2 + 1312);
  *(_QWORD *)(a2 + 1304) = 0;
  *(_DWORD *)(a1 + 1312) = v85;
  v86 = *(_DWORD *)(a2 + 1316);
  *(_DWORD *)(a2 + 1312) = 0;
  LODWORD(v85) = *(_DWORD *)(a1 + 1316);
  *(_DWORD *)(a1 + 1316) = v86;
  v87 = *(_DWORD *)(a2 + 1320);
  *(_DWORD *)(a2 + 1316) = v85;
  LODWORD(v85) = *(_DWORD *)(a1 + 1320);
  *(_DWORD *)(a1 + 1320) = v87;
  *(_DWORD *)(a2 + 1320) = v85;
  sub_1AE6B10((char ***)(a1 + 1328), (char ***)(a2 + 1328));
  *(_QWORD *)(a1 + 1536) = *(_QWORD *)(a2 + 1536);
  sub_1B52470((char ***)(a1 + 1544), (char ***)(a2 + 1544));
  return a1;
}
