CoinModel *__fastcall CoinModel::reorder(CoinModel *this, const char *a2)
{
  _BYTE *v3; // rbx
  unsigned __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  int *v10; // r9
  _DWORD *v11; // r8
  int v12; // edx
  __int64 v13; // r11
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rcx
  _BYTE *v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v22; // rsi
  int *v23; // r15
  int *v24; // r9
  int v25; // r10d
  __int64 v26; // r14
  int v27; // r11d
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // r12d
  __int64 v32; // rdi
  int *v33; // rdx
  int *v34; // r12
  unsigned __int64 v35; // r12
  int *v36; // r14
  int *v37; // r13
  double *v38; // r12
  int *v39; // r9
  __int64 v40; // r10
  __int64 v41; // rax
  int v42; // ecx
  double v43; // xmm0_8
  int v44; // ecx
  CoinPackedMatrix *v45; // r15
  double v47; // xmm0_8
  int v48; // ecx
  int *v49; // rdi
  int *v50; // r12
  void (__fastcall *v51)(CoinModel *); // rax
  int v52; // [rsp+4h] [rbp-94h]
  double *v54; // [rsp+10h] [rbp-88h]
  CoinModel *v55; // [rsp+20h] [rbp-78h]
  _QWORD *v56; // [rsp+28h] [rbp-70h]
  __int64 v57; // [rsp+30h] [rbp-68h]
  int v58; // [rsp+38h] [rbp-60h]
  int v59; // [rsp+3Ch] [rbp-5Ch]
  int *v60; // [rsp+48h] [rbp-50h]
  int v61[15]; // [rsp+5Ch] [rbp-3Ch] BYREF

  v3 = (_BYTE *)operator new[](*((int *)this + 3));
  v4 = *((int *)this + 3);
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_56;
  v54 = (double *)operator new[](8 * v4);
  v55 = (CoinModel *)operator new(0x2D0u);
  CoinModel::CoinModel(v55, this);
  if ( *((int *)this + 2) < 0 )
    goto LABEL_43;
  v5 = -1;
  do
  {
    v6 = (unsigned int)v5;
    v7 = (_QWORD *)CoinModel::quadraticRow(this, v5, v54, v61);
    if ( v7 )
    {
      v9 = v7[5];
      v10 = (int *)v7[6];
      v11 = (_DWORD *)v7[7];
      v12 = *((_DWORD *)v7 + 16);
      if ( !*((_BYTE *)v7 + 8) )
        v12 = *((_DWORD *)v7 + 17);
      if ( v12 > 0 )
      {
        v13 = 0;
        v14 = (unsigned int)(v12 - 1) + 1LL;
        do
        {
          v3[v13] = (a2[v13] != 0) + 1;
          v8 = *v10;
          if ( (int)v8 < (int)v8 + *v11 )
          {
            v15 = (int)v8 + 1;
            v16 = v9 + 4 * (v8 - v15);
            do
            {
              while ( 1 )
              {
                v17 = *(int *)(v16 + 4 * v15);
                v18 = &v3[v17];
                if ( !a2[v17] )
                  break;
                *v18 = 2;
                v6 = (unsigned int)v15;
                v8 = (unsigned int)(*v11 + *v10);
                ++v15;
                if ( (int)v8 <= (int)v6 )
                  goto LABEL_13;
              }
              *v18 = 1;
              v6 = (unsigned int)v15;
              v8 = (unsigned int)(*v11 + *v10);
              ++v15;
            }
            while ( (int)v6 < (int)v8 );
          }
LABEL_13:
          ++v13;
          ++v10;
          ++v11;
        }
        while ( v14 != v13 );
      }
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, _DWORD *, int *))(*v7 + 8LL))(
        v7,
        v6,
        *v7,
        v8,
        v11,
        v10);
    }
    v19 = *((_DWORD *)this + 2);
    ++v5;
  }
  while ( v19 > v5 );
  if ( v19 < 0 )
    goto LABEL_43;
  v52 = -1;
  while ( 1 )
  {
    v20 = CoinModel::quadraticRow(this, v52, v54, v61);
    v21 = (_QWORD *)v20;
    if ( v20 )
    {
      v22 = *(_QWORD *)(v20 + 40);
      v23 = *(int **)(v20 + 48);
      v24 = *(int **)(v20 + 56);
      v25 = *(_DWORD *)(v20 + 64);
      if ( !*(_BYTE *)(v20 + 8) )
        v25 = *(_DWORD *)(v20 + 68);
      if ( v25 > 0 )
        break;
    }
LABEL_42:
    if ( *((_DWORD *)this + 2) <= ++v52 )
      goto LABEL_43;
  }
  v26 = v22 + 4;
  v27 = 1;
  v28 = 0;
  v29 = 0;
  while ( 1 )
  {
    v30 = v23[v28];
    v31 = v24[v28];
    if ( (int)v30 >= (int)v30 + v31 )
      break;
    if ( v3[v28] != 1 )
    {
      v32 = (int)v30;
      v33 = (int *)(v22 + 4LL * (int)v30);
      v34 = (int *)(v26 + 4 * ((unsigned int)(v31 - 1) + v32));
      do
      {
        if ( (char)v3[*v33] <= 1 )
          v29 = 1;
        ++v33;
      }
      while ( v33 != v34 );
      break;
    }
    v49 = (int *)(v22 + 4 * v30);
    v50 = (int *)(v26 + 4 * ((unsigned int)(v31 - 1) + v30));
    while ( (char)v3[*v49] > 1 )
    {
      if ( v50 == ++v49 )
        goto LABEL_29;
    }
    if ( v27 >= v25 )
      goto LABEL_52;
    v29 = -1;
LABEL_30:
    ++v28;
    ++v27;
  }
