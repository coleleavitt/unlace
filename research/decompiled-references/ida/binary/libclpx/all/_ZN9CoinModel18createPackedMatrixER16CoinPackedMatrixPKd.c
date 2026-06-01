__int64 __fastcall CoinModel::createPackedMatrix(CoinModel *this, CoinPackedMatrix *a2, const double *a3)
{
  int v3; // ecx
  int v5; // esi
  int v6; // edx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  int *v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // r13d
  int *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int *v21; // rbp
  unsigned __int64 v22; // r13
  int *v23; // r12
  __int64 v24; // rax
  int v25; // ecx
  double *v26; // r13
  int v27; // edx
  unsigned __int64 v28; // rax
  int v29; // r10d
  __int64 v30; // rax
  int v31; // r9d
  int i; // esi
  int *v33; // r11
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // edi
  double v37; // xmm0_8
  __int64 v38; // r15
  __int64 v39; // rax
  int v40; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  unsigned int v45; // [rsp+0h] [rbp-A8h]
  int v46; // [rsp+4h] [rbp-A4h]
  _BYTE v48[152]; // [rsp+10h] [rbp-98h] BYREF

  if ( *((_DWORD *)this + 176) == 3 )
    return 0;
  v3 = *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 2);
  v6 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 176) = 2;
  CoinModel::resize(this, v5, v6, v3);
  v8 = *((int *)this + 3);
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
LABEL_43:
    __cxa_throw_bad_array_new_length();
  v9 = operator new[](4 * v8);
  v10 = *((_DWORD *)this + 3);
  v11 = (int *)v9;
  if ( !v10 )
  {
    v12 = *((_DWORD *)this + 27);
    v13 = 1;
    if ( v12 > 0 )
      goto LABEL_5;
LABEL_46:
    v22 = 0;
    v44 = operator new[](4 * v13);
    v20 = 0;
    v21 = (int *)v44;
    goto LABEL_11;
  }
  if ( v10 / 8 > 0 )
  {
    v42 = (unsigned int)(v10 / 8 - 1);
    v43 = v9 + 32 * v42 + 32;
    do
    {
      *(_OWORD *)v9 = 0;
      v9 += 32;
      *(_OWORD *)(v9 - 16) = 0;
    }
    while ( v43 != v9 );
    v9 = (__int64)&v11[8 * (int)v42 + 8];
  }
  switch ( v10 % 8 )
  {
    case 1:
      goto LABEL_40;
    case 2:
      goto LABEL_39;
    case 3:
      goto LABEL_38;
    case 4:
      goto LABEL_37;
    case 5:
      goto LABEL_36;
    case 6:
      goto LABEL_35;
    case 7:
      *(_DWORD *)(v9 + 24) = 0;
LABEL_35:
      *(_DWORD *)(v9 + 20) = 0;
LABEL_36:
      *(_DWORD *)(v9 + 16) = 0;
LABEL_37:
      *(_DWORD *)(v9 + 12) = 0;
LABEL_38:
      *(_DWORD *)(v9 + 8) = 0;
LABEL_39:
      *(_DWORD *)(v9 + 4) = 0;
LABEL_40:
      *(_DWORD *)v9 = 0;
      break;
    default:
      break;
  }
  v12 = *((_DWORD *)this + 27);
  v13 = v10 + 1;
  if ( v12 <= 0 )
  {
    if ( v13 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_43;
    goto LABEL_46;
  }
LABEL_5:
  v14 = *((_QWORD *)this + 37);
  v15 = 0;
  v16 = (int *)(v14 + 4);
  v17 = v14 + 16LL * (unsigned int)(v12 - 1) + 20;
  do
  {
    v18 = *v16;
    if ( (int)v18 >= 0 )
    {
      ++v11[v18];
      ++v15;
    }
    v16 += 4;
  }
  while ( (int *)v17 != v16 );
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_43;
  v19 = operator new[](4 * v13);
  v20 = 4LL * v15;
  v21 = (int *)v19;
  v22 = 8LL * v15;
LABEL_11:
  v23 = (int *)operator new[](v20);
  v24 = operator new[](v22);
  v25 = *((_DWORD *)this + 3);
  v26 = (double *)v24;
  *v21 = 0;
  if ( v25 <= 0 )
  {
    v29 = *((_DWORD *)this + 27);
    if ( v29 <= 0 )
    {
      v46 = 0;
      v45 = 0;
      goto LABEL_26;
    }
  }
  else
  {
    v27 = 0;
    v28 = 0;
    do
    {
      v27 += v11[v28 / 4];
      v11[v28 / 4] = 0;
      v21[v28 / 4 + 1] = v27;
      v28 += 4LL;
    }
    while ( 4LL * (unsigned int)(v25 - 1) + 4 != v28 );
    v29 = *((_DWORD *)this + 27);
    if ( v29 <= 0 )
    {
      v46 = 0;
      v45 = 0;
      goto LABEL_24;
    }
  }
  v30 = *((_QWORD *)this + 37);
  v45 = 0;
  v31 = 0;
  for ( i = 0; i < v29; ++i )
  {
    while ( 1 )
    {
      v35 = *(int *)(v30 + 4);
      if ( (int)v35 >= 0 )
        break;
LABEL_18:
      ++i;
      v30 += 16;
      if ( i >= v29 )
        goto LABEL_23;
    }
    v36 = *(_DWORD *)v30;
    v37 = *(double *)(v30 + 8);
    if ( *(int *)v30 >= 0 || (v37 = a3[(int)v37], v37 != -1.23456787654321e-97) )
    {
      if ( v37 != 0.0 )
      {
        v33 = &v11[v35];
        ++v31;
        v34 = *v33 + v21[v35];
        ++*v33;
        v26[v34] = v37;
        v23[v34] = v36 & 0x7FFFFFFF;
      }
      goto LABEL_18;
    }
    ++v45;
    v30 += 16;
  }
LABEL_23:
  v46 = v31;
  if ( v25 > 0 )
  {
LABEL_24:
    v38 = 1;
    do
    {
      v39 = v21[v38 - 1];
      CoinSort_2<int,double>(&v23[v39], &v23[v39 + v11[v38 - 1]], &v26[v39]);
      v25 = *((_DWORD *)this + 3);
      v40 = v38++;
    }
    while ( v25 > v40 );
  }
LABEL_26:
  CoinPackedMatrix::CoinPackedMatrix(
    (CoinPackedMatrix *)v48,
    1,
    *((_DWORD *)this + 2),
    v25,
    v46,
    v26,
    0.0,
    0.0,
    v23,
    v21,
    v11);
  CoinPackedMatrix::operator=(a2);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v48);
  operator delete[](v21);
  operator delete[](v11);
  operator delete[](v23);
  operator delete[](v26);
  return v45;
}

