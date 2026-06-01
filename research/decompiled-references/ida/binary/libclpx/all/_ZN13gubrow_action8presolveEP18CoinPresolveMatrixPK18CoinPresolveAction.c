CoinPresolveMatrix *__fastcall gubrow_action::presolve(
        gubrow_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  gubrow_action *v3; // r15
  int v4; // r13d
  int v5; // ebx
  __int64 v6; // r14
  _QWORD *v7; // r12
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // ebp
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // edi
  double v19; // xmm2_8
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // r9d
  int *v24; // r11
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rax
  bool v28; // sf
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rax
  int v34; // edx
  double v35; // xmm1_8
  double *v36; // rsi
  __int64 v37; // rcx
  int *v38; // r11
  __int64 v39; // r13
  int v40; // edi
  int *v41; // rax
  int *v42; // r9
  __int64 v43; // rax
  _DWORD *v44; // r15
  __int64 v45; // rsi
  int v46; // r10d
  _DWORD *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // xmm0_8
  int v51; // ecx
  int v52; // r9d
  __int64 v53; // r8
  __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // xmm0_8
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rsi
  int v61; // edi
  __int64 v62; // rdx
  double v63; // xmm1_8
  double v64; // xmm0_8
  double *v65; // rax
  __int64 v66; // r14
  char *v67; // r9
  int *v68; // r11
  void *v69; // rax
  void *v70; // rax
  void *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // xmm0_8
  int *v74; // rdx
  int v75; // edi
  __int64 v76; // rcx
  __int64 v77; // xmm0_8
  __int64 v78; // r8
  _QWORD *v79; // rcx
  int *v80; // rax
  __int64 v81; // rdx
  int *v82; // rax
  __int64 v83; // rdx
  void *v84; // rbp
  __int64 v85; // rax
  CoinPresolveMatrix *v86; // rbx
  int v87; // [rsp+4h] [rbp-1D4h]
  __int64 v88; // [rsp+8h] [rbp-1D0h]
  __int64 v89; // [rsp+10h] [rbp-1C8h]
  __int64 v90; // [rsp+18h] [rbp-1C0h]
  void *v91; // [rsp+20h] [rbp-1B8h]
  int *v92; // [rsp+28h] [rbp-1B0h]
  __int64 v93; // [rsp+30h] [rbp-1A8h]
  __int64 v94; // [rsp+38h] [rbp-1A0h]
  __int64 v95; // [rsp+48h] [rbp-190h]
  __int64 v96; // [rsp+50h] [rbp-188h]
  __int64 v97; // [rsp+58h] [rbp-180h]
  __int64 v98; // [rsp+60h] [rbp-178h]
  __int64 v99; // [rsp+68h] [rbp-170h]
  __int64 v100; // [rsp+68h] [rbp-170h]
  _QWORD *v101; // [rsp+70h] [rbp-168h]
  int v102; // [rsp+78h] [rbp-160h]
  int v103; // [rsp+7Ch] [rbp-15Ch]
  char *v104; // [rsp+80h] [rbp-158h]
  int *v106; // [rsp+90h] [rbp-148h]
  __int64 v107; // [rsp+98h] [rbp-140h]
  int v108; // [rsp+A0h] [rbp-138h]
  int v109; // [rsp+A4h] [rbp-134h]
  int *src; // [rsp+A8h] [rbp-130h]
  char *srca; // [rsp+A8h] [rbp-130h]
  int v112; // [rsp+B0h] [rbp-128h]
  __int64 v113; // [rsp+C0h] [rbp-118h]
  int *v114; // [rsp+C0h] [rbp-118h]
  int *v115; // [rsp+C0h] [rbp-118h]
  double v116; // [rsp+C8h] [rbp-110h]
  __int64 v117; // [rsp+D0h] [rbp-108h]
  int *v118; // [rsp+E8h] [rbp-F0h]
  gubrow_action *v119; // [rsp+F0h] [rbp-E8h]
  int v120; // [rsp+100h] [rbp-D8h]
  struct rusage usage; // [rsp+110h] [rbp-C8h] BYREF

  v3 = this;
  v116 = 0.0;
  if ( *((_BYTE *)this + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v116 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  }
  v4 = *((_DWORD *)this + 1);
  v5 = *(_DWORD *)this;
  v6 = *((_QWORD *)this + 13);
  v90 = *((_QWORD *)this + 37);
  v87 = v4;
  v94 = *((_QWORD *)this + 38);
  v95 = *((_QWORD *)this + 35);
  v88 = *((_QWORD *)this + 36);
  v97 = *((_QWORD *)this + 8);
  v98 = *((_QWORD *)this + 7);
  v107 = *((_QWORD *)this + 5);
  v93 = *((_QWORD *)this + 6);
  v89 = *((_QWORD *)this + 14);
  if ( (unsigned __int64)v4 > 0x333333333333333LL )
    __cxa_throw_bad_array_new_length();
  v104 = (char *)operator new[](40LL * v4);
  v7 = *((_QWORD **)this + 57);
  v106 = *((int **)this + 56);
  v92 = &v106[v4];
  v91 = *((void **)this + 58);
  memset(v91, 0, v5);
  if ( !v4 )
  {
LABEL_5:
    v108 = 0;
    v109 = 0;
    goto LABEL_6;
  }
  if ( v4 / 8 <= 0 )
  {
    v11 = v7;
  }
  else
  {
    v9 = v7;
    v10 = (unsigned int)(v4 / 8 - 1);
    do
    {
      *v9 = 0;
      v9[1] = 0;
      v9 += 8;
      *(v9 - 6) = 0;
      *(v9 - 5) = 0;
      *(v9 - 4) = 0;
      *(v9 - 3) = 0;
      *(v9 - 2) = 0;
      *(v9 - 1) = 0;
    }
    while ( v9 != &v7[8 * v10 + 8] );
    v11 = &v7[8 * (int)v10 + 8];
  }
  switch ( v4 % 8 )
  {
    case 1:
      goto LABEL_20;
    case 2:
      goto LABEL_19;
    case 3:
      goto LABEL_18;
    case 4:
      goto LABEL_17;
    case 5:
      goto LABEL_16;
    case 6:
      goto LABEL_15;
    case 7:
      v11[6] = 0;
LABEL_15:
      v11[5] = 0;
LABEL_16:
      v11[4] = 0;
LABEL_17:
      v11[3] = 0;
LABEL_18:
      v11[2] = 0;
LABEL_19:
      v11[1] = 0;
LABEL_20:
      *v11 = 0;
      if ( v4 > 0 )
        goto LABEL_21;
      goto LABEL_5;
    default:
      if ( v4 <= 0 )
        goto LABEL_5;
LABEL_21:
      v101 = v7;
      v12 = 0;
      v103 = 0;
      v109 = 0;
      v108 = 0;
      v13 = v6;
      break;
  }
  do
  {
    while ( 1 )
    {
      v14 = v12;
      v15 = *(_DWORD *)(v88 + 4 * v12);
      if ( v15 <= 1
        || *((_BYTE *)v3 + 440) && (*(_BYTE *)(*((_QWORD *)v3 + 50) + v12) & 2) != 0
        || *(double *)(v13 + 8 * v12) != *(double *)(v89 + 8 * v12) )
      {
        goto LABEL_22;
      }
      v16 = *(int *)(v95 + 4 * v12);
      v17 = v16 + 1;
      v18 = *(_DWORD *)(v95 + 4 * v12);
      v96 = v16;
      v102 = v15 + v16;
      v19 = *(double *)(v90 + 8 * v16);
      if ( v15 + (int)v16 <= (int)v16 + 1 )
        break;
      if ( v19 == *(double *)(v90 + 8 * v16 + 8) )
      {
        v20 = (int)v16 + 2;
        v21 = (int)v20 + (unsigned __int64)(unsigned int)(v15 - 2);
        v22 = v90 + 8 * (v17 - (__int64)(int)v20);
        do
        {
          v17 = v20;
          if ( v21 == v20 )
            goto LABEL_32;
          ++v20;
        }
        while ( v19 == *(double *)(v22 + 8 * v20) );
      }
LABEL_22:
      if ( v87 <= (int)++v12 )
        goto LABEL_84;
    }
LABEL_32:
    if ( v102 != v17 || v18 >= v102 )
      goto LABEL_22;
    v23 = 0;
    v24 = (int *)(v94 + 4 * v96);
    src = v24;
    v117 = v94 + 4;
    v120 = ~v18;
    v25 = v94 + 4 + 4 * (v96 + (unsigned int)(~v18 + v102));
    do
    {
      v26 = *v24;
      *((_BYTE *)v91 + v26) = 1;
      v27 = *(int *)(v107 + 4 * v26);
      v28 = -*(_DWORD *)(v93 + 4 * v26) < 0;
      v29 = v27 + *(_DWORD *)(v93 + 4 * v26);
      if ( v28 != __OFSUB__((_DWORD)v27, v29) )
      {
        v30 = v98 + 4 * v27;
        v31 = (unsigned int)(v29 - v27 - 1) + 1LL;
        v32 = v97 + 8 * v27;
        v33 = 0;
        do
        {
          while ( 1 )
          {
            v34 = *(_DWORD *)(v30 + 4 * v33);
            if ( v34 != (_DWORD)v12 )
              break;
LABEL_39:
            if ( v31 == ++v33 )
              goto LABEL_43;
          }
          v35 = *(double *)(v32 + 8 * v33);
          v36 = (double *)&v101[v34];
          if ( *v36 != 0.0 )
          {
            if ( v35 == *v36 )
              ++v92[v34];
            goto LABEL_39;
          }
          ++v33;
          *v36 = v35;
          v92[v34] = 1;
          v37 = v23++;
          v106[v37] = v34;
        }
        while ( v31 != v33 );
      }
LABEL_43:
      ++v24;
    }
    while ( (int *)v25 != v24 );
    if ( !v23 )
      goto LABEL_81;
    v38 = v106;
    v112 = 0;
    v113 = v12;
    v119 = v3;
    v99 = (__int64)&v106[v23 - 1 + 1];
    while ( 2 )
    {
      while ( 2 )
      {
        v39 = *v38;
        v40 = *v38;
        v41 = &v92[v39];
        if ( *v41 != v15 )
        {
          *v41 = 0;
LABEL_47:
          if ( (int *)v99 == ++v38 )
            goto LABEL_72;
          continue;
        }
        break;
      }
      v118 = v38;
      v42 = (int *)(v94 + 4 * v96);
      do
      {
        v43 = *v42;
        v44 = (_DWORD *)(v93 + 4 * v43);
        v45 = *(int *)(v107 + 4 * v43);
        v46 = v45 + *v44;
        v47 = (_DWORD *)(v98 + 4 * v45);
        if ( (int)v45 >= v46 || v40 == *v47 )
        {
          v48 = *(int *)(v107 + 4 * v43);
        }
        else
        {
          v48 = v45 + 1;
          v49 = v98 + 4 * v45 + 4;
          while ( 1 )
          {
            v47 = (_DWORD *)v49;
            if ( v98 + 4 + 4 * ((unsigned int)(*v44 - 1) + v45) == v49 )
              break;
            v49 += 4;
            if ( v40 == *v47 )
              break;
            ++v48;
          }
        }
        ++v42;
        v50 = *(_QWORD *)(v97 + 8LL * v46 - 8);
        *v47 = *(_DWORD *)(v98 + 4LL * v46 - 4);
        *(_QWORD *)(v97 + 8 * v48) = v50;
        --*v44;
      }
      while ( (int *)(v117 + 4 * (v96 + (unsigned int)(v102 + v120))) != v42 );
      v51 = *(_DWORD *)(v95 + 4 * v39);
      v52 = *(_DWORD *)(v88 + 4 * v39);
      if ( v51 < v52 + v51 )
      {
        v53 = v94 + 4LL * v51;
        v54 = v90 + 8LL * v51;
        v55 = 0;
        do
        {
          if ( !*((_BYTE *)v91 + *(int *)(v53 + 4 * v55)) )
          {
            v56 = v51++;
            v57 = *(_QWORD *)(v54 + 8 * v55);
            *(_DWORD *)(v94 + 4 * v56) = *(_DWORD *)(v53 + 4 * v55);
            *(_QWORD *)(v90 + 8 * v56) = v57;
          }
          ++v55;
        }
        while ( (unsigned int)(v52 - 1) + 1LL != v55 );
      }
      v58 = v52 - v15;
      ++v112;
      v59 = 8 * v39;
      *(_DWORD *)(v88 + 4 * v39) = v58;
      if ( !v58 )
      {
        v60 = *((_QWORD *)v119 + 33);
        v61 = *(_DWORD *)(v60 + 8 * v39);
        v62 = *(int *)(v60 + v59 + 4);
        if ( v61 >= 0 )
          *(_DWORD *)(v60 + 8LL * v61 + 4) = v62;
        if ( (int)v62 >= 0 )
          *(_DWORD *)(v60 + 8 * v62) = v61;
        *(_QWORD *)(v60 + 8 * v39) = 0xFC06BF56FC06BF56LL;
      }
      v63 = *(double *)(v13 + 8 * v39);
      v64 = *(double *)(v13 + 8 * v113) / v19 * *(double *)&v101[v39];
      if ( v63 > -1.0e20 )
        *(double *)(v13 + 8 * v39) = v63 - v64;
      v65 = (double *)(v89 + v59);
      if ( *v65 >= 1.0e20 )
        goto LABEL_47;
      ++v38;
      *v65 = *v65 - v64;
      if ( (int *)v99 != v118 + 1 )
        continue;
      break;
    }
LABEL_72:
    v12 = v113;
    v3 = v119;
    if ( v112 )
    {
      v109 += v112;
      v108 += v15 * v112;
      v114 = v38;
      v100 = v112 + 1;
      v66 = operator new[](4 * v100);
      v67 = &v104[40 * v103];
      v68 = v114;
      if ( src )
      {
        v69 = (void *)operator new[](4LL * v15);
        v70 = memcpy(v69, src, 4LL * v15);
        v67 = &v104[40 * v103];
        v68 = v114;
        v71 = v70;
      }
      else
      {
        v71 = nullptr;
      }
      *((_QWORD *)v67 + 3) = v71;
      v115 = v68;
      srca = v67;
      v72 = operator new[](8 * v100);
      v73 = *(_QWORD *)(v13 + 8 * v12);
      *(_DWORD *)(v66 + 4 * v100 - 4) = v14;
      *(double *)(v72 + 8 * v100 - 8) = v19;
      v74 = v106;
      v38 = v115;
      *(_QWORD *)srca = v73;
      v75 = 0;
      do
      {
        v76 = *v74;
        if ( v92[v76] )
        {
          v77 = v101[v76];
          v78 = v75++;
          *(_DWORD *)(v66 + 4 * v78) = v76;
          *(_QWORD *)(v72 + 8 * v78) = v77;
        }
        ++v74;
      }
      while ( v115 != v74 );
      ++v103;
      *((_QWORD *)srca + 2) = v72;
      v79 = v101;
      v80 = v106;
      *((_DWORD *)srca + 8) = v75;
      *((_DWORD *)srca + 9) = v15;
      *((_QWORD *)srca + 1) = v66;
    }
    else
    {
      v79 = v101;
      v80 = v106;
    }
    do
    {
      v81 = *v80++;
      v79[v81] = 0;
    }
    while ( v38 != v80 );
LABEL_81:
    v82 = (int *)(v94 + 4 * v96);
    do
    {
      v83 = *v82++;
      *((_BYTE *)v91 + v83) = 0;
    }
    while ( (int *)(v117 + 4 * (v96 + (unsigned int)(v120 + v102))) != v82 );
    ++v12;
  }
  while ( v87 > (int)v12 );
LABEL_84:
  if ( v103 )
  {
    v84 = (void *)operator new[](40LL * v103);
    memcpy(v84, v104, 40LL * v103);
    v85 = operator new(0x20u);
    v86 = a2;
    *(_DWORD *)(v85 + 16) = v103;
    *(_QWORD *)(v85 + 24) = v84;
    a2 = (CoinPresolveMatrix *)v85;
    *(_QWORD *)(v85 + 8) = v86;
    *(_QWORD *)v85 = &off_4D1CF8;
  }
LABEL_6:
  operator delete[](v104);
  if ( *((_BYTE *)v3 + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    printf(
      "CoinPresolveGubrow(1024) - %d elements dropped (%d rows) in time %g, total %g\n",
      v108,
      v109,
      (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec) - v116,
      (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
    + (double)SLODWORD(usage.ru_utime.tv_sec)
    - *((double *)v3 + 41));
  }
  return a2;
}

