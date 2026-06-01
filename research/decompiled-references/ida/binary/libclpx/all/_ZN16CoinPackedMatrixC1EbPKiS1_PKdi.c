// Alternative name is '_ZN16CoinPackedMatrixC2EbPKiS1_PKdi'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(
        CoinPackedMatrix *this,
        bool a2,
        const int *a3,
        const int *a4,
        double *a5,
        int a6)
{
  unsigned __int64 v6; // r12
  __int64 v10; // rbp
  int *v11; // rbx
  double *v12; // rax
  int v13; // esi
  int v14; // esi
  const double *v15; // r8
  double *v16; // rax
  const double *v17; // r8
  double *v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  const double *v21; // rcx
  double *v22; // rdx
  const double *v23; // r9
  double *v24; // rdi
  const double *v25; // rcx
  double *v26; // rdx
  int *v27; // rax
  int v28; // edx
  int v29; // eax
  int *v30; // r12
  int v31; // edx
  int *v32; // rax
  unsigned __int64 v33; // rdi
  void *v34; // rbp
  unsigned __int64 v35; // r12
  __int64 v36; // r15
  int *v37; // r12
  int *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // edx
  double *v43; // r14
  int *v44; // r13
  __int64 v45; // r8
  double v46; // xmm0_8
  int v47; // r9d
  int *v48; // rdi
  int v49; // edx
  double *v50; // rsi
  __int64 v51; // rax
  int *v52; // r10
  int *v53; // rax
  double v54; // xmm1_8
  int v55; // r11d
  int v56; // ecx
  __int64 v57; // xmm0_8
  __int64 v58; // xmm0_8
  const double *v59; // rcx
  double *v60; // rdx
  const double *v61; // r9
  double *v62; // rdi
  const double *v63; // rcx
  double *v64; // rdx
  __int64 v65; // r13
  int v66; // ebp
  int v67; // r15d
  int v68; // r14d
  int *v69; // rdx
  int v70; // eax
  __int64 v71; // r12
  __int64 v72; // rbx
  int *v73; // rdx
  double *v74; // rsi
  __int64 v75; // r8
  int v76; // ecx
  double v77; // xmm1_8
  __int64 v78; // rbx
  __int64 v79; // r12
  int v80; // r15d
  int v81; // r13d
  __int64 v82; // r14
  int v83; // ebp
  double v84; // xmm2_8
  double *v85; // rcx
  __int64 v86; // rax
  char v87; // al
  int v88; // ecx
  __int64 v89; // r8
  __int64 v90; // rax
  _DWORD *v91; // r8
  int v92; // r11d
  char v93; // al
  int v95; // [rsp+0h] [rbp-C8h]
  int v96; // [rsp+Ch] [rbp-BCh]
  __int64 v97; // [rsp+10h] [rbp-B8h]
  int v98; // [rsp+18h] [rbp-B0h]
  double v99; // [rsp+18h] [rbp-B0h]
  int v100; // [rsp+18h] [rbp-B0h]
  void *s; // [rsp+20h] [rbp-A8h]
  __int64 v102; // [rsp+28h] [rbp-A0h]
  __int64 v103; // [rsp+28h] [rbp-A0h]
  int v106; // [rsp+44h] [rbp-84h]
  __int64 v107; // [rsp+48h] [rbp-80h]
  int *v108; // [rsp+50h] [rbp-78h]
  void *v109; // [rsp+58h] [rbp-70h]
  char v110; // [rsp+6Fh] [rbp-59h] BYREF
  int *v111; // [rsp+70h] [rbp-58h] BYREF
  double *v112; // [rsp+78h] [rbp-50h] BYREF
  int *v113; // [rsp+80h] [rbp-48h] BYREF
  void *v114; // [rsp+88h] [rbp-40h] BYREF

  *((_BYTE *)this + 8) = a2;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_4D1A60;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  if ( (unsigned __int64)a6 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_100;
  v6 = a6;
  v10 = a6;
  v11 = (int *)operator new[](v6 * 4);
  v111 = (int *)operator new[](v6 * 4);
  v12 = (double *)operator new[](v10 * 8);
  v112 = v12;
  if ( a6 && v12 != a5 )
  {
    v13 = a6 + 14;
    if ( a6 + 7 >= 0 )
      v13 = a6 + 7;
    v14 = v13 >> 3;
    if ( v12 <= a5 )
    {
      v17 = a5 - 1;
      v18 = v12 - 1;
      switch ( a6 % 8 )
      {
        case 0:
          goto LABEL_9;
        case 1:
          goto LABEL_16;
        case 2:
          v26 = v18;
          v25 = a5 - 1;
          goto LABEL_15;
        case 3:
          v24 = v18;
          v23 = a5 - 1;
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          v22 = v18;
          v21 = a5 - 1;
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          while ( 1 )
          {
            v20 = *((_QWORD *)v17 + 1);
            ++v18;
            ++v17;
            *(_QWORD *)v18 = v20;
LABEL_11:
            v21 = v17 + 1;
            v22 = v18 + 1;
            v18[1] = v17[1];
LABEL_12:
            v17 = v21 + 1;
            v18 = v22 + 1;
            v22[1] = v21[1];
LABEL_13:
            v23 = v17 + 1;
            v24 = v18 + 1;
            v18[1] = v17[1];
LABEL_14:
            v25 = v23 + 1;
            v26 = v24 + 1;
            v24[1] = v23[1];
LABEL_15:
            v17 = v25 + 1;
            v18 = v26 + 1;
            v26[1] = v25[1];
LABEL_16:
            --v14;
            v18[1] = v17[1];
            if ( v14 <= 0 )
              break;
            ++v17;
            ++v18;
LABEL_9:
            v19 = *((_QWORD *)v17 + 1);
            ++v18;
            ++v17;
            *(_QWORD *)v18 = v19;
          }
          break;
        default:
          break;
      }
    }
    else
    {
      v15 = &a5[v10];
      v16 = &v12[v10];
      switch ( a6 % 8 )
      {
        case 0:
          goto LABEL_52;
        case 1:
          goto LABEL_59;
        case 2:
          v64 = v16;
          v63 = &a5[v10];
          goto LABEL_58;
        case 3:
          v62 = v16;
          v61 = &a5[v10];
          goto LABEL_57;
        case 4:
          goto LABEL_56;
        case 5:
          v60 = v16;
          v59 = &a5[v10];
          goto LABEL_55;
        case 6:
          goto LABEL_54;
        case 7:
          while ( 1 )
          {
            v58 = *((_QWORD *)v15 - 1);
            --v16;
            --v15;
            *(_QWORD *)v16 = v58;
LABEL_54:
            v59 = v15 - 1;
            v60 = v16 - 1;
            *(v16 - 1) = *(v15 - 1);
LABEL_55:
            v15 = v59 - 1;
            v16 = v60 - 1;
            *(v60 - 1) = *(v59 - 1);
LABEL_56:
            v61 = v15 - 1;
            v62 = v16 - 1;
            *(v16 - 1) = *(v15 - 1);
LABEL_57:
            v63 = v61 - 1;
            v64 = v62 - 1;
            *(v62 - 1) = *(v61 - 1);
LABEL_58:
            v15 = v63 - 1;
            v16 = v64 - 1;
            *(v64 - 1) = *(v63 - 1);
LABEL_59:
            --v14;
            *(v16 - 1) = *(v15 - 1);
            if ( v14 <= 0 )
              break;
            --v15;
            --v16;
LABEL_52:
            v57 = *((_QWORD *)v15 - 1);
            --v16;
            --v15;
            *(_QWORD *)v16 = v57;
          }
          break;
        default:
          break;
      }
    }
  }
  if ( !a2 )
  {
    CoinCopyN<int>(a4, (unsigned int)a6, v111);
    CoinCopyN<int>(a3, (unsigned int)a6, v11);
    if ( a6 )
      goto LABEL_19;
LABEL_49:
    v95 = 0;
    v96 = 0;
    v33 = 0;
    goto LABEL_31;
  }
  CoinCopyN<int>(a4, (unsigned int)a6, v11);
  CoinCopyN<int>(a3, (unsigned int)a6, v111);
  if ( !a6 )
    goto LABEL_49;
LABEL_19:
  v27 = v111;
  v28 = *v111;
  if ( v111 != &v111[v6] )
  {
    while ( &v111[v6] != ++v27 )
    {
      if ( v28 < *v27 )
        v28 = *v27;
    }
  }
  v29 = v28 + 1;
  v30 = &v11[v6];
  v31 = *v11;
  v96 = v29;
  if ( v30 != v11 )
  {
    v32 = v11;
    while ( v30 != ++v32 )
    {
      if ( v31 < *v32 )
        v31 = *v32;
    }
  }
  v95 = v31 + 1;
  if ( (unsigned __int64)v96 > 0x1FFFFFFFFFFFFFFELL )
LABEL_100:
    __cxa_throw_bad_array_new_length();
  v33 = 4LL * v96;
LABEL_31:
  s = (void *)operator new[](v33);
  if ( (unsigned __int64)v95 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_100;
  v34 = (void *)operator new[](4LL * v95);
  if ( (unsigned __int64)(v95 + 1) > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_100;
  v35 = 4LL * v95 + 4;
  v113 = (int *)operator new[](v35);
  v114 = (void *)operator new[](v35);
  if ( v96 > 0 )
    memset(s, 0, 4LL * (unsigned int)(v96 - 1) + 4);
  LODWORD(v36) = a6 - 1;
  v37 = v113;
  if ( v95 <= 0 )
  {
    if ( a6 <= 0 )
      goto LABEL_92;
  }
  else
  {
    memset(v34, 0, 4LL * (unsigned int)(v95 - 1) + 4);
    if ( a6 <= 0 )
      goto LABEL_40;
  }
  v38 = v111;
  v39 = 0;
  do
  {
    ++*((_DWORD *)s + v38[v39]);
    v40 = v11[v39++];
    ++*((_DWORD *)v34 + v40);
  }
  while ( a6 > (int)v39 );
  if ( v95 <= 0 )
  {
LABEL_92:
    *v37 = 0;
    if ( (int)v36 < 0 )
      goto LABEL_93;
    goto LABEL_43;
  }
LABEL_40:
  v41 = 0;
  v42 = 0;
  do
  {
    v42 += *((_DWORD *)v34 + v41);
    v37[v41++] = v42;
  }
  while ( v95 > (int)v41 );
  v37[v95] = v42;
  if ( (int)v36 < 0 )
  {
LABEL_64:
    v109 = v34;
    v65 = 4;
    v108 = v11;
    v66 = 0;
    v67 = 0;
    while ( 1 )
    {
      v68 = *(int *)((char *)v37 + v65);
      v69 = (int *)((char *)v37 + v65 - 4);
      v70 = *v69;
      *(_DWORD *)((char *)v114 + v65 - 4) = 0;
      *v69 = v66;
      if ( v70 >= v68 )
        goto LABEL_65;
      v71 = v70;
      v72 = v70;
      v102 = v65 - 4;
      v98 = v70;
      v97 = v70;
      CoinSort_2<int,double,CoinFirstLess_2<int,double>>(&v111[v72], &v111[v68], &v112[v71], &v110);
      v73 = v111;
      v74 = v112;
      v75 = v65 - 4;
      v76 = v111[v97];
      v77 = v112[v97];
      if ( v68 <= v98 + 1 )
        goto LABEL_76;
      v106 = v67;
      v107 = v65;
      v78 = v72 * 4 + 4;
      v79 = v71 * 8 + 8;
      v80 = v111[v97];
      v81 = v66;
      v82 = 4 * ((unsigned int)(v68 - 2 - v98) + (__int64)(v98 + 1) + 1);
      while ( 1 )
      {
        v83 = *(int *)((char *)v73 + v78);
        if ( v83 <= v80 )
        {
          v77 = v77 + *(double *)((char *)v74 + v79);
          goto LABEL_70;
        }
        v99 = *(double *)((char *)v74 + v79);
        v84 = v99;
        if ( (unsigned __int8)CoinIsnan(v77) )
          break;
        v84 = v99;
        if ( (unsigned __int8)CoinIsnan(0.0) || v77 != 0.0 && fabs(v77) >= 1.0e-10 )
          break;
        v77 = v99;
        v80 = v83;
LABEL_70:
        v78 += 4;
        v79 += 8;
        if ( v78 == v82 )
          goto LABEL_75;
LABEL_71:
        v73 = v111;
        v74 = v112;
      }
      v85 = v112;
      v86 = v81;
      v78 += 4;
      ++v81;
      v79 += 8;
      v111[v86] = v80;
      v85[v86] = v77;
      v77 = v84;
      v80 = v83;
      ++*(_DWORD *)((char *)v114 + v102);
      if ( v78 != v82 )
        goto LABEL_71;
LABEL_75:
      v66 = v81;
      v76 = v80;
      v75 = v102;
      v67 = v106;
      v65 = v107;
LABEL_76:
      v103 = v75;
      v100 = v76;
      v87 = CoinIsnan(v77);
      v88 = v100;
      v89 = v103;
      if ( v87 )
      {
        v37 = v113;
        goto LABEL_78;
      }
      v93 = CoinIsnan(0.0);
      v37 = v113;
      v88 = v100;
      v89 = v103;
      if ( !v93 && (v77 == 0.0 || fabs(v77) < 1.0e-10) )
      {
LABEL_65:
        ++v67;
        v65 += 4;
        if ( v67 >= v95 )
          goto LABEL_79;
      }
      else
      {
LABEL_78:
        v90 = v66;
        v91 = (char *)v114 + v89;
        ++v66;
        ++v67;
        v65 += 4;
        v111[v90] = v88;
        v112[v90] = v77;
        ++*v91;
        if ( v67 >= v95 )
        {
LABEL_79:
          v92 = v66;
          v11 = v108;
          v34 = v109;
          goto LABEL_80;
        }
      }
    }
  }
LABEL_43:
  v43 = v112;
  v44 = v111;
  v36 = (int)v36;
  do
  {
    v45 = v11[v36];
    if ( (int)v45 >= 0 )
    {
      v46 = v43[v36];
      v47 = v44[v36];
      v11[v36] = -2;
      do
      {
        while ( 1 )
        {
          v48 = &v37[v45];
          v49 = *v48 - 1;
          v50 = &v43[v49];
          v51 = v49;
          v52 = &v11[v51];
          v53 = &v44[v51];
          v54 = *v50;
          v55 = *v53;
          v56 = *v52;
          *v48 = v49;
          *v50 = v46;
          *v53 = v47;
          *v52 = -1;
          if ( v56 < 0 )
            break;
          v47 = v55;
          v46 = v54;
          v45 = v56;
        }
      }
      while ( v56 != -2 );
    }
    --v36;
  }
  while ( (int)v36 >= 0 );
  v37 = v113;
  if ( v95 > 0 )
    goto LABEL_64;
LABEL_93:
  v92 = 0;
LABEL_80:
  v37[v95] = v92;
  CoinPackedMatrix::assignMatrix(this, a2, v96, v95, v92, &v112, &v111, &v113, (int **)&v114, -1, -1);
  operator delete[](s);
  operator delete[](v34);
  if ( v114 )
    operator delete[](v114);
  operator delete[](v11);
}

