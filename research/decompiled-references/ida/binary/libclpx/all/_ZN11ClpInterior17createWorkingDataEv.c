__int64 __fastcall ClpInterior::createWorkingData(ClpInterior *this)
{
  double v2; // xmm0_8
  unsigned int v3; // r13d
  void *v4; // rdi
  int v5; // r12d
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // r8
  double *v10; // rdx
  __int64 v11; // rcx
  double v12; // xmm0_8
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  int v15; // ecx
  double *v16; // r8
  double *v17; // rdi
  double *v18; // rdx
  double *v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  double v24; // xmm1_8
  __int64 v25; // r8
  double v26; // xmm1_8
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // esi
  void *v32; // rdi
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // r8
  int v37; // r10d
  __int64 *v38; // r14
  int v39; // r9d
  __int64 *v40; // rdi
  _QWORD *v41; // rsi
  bool v42; // cl
  __int64 *v43; // rcx
  __int64 *v44; // rdx
  __int64 v45; // r9
  __int64 v46; // xmm0_8
  __int64 v47; // rdx
  __int64 *v48; // rdx
  _QWORD *v49; // r11
  _QWORD *v50; // rdx
  __int64 *v51; // rcx
  __int64 v52; // r15
  __int64 v53; // xmm0_8
  __int64 v54; // rdx
  _QWORD *v55; // rdx
  _QWORD *v56; // r14
  bool v57; // cl
  _QWORD *v58; // rcx
  __int64 *v59; // rdx
  __int64 v60; // r10
  __int64 v61; // xmm0_8
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  _QWORD *v64; // r14
  __int64 v65; // rdx
  __int64 *v66; // rcx
  __int64 v67; // r10
  __int64 v68; // xmm0_8
  __int64 v69; // rdx
  _QWORD *v70; // rdx
  __int64 v71; // rdx
  int v72; // ecx
  int v73; // ecx
  __int64 v74; // rax
  int v75; // edx
  unsigned int v76; // r14d
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rdi
  int v81; // edx
  double v82; // xmm0_8
  double v83; // xmm1_8
  double v84; // xmm0_8
  double v85; // xmm0_8
  unsigned __int64 v86; // rdi
  __int64 v87; // r8
  __int64 v88; // rsi
  __int64 v89; // rax
  int v90; // edx
  double v91; // xmm1_8
  double v92; // xmm0_8
  double v93; // xmm1_8
  __int64 v94; // rax
  unsigned __int64 v95; // rdi
  __int64 v96; // rax
  unsigned __int64 v97; // rdi
  _QWORD *v98; // rax
  int v99; // esi
  _QWORD *v100; // rax
  __int64 v101; // rax
  int v102; // ecx
  __int64 v103; // rdi
  _QWORD *v104; // rax
  int v105; // esi
  _QWORD *v106; // rax
  __int64 v107; // rax
  void *v108; // rdi
  unsigned __int64 v110; // rdi
  _QWORD *v111; // rax
  _QWORD *v112; // rdx
  int v113; // r15d
  _QWORD *v114; // rdx
  __int64 v115; // rcx
  int v116; // r13d
  _QWORD *v117; // rax
  _QWORD *v118; // rdx
  __int64 v119; // rcx
  _QWORD *v120; // rax
  _QWORD *v121; // rdx
  __int64 v122; // rcx
  _QWORD *v123; // rax
  _QWORD *v124; // rdx
  __int64 v125; // rcx
  _QWORD *v126; // rax
  _QWORD *v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rdx
  __int64 v134; // rcx
  int v135; // r13d
  _QWORD *v136; // rdx
  __int64 v137; // rcx
  int v138; // r12d
  _QWORD *v139; // rax
  _QWORD *v140; // rdx
  __int64 v141; // rcx
  _QWORD *v142; // rax
  _QWORD *v143; // rdx
  __int64 v144; // rcx
  _QWORD *v145; // rax
  _QWORD *v146; // rdx
  __int64 v147; // rcx
  _QWORD *v148; // rax
  _QWORD *v149; // rdx
  __int64 v150; // rcx
  _QWORD *v151; // rax
  _QWORD *v152; // rdx
  __int64 v153; // rcx
  _QWORD *v154; // rax
  _QWORD *v155; // rdx
  __int64 v156; // rcx
  _QWORD *v157; // rax
  _QWORD *v158; // rdx
  __int64 v159; // rcx
  _QWORD *v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rax
  double v165; // xmm0_8
  double v166; // xmm0_8
  int v167; // esi
  char v168[64]; // [rsp+18h] [rbp-40h] BYREF

  v2 = 1.0e-12;
  v3 = (*(__int64 (__fastcall **)(_QWORD, ClpInterior *, __int64, double, double))(**((_QWORD **)this + 24) + 184LL))(
         *((_QWORD *)this + 24),
         this,
         15,
         1.0e-12,
         1.0e20);
  if ( !(_BYTE)v3 )
    *((_DWORD *)this + 80) = 4;
  v4 = *((void **)this + 143);
  v5 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( v4 )
    operator delete[](v4);
  if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_391;
  v6 = 8LL * v5;
  v7 = operator new[](v6);
  v8 = *((_DWORD *)this + 27);
  *((_QWORD *)this + 143) = v7;
  v9 = *((_QWORD *)this + 15);
  if ( v8 && v9 != v7 )
  {
    if ( v8 >> 3 <= 0 )
    {
      v14 = (_QWORD *)v7;
    }
    else
    {
      v10 = *((double **)this + 15);
      v11 = v7;
      do
      {
        v12 = *v10;
        v10 += 8;
        v11 += 64;
        *(double *)(v11 - 64) = v12;
        *(double *)(v11 - 56) = *(v10 - 7);
        *(double *)(v11 - 48) = *(v10 - 6);
        *(double *)(v11 - 40) = *(v10 - 5);
        *(double *)(v11 - 32) = *(v10 - 4);
        *(double *)(v11 - 24) = *(v10 - 3);
        *(double *)(v11 - 16) = *(v10 - 2);
        v2 = *(v10 - 1);
        *(double *)(v11 - 8) = v2;
      }
      while ( v10 != (double *)(v9 + (((unsigned int)((v8 >> 3) - 1) + 1LL) << 6)) );
      v13 = ((v8 >> 3) - 1 + 1LL) << 6;
      v9 += v13;
      v14 = (_QWORD *)(v7 + v13);
    }
    switch ( v8 % 8 )
    {
      case 1:
        goto LABEL_19;
      case 2:
        goto LABEL_18;
      case 3:
        goto LABEL_17;
      case 4:
        goto LABEL_16;
      case 5:
        goto LABEL_15;
      case 6:
        goto LABEL_14;
      case 7:
        v14[6] = *(_QWORD *)(v9 + 48);
LABEL_14:
        v14[5] = *(_QWORD *)(v9 + 40);
LABEL_15:
        v14[4] = *(_QWORD *)(v9 + 32);
LABEL_16:
        v14[3] = *(_QWORD *)(v9 + 24);
LABEL_17:
        v14[2] = *(_QWORD *)(v9 + 16);
LABEL_18:
        v14[1] = *(_QWORD *)(v9 + 8);
LABEL_19:
        v2 = *(double *)v9;
        *v14 = *(_QWORD *)v9;
        break;
      default:
        break;
    }
  }
  v15 = *((_DWORD *)this + 26);
  v16 = *((double **)this + 14);
  v17 = (double *)(v7 + 8LL * v8);
  if ( v15 && v17 != v16 )
  {
    if ( v15 >> 3 > 0 )
    {
      v18 = *((double **)this + 14);
      v19 = v17;
      do
      {
        v20 = *v18;
        v19 += 8;
        v18 += 8;
        *(v19 - 8) = v20;
        *(v19 - 7) = *(v18 - 7);
        *(v19 - 6) = *(v18 - 6);
        *(v19 - 5) = *(v18 - 5);
        *(v19 - 4) = *(v18 - 4);
        *(v19 - 3) = *(v18 - 3);
        *(v19 - 2) = *(v18 - 2);
        v2 = *(v18 - 1);
        *(v19 - 1) = v2;
      }
      while ( v19 != &v17[8 * (unsigned int)((v15 >> 3) - 1) + 8] );
      v21 = ((v15 >> 3) - 1 + 1LL) << 6;
      v16 = (double *)((char *)v16 + v21);
      v17 = (double *)((char *)v17 + v21);
    }
    switch ( v15 % 8 )
    {
      case 1:
        goto LABEL_33;
      case 2:
        goto LABEL_32;
      case 3:
        goto LABEL_31;
      case 4:
        goto LABEL_30;
      case 5:
        goto LABEL_29;
      case 6:
        goto LABEL_28;
      case 7:
        v17[6] = v16[6];
LABEL_28:
        v17[5] = v16[5];
LABEL_29:
        v17[4] = v16[4];
LABEL_30:
        v17[3] = v16[3];
LABEL_31:
        v17[2] = v16[2];
LABEL_32:
        v17[1] = v16[1];
LABEL_33:
        v2 = *v16;
        *v17 = *v16;
        break;
      default:
        break;
    }
  }
  v22 = *((void **)this + 100);
  if ( v22 )
    operator delete[](v22);
  v23 = operator new[](v6);
  v24 = *(double *)this;
  v25 = v23;
  *((_QWORD *)this + 100) = v23;
  v26 = v24 * *((double *)this + 11);
  if ( v26 != 0.0 )
  {
    v2 = 1.0 / v26;
    v26 = 1.0 / v26;
  }
  v27 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  v28 = 0;
  if ( v27 )
  {
    v28 = (**v27)(v27, 0, 0, v168, 0, 2);
    v25 = *((_QWORD *)this + 100);
  }
  v29 = *((int *)this + 27);
  if ( (int)v29 > 0 )
  {
    v30 = 1;
    do
    {
      v31 = v30;
      v2 = *(double *)(v28 + 8 * v30 - 8) * v26;
      *(double *)(v25 + 8 * v30 - 8) = v2;
      v29 = *((int *)this + 27);
      ++v30;
    }
    while ( (int)v29 > v31 );
  }
  memset((void *)(v25 + 8 * v29), 0, 8LL * *((int *)this + 26));
  if ( *((int *)this + 64) > 0
    && !*((_QWORD *)this + 28)
    && (*(unsigned int (__fastcall **)(_QWORD, ClpInterior *, _QWORD, double, double))(**((_QWORD **)this + 24) + 152LL))(
         *((_QWORD *)this + 24),
         this,
         0,
         v2,
         v26) )
  {
    *((_DWORD *)this + 64) = -*((_DWORD *)this + 64);
  }
  v32 = *((void **)this + 94);
  if ( v32 )
    operator delete[](v32);
  v33 = *((void **)this + 97);
  if ( v33 )
    operator delete[](v33);
  *((_QWORD *)this + 94) = operator new[](v6);
  v34 = operator new[](v6);
  v35 = *((int *)this + 27);
  v36 = *((_QWORD **)this + 94);
  v37 = *((_DWORD *)this + 26);
  v38 = *((__int64 **)this + 18);
  *((_QWORD *)this + 97) = v34;
  *((_QWORD *)this + 99) = v34;
  *((_QWORD *)this + 96) = v36;
  v39 = v35;
  v35 *= 8;
  v40 = (_QWORD *)((char *)v36 + v35);
  v41 = (_QWORD *)(v34 + v35);
  *((_QWORD *)this + 98) = v41;
  *((_QWORD *)this + 95) = v40;
  v42 = v37 == 0;
  if ( v40 != v38 && v37 )
  {
    if ( v37 >> 3 <= 0 )
    {
      v48 = v40;
    }
    else
    {
      v43 = v40;
      v44 = v38;
      v45 = (unsigned int)((v37 >> 3) - 1);
      do
      {
        v46 = *v44;
        v44 += 8;
        v43 += 8;
        *(v43 - 8) = v46;
        *(v43 - 7) = *(v44 - 7);
        *(v43 - 6) = *(v44 - 6);
        *(v43 - 5) = *(v44 - 5);
        *(v43 - 4) = *(v44 - 4);
        *(v43 - 3) = *(v44 - 3);
        *(v43 - 2) = *(v44 - 2);
        *(v43 - 1) = *(v44 - 1);
      }
      while ( v44 != &v38[8 * v45 + 8] );
      v47 = ((int)v45 + 1LL) << 6;
      v38 = (__int64 *)((char *)v38 + v47);
      v48 = (__int64 *)((char *)v40 + v47);
    }
    switch ( v37 % 8 )
    {
      case 1:
        goto LABEL_62;
      case 2:
        goto LABEL_61;
      case 3:
        goto LABEL_60;
      case 4:
        goto LABEL_59;
      case 5:
        goto LABEL_58;
      case 6:
        goto LABEL_57;
      case 7:
        v48[6] = v38[6];
LABEL_57:
        v48[5] = v38[5];
LABEL_58:
        v48[4] = v38[4];
LABEL_59:
        v48[3] = v38[3];
LABEL_60:
        v48[2] = v38[2];
LABEL_61:
        v48[1] = v38[1];
LABEL_62:
        *v48 = *v38;
        break;
      default:
        break;
    }
    v37 = *((_DWORD *)this + 26);
    v39 = *((_DWORD *)this + 27);
    v42 = v37 == 0;
  }
  v49 = *((_QWORD **)this + 19);
  if ( v41 != v49 && !v42 )
  {
    if ( v37 >> 3 <= 0 )
    {
      v55 = v41;
    }
    else
    {
      v50 = v41;
      v51 = *((__int64 **)this + 19);
      v52 = (unsigned int)((v37 >> 3) - 1);
      do
      {
        v53 = *v51;
        v50 += 8;
        v51 += 8;
        *(v50 - 8) = v53;
        *(v50 - 7) = *(v51 - 7);
        *(v50 - 6) = *(v51 - 6);
        *(v50 - 5) = *(v51 - 5);
        *(v50 - 4) = *(v51 - 4);
        *(v50 - 3) = *(v51 - 3);
        *(v50 - 2) = *(v51 - 2);
        *(v50 - 1) = *(v51 - 1);
      }
      while ( v50 != &v41[8 * v52 + 8] );
      v54 = ((int)v52 + 1LL) << 6;
      v49 = (_QWORD *)((char *)v49 + v54);
      v55 = (_QWORD *)((char *)v41 + v54);
    }
    switch ( v37 % 8 )
    {
      case 1:
        goto LABEL_77;
      case 2:
        goto LABEL_76;
      case 3:
        goto LABEL_75;
      case 4:
        goto LABEL_74;
      case 5:
        goto LABEL_73;
      case 6:
        goto LABEL_72;
      case 7:
        v55[6] = v49[6];
LABEL_72:
        v55[5] = v49[5];
LABEL_73:
        v55[4] = v49[4];
LABEL_74:
        v55[3] = v49[3];
LABEL_75:
        v55[2] = v49[2];
LABEL_76:
        v55[1] = v49[1];
LABEL_77:
        *v55 = *v49;
        break;
      default:
        break;
    }
  }
  v56 = *((_QWORD **)this + 22);
  v57 = v39 == 0;
  if ( v36 != v56 && v39 )
  {
    if ( v39 >> 3 <= 0 )
    {
      v63 = v36;
    }
    else
    {
      v58 = v36;
      v59 = *((__int64 **)this + 22);
      v60 = (unsigned int)((v39 >> 3) - 1);
      do
      {
        v61 = *v59;
        v59 += 8;
        v58 += 8;
        *(v58 - 8) = v61;
        *(v58 - 7) = *(v59 - 7);
        *(v58 - 6) = *(v59 - 6);
        *(v58 - 5) = *(v59 - 5);
        *(v58 - 4) = *(v59 - 4);
        *(v58 - 3) = *(v59 - 3);
        *(v58 - 2) = *(v59 - 2);
        *(v58 - 1) = *(v59 - 1);
      }
      while ( v59 != &v56[8 * v60 + 8] );
      v62 = ((int)v60 + 1LL) << 6;
      v56 = (_QWORD *)((char *)v56 + v62);
      v63 = (_QWORD *)((char *)v36 + v62);
    }
    switch ( v39 % 8 )
    {
      case 1:
        goto LABEL_91;
      case 2:
        goto LABEL_90;
      case 3:
        goto LABEL_89;
      case 4:
        goto LABEL_88;
      case 5:
        goto LABEL_87;
      case 6:
        goto LABEL_86;
      case 7:
        v63[6] = v56[6];
LABEL_86:
        v63[5] = v56[5];
LABEL_87:
        v63[4] = v56[4];
LABEL_88:
        v63[3] = v56[3];
LABEL_89:
        v63[2] = v56[2];
LABEL_90:
        v63[1] = v56[1];
LABEL_91:
        *v63 = *v56;
        break;
      default:
        break;
    }
    v39 = *((_DWORD *)this + 27);
    v57 = v39 == 0;
  }
  v64 = *((_QWORD **)this + 23);
  if ( v64 != (_QWORD *)v34 && !v57 )
  {
    if ( v39 >> 3 <= 0 )
    {
      v70 = (_QWORD *)v34;
    }
    else
    {
      v65 = v34;
      v66 = *((__int64 **)this + 23);
      v67 = (unsigned int)((v39 >> 3) - 1);
      do
      {
        v68 = *v66;
        v65 += 64;
        v66 += 8;
        *(_QWORD *)(v65 - 64) = v68;
        *(_QWORD *)(v65 - 56) = *(v66 - 7);
        *(_QWORD *)(v65 - 48) = *(v66 - 6);
        *(_QWORD *)(v65 - 40) = *(v66 - 5);
        *(_QWORD *)(v65 - 32) = *(v66 - 4);
        *(_QWORD *)(v65 - 24) = *(v66 - 3);
        *(_QWORD *)(v65 - 16) = *(v66 - 2);
        *(_QWORD *)(v65 - 8) = *(v66 - 1);
      }
      while ( v65 != v34 + ((v67 + 1) << 6) );
      v69 = ((int)v67 + 1LL) << 6;
      v64 = (_QWORD *)((char *)v64 + v69);
      v70 = (_QWORD *)(v34 + v69);
    }
    switch ( v39 % 8 )
    {
      case 1:
        goto LABEL_106;
      case 2:
        goto LABEL_105;
      case 3:
        goto LABEL_104;
      case 4:
        goto LABEL_103;
      case 5:
        goto LABEL_102;
      case 6:
        goto LABEL_101;
      case 7:
        v70[6] = v64[6];
LABEL_101:
        v70[5] = v64[5];
LABEL_102:
        v70[4] = v64[4];
LABEL_103:
        v70[3] = v64[3];
LABEL_104:
        v70[2] = v64[2];
LABEL_105:
        v70[1] = v64[1];
LABEL_106:
        *v70 = *v64;
        break;
      default:
        break;
    }
  }
  if ( v39 > 0 )
  {
    v71 = 1;
    do
    {
      if ( *(double *)&v36[v71 - 1] < -1.0e30 )
      {
        v36[v71 - 1] = 0xFFEFFFFFFFFFFFFFLL;
        v39 = *((_DWORD *)this + 27);
      }
      if ( *(double *)(v34 + 8 * v71 - 8) > 1.0e30 )
        *(_QWORD *)(v34 + 8 * v71 - 8) = 0x7FEFFFFFFFFFFFFFLL;
      v72 = v71++;
    }
    while ( v39 > v72 );
  }
  v73 = *((_DWORD *)this + 26);
  if ( v73 > 0 )
  {
    v74 = 1;
    do
    {
      if ( *(double *)&v40[v74 - 1] < -1.0e30 )
      {
        v40[v74 - 1] = 0xFFEFFFFFFFFFFFFFLL;
        v73 = *((_DWORD *)this + 26);
      }
      if ( *(double *)&v41[v74 - 1] > 1.0e30 )
        v41[v74 - 1] = 0x7FEFFFFFFFFFFFFFLL;
      v75 = v74++;
    }
    while ( v73 > v75 );
  }
  v76 = ClpInterior::sanityCheck(this);
  if ( (_BYTE)v76 )
    v76 = v3;
  if ( *((_QWORD *)this + 28) )
  {
    if ( *((int *)this + 27) > 0 )
    {
      v77 = *((_QWORD *)this + 100);
      v78 = *((_QWORD *)this + 96);
      v79 = 0;
      v80 = *((_QWORD *)this + 99);
      v81 = 0;
      do
      {
        while ( 1 )
        {
          v82 = *(double *)(*((_QWORD *)this + 29) + v79);
          v83 = *((double *)this + 12) / v82;
          *(double *)(v77 + v79) = v82 * *(double *)(v77 + v79);
          v84 = *(double *)(v78 + v79);
          if ( v84 > -1.0e50 )
            *(double *)(v78 + v79) = v84 * v83;
          v85 = *(double *)(v80 + v79);
          if ( v85 >= 1.0e50 )
            break;
          ++v81;
          *(double *)(v80 + v79) = v83 * v85;
          v79 += 8;
          if ( v81 >= *((_DWORD *)this + 27) )
            goto LABEL_130;
        }
        ++v81;
        v79 += 8;
      }
      while ( *((_DWORD *)this + 27) > v81 );
    }
LABEL_130:
    v86 = *((int *)this + 26);
    if ( (int)v86 > 0 )
    {
      v87 = *((_QWORD *)this + 95);
      v88 = *((_QWORD *)this + 98);
      v89 = 0;
      v90 = 0;
      do
      {
        while ( 1 )
        {
          v91 = *(double *)(v87 + v89);
          v92 = *(double *)(*((_QWORD *)this + 28) + v89) * *((double *)this + 12);
          if ( v91 > -1.0e50 )
            *(double *)(v87 + v89) = v91 * v92;
          v93 = *(double *)(v88 + v89);
          if ( v93 >= 1.0e50 )
            break;
          ++v90;
          *(double *)(v88 + v89) = v92 * v93;
          v86 = *((int *)this + 26);
          v89 += 8;
          if ( v90 >= (int)v86 )
            goto LABEL_136;
        }
        v86 = *((int *)this + 26);
        ++v90;
        v89 += 8;
      }
      while ( (int)v86 > v90 );
    }
  }
  else
  {
    v86 = *((int *)this + 26);
    if ( *((double *)this + 12) != 1.0 && (int)v86 + *((_DWORD *)this + 27) > 0 )
    {
      v162 = *((_QWORD *)this + 94);
      v163 = *((_QWORD *)this + 97);
      v164 = 1;
      do
      {
        v165 = *(double *)(v162 + 8 * v164 - 8);
        if ( v165 > -1.0e50 )
          *(double *)(v162 + 8 * v164 - 8) = v165 * *((double *)this + 12);
        v166 = *(double *)(v163 + 8 * v164 - 8);
        if ( v166 < 1.0e50 )
          *(double *)(v163 + 8 * v164 - 8) = v166 * *((double *)this + 12);
        v86 = *((int *)this + 26);
        v167 = v164++;
      }
      while ( (int)v86 + *((_DWORD *)this + 27) > v167 );
    }
  }
LABEL_136:
  if ( v86 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_391;
  v94 = operator new[](8 * v86);
  v95 = *((int *)this + 26);
  *((_QWORD *)this + 138) = v94;
  if ( v95 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_391;
  v96 = operator new[](8 * v95);
  v97 = *((int *)this + 26);
  *((_QWORD *)this + 139) = v96;
  if ( v97 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_391;
  v98 = (_QWORD *)operator new[](8 * v97);
  v99 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 146) = v98;
  if ( v99 )
  {
    if ( v99 / 8 > 0 )
    {
      v133 = v98;
      v134 = (unsigned int)(v99 / 8 - 1);
      do
      {
        *v133 = 0;
        v133[1] = 0;
        v133 += 8;
        *(v133 - 6) = 0;
        *(v133 - 5) = 0;
        *(v133 - 4) = 0;
        *(v133 - 3) = 0;
        *(v133 - 2) = 0;
        *(v133 - 1) = 0;
      }
      while ( &v98[8 * v134 + 8] != v133 );
      v98 += 8 * (int)v134 + 8;
    }
    switch ( v99 % 8 )
    {
      case 1:
        goto LABEL_241;
      case 2:
        goto LABEL_240;
      case 3:
        goto LABEL_239;
      case 4:
        goto LABEL_238;
      case 5:
        goto LABEL_237;
      case 6:
        goto LABEL_236;
      case 7:
        v98[6] = 0;
LABEL_236:
        v98[5] = 0;
LABEL_237:
        v98[4] = 0;
LABEL_238:
        v98[3] = 0;
LABEL_239:
        v98[2] = 0;
LABEL_240:
        v98[1] = 0;
LABEL_241:
        *v98 = 0;
        break;
      default:
        break;
    }
  }
  *((_QWORD *)this + 140) = operator new[](v6);
  *((_QWORD *)this + 141) = operator new[](v6);
  *((_QWORD *)this + 142) = operator new[](v6);
  v100 = (_QWORD *)operator new[](v6);
  *((_QWORD *)this + 145) = v100;
  if ( v5 )
  {
    v113 = v5 / 8;
    if ( v5 / 8 > 0 )
    {
      v114 = v100;
      v115 = (unsigned int)(v113 - 1);
      do
      {
        *v114 = 0;
        v114[1] = 0;
        v114 += 8;
        *(v114 - 6) = 0;
        *(v114 - 5) = 0;
        *(v114 - 4) = 0;
        *(v114 - 3) = 0;
        *(v114 - 2) = 0;
        *(v114 - 1) = 0;
      }
      while ( v114 != &v100[8 * v115 + 8] );
      v100 += 8 * (int)v115 + 8;
    }
    v116 = v5 % 8;
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_174;
      case 2:
        goto LABEL_173;
      case 3:
        goto LABEL_172;
      case 4:
        goto LABEL_171;
      case 5:
        goto LABEL_170;
      case 6:
        goto LABEL_169;
      case 7:
        v100[6] = 0;
LABEL_169:
        v100[5] = 0;
LABEL_170:
        v100[4] = 0;
LABEL_171:
        v100[3] = 0;
LABEL_172:
        v100[2] = 0;
LABEL_173:
        v100[1] = 0;
LABEL_174:
        *v100 = 0;
        v117 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 147) = v117;
        break;
      default:
        v117 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 147) = v117;
        break;
    }
    if ( v113 > 0 )
    {
      v118 = v117;
      v119 = (unsigned int)(v113 - 1);
      do
      {
        *v118 = 0;
        v118[1] = 0;
        v118 += 8;
        *(v118 - 6) = 0;
        *(v118 - 5) = 0;
        *(v118 - 4) = 0;
        *(v118 - 3) = 0;
        *(v118 - 2) = 0;
        *(v118 - 1) = 0;
      }
      while ( &v117[8 * v119 + 8] != v118 );
      v117 += 8 * (int)v119 + 8;
    }
    switch ( v116 )
    {
      case 1:
        goto LABEL_186;
      case 2:
        goto LABEL_185;
      case 3:
        goto LABEL_184;
      case 4:
        goto LABEL_183;
      case 5:
        goto LABEL_182;
      case 6:
        goto LABEL_181;
      case 7:
        v117[6] = 0;
LABEL_181:
        v117[5] = 0;
LABEL_182:
        v117[4] = 0;
LABEL_183:
        v117[3] = 0;
LABEL_184:
        v117[2] = 0;
LABEL_185:
        v117[1] = 0;
LABEL_186:
        *v117 = 0;
        v120 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 148) = v120;
        break;
      default:
        v120 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 148) = v120;
        break;
    }
    if ( v113 > 0 )
    {
      v121 = v120;
      v122 = (unsigned int)(v113 - 1);
      do
      {
        *v121 = 0;
        v121[1] = 0;
        v121 += 8;
        *(v121 - 6) = 0;
        *(v121 - 5) = 0;
        *(v121 - 4) = 0;
        *(v121 - 3) = 0;
        *(v121 - 2) = 0;
        *(v121 - 1) = 0;
      }
      while ( v121 != &v120[8 * v122 + 8] );
      v120 += 8 * (int)v122 + 8;
    }
    switch ( v116 )
    {
      case 1:
        goto LABEL_198;
      case 2:
        goto LABEL_197;
      case 3:
        goto LABEL_196;
      case 4:
        goto LABEL_195;
      case 5:
        goto LABEL_194;
      case 6:
        goto LABEL_193;
      case 7:
        v120[6] = 0;
LABEL_193:
        v120[5] = 0;
LABEL_194:
        v120[4] = 0;
LABEL_195:
        v120[3] = 0;
LABEL_196:
        v120[2] = 0;
LABEL_197:
        v120[1] = 0;
LABEL_198:
        *v120 = 0;
        v123 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 149) = v123;
        break;
      default:
        v123 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 149) = v123;
        break;
    }
    if ( v113 > 0 )
    {
      v124 = v123;
      v125 = (unsigned int)(v113 - 1);
      do
      {
        *v124 = 0;
        v124[1] = 0;
        v124 += 8;
        *(v124 - 6) = 0;
        *(v124 - 5) = 0;
        *(v124 - 4) = 0;
        *(v124 - 3) = 0;
        *(v124 - 2) = 0;
        *(v124 - 1) = 0;
      }
      while ( &v123[8 * v125 + 8] != v124 );
      v123 += 8 * (int)v125 + 8;
    }
    switch ( v116 )
    {
      case 1:
        goto LABEL_210;
      case 2:
        goto LABEL_209;
      case 3:
        goto LABEL_208;
      case 4:
        goto LABEL_207;
      case 5:
        goto LABEL_206;
      case 6:
        goto LABEL_205;
      case 7:
        v123[6] = 0;
LABEL_205:
        v123[5] = 0;
LABEL_206:
        v123[4] = 0;
LABEL_207:
        v123[3] = 0;
LABEL_208:
        v123[2] = 0;
LABEL_209:
        v123[1] = 0;
LABEL_210:
        *v123 = 0;
        v126 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 150) = v126;
        break;
      default:
        v126 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 150) = v126;
        break;
    }
    if ( v113 > 0 )
    {
      v127 = v126;
      v128 = (unsigned int)(v113 - 1);
      do
      {
        *v127 = 0;
        v127[1] = 0;
        v127 += 8;
        *(v127 - 6) = 0;
        *(v127 - 5) = 0;
        *(v127 - 4) = 0;
        *(v127 - 3) = 0;
        *(v127 - 2) = 0;
        *(v127 - 1) = 0;
      }
      while ( &v126[8 * v128 + 8] != v127 );
      v126 += 8 * (int)v128 + 8;
    }
    switch ( v116 )
    {
      case 1:
        goto LABEL_222;
      case 2:
        goto LABEL_221;
      case 3:
        goto LABEL_220;
      case 4:
        goto LABEL_219;
      case 5:
        goto LABEL_218;
      case 6:
        goto LABEL_217;
      case 7:
        v126[6] = 0;
LABEL_217:
        v126[5] = 0;
LABEL_218:
        v126[4] = 0;
LABEL_219:
        v126[3] = 0;
LABEL_220:
        v126[2] = 0;
LABEL_221:
        v126[1] = 0;
LABEL_222:
        *v126 = 0;
        break;
      default:
        break;
    }
    v129 = *((_QWORD *)this + 161);
    if ( !*(_BYTE *)(v129 + 12) && *(int *)(v129 + 8) <= 19 )
      goto LABEL_143;
    v130 = (_QWORD *)operator new[](v6);
    *((_QWORD *)this + 151) = v130;
    if ( v113 > 0 )
    {
      v131 = v130;
      v132 = (unsigned int)(v113 - 1);
      do
      {
        *v131 = 0;
        v131[1] = 0;
        v131 += 8;
        *(v131 - 6) = 0;
        *(v131 - 5) = 0;
        *(v131 - 4) = 0;
        *(v131 - 3) = 0;
        *(v131 - 2) = 0;
        *(v131 - 1) = 0;
      }
      while ( &v130[8 * v132 + 8] != v131 );
      v130 += 8 * (int)v132 + 8;
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_379;
      case 2:
        goto LABEL_378;
      case 3:
        goto LABEL_377;
      case 4:
        goto LABEL_376;
      case 5:
        goto LABEL_375;
      case 6:
        goto LABEL_374;
      case 7:
        v130[6] = 0;
LABEL_374:
        v130[5] = 0;
LABEL_375:
        v130[4] = 0;
LABEL_376:
        v130[3] = 0;
LABEL_377:
        v130[2] = 0;
LABEL_378:
        v130[1] = 0;
LABEL_379:
        *v130 = 0;
        break;
      default:
        break;
    }
  }
  else
  {
    *((_QWORD *)this + 147) = operator new[](v6);
    *((_QWORD *)this + 148) = operator new[](v6);
    *((_QWORD *)this + 149) = operator new[](v6);
    *((_QWORD *)this + 150) = operator new[](v6);
    v101 = *((_QWORD *)this + 161);
    if ( !*(_BYTE *)(v101 + 12) && *(int *)(v101 + 8) <= 19 )
    {
LABEL_143:
      v102 = *((_DWORD *)this + 26);
      goto LABEL_144;
    }
    *((_QWORD *)this + 151) = operator new[](v6);
  }
  v110 = *((int *)this + 26);
  if ( v110 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_391;
  v111 = (_QWORD *)operator new[](8 * v110);
  v102 = *((_DWORD *)this + 26);
  v103 = 0;
  *((_QWORD *)this + 152) = v111;
  if ( v102 )
  {
    if ( v102 / 8 > 0 )
    {
      v112 = v111;
      do
      {
        *v112 = 0;
        v112[1] = 0;
        v112 += 8;
        *(v112 - 6) = 0;
        *(v112 - 5) = 0;
        *(v112 - 4) = 0;
        *(v112 - 3) = 0;
        *(v112 - 2) = 0;
        *(v112 - 1) = 0;
      }
      while ( &v111[8 * (unsigned int)(v102 / 8 - 1) + 8] != v112 );
      v111 += 8 * (v102 / 8 - 1) + 8;
    }
    switch ( v102 % 8 )
    {
      case 1:
        goto LABEL_372;
      case 2:
        goto LABEL_371;
      case 3:
        goto LABEL_370;
      case 4:
        goto LABEL_369;
      case 5:
        goto LABEL_368;
      case 6:
        goto LABEL_367;
      case 7:
        v111[6] = 0;
LABEL_367:
        v111[5] = 0;
LABEL_368:
        v111[4] = 0;
LABEL_369:
        v111[3] = 0;
LABEL_370:
        v111[2] = 0;
LABEL_371:
        v111[1] = 0;
LABEL_372:
        *v111 = 0;
        break;
      default:
        break;
    }
LABEL_144:
    v103 = v102;
    if ( (unsigned __int64)v102 <= 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_145;
LABEL_391:
    __cxa_throw_bad_array_new_length();
  }
LABEL_145:
  v104 = (_QWORD *)operator new[](8 * v103);
  v105 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 153) = v104;
  if ( v105 )
  {
    if ( v105 / 8 > 0 )
    {
      v160 = v104;
      v161 = (unsigned int)(v105 / 8 - 1);
      do
      {
        *v160 = 0;
        v160[1] = 0;
        v160 += 8;
        *(v160 - 6) = 0;
        *(v160 - 5) = 0;
        *(v160 - 4) = 0;
        *(v160 - 3) = 0;
        *(v160 - 2) = 0;
        *(v160 - 1) = 0;
      }
      while ( &v104[8 * v161 + 8] != v160 );
      v104 += 8 * (int)v161 + 8;
    }
    switch ( v105 % 8 )
    {
      case 1:
        goto LABEL_349;
      case 2:
        goto LABEL_348;
      case 3:
        goto LABEL_347;
      case 4:
        goto LABEL_346;
      case 5:
        goto LABEL_345;
      case 6:
        goto LABEL_344;
      case 7:
        v104[6] = 0;
LABEL_344:
        v104[5] = 0;
LABEL_345:
        v104[4] = 0;
LABEL_346:
        v104[3] = 0;
LABEL_347:
        v104[2] = 0;
LABEL_348:
        v104[1] = 0;
LABEL_349:
        *v104 = 0;
        break;
      default:
        break;
    }
  }
  v106 = (_QWORD *)operator new[](v6);
  *((_QWORD *)this + 154) = v106;
  if ( v5 )
  {
    v135 = v5 / 8;
    if ( v5 / 8 > 0 )
    {
      v136 = v106;
      v137 = (unsigned int)(v135 - 1);
      do
      {
        *v136 = 0;
        v136[1] = 0;
        v136 += 8;
        *(v136 - 6) = 0;
        *(v136 - 5) = 0;
        *(v136 - 4) = 0;
        *(v136 - 3) = 0;
        *(v136 - 2) = 0;
        *(v136 - 1) = 0;
      }
      while ( &v106[8 * v137 + 8] != v136 );
      v106 += 8 * (int)v137 + 8;
    }
    v138 = v5 % 8;
    switch ( v138 )
    {
      case 1:
        goto LABEL_253;
      case 2:
        goto LABEL_252;
      case 3:
        goto LABEL_251;
      case 4:
        goto LABEL_250;
      case 5:
        goto LABEL_249;
      case 6:
        goto LABEL_248;
      case 7:
        v106[6] = 0;
LABEL_248:
        v106[5] = 0;
LABEL_249:
        v106[4] = 0;
LABEL_250:
        v106[3] = 0;
LABEL_251:
        v106[2] = 0;
LABEL_252:
        v106[1] = 0;
LABEL_253:
        *v106 = 0;
        v139 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 155) = v139;
        break;
      default:
        v139 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 155) = v139;
        break;
    }
    if ( v135 > 0 )
    {
      v140 = v139;
      v141 = (unsigned int)(v135 - 1);
      do
      {
        *v140 = 0;
        v140[1] = 0;
        v140 += 8;
        *(v140 - 6) = 0;
        *(v140 - 5) = 0;
        *(v140 - 4) = 0;
        *(v140 - 3) = 0;
        *(v140 - 2) = 0;
        *(v140 - 1) = 0;
      }
      while ( v140 != &v139[8 * v141 + 8] );
      v139 += 8 * (int)v141 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_265;
      case 2:
        goto LABEL_264;
      case 3:
        goto LABEL_263;
      case 4:
        goto LABEL_262;
      case 5:
        goto LABEL_261;
      case 6:
        goto LABEL_260;
      case 7:
        v139[6] = 0;
LABEL_260:
        v139[5] = 0;
LABEL_261:
        v139[4] = 0;
LABEL_262:
        v139[3] = 0;
LABEL_263:
        v139[2] = 0;
LABEL_264:
        v139[1] = 0;
LABEL_265:
        *v139 = 0;
        v142 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 156) = v142;
        break;
      default:
        v142 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 156) = v142;
        break;
    }
    if ( v135 > 0 )
    {
      v143 = v142;
      v144 = (unsigned int)(v135 - 1);
      do
      {
        *v143 = 0;
        v143[1] = 0;
        v143 += 8;
        *(v143 - 6) = 0;
        *(v143 - 5) = 0;
        *(v143 - 4) = 0;
        *(v143 - 3) = 0;
        *(v143 - 2) = 0;
        *(v143 - 1) = 0;
      }
      while ( v143 != &v142[8 * v144 + 8] );
      v142 += 8 * (int)v144 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_277;
      case 2:
        goto LABEL_276;
      case 3:
        goto LABEL_275;
      case 4:
        goto LABEL_274;
      case 5:
        goto LABEL_273;
      case 6:
        goto LABEL_272;
      case 7:
        v142[6] = 0;
LABEL_272:
        v142[5] = 0;
LABEL_273:
        v142[4] = 0;
LABEL_274:
        v142[3] = 0;
LABEL_275:
        v142[2] = 0;
LABEL_276:
        v142[1] = 0;
LABEL_277:
        *v142 = 0;
        v145 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 157) = v145;
        break;
      default:
        v145 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 157) = v145;
        break;
    }
    if ( v135 > 0 )
    {
      v146 = v145;
      v147 = (unsigned int)(v135 - 1);
      do
      {
        *v146 = 0;
        v146[1] = 0;
        v146 += 8;
        *(v146 - 6) = 0;
        *(v146 - 5) = 0;
        *(v146 - 4) = 0;
        *(v146 - 3) = 0;
        *(v146 - 2) = 0;
        *(v146 - 1) = 0;
      }
      while ( &v145[8 * v147 + 8] != v146 );
      v145 += 8 * (int)v147 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_289;
      case 2:
        goto LABEL_288;
      case 3:
        goto LABEL_287;
      case 4:
        goto LABEL_286;
      case 5:
        goto LABEL_285;
      case 6:
        goto LABEL_284;
      case 7:
        v145[6] = 0;
LABEL_284:
        v145[5] = 0;
LABEL_285:
        v145[4] = 0;
LABEL_286:
        v145[3] = 0;
LABEL_287:
        v145[2] = 0;
LABEL_288:
        v145[1] = 0;
LABEL_289:
        *v145 = 0;
        v148 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 158) = v148;
        break;
      default:
        v148 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 158) = v148;
        break;
    }
    if ( v135 > 0 )
    {
      v149 = v148;
      v150 = (unsigned int)(v135 - 1);
      do
      {
        *v149 = 0;
        v149[1] = 0;
        v149 += 8;
        *(v149 - 6) = 0;
        *(v149 - 5) = 0;
        *(v149 - 4) = 0;
        *(v149 - 3) = 0;
        *(v149 - 2) = 0;
        *(v149 - 1) = 0;
      }
      while ( &v148[8 * v150 + 8] != v149 );
      v148 += 8 * (int)v150 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_301;
      case 2:
        goto LABEL_300;
      case 3:
        goto LABEL_299;
      case 4:
        goto LABEL_298;
      case 5:
        goto LABEL_297;
      case 6:
        goto LABEL_296;
      case 7:
        v148[6] = 0;
LABEL_296:
        v148[5] = 0;
LABEL_297:
        v148[4] = 0;
LABEL_298:
        v148[3] = 0;
LABEL_299:
        v148[2] = 0;
LABEL_300:
        v148[1] = 0;
LABEL_301:
        *v148 = 0;
        v151 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 144) = v151;
        break;
      default:
        v151 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 144) = v151;
        break;
    }
    if ( v135 > 0 )
    {
      v152 = v151;
      v153 = (unsigned int)(v135 - 1);
      do
      {
        *v152 = 0;
        v152[1] = 0;
        v152 += 8;
        *(v152 - 6) = 0;
        *(v152 - 5) = 0;
        *(v152 - 4) = 0;
        *(v152 - 3) = 0;
        *(v152 - 2) = 0;
        *(v152 - 1) = 0;
      }
      while ( &v151[8 * v153 + 8] != v152 );
      v151 += 8 * (int)v153 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_313;
      case 2:
        goto LABEL_312;
      case 3:
        goto LABEL_311;
      case 4:
        goto LABEL_310;
      case 5:
        goto LABEL_309;
      case 6:
        goto LABEL_308;
      case 7:
        v151[6] = 0;
LABEL_308:
        v151[5] = 0;
LABEL_309:
        v151[4] = 0;
LABEL_310:
        v151[3] = 0;
LABEL_311:
        v151[2] = 0;
LABEL_312:
        v151[1] = 0;
LABEL_313:
        *v151 = 0;
        v154 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 159) = v154;
        break;
      default:
        v154 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 159) = v154;
        break;
    }
    if ( v135 > 0 )
    {
      v155 = v154;
      v156 = (unsigned int)(v135 - 1);
      do
      {
        *v155 = 0;
        v155[1] = 0;
        v155 += 8;
        *(v155 - 6) = 0;
        *(v155 - 5) = 0;
        *(v155 - 4) = 0;
        *(v155 - 3) = 0;
        *(v155 - 2) = 0;
        *(v155 - 1) = 0;
      }
      while ( &v154[8 * v156 + 8] != v155 );
      v154 += 8 * (int)v156 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_325;
      case 2:
        goto LABEL_324;
      case 3:
        goto LABEL_323;
      case 4:
        goto LABEL_322;
      case 5:
        goto LABEL_321;
      case 6:
        goto LABEL_320;
      case 7:
        v154[6] = 0;
LABEL_320:
        v154[5] = 0;
LABEL_321:
        v154[4] = 0;
LABEL_322:
        v154[3] = 0;
LABEL_323:
        v154[2] = 0;
LABEL_324:
        v154[1] = 0;
LABEL_325:
        *v154 = 0;
        v157 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 160) = v157;
        break;
      default:
        v157 = (_QWORD *)operator new[](v6);
        *((_QWORD *)this + 160) = v157;
        break;
    }
    if ( v135 > 0 )
    {
      v158 = v157;
      v159 = (unsigned int)(v135 - 1);
      do
      {
        *v158 = 0;
        v158[1] = 0;
        v158 += 8;
        *(v158 - 6) = 0;
        *(v158 - 5) = 0;
        *(v158 - 4) = 0;
        *(v158 - 3) = 0;
        *(v158 - 2) = 0;
        *(v158 - 1) = 0;
      }
      while ( &v157[8 * v159 + 8] != v158 );
      v157 += 8 * (int)v159 + 8;
    }
    switch ( v138 )
    {
      case 1:
        goto LABEL_337;
      case 2:
        goto LABEL_336;
      case 3:
        goto LABEL_335;
      case 4:
        goto LABEL_334;
      case 5:
        goto LABEL_333;
      case 6:
        goto LABEL_332;
      case 7:
        v157[6] = 0;
LABEL_332:
        v157[5] = 0;
LABEL_333:
        v157[4] = 0;
LABEL_334:
        v157[3] = 0;
LABEL_335:
        v157[2] = 0;
LABEL_336:
        v157[1] = 0;
LABEL_337:
        *v157 = 0;
        break;
      default:
        break;
    }
  }
  else
  {
    *((_QWORD *)this + 155) = operator new[](v6);
    *((_QWORD *)this + 156) = operator new[](v6);
    *((_QWORD *)this + 157) = operator new[](v6);
    *((_QWORD *)this + 158) = operator new[](v6);
    *((_QWORD *)this + 144) = operator new[](v6);
    *((_QWORD *)this + 159) = operator new[](v6);
    *((_QWORD *)this + 160) = operator new[](v6);
  }
  v107 = operator new[](v6);
  v108 = *((void **)this + 33);
  *((_QWORD *)this + 104) = v107;
  if ( !v108 )
  {
    v108 = (void *)operator new[](*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
    *((_QWORD *)this + 33) = v108;
  }
  memset(v108, 0, *((_DWORD *)this + 26) + *((_DWORD *)this + 27));
  return v76;
}

