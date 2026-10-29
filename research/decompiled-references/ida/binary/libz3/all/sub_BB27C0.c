__int64 __fastcall sub_BB27C0(__int64 a1)
{
  unsigned int *v2; // rax
  int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  int i; // ebp
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rax
  void *v18; // rdi
  void **v19; // rbp
  void **v20; // r13
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // r13
  __int64 v26; // rsi
  bool v27; // zf
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char *v34; // r13
  __int64 v35; // rax
  __int64 v36; // rbp
  char *v37; // r12
  __int64 v38; // rdi
  char *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rbp
  char *v42; // r12
  __int64 v43; // rdi
  char *v44; // r13
  __int64 v45; // rax
  __int64 v46; // rbp
  char *v47; // r12
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  void (__fastcall *v61)(__int64, __int64, __int64); // rax
  void (__fastcall *v62)(__int64, __int64, __int64); // rax
  void (__fastcall *v63)(__int64, __int64, __int64); // rax
  void (__fastcall *v64)(__int64, __int64, __int64); // rax
  void (__fastcall *v65)(__int64, __int64, __int64); // rax
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  void *v73; // rdi
  __int64 *v74; // rdi
  __int64 *v75; // rcx
  __int64 *j; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rbp
  _QWORD *v84; // r13
  void (__fastcall ***v85)(_QWORD); // r12
  void *v86; // rdi
  void *v87; // rdi
  void *v88; // rdi
  void *v89; // rdi
  __int64 v90; // rax
  void *v91; // rdi
  __int64 *v92; // rdi
  __int64 *v93; // r12
  __int64 *v94; // rbp
  __int64 v95; // rsi
  __int64 *k; // rax
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 *v99; // rdx
  __int64 *v100; // rax
  int v101; // ecx
  unsigned int v102; // ebp
  __int64 v103; // r12
  __int64 *v104; // rax
  __int64 *v105; // rdi
  __int64 *v106; // r12
  __int64 *v107; // rbp
  __int64 v108; // rsi
  __int64 *m; // rax
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 *v112; // rdx
  __int64 *v113; // rax
  int v114; // ecx
  unsigned int v115; // ebp
  __int64 v116; // r12
  __int64 *v117; // rax
  void *v118; // rdi
  void *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  _QWORD *v129; // rbp
  unsigned int v130; // eax
  _QWORD *v131; // r12
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 *v140; // rbp
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 *v143; // r15
  __int64 v144; // rax
  __int64 *v145; // r12
  __int64 *v146; // r13
  __int64 *v147; // r14
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 *v150; // r13
  __int64 *v151; // r14
  __int64 v152; // rsi
  __int64 v153; // rdi
  __int64 v154; // rsi
  __int64 v155; // rdi
  __int64 v156; // rsi
  __int64 v157; // rdi
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 *v164; // r13
  __int64 v165; // rax
  __int64 *v166; // r12
  __int64 *v167; // rbp
  __int64 *v168; // r14
  __int64 v169; // rsi
  __int64 v170; // rdi
  __int64 *v171; // rbp
  __int64 *v172; // r14
  __int64 v173; // rsi
  __int64 v174; // rdi
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 result; // rax
  unsigned int v184; // esi
  unsigned int v185; // esi
  __int64 *v186; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_1C73CA0;
  *(_QWORD *)(a1 + 56) = off_1C73E58;
  v2 = *(unsigned int **)(a1 + 3952);
  if ( !v2 )
  {
    v4 = a1 + 3960;
    goto LABEL_12;
  }
  v3 = *(v2 - 1);
  v4 = a1 + 3960;
  if ( !v3 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 3944);
  v6 = *v2;
  v7 = 8 * v6;
  v8 = v5 + 8 * v6;
  if ( v5 )
  {
    v9 = 8LL * *(unsigned int *)(v5 - 4);
    v10 = v5 + v9;
    if ( v7 != v9 )
      goto LABEL_5;
    *(_DWORD *)(v5 - 4) = v6;
  }
  else
  {
    v10 = 0;
    if ( v7 )
    {
      do
      {
LABEL_5:
        v11 = *(_QWORD *)(v10 - 8);
        v10 -= 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      while ( v8 != v10 );
      v12 = *(_QWORD *)(a1 + 3944);
      v2 = *(unsigned int **)(a1 + 3952);
      if ( v12 )
        *(_DWORD *)(v12 - 4) = v6;
      if ( !v2 )
        goto LABEL_10;
    }
  }
  *(v2 - 1) = 0;
LABEL_10:
  v4 = a1 + 3960;
  for ( i = 0; i != v3; ++i )
    sub_180C2E0(a1 + 3960);
LABEL_12:
  v14 = *(_QWORD *)(a1 + 3944);
  if ( v14 )
  {
    v15 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    if ( v14 == v15 )
      goto LABEL_16;
    do
    {
      v16 = *(_QWORD *)(v15 - 8);
      v15 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    while ( v14 != v15 );
    v15 = *(_QWORD *)(a1 + 3944);
    if ( v15 )
LABEL_16:
      *(_DWORD *)(v15 - 4) = 0;
  }
  v17 = *(_QWORD *)(a1 + 4288);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(void **)(a1 + 4264);
  if ( v18 )
    sub_186B220(v18);
  v19 = *(void ***)(a1 + 4256);
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 == v20 )
      goto LABEL_27;
    do
    {
      if ( *v19 )
        sub_186B220(*v19);
      ++v19;
    }
    while ( v20 != v19 );
    v20 = *(void ***)(a1 + 4256);
    if ( v20 )
    {
LABEL_27:
      *((_DWORD *)v20 - 1) = 0;
      sub_186B220(v20 - 1);
    }
  }
  v21 = *(void **)(a1 + 4232);
  if ( v21 )
    sub_186B220(v21);
  v22 = *(void **)(a1 + 4200);
  if ( v22 )
    sub_186B220(v22);
  v23 = *(void **)(a1 + 4176);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(__int64 **)(a1 + 4144);
  if ( v24 )
  {
    v25 = &v24[2 * *((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v28 = *v24;
        v29 = *(_QWORD *)(a1 + 4136);
        if ( *v24 )
        {
          v27 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v27 )
          {
            sub_15D7BC0(v29, v28);
            v29 = *(_QWORD *)(a1 + 4136);
          }
        }
        v26 = v24[1];
        if ( v26 )
        {
          v27 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v27 )
            break;
        }
        v24 += 2;
        if ( v24 >= v25 )
          goto LABEL_44;
      }
      sub_15D7BC0(v29, v26);
      v24 += 2;
    }
    while ( v24 < v25 );
LABEL_44:
    v24 = *(__int64 **)(a1 + 4144);
    if ( v24 )
LABEL_45:
      sub_186B220(v24 - 1);
  }
  sub_2334C0((__int64 *)(a1 + 4120));
  sub_2334C0((__int64 *)(a1 + 4104));
  sub_2334C0((__int64 *)(a1 + 4088));
  sub_2334C0((__int64 *)(a1 + 4072));
  v30 = *(_QWORD *)(a1 + 4064);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 4056);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  sub_180C0E0(v4);
  v32 = *(_QWORD *)(a1 + 3952);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(_QWORD *)(a1 + 3944);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(char **)(a1 + 3808);
  if ( v34 )
  {
    v35 = *(unsigned int *)(a1 + 3816);
    if ( (_DWORD)v35 )
    {
      v36 = *(_QWORD *)(a1 + 3808);
      v37 = &v34[24 * v35];
      do
      {
        while ( 1 )
        {
          v38 = *(_QWORD *)(v36 + 16);
          if ( !v38 )
            break;
          v36 += 24;
          sub_186B220((void *)(v38 - 8));
          if ( v37 == (char *)v36 )
            goto LABEL_59;
        }
        v36 += 24;
      }
      while ( (char *)v36 != v37 );
    }
LABEL_59:
    sub_186B220(v34);
  }
  v39 = *(char **)(a1 + 3784);
  if ( v39 )
  {
    v40 = *(unsigned int *)(a1 + 3792);
    if ( (_DWORD)v40 )
    {
      v41 = *(_QWORD *)(a1 + 3784);
      v42 = &v39[24 * v40];
      do
      {
        while ( 1 )
        {
          v43 = *(_QWORD *)(v41 + 16);
          if ( !v43 )
            break;
          v41 += 24;
          sub_186B220((void *)(v43 - 8));
          if ( (char *)v41 == v42 )
            goto LABEL_65;
        }
        v41 += 24;
      }
      while ( (char *)v41 != v42 );
    }
LABEL_65:
    sub_186B220(v39);
  }
  v44 = *(char **)(a1 + 3760);
  if ( v44 )
  {
    v45 = *(unsigned int *)(a1 + 3768);
    if ( (_DWORD)v45 )
    {
      v46 = *(_QWORD *)(a1 + 3760);
      v47 = &v44[24 * v45];
      do
      {
        while ( 1 )
        {
          v48 = *(_QWORD *)(v46 + 16);
          if ( !v48 )
            break;
          v46 += 24;
          sub_186B220((void *)(v48 - 8));
          if ( (char *)v46 == v47 )
            goto LABEL_71;
        }
        v46 += 24;
      }
      while ( (char *)v46 != v47 );
    }
LABEL_71:
    sub_186B220(v44);
  }
  v49 = *(_QWORD *)(a1 + 3752);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = *(_QWORD *)(a1 + 3744);
  if ( v50 )
    sub_186B220((void *)(v50 - 8));
  v51 = *(_QWORD *)(a1 + 3736);
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  v52 = *(_QWORD *)(a1 + 3728);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = *(_QWORD *)(a1 + 3720);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = *(_QWORD *)(a1 + 3712);
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = *(_QWORD *)(a1 + 3704);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(_QWORD *)(a1 + 3696);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  sub_2334C0((__int64 *)(a1 + 3680));
  v57 = *(void **)(a1 + 3656);
  if ( v57 )
    sub_186B220(v57);
  v58 = *(_QWORD *)(a1 + 3648);
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = *(_QWORD *)(a1 + 3616);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  sub_2334C0((__int64 *)(a1 + 3600));
  sub_2334C0((__int64 *)(a1 + 3552));
  v60 = *(_QWORD *)(a1 + 3544);
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v61 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 3408);
  if ( v61 )
    v61(a1 + 3392, a1 + 3392, 3);
  v62 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 3376);
  if ( v62 )
    v62(a1 + 3360, a1 + 3360, 3);
  v63 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 3336);
  if ( v63 )
    v63(a1 + 3320, a1 + 3320, 3);
  v64 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 3304);
  if ( v64 )
    v64(a1 + 3288, a1 + 3288, 3);
  v65 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 3272);
  if ( v65 )
    v65(a1 + 3256, a1 + 3256, 3);
  v66 = *(void **)(a1 + 3232);
  if ( v66 )
    sub_186B220(v66);
  sub_2334C0((__int64 *)(a1 + 3216));
  sub_2334C0((__int64 *)(a1 + 3200));
  sub_2334C0((__int64 *)(a1 + 2968));
  v67 = *(_QWORD *)(a1 + 2960);
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  sub_2334C0((__int64 *)(a1 + 2816));
  v68 = *(_QWORD *)(a1 + 2808);
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  sub_2334C0((__int64 *)(a1 + 2464));
  v69 = *(_QWORD *)(a1 + 2456);
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  sub_2334C0((__int64 *)(a1 + 2312));
  v70 = *(_QWORD *)(a1 + 2304);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  sub_2334C0((__int64 *)(a1 + 1952));
  v71 = *(_QWORD *)(a1 + 1944);
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  sub_2334C0((__int64 *)(a1 + 1784));
  v72 = *(_QWORD *)(a1 + 1776);
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  sub_2334C0((__int64 *)(a1 + 1672));
  sub_2334C0((__int64 *)(a1 + 1656));
  sub_2334C0((__int64 *)(a1 + 1640));
  v73 = *(void **)(a1 + 1616);
  if ( v73 )
    sub_186B220(v73);
  sub_2334C0((__int64 *)(a1 + 1600));
  v74 = *(__int64 **)(a1 + 1448);
  v75 = &v74[*(unsigned int *)(a1 + 1456)];
  for ( j = v74; v75 != j; *(_BYTE *)(v77 + 6) &= ~1u )
    v77 = *j++;
  *(_DWORD *)(a1 + 1456) = 0;
  if ( v74 != (__int64 *)(a1 + 1464) && v74 )
    sub_186B220(v74);
  v78 = *(_QWORD *)(a1 + 1440);
  if ( v78 )
    sub_186B220((void *)(v78 - 8));
  v79 = *(_QWORD *)(a1 + 1432);
  if ( v79 )
    sub_186B220((void *)(v79 - 8));
  v80 = *(_QWORD *)(a1 + 1424);
  if ( v80 )
    sub_186B220((void *)(v80 - 8));
  v81 = *(_QWORD *)(a1 + 1416);
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  sub_2334C0((__int64 *)(a1 + 1312));
  v82 = *(_QWORD *)(a1 + 1304);
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  sub_14B63F0(a1 + 1208);
  sub_14B63F0(a1 + 1192);
  v83 = *(_QWORD **)(a1 + 1176);
  if ( v83 )
  {
    v84 = &v83[*((unsigned int *)v83 - 1)];
    if ( v83 == v84 )
      goto LABEL_143;
    do
    {
      v85 = (void (__fastcall ***)(_QWORD))*v83;
      if ( *v83 )
      {
        (**v85)(*v83);
        sub_186B220(v85);
      }
      ++v83;
    }
    while ( v84 != v83 );
    v84 = *(_QWORD **)(a1 + 1176);
    if ( v84 )
    {
LABEL_143:
      *((_DWORD *)v84 - 1) = 0;
      sub_186B220(v84 - 1);
    }
  }
  sub_2334C0((__int64 *)(a1 + 1160));
  v86 = *(void **)(a1 + 1136);
  if ( v86 )
    sub_186B220(v86);
  sub_2334C0((__int64 *)(a1 + 1120));
  v87 = *(void **)(a1 + 1096);
  if ( v87 )
    sub_186B220(v87);
  v88 = *(void **)(a1 + 1072);
  if ( v88 )
    sub_186B220(v88);
  sub_2334C0((__int64 *)(a1 + 1056));
  sub_2334C0((__int64 *)(a1 + 1040));
  v89 = *(void **)(a1 + 1008);
  if ( v89 )
    sub_186B220(v89);
  sub_2334C0((__int64 *)(a1 + 992));
  v90 = *(_QWORD *)(a1 + 984);
  if ( v90 )
    sub_186B220((void *)(v90 - 8));
  sub_2334C0((__int64 *)(a1 + 968));
  sub_2334C0((__int64 *)(a1 + 952));
  v91 = *(void **)(a1 + 928);
  if ( v91 )
    sub_186B220(v91);
  v92 = *(__int64 **)(a1 + 888);
  v93 = &v92[2 * *(unsigned int *)(a1 + 896)];
  if ( v92 != v93 )
  {
    v94 = *(__int64 **)(a1 + 888);
    while ( (unsigned __int64)*v94 <= 1 )
    {
      v94 += 2;
      if ( v93 == v94 )
        goto LABEL_170;
    }
    if ( v93 != v94 )
    {
      v95 = *v94;
      if ( *v94 )
        goto LABEL_167;
LABEL_162:
      for ( k = v94 + 2; v93 != v94 + 2; k = v94 + 2 )
      {
        while ( 1 )
        {
          v95 = *k;
          v94 = k;
          if ( (unsigned __int64)*k > 1 )
            break;
          k += 2;
          if ( v93 == k )
            goto LABEL_169;
        }
        if ( v93 == k )
          break;
LABEL_167:
        v97 = *(_QWORD *)(a1 + 880);
        v27 = (*(_DWORD *)(v95 + 8))-- == 1;
        if ( !v27 )
          goto LABEL_162;
        sub_15D7BC0(v97, v95);
      }
LABEL_169:
      v92 = *(__int64 **)(a1 + 888);
    }
  }
