__int64 __fastcall CoinLpIO::setLpDataWithoutRowAndColNames(
        CoinLpIO *this,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        const double **a5,
        int a6,
        const char *a7,
        const double *a8,
        const double *a9)
{
  _BYTE *v10; // rax
  bool v11; // zf
  CoinPackedMatrix *v12; // rbp
  __int64 v13; // rbp
  int v14; // r12d
  int v15; // r15d
  __int64 v16; // r14
  void *v17; // rax
  size_t v18; // rbp
  void *v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // r13
  void *v22; // rax
  const double *v23; // rsi
  void *v24; // rax
  int v25; // edx
  __int64 result; // rax
  void *v30; // [rsp+40h] [rbp-58h]
  void *v31; // [rsp+48h] [rbp-50h]
  void *v32; // [rsp+50h] [rbp-48h]
  void *dest; // [rsp+58h] [rbp-40h]

  CoinLpIO::freeAll(this);
  v10 = malloc(1u);
  *(_QWORD *)this = v10;
  v11 = *((_BYTE *)a2 + 8) == 0;
  *v10 = 0;
  if ( v11 )
  {
    v13 = operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v13, a2);
    *((_QWORD *)this + 10) = v13;
  }
  else
  {
    v12 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v12);
    *((_QWORD *)this + 10) = v12;
    CoinPackedMatrix::reverseOrderedCopyOf(v12, a2);
    v13 = *((_QWORD *)this + 10);
  }
  v14 = *(_DWORD *)(v13 + 64);
  if ( !*(_BYTE *)(v13 + 8) )
    v14 = *(_DWORD *)(v13 + 68);
  *((_DWORD *)this + 15) = v14;
  v15 = *(_DWORD *)(v13 + 64);
  if ( *(_BYTE *)(v13 + 8) )
    v15 = *(_DWORD *)(v13 + 68);
  *((_DWORD *)this + 14) = v15;
  v16 = v15;
  v17 = malloc(v16 * 8);
  *((_QWORD *)this + 11) = v17;
  dest = v17;
  v30 = malloc(v16 * 8);
  *((_QWORD *)this + 12) = v30;
  v18 = v14;
  v19 = malloc(v18 * 8);
  *((_QWORD *)this + 13) = v19;
  v31 = v19;
  v32 = malloc(v18 * 8);
  *((_QWORD *)this + 14) = v32;
  if ( a8 != &a8[v16] )
    memcpy(dest, a8, 8LL * v15);
  if ( a9 != &a9[v16] )
    memcpy(v30, a9, 8LL * v15);
  if ( a3 != &a3[v18] )
    memcpy(v31, a3, 8LL * v14);
  if ( a4 != &a4[v18] )
    memcpy(v32, a4, 8LL * v14);
  *((_DWORD *)this + 40) = a6;
  if ( a6 > 0 )
  {
    v20 = 0;
    v21 = 8LL * (unsigned int)(a6 - 1) + 8;
    do
    {
      v22 = malloc(8LL * v14);
      *(_QWORD *)((char *)this + v20 + 144) = v22;
      v23 = a5[v20 / 8];
      if ( v23 != &v23[v18] )
        memmove(v22, v23, 8LL * v14);
      v20 += 8LL;
    }
    while ( v20 != v21 );
  }
  if ( a7 )
  {
    v24 = malloc(v14);
    *((_QWORD *)this + 23) = v24;
    if ( v14 )
      memcpy(v24, a7, v14);
  }
  else
  {
    *((_QWORD *)this + 23) = 0;
  }
  v25 = *((_DWORD *)this + 78);
  if ( v25 > 0 && v25 != v15 + 1 )
    CoinLpIO::stopHash(this, 0);
  result = *((unsigned int *)this + 79);
  if ( (int)result > 0 && (_DWORD)result != *((_DWORD *)this + 15) )
    return CoinLpIO::stopHash(this, 1);
  return result;
}

