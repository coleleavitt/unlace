__int64 __fastcall CoinModel::createArrays(
        CoinModel *this,
        double **a2,
        double **a3,
        double **a4,
        double **a5,
        double **a6,
        int **a7,
        double **a8)
{
  unsigned __int64 v12; // rbp
  int v13; // edx
  unsigned __int64 v14; // rbp
  char *v15; // rax
  __int64 v16; // r8
  char *v17; // rsi
  char *v18; // rdi
  int v19; // edx
  __int64 *v20; // r9
  __int64 v21; // r11
  char *v22; // r10
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  char *v25; // r11
  int v26; // r9d
  void *v27; // rax
  double *v28; // r8
  unsigned int v29; // ebp
  unsigned __int64 v30; // rdx
  void *v31; // rax
  double *v32; // r8
  unsigned __int64 v33; // rdx
  void *v34; // rax
  double *v35; // r8
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdi
  int v41; // edx
  double *v42; // rsi
  double v43; // xmm0_8
  double v44; // xmm0_8
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // r12
  void *v47; // rax
  double *v48; // r8
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r12
  void *v51; // rax
  double *v52; // r8
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r12
  void *v55; // rax
  double *v56; // r8
  const void *v57; // rsi
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // r12
  void *v60; // rax
  int *v61; // r8
  int v62; // eax
  __int64 v63; // r9
  __int64 v64; // rdi
  unsigned __int64 v65; // rax
  int v66; // edx
  double *v67; // r10
  double v68; // xmm0_8
  double *v69; // r10
  double v70; // xmm0_8
  double *v71; // r10
  double v72; // xmm0_8
  double v73; // xmm0_8
  int v75; // r11d
  char *v76; // r10
  int v77; // r11d
  char *v78; // rax
  __int64 v79; // r11
  void *v82; // [rsp+8h] [rbp-50h]
  void *v83; // [rsp+8h] [rbp-50h]
  void *v84; // [rsp+8h] [rbp-50h]
  int src; // [rsp+10h] [rbp-48h]
  void *srca; // [rsp+10h] [rbp-48h]
  void *srcb; // [rsp+10h] [rbp-48h]
  __int64 n; // [rsp+18h] [rbp-40h]
  __int64 na; // [rsp+18h] [rbp-40h]

  v12 = *((int *)this + 154);
  v13 = *((_DWORD *)this + 66);
  if ( (int)v12 < v13 )
  {
    src = *((_DWORD *)this + 66);
    if ( (unsigned __int64)v13 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v14 = 8LL * v13;
    v15 = (char *)operator new[](v14);
    v16 = *((int *)this + 154);
    v17 = v15;
    v18 = *((char **)this + 78);
    v19 = src;
    if ( (_DWORD)v16 && v18 != v15 )
    {
      if ( (int)v16 >> 3 <= 0 )
      {
        v25 = *((char **)this + 78);
      }
      else
      {
        v20 = *((__int64 **)this + 78);
        v21 = (unsigned int)(((int)v16 >> 3) - 1);
        v22 = &v15[64 * v21 + 64];
        do
        {
          v23 = *v20;
          v15 += 64;
          v20 += 8;
          *((_QWORD *)v15 - 8) = v23;
          *((_QWORD *)v15 - 7) = *(v20 - 7);
          *((_QWORD *)v15 - 6) = *(v20 - 6);
          *((_QWORD *)v15 - 5) = *(v20 - 5);
          *((_QWORD *)v15 - 4) = *(v20 - 4);
          *((_QWORD *)v15 - 3) = *(v20 - 3);
          *((_QWORD *)v15 - 2) = *(v20 - 2);
          *((_QWORD *)v15 - 1) = *(v20 - 1);
        }
        while ( v22 != v15 );
        v24 = ((int)v21 + 1LL) << 6;
        v25 = &v18[v24];
        v15 = &v17[v24];
      }
      switch ( (int)v16 % 8 )
      {
        case 1:
          goto LABEL_16;
        case 2:
          goto LABEL_15;
        case 3:
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          *((_QWORD *)v15 + 6) = *((_QWORD *)v25 + 6);
LABEL_11:
          *((_QWORD *)v15 + 5) = *((_QWORD *)v25 + 5);
LABEL_12:
          *((_QWORD *)v15 + 4) = *((_QWORD *)v25 + 4);
LABEL_13:
          *((_QWORD *)v15 + 3) = *((_QWORD *)v25 + 3);
LABEL_14:
          *((_QWORD *)v15 + 2) = *((_QWORD *)v25 + 2);
LABEL_15:
          *((_QWORD *)v15 + 1) = *((_QWORD *)v25 + 1);
LABEL_16:
          *(_QWORD *)v15 = *(_QWORD *)v25;
          break;
        default:
          break;
      }
    }
    v26 = src - v16;
    if ( src != (_DWORD)v16 )
    {
      v75 = v26 + 7;
      v76 = &v17[8 * v16];
      if ( v26 >= 0 )
        v75 = src - v16;
      v77 = v75 >> 3;
      if ( v77 > 0 )
      {
        v78 = &v17[8 * v16];
        v79 = (unsigned int)(v77 - 1);
        do
        {
          *(_QWORD *)v78 = 0xABD0E07EC39EA8F1LL;
          v78 += 64;
          *((_QWORD *)v78 - 7) = 0xABD0E07EC39EA8F1LL;
          *((_QWORD *)v78 - 6) = 0xABD0E07EC39EA8F1LL;
          *((_QWORD *)v78 - 5) = 0xABD0E07EC39EA8F1LL;
          *((_QWORD *)v78 - 4) = 0xABD0E07EC39EA8F1LL;
          *((_QWORD *)v78 - 3) = 0xABD0E07EC39EA8F1LL;
          *((_QWORD *)v78 - 2) = 0xABD0E07EC39EA8F1LL;
          *((_QWORD *)v78 - 1) = 0xABD0E07EC39EA8F1LL;
        }
        while ( &v76[64 * v79 + 64] != v78 );
        v76 += 64 * (int)v79 + 64;
      }
      switch ( v26 % 8 )
      {
        case 1:
          goto LABEL_82;
        case 2:
          goto LABEL_81;
        case 3:
          goto LABEL_80;
        case 4:
          goto LABEL_79;
        case 5:
          goto LABEL_78;
        case 6:
          goto LABEL_77;
        case 7:
          *((_QWORD *)v76 + 6) = 0xABD0E07EC39EA8F1LL;
LABEL_77:
          *((_QWORD *)v76 + 5) = 0xABD0E07EC39EA8F1LL;
LABEL_78:
          *((_QWORD *)v76 + 4) = 0xABD0E07EC39EA8F1LL;
LABEL_79:
          *((_QWORD *)v76 + 3) = 0xABD0E07EC39EA8F1LL;
LABEL_80:
          *((_QWORD *)v76 + 2) = 0xABD0E07EC39EA8F1LL;
LABEL_81:
          *((_QWORD *)v76 + 1) = 0xABD0E07EC39EA8F1LL;
LABEL_82:
          *(_QWORD *)v76 = 0xABD0E07EC39EA8F1LL;
          if ( !v18 )
            goto LABEL_20;
          goto LABEL_19;
        default:
          break;
      }
    }
    if ( v18 )
    {
LABEL_19:
      operator delete[](v18);
      v19 = src;
    }
LABEL_20:
    *((_QWORD *)this + 78) = v17;
    *((_DWORD *)this + 154) = v19;
LABEL_21:
    v27 = (void *)operator new[](v14);
    v28 = (double *)memcpy(v27, v17, v14);
    goto LABEL_22;
  }
  v17 = *((char **)this + 78);
  if ( v17 )
  {
    if ( v12 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v14 = 8 * v12;
    goto LABEL_21;
  }
  v28 = nullptr;
LABEL_22:
  *a8 = v28;
  v29 = CoinModel::computeAssociated(this, v28);
  v30 = *((int *)this + 2);
  srca = *((void **)this + 16);
  if ( srca )
  {
    if ( v30 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    n = 8 * v30;
    v31 = (void *)operator new[](8 * v30);
    v32 = (double *)memcpy(v31, srca, n);
  }
  else
  {
    v32 = nullptr;
  }
  *a2 = v32;
  v33 = *((int *)this + 2);
  srcb = *((void **)this + 17);
  if ( srcb )
  {
    if ( v33 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    na = 8 * v33;
    v34 = (void *)operator new[](8 * v33);
    v35 = (double *)memcpy(v34, srcb, na);
  }
  else
  {
    v35 = nullptr;
  }
  *a3 = v35;
  v36 = *((_DWORD *)this + 2);
  if ( v36 > 0 )
  {
    v37 = (unsigned int)(v36 - 1);
    v38 = *((_QWORD *)this + 22);
    v39 = 0;
    v40 = v37 + 1;
    do
    {
      v41 = *(_DWORD *)(v38 + 4 * v39);
      if ( (v41 & 1) != 0 )
      {
        v42 = &(*a2)[v39];
        v43 = (*a8)[(int)*v42];
        if ( v43 != -1.23456787654321e-97 )
          *v42 = v43;
      }
      if ( (v41 & 2) != 0 )
      {
        v44 = (*a8)[(int)v35[v39]];
        if ( v44 != -1.23456787654321e-97 )
          v35[v39] = v44;
      }
      ++v39;
    }
    while ( v40 != v39 );
  }
  v45 = *((int *)this + 3);
  v82 = *((void **)this + 24);
  if ( v82 )
  {
    if ( v45 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v46 = 8 * v45;
    v47 = (void *)operator new[](v46);
    v48 = (double *)memcpy(v47, v82, v46);
  }
  else
  {
    v48 = nullptr;
  }
  *a4 = v48;
  v49 = *((int *)this + 3);
  v83 = *((void **)this + 25);
  if ( v83 )
  {
    if ( v49 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v50 = 8 * v49;
    v51 = (void *)operator new[](v50);
    v52 = (double *)memcpy(v51, v83, v50);
  }
  else
  {
    v52 = nullptr;
  }
  *a5 = v52;
  v53 = *((int *)this + 3);
  v84 = *((void **)this + 23);
  if ( v84 )
  {
    if ( v53 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_91;
    v54 = 8 * v53;
    v55 = (void *)operator new[](v54);
    v56 = (double *)memcpy(v55, v84, v54);
  }
  else
  {
    v56 = nullptr;
  }
  v57 = *((const void **)this + 30);
  *a6 = v56;
  v58 = *((int *)this + 3);
  if ( v57 )
  {
    if ( v58 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v59 = 4 * v58;
      v60 = (void *)operator new[](v59);
      v61 = (int *)memcpy(v60, v57, v59);
      goto LABEL_49;
    }
LABEL_91:
    __cxa_throw_bad_array_new_length();
  }
  v61 = nullptr;
LABEL_49:
  *a7 = v61;
  v62 = *((_DWORD *)this + 3);
  if ( v62 > 0 )
  {
    v63 = *((_QWORD *)this + 35);
    v64 = 4LL * (unsigned int)(v62 - 1) + 4;
    v65 = 0;
    do
    {
      v66 = *(_DWORD *)(v63 + v65);
      if ( (v66 & 1) != 0 )
      {
        v67 = &(*a4)[v65 / 4];
        v68 = (*a8)[(int)*v67];
        if ( v68 != -1.23456787654321e-97 )
          *v67 = v68;
      }
      if ( (v66 & 2) != 0 )
      {
        v69 = &(*a5)[v65 / 4];
        v70 = (*a8)[(int)*v69];
        if ( v70 != -1.23456787654321e-97 )
          *v69 = v70;
      }
      if ( (v66 & 4) != 0 )
      {
        v71 = &(*a6)[v65 / 4];
        v72 = (*a8)[(int)*v71];
        if ( v72 != -1.23456787654321e-97 )
          *v71 = v72;
      }
      if ( (v66 & 8) != 0 )
      {
        v73 = (*a8)[v61[v65 / 4]];
        if ( v73 != -1.23456787654321e-97 )
          v61[v65 / 4] = (int)v73;
      }
      v65 += 4LL;
    }
    while ( v64 != v65 );
  }
  return v29;
}