LABEL_170:
  if ( *(_DWORD *)(a1 + 900) || *(_DWORD *)(a1 + 904) )
  {
    v98 = *(unsigned int *)(a1 + 896);
    v99 = &v92[2 * v98];
    if ( v99 != v92 )
    {
      v100 = v92;
      v101 = 0;
      do
      {
        while ( *v100 )
        {
          *v100 = 0;
          v100 += 2;
          if ( v99 == v100 )
            goto LABEL_177;
        }
        v100 += 2;
        ++v101;
      }
      while ( v99 != v100 );
LABEL_177:
      if ( (unsigned int)v98 > 0x10 && 3 * (int)v98 < (unsigned int)(4 * v101) )
      {
        if ( v92 )
        {
          sub_186B220(v92);
          v102 = *(_DWORD *)(a1 + 896);
          *(_QWORD *)(a1 + 888) = 0;
          v102 >>= 1;
          *(_DWORD *)(a1 + 896) = v102;
          v103 = v102;
          v92 = (__int64 *)sub_186B270(16LL * v102);
          if ( !v102 )
          {
LABEL_183:
            *(_QWORD *)(a1 + 888) = v92;
            *(_QWORD *)(a1 + 900) = 0;
LABEL_184:
            sub_186B220(v92);
            goto LABEL_185;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 888) = 0;
          v185 = (unsigned int)v98 >> 1;
          v103 = v185;
          *(_DWORD *)(a1 + 896) = v185;
          v92 = (__int64 *)sub_186B270(16LL * v185);
        }
        v104 = v92;
        do
        {
          *v104 = 0;
          v104 += 2;
          *((_BYTE *)v104 - 8) = 0;
        }
        while ( v104 != &v92[2 * v103] );
        goto LABEL_183;
      }
    }
    *(_QWORD *)(a1 + 900) = 0;
  }
  if ( v92 )
    goto LABEL_184;
