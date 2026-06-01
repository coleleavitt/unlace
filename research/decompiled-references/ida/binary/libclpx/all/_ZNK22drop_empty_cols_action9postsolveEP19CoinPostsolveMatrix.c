__int64 __fastcall drop_empty_cols_action::postsolve(drop_empty_cols_action *this, CoinPostsolveMatrix *a2)
{
  CoinPostsolveMatrix *v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  double v6; // xmm1_8
  int v7; // esi
  CoinPrePostsolveMatrix *v8; // rbp
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  char *v13; // rax
  __int64 v14; // rdx
  int *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // xmm0_8
  __int64 v18; // r10
  __int64 v19; // r9
  CoinPrePostsolveMatrix *v20; // rdx
  int v21; // ebx
  CoinPrePostsolveMatrix *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // xmm0_8
  double *v25; // rdi
  __int64 v27; // xmm0_8
  CoinPrePostsolveMatrix *v28; // rdx
  int v29; // ebx
  CoinPrePostsolveMatrix *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // xmm0_8
  double v33; // xmm0_8
  __int64 v34; // r11
  char *v35; // rcx
  char *v36; // r11
  __int64 v37; // xmm0_8
  CoinPrePostsolveMatrix *v38; // rdx
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // xmm0_8
  double *v42; // rsi
  __int64 v43; // xmm0_8
  CoinPrePostsolveMatrix *v44; // rdx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // xmm0_8
  double v48; // xmm0_8
  __int64 v49; // xmm0_8
  CoinPrePostsolveMatrix *v50; // rax
  int v51; // ebx
  CoinPrePostsolveMatrix *v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // xmm0_8
  __int64 v55; // xmm0_8
  CoinPrePostsolveMatrix *v56; // rax
  int v57; // ebx
  CoinPrePostsolveMatrix *v58; // rbp
  __int64 v59; // rdx
  __int64 v60; // xmm0_8
  __int64 v61; // xmm0_8
  CoinPrePostsolveMatrix *v62; // rax
  int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // xmm0_8
  __int64 v66; // xmm0_8
  CoinPrePostsolveMatrix *v67; // rax
  int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // xmm0_8
  int v71; // [rsp+4h] [rbp-74h]
  CoinPrePostsolveMatrix *v72; // [rsp+8h] [rbp-70h]
  CoinPrePostsolveMatrix *v73; // [rsp+10h] [rbp-68h]
  CoinPrePostsolveMatrix *v74; // [rsp+10h] [rbp-68h]
  CoinPrePostsolveMatrix *v75; // [rsp+10h] [rbp-68h]
  CoinPrePostsolveMatrix *v76; // [rsp+10h] [rbp-68h]
  int v77; // [rsp+18h] [rbp-60h]
  CoinPrePostsolveMatrix *v78; // [rsp+18h] [rbp-60h]
  CoinPrePostsolveMatrix *v79; // [rsp+18h] [rbp-60h]
  __int64 v80; // [rsp+18h] [rbp-60h]
  __int64 v81; // [rsp+20h] [rbp-58h]
  __int64 v82; // [rsp+20h] [rbp-58h]
  __int64 v83; // [rsp+28h] [rbp-50h]
  __int64 v84; // [rsp+28h] [rbp-50h]
  __int64 v85; // [rsp+30h] [rbp-48h]
  __int64 v86; // [rsp+38h] [rbp-40h]

  v2 = a2;
  v3 = *((_QWORD *)a2 + 20);
  v4 = *((_QWORD *)a2 + 23);
  v5 = *((_QWORD *)a2 + 24);
  v6 = *((double *)a2 + 19);
  v73 = *((CoinPrePostsolveMatrix **)this + 3);
  v7 = *(_DWORD *)a2;
  v71 = *((_DWORD *)this + 4);
  v8 = *((CoinPrePostsolveMatrix **)v2 + 5);
  v9 = *((_QWORD *)v2 + 6);
  v10 = *((_QWORD *)v2 + 11);
  v11 = *((_QWORD *)v2 + 12);
  v86 = v3;
  v12 = *((_QWORD *)v2 + 9);
  v85 = v4;
  v83 = v5;
  v77 = v71 + v7;
  if ( (unsigned __int64)(v71 + v7) > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v13 = (char *)operator new[](4LL * (v71 + v7));
  if ( !v77 )
  {
    if ( v71 > 0 )
    {
      LODWORD(v14) = -1;
      goto LABEL_5;
    }
LABEL_40:
    operator delete[](v13);
    goto LABEL_18;
  }
  if ( v77 / 8 <= 0 )
  {
    v36 = v13;
  }
  else
  {
    v34 = (unsigned int)(v77 / 8 - 1);
    v35 = v13;
    do
    {
      *(_OWORD *)v35 = 0;
      v35 += 32;
      *((_OWORD *)v35 - 1) = 0;
    }
    while ( v35 != &v13[32 * v34 + 32] );
    v36 = &v13[32 * (int)v34 + 32];
  }
  switch ( v77 % 8 )
  {
    case 1:
      goto LABEL_37;
    case 2:
      goto LABEL_36;
    case 3:
      goto LABEL_35;
    case 4:
      goto LABEL_34;
    case 5:
      goto LABEL_33;
    case 6:
      goto LABEL_32;
    case 7:
      *((_DWORD *)v36 + 6) = 0;
LABEL_32:
      *((_DWORD *)v36 + 5) = 0;
LABEL_33:
      *((_DWORD *)v36 + 4) = 0;
LABEL_34:
      *((_DWORD *)v36 + 3) = 0;
LABEL_35:
      *((_DWORD *)v36 + 2) = 0;
LABEL_36:
      *((_DWORD *)v36 + 1) = 0;
LABEL_37:
      *(_DWORD *)v36 = 0;
      break;
    default:
      break;
  }
  LODWORD(v14) = v77 - 1;
  if ( v71 <= 0 )
  {
    if ( (int)v14 >= 0 )
      goto LABEL_8;
    goto LABEL_40;
  }
LABEL_5:
  v15 = (int *)((char *)v73 + 32);
  do
  {
    v16 = *v15;
    v15 += 10;
    *(_DWORD *)&v13[4 * v16] = -1;
  }
  while ( (int *)((char *)v73 + 40 * (unsigned int)(v71 - 1) + 72) != v15 );
  if ( (int)v14 < 0 )
  {
    operator delete[](v13);
    v18 = v86;
    v19 = v85;
    if ( v86 )
    {
      if ( v83 )
      {
        if ( v85 )
        {
LABEL_15:
          v20 = v73;
          v78 = v8;
          v74 = v2;
          v81 = v18;
          v21 = 0;
          v84 = v19;
          v22 = v20;
          do
          {
            v23 = *((int *)v22 + 8);
            ++v21;
            v24 = *(_QWORD *)v22;
            v22 = (CoinPrePostsolveMatrix *)((char *)v22 + 40);
            *(_DWORD *)(v9 + 4 * v23) = 0;
            *((_DWORD *)v78 + v23) = -66666666;
            *(_QWORD *)(v10 + 8 * v23) = v24;
            v25 = (double *)(v12 + 8 * v23);
            *(_QWORD *)(v11 + 8 * v23) = *((_QWORD *)v22 - 4);
            *v25 = *((double *)v22 - 3);
            *(_QWORD *)(v81 + 8 * v23) = *((_QWORD *)v22 - 2);
            *(double *)(v84 + 8 * v23) = v6 * *v25;
            CoinPrePostsolveMatrix::setColumnStatusUsingValue(v74, v23);
          }
          while ( v71 > v21 );
LABEL_17:
          v2 = v74;
          goto LABEL_18;
        }
LABEL_62:
        v50 = v73;
        v75 = v8;
        v72 = v2;
        v80 = v18;
        v51 = 0;
        v52 = v50;
        do
        {
          v53 = *((int *)v52 + 8);
          ++v51;
          v54 = *(_QWORD *)v52;
          v52 = (CoinPrePostsolveMatrix *)((char *)v52 + 40);
          *(_DWORD *)(v9 + 4 * v53) = 0;
          *((_DWORD *)v75 + v53) = -66666666;
          *(_QWORD *)(v10 + 8 * v53) = v54;
          *(_QWORD *)(v11 + 8 * v53) = *((_QWORD *)v52 - 4);
          *(_QWORD *)(v12 + 8 * v53) = *((_QWORD *)v52 - 3);
          *(_QWORD *)(v80 + 8 * v53) = *((_QWORD *)v52 - 2);
          CoinPrePostsolveMatrix::setColumnStatusUsingValue(v72, v53);
        }
        while ( v71 > v51 );
LABEL_64:
        v2 = v72;
        goto LABEL_18;
      }
      if ( v85 )
      {
LABEL_47:
        v38 = v73;
        v39 = 0;
        do
        {
          v40 = *((int *)v38 + 8);
          v41 = *(_QWORD *)v38;
          ++v39;
          v38 = (CoinPrePostsolveMatrix *)((char *)v38 + 40);
          *(_DWORD *)(v9 + 4 * v40) = 0;
          *((_DWORD *)v8 + v40) = -66666666;
          *(_QWORD *)(v10 + 8 * v40) = v41;
          v42 = (double *)(v12 + 8 * v40);
          *(_QWORD *)(v11 + 8 * v40) = *((_QWORD *)v38 - 4);
          *v42 = *((double *)v38 - 3);
          *(_QWORD *)(v18 + 8 * v40) = *((_QWORD *)v38 - 2);
          *(double *)(v19 + 8 * v40) = v6 * *v42;
        }
        while ( v71 > v39 );
        goto LABEL_18;
      }
LABEL_77:
      v62 = v73;
      v63 = 0;
      do
      {
        v64 = *((int *)v62 + 8);
        v65 = *(_QWORD *)v62;
        ++v63;
        v62 = (CoinPrePostsolveMatrix *)((char *)v62 + 40);
        *(_DWORD *)(v9 + 4 * v64) = 0;
        *((_DWORD *)v8 + v64) = -66666666;
        *(_QWORD *)(v10 + 8 * v64) = v65;
        *(_QWORD *)(v11 + 8 * v64) = *((_QWORD *)v62 - 4);
        *(_QWORD *)(v12 + 8 * v64) = *((_QWORD *)v62 - 3);
        *(_QWORD *)(v18 + 8 * v64) = *((_QWORD *)v62 - 2);
      }
      while ( v71 > v63 );
      goto LABEL_18;
    }
    if ( v83 )
    {
      if ( v85 )
        goto LABEL_23;
      goto LABEL_69;
    }
    if ( v85 )
      goto LABEL_54;
LABEL_84:
    v67 = v73;
    v68 = 0;
    do
    {
      v69 = *((int *)v67 + 8);
      v70 = *(_QWORD *)v67;
      ++v68;
      v67 = (CoinPrePostsolveMatrix *)((char *)v67 + 40);
      *(_DWORD *)(v9 + 4 * v69) = 0;
      *((_DWORD *)v8 + v69) = -66666666;
      *(_QWORD *)(v10 + 8 * v69) = v70;
      *(_QWORD *)(v11 + 8 * v69) = *((_QWORD *)v67 - 4);
      *(_QWORD *)(v12 + 8 * v69) = *((_QWORD *)v67 - 3);
    }
    while ( v71 > v68 );
    goto LABEL_18;
  }
LABEL_8:
  v14 = (int)v14;
  if ( !v83 )
  {
    if ( v85 )
    {
      if ( v86 )
      {
        do
        {
          if ( !*(_DWORD *)&v13[4 * v14] )
          {
            v37 = *(_QWORD *)(v10 + 8LL * --v7);
            *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
            *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
            *(_QWORD *)(v10 + 8 * v14) = v37;
            *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
            *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
            *(_QWORD *)(v86 + 8 * v14) = *(_QWORD *)(v86 + 8LL * v7);
            *(_QWORD *)(v85 + 8 * v14) = *(_QWORD *)(v85 + 8LL * v7);
          }
          --v14;
        }
        while ( (int)v14 >= 0 );
        operator delete[](v13);
        v18 = v86;
        v19 = v85;
        if ( v71 <= 0 )
          goto LABEL_18;
        goto LABEL_47;
      }
      do
      {
        if ( !*(_DWORD *)&v13[4 * v14] )
        {
          v43 = *(_QWORD *)(v10 + 8LL * --v7);
          *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
          *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
          *(_QWORD *)(v10 + 8 * v14) = v43;
          *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
          *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
          *(_QWORD *)(v85 + 8 * v14) = *(_QWORD *)(v85 + 8LL * v7);
        }
        --v14;
      }
      while ( (int)v14 >= 0 );
      operator delete[](v13);
      v19 = v85;
      if ( v71 <= 0 )
        goto LABEL_18;
LABEL_54:
      v44 = v73;
      v45 = 0;
      do
      {
        v46 = *((int *)v44 + 8);
        v47 = *(_QWORD *)v44;
        ++v45;
        v44 = (CoinPrePostsolveMatrix *)((char *)v44 + 40);
        *(_DWORD *)(v9 + 4 * v46) = 0;
        *((_DWORD *)v8 + v46) = -66666666;
        *(_QWORD *)(v10 + 8 * v46) = v47;
        *(_QWORD *)(v11 + 8 * v46) = *((_QWORD *)v44 - 4);
        v48 = *((double *)v44 - 3);
        *(double *)(v12 + 8 * v46) = v48;
        *(double *)(v19 + 8 * v46) = v48 * v6;
      }
      while ( v71 > v45 );
      goto LABEL_18;
    }
    if ( v86 )
    {
      do
      {
        if ( !*(_DWORD *)&v13[4 * v14] )
        {
          v61 = *(_QWORD *)(v10 + 8LL * --v7);
          *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
          *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
          *(_QWORD *)(v10 + 8 * v14) = v61;
          *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
          *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
          *(_QWORD *)(v86 + 8 * v14) = *(_QWORD *)(v86 + 8LL * v7);
        }
        --v14;
      }
      while ( (int)v14 >= 0 );
      operator delete[](v13);
      v18 = v86;
      if ( v71 <= 0 )
        goto LABEL_18;
      goto LABEL_77;
    }
    do
    {
      if ( !*(_DWORD *)&v13[4 * v14] )
      {
        v66 = *(_QWORD *)(v10 + 8LL * --v7);
        *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
        *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
        *(_QWORD *)(v10 + 8 * v14) = v66;
        *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
        *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
      }
      --v14;
    }
    while ( (int)v14 >= 0 );
    operator delete[](v13);
    if ( v71 <= 0 )
      goto LABEL_18;
    goto LABEL_84;
  }
  if ( !v85 )
  {
    if ( v86 )
    {
      do
      {
        if ( !*(_DWORD *)&v13[4 * v14] )
        {
          v49 = *(_QWORD *)(v10 + 8LL * --v7);
          *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
          *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
          *(_QWORD *)(v10 + 8 * v14) = v49;
          *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
          *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
          *(_QWORD *)(v86 + 8 * v14) = *(_QWORD *)(v86 + 8LL * v7);
          *(_BYTE *)(v83 + v14) = *(_BYTE *)(v83 + v7);
        }
        --v14;
      }
      while ( (int)v14 >= 0 );
      operator delete[](v13);
      v18 = v86;
      if ( v71 <= 0 )
        goto LABEL_18;
      goto LABEL_62;
    }
    do
    {
      if ( !*(_DWORD *)&v13[4 * v14] )
      {
        v55 = *(_QWORD *)(v10 + 8LL * --v7);
        *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
        *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
        *(_QWORD *)(v10 + 8 * v14) = v55;
        *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
        *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
        *(_BYTE *)(v83 + v14) = *(_BYTE *)(v83 + v7);
      }
      --v14;
    }
    while ( (int)v14 >= 0 );
    operator delete[](v13);
    if ( v71 <= 0 )
      goto LABEL_18;
LABEL_69:
    v56 = v73;
    v76 = v8;
    v72 = v2;
    v57 = 0;
    v58 = v56;
    do
    {
      v59 = *((int *)v58 + 8);
      ++v57;
      v60 = *(_QWORD *)v58;
      v58 = (CoinPrePostsolveMatrix *)((char *)v58 + 40);
      *(_DWORD *)(v9 + 4 * v59) = 0;
      *((_DWORD *)v76 + v59) = -66666666;
      *(_QWORD *)(v10 + 8 * v59) = v60;
      *(_QWORD *)(v11 + 8 * v59) = *((_QWORD *)v58 - 4);
      *(_QWORD *)(v12 + 8 * v59) = *((_QWORD *)v58 - 3);
      CoinPrePostsolveMatrix::setColumnStatusUsingValue(v72, v59);
    }
    while ( v71 > v57 );
    goto LABEL_64;
  }
  if ( !v86 )
  {
    do
    {
      if ( !*(_DWORD *)&v13[4 * v14] )
      {
        v27 = *(_QWORD *)(v10 + 8LL * --v7);
        *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
        *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
        *(_QWORD *)(v10 + 8 * v14) = v27;
        *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
        *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
        *(_QWORD *)(v85 + 8 * v14) = *(_QWORD *)(v85 + 8LL * v7);
        *(_BYTE *)(v83 + v14) = *(_BYTE *)(v83 + v7);
      }
      --v14;
    }
    while ( (int)v14 >= 0 );
    operator delete[](v13);
    v19 = v85;
    if ( v71 <= 0 )
      goto LABEL_18;
LABEL_23:
    v28 = v73;
    v79 = v8;
    v74 = v2;
    v82 = v19;
    v29 = 0;
    v30 = v28;
    do
    {
      v31 = *((int *)v30 + 8);
      ++v29;
      v32 = *(_QWORD *)v30;
      v30 = (CoinPrePostsolveMatrix *)((char *)v30 + 40);
      *(_DWORD *)(v9 + 4 * v31) = 0;
      *((_DWORD *)v79 + v31) = -66666666;
      *(_QWORD *)(v10 + 8 * v31) = v32;
      *(_QWORD *)(v11 + 8 * v31) = *((_QWORD *)v30 - 4);
      v33 = *((double *)v30 - 3);
      *(double *)(v12 + 8 * v31) = v33;
      *(double *)(v82 + 8 * v31) = v33 * v6;
      CoinPrePostsolveMatrix::setColumnStatusUsingValue(v74, v31);
    }
    while ( v71 > v29 );
    goto LABEL_17;
  }
  do
  {
    if ( !*(_DWORD *)&v13[4 * v14] )
    {
      v17 = *(_QWORD *)(v10 + 8LL * --v7);
      *((_DWORD *)v8 + v14) = *((_DWORD *)v8 + v7);
      *(_DWORD *)(v9 + 4 * v14) = *(_DWORD *)(v9 + 4LL * v7);
      *(_QWORD *)(v10 + 8 * v14) = v17;
      *(_QWORD *)(v11 + 8 * v14) = *(_QWORD *)(v11 + 8LL * v7);
      *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8LL * v7);
      *(_QWORD *)(v86 + 8 * v14) = *(_QWORD *)(v86 + 8LL * v7);
      *(_QWORD *)(v85 + 8 * v14) = *(_QWORD *)(v85 + 8LL * v7);
      *(_BYTE *)(v83 + v14) = *(_BYTE *)(v83 + v7);
    }
    --v14;
  }
  while ( (int)v14 >= 0 );
  operator delete[](v13);
  v18 = v86;
  v19 = v85;
  if ( v71 > 0 )
    goto LABEL_15;
LABEL_18:
  *(_DWORD *)v2 += v71;
  return (unsigned int)v71;
}