LABEL_29:
  if ( v27 < v25 )
    goto LABEL_30;
  if ( !v29 )
    goto LABEL_42;
  v60 = v24;
  if ( v29 == 1 )
  {
    v59 = v25;
    v35 = v23[v25];
    v58 = v23[v25];
    if ( v35 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v56 = v21;
      v57 = v21[4];
      v36 = (int *)operator new[](4 * v35);
      v37 = (int *)operator new[](4 * v35);
      v38 = (double *)operator new[](8 * v35);
      v39 = v60;
      v40 = 0;
      do
      {
        v41 = *v23;
        v42 = v41 + *v39;
        if ( v3[v40] == 2 )
        {
          if ( (int)v41 < v42 )
          {
            do
            {
              v36[v41] = v40;
              v47 = *(double *)(v57 + 8 * v41);
              v37[v41] = *(_DWORD *)(v22 + 4 * v41);
              v48 = *v39;
              v38[v41++] = v47;
            }
            while ( *v23 + v48 > (int)v41 );
          }
        }
        else if ( (int)v41 < v42 )
        {
          do
          {
            v37[v41] = v40;
            v43 = *(double *)(v57 + 8 * v41);
            v36[v41] = *(_DWORD *)(v22 + 4 * v41);
            v44 = *v39;
            v38[v41++] = v43;
          }
          while ( *v23 + v44 > (int)v41 );
        }
        ++v40;
        ++v23;
        ++v39;
      }
      while ( v40 != (unsigned int)(v59 - 1) + 1LL );
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v56 + 8LL))(v56, v22, v57);
      v45 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v45, 1, v36, v37, v38, v58);
      operator delete[](v36);
      operator delete[](v37);
      operator delete[](v38);
      CoinModel::replaceQuadraticRow(v55, v52, v54, v45);
      (*(void (__fastcall **)(CoinPackedMatrix *))(*(_QWORD *)v45 + 8LL))(v45);
      goto LABEL_42;
    }
LABEL_56:
    __cxa_throw_bad_array_new_length();
  }
LABEL_52:
  (*(void (__fastcall **)(_QWORD *))(*v21 + 8LL))(v21);
  v51 = *(void (__fastcall **)(CoinModel *))(*(_QWORD *)v55 + 16LL);
  if ( v51 == CoinModel::~CoinModel )
  {
    CoinModel::~CoinModel(v55);
    operator delete(v55);
  }
  else
  {
    v51(v55);
  }
  printf("Unable to use priority - row %d\n", v52);
  v55 = nullptr;
LABEL_43:
  operator delete[](v3);
  operator delete[](v54);
  return v55;
}