LABEL_185:
  v105 = *(__int64 **)(a1 + 856);
  v106 = &v105[2 * *(unsigned int *)(a1 + 864)];
  if ( v105 != v106 )
  {
    v107 = *(__int64 **)(a1 + 856);
    while ( (unsigned __int64)*v107 <= 1 )
    {
      v107 += 2;
      if ( v106 == v107 )
        goto LABEL_199;
    }
    if ( v107 != v106 )
    {
      v108 = *v107;
      if ( *v107 )
        goto LABEL_196;
LABEL_191:
      for ( m = v107 + 2; v106 != v107 + 2; m = v107 + 2 )
      {
        while ( 1 )
        {
          v108 = *m;
          v107 = m;
          if ( (unsigned __int64)*m > 1 )
            break;
          m += 2;
          if ( v106 == m )
            goto LABEL_198;
        }
        if ( m == v106 )
          break;
LABEL_196:
        v110 = *(_QWORD *)(a1 + 848);
        v27 = (*(_DWORD *)(v108 + 8))-- == 1;
        if ( !v27 )
          goto LABEL_191;
        sub_15D7BC0(v110, v108);
      }
LABEL_198:
      v105 = *(__int64 **)(a1 + 856);
    }
  }
LABEL_199:
  if ( *(_DWORD *)(a1 + 868) || *(_DWORD *)(a1 + 872) )
  {
    v111 = *(unsigned int *)(a1 + 864);
    v112 = &v105[2 * v111];
    if ( v112 != v105 )
    {
      v113 = v105;
      v114 = 0;
      do
      {
        while ( *v113 )
        {
          *v113 = 0;
          v113 += 2;
          if ( v112 == v113 )
            goto LABEL_206;
        }
        v113 += 2;
        ++v114;
      }
      while ( v112 != v113 );
LABEL_206:
      if ( (unsigned int)v111 > 0x10 && 3 * (int)v111 < (unsigned int)(4 * v114) )
      {
        if ( v105 )
        {
          sub_186B220(v105);
          v115 = *(_DWORD *)(a1 + 864);
          *(_QWORD *)(a1 + 856) = 0;
          v115 >>= 1;
          *(_DWORD *)(a1 + 864) = v115;
          v116 = v115;
          v105 = (__int64 *)sub_186B270(16LL * v115);
          if ( !v115 )
          {
LABEL_212:
            *(_QWORD *)(a1 + 856) = v105;
            *(_QWORD *)(a1 + 868) = 0;
LABEL_213:
            sub_186B220(v105);
            goto LABEL_214;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 856) = 0;
          v184 = (unsigned int)v111 >> 1;
          v116 = v184;
          *(_DWORD *)(a1 + 864) = v184;
          v105 = (__int64 *)sub_186B270(16LL * v184);
        }
        v117 = v105;
        do
        {
          *v117 = 0;
          v117 += 2;
          *((_BYTE *)v117 - 8) = 0;
        }
        while ( v117 != &v105[2 * v116] );
        goto LABEL_212;
      }
    }
    *(_QWORD *)(a1 + 868) = 0;
  }
  if ( v105 )
    goto LABEL_213;
LABEL_214:
  v118 = *(void **)(a1 + 816);
  if ( v118 )
    sub_186B220(v118);
  v119 = *(void **)(a1 + 792);
  if ( v119 )
    sub_186B220(v119);
  sub_2334C0((__int64 *)(a1 + 728));
  v120 = *(_QWORD *)(a1 + 720);
  if ( v120 )
    sub_186B220((void *)(v120 - 8));
  v121 = *(_QWORD *)(a1 + 600);
  if ( v121 )
    sub_186B220((void *)(v121 - 8));
  v122 = *(_QWORD *)(a1 + 592);
  if ( v122 )
    sub_186B220((void *)(v122 - 8));
  v123 = *(_QWORD *)(a1 + 584);
  if ( v123 )
    sub_186B220((void *)(v123 - 8));
  sub_BCF4D0(a1 + 496);
  sub_BCF4D0(a1 + 432);
  v124 = *(_QWORD *)(a1 + 424);
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  v125 = *(_QWORD *)(a1 + 416);
  if ( v125 )
    sub_186B220((void *)(v125 - 8));
  v126 = *(_QWORD *)(a1 + 408);
  if ( v126 )
    sub_186B220((void *)(v126 - 8));
  v127 = *(_QWORD *)(a1 + 400);
  if ( v127 )
    sub_186B220((void *)(v127 - 8));
  v128 = *(_QWORD *)(a1 + 392);
  if ( v128 )
    sub_186B220((void *)(v128 - 8));
  v129 = *(_QWORD **)(a1 + 384);
  if ( v129 )
  {
    v130 = *((_DWORD *)v129 - 1);
    if ( v130 )
    {
      v131 = &v129[4 * v130];
      do
      {
        while ( 1 )
        {
          v132 = *v129;
          if ( *v129 )
          {
            v133 = v129[1];
            v27 = (*(_DWORD *)(v132 + 8))-- == 1;
            if ( v27 )
              break;
          }
          v129 += 4;
          if ( v129 == v131 )
            goto LABEL_243;
        }
        sub_15D7BC0(v133, v132);
        v129 += 4;
      }
      while ( v129 != v131 );
LABEL_243:
      v129 = *(_QWORD **)(a1 + 384);
    }
    sub_186B220(v129 - 1);
  }
  v134 = *(_QWORD *)(a1 + 376);
  if ( v134 )
    sub_186B220((void *)(v134 - 8));
  v135 = *(_QWORD *)(a1 + 360);
  if ( v135 )
    sub_186B220((void *)(v135 - 8));
  v136 = *(_QWORD *)(a1 + 352);
  if ( v136 )
    sub_186B220((void *)(v136 - 8));
  v137 = *(_QWORD *)(a1 + 344);
  if ( v137 )
    sub_186B220((void *)(v137 - 8));
  v138 = *(_QWORD *)(a1 + 336);
  if ( v138 )
    sub_186B220((void *)(v138 - 8));
  v139 = *(_QWORD *)(a1 + 328);
  if ( v139 )
    sub_186B220((void *)(v139 - 8));
  v140 = *(__int64 **)(a1 + 320);
  if ( v140 )
  {
    v141 = *((unsigned int *)v140 - 1);
    if ( (_DWORD)v141 )
    {
      v186 = &v140[7 * v141];
      do
      {
        v142 = v140[5];
        if ( v142 )
          sub_186B220((void *)(v142 - 8));
        v143 = (__int64 *)v140[4];
        if ( v143 )
        {
          v144 = *((unsigned int *)v143 - 1);
          if ( (_DWORD)v144 )
          {
            v145 = &v143[4 * v144];
            do
            {
              v146 = (__int64 *)v143[3];
              if ( v146 )
              {
                v147 = &v146[*((unsigned int *)v146 - 1)];
                if ( v146 >= v147 )
                  goto LABEL_273;
                do
                {
                  while ( 1 )
                  {
                    v148 = *v146;
                    if ( *v146 )
                    {
                      v149 = v143[2];
                      v27 = (*(_DWORD *)(v148 + 8))-- == 1;
                      if ( v27 )
                        break;
                    }
                    if ( ++v146 >= v147 )
                      goto LABEL_272;
                  }
                  sub_15D7BC0(v149, v148);
                  ++v146;
                }
                while ( v146 < v147 );
LABEL_272:
                v146 = (__int64 *)v143[3];
                if ( v146 )
LABEL_273:
                  sub_186B220(v146 - 1);
              }
              v150 = (__int64 *)v143[1];
              if ( v150 )
              {
                v151 = &v150[*((unsigned int *)v150 - 1)];
                if ( v150 >= v151 )
                  goto LABEL_282;
                do
                {
                  while ( 1 )
                  {
                    v152 = *v150;
                    if ( *v150 )
                    {
                      v153 = *v143;
                      v27 = (*(_DWORD *)(v152 + 8))-- == 1;
                      if ( v27 )
                        break;
                    }
                    if ( ++v150 >= v151 )
                      goto LABEL_281;
                  }
                  sub_15D7BC0(v153, v152);
                  ++v150;
                }
                while ( v150 < v151 );
LABEL_281:
                v150 = (__int64 *)v143[1];
                if ( v150 )
LABEL_282:
                  sub_186B220(v150 - 1);
              }
              v143 += 4;
            }
            while ( v143 != v145 );
            v143 = (__int64 *)v140[4];
          }
          sub_186B220(v143 - 1);
        }
        v154 = v140[2];
        if ( v154 )
        {
          v155 = v140[3];
          v27 = (*(_DWORD *)(v154 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v155, v154);
        }
        v156 = *v140;
        if ( *v140 )
        {
          v157 = v140[1];
          v27 = (*(_DWORD *)(v156 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v157, v156);
        }
        v140 += 7;
      }
      while ( v140 != v186 );
      v140 = *(__int64 **)(a1 + 320);
    }
    sub_186B220(v140 - 1);
  }
  v158 = *(_QWORD *)(a1 + 312);
  if ( v158 )
    sub_186B220((void *)(v158 - 8));
  v159 = *(_QWORD *)(a1 + 296);
  if ( v159 )
    sub_186B220((void *)(v159 - 8));
  v160 = *(_QWORD *)(a1 + 288);
  if ( v160 )
    sub_186B220((void *)(v160 - 8));
  v161 = *(_QWORD *)(a1 + 280);
  if ( v161 )
    sub_186B220((void *)(v161 - 8));
  v162 = *(_QWORD *)(a1 + 272);
  if ( v162 )
    sub_186B220((void *)(v162 - 8));
  v163 = *(_QWORD *)(a1 + 264);
  if ( v163 )
    sub_186B220((void *)(v163 - 8));
  v164 = *(__int64 **)(a1 + 256);
  if ( v164 )
  {
    v165 = *((unsigned int *)v164 - 1);
    if ( (_DWORD)v165 )
    {
      v166 = &v164[6 * v165];
      do
      {
        v167 = (__int64 *)v164[3];
        if ( v167 )
        {
          v168 = &v167[*((unsigned int *)v167 - 1)];
          if ( v167 >= v168 )
            goto LABEL_318;
          do
          {
            while ( 1 )
            {
              v169 = *v167;
              if ( *v167 )
              {
                v170 = v164[2];
                v27 = (*(_DWORD *)(v169 + 8))-- == 1;
                if ( v27 )
                  break;
              }
              if ( ++v167 >= v168 )
                goto LABEL_317;
            }
            sub_15D7BC0(v170, v169);
            ++v167;
          }
          while ( v167 < v168 );
LABEL_317:
          v167 = (__int64 *)v164[3];
          if ( v167 )
LABEL_318:
            sub_186B220(v167 - 1);
        }
        v171 = (__int64 *)v164[1];
        if ( v171 )
        {
          v172 = &v171[*((unsigned int *)v171 - 1)];
          if ( v171 >= v172 )
            goto LABEL_327;
          do
          {
            while ( 1 )
            {
              v173 = *v171;
              if ( *v171 )
              {
                v174 = *v164;
                v27 = (*(_DWORD *)(v173 + 8))-- == 1;
                if ( v27 )
                  break;
              }
              if ( ++v171 >= v172 )
                goto LABEL_326;
            }
            sub_15D7BC0(v174, v173);
            ++v171;
          }
          while ( v171 < v172 );
LABEL_326:
          v171 = (__int64 *)v164[1];
          if ( v171 )
LABEL_327:
            sub_186B220(v171 - 1);
        }
        v164 += 6;
      }
      while ( v164 != v166 );
      v164 = *(__int64 **)(a1 + 256);
    }
    sub_186B220(v164 - 1);
  }
  v175 = *(_QWORD *)(a1 + 248);
  if ( v175 )
    sub_186B220((void *)(v175 - 8));
  v176 = *(_QWORD *)(a1 + 232);
  if ( v176 )
    sub_186B220((void *)(v176 - 8));
  v177 = *(_QWORD *)(a1 + 224);
  if ( v177 )
    sub_186B220((void *)(v177 - 8));
  v178 = *(_QWORD *)(a1 + 216);
  if ( v178 )
    sub_186B220((void *)(v178 - 8));
  sub_2334C0((__int64 *)(a1 + 200));
  sub_2334C0((__int64 *)(a1 + 184));
  sub_2334C0((__int64 *)(a1 + 168));
  v179 = *(_QWORD *)(a1 + 160);
  if ( v179 )
    sub_186B220((void *)(v179 - 8));
  v180 = *(_QWORD *)(a1 + 152);
  if ( v180 )
    sub_186B220((void *)(v180 - 8));
  v181 = *(_QWORD *)(a1 + 128);
  if ( v181 )
    sub_186B220((void *)(v181 - 8));
  sub_180C0E0(a1 + 72);
  *(_QWORD *)a1 = off_1C70148;
  v182 = *(_QWORD *)(a1 + 40);
  if ( v182 )
    sub_186B220((void *)(v182 - 8));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

