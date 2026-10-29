_BYTE *__fastcall CoinMpsIO::setMpsDataWithoutRowAndColNames(
        CoinMpsIO *this,
        const CoinPackedMatrix *a2,
        double a3,
        const double *a4,
        const double *a5,
        const double *a6,
        const char *a7,
        const double *src,
        const double *a9)
{
  __int64 v11; // rbp
  int v12; // r12d
  __int64 v13; // rcx
  int v14; // eax
  size_t v15; // r13
  void *v16; // rax
  __int64 v17; // rbp
  void *v18; // rax
  void *v19; // rax
  void *v20; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // rax
  _BYTE *v24; // rax
  _BYTE *result; // rax
  CoinPackedMatrix *v26; // rbp
  void *v29; // [rsp+18h] [rbp-60h]
  void *v30; // [rsp+20h] [rbp-58h]
  void *v31; // [rsp+28h] [rbp-50h]
  void *v32; // [rsp+30h] [rbp-48h]
  void *dest; // [rsp+38h] [rbp-40h]

  CoinMpsIO::freeAll(this);
  if ( *((_BYTE *)a2 + 8) )
  {
    v11 = operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v11, a2);
    *((_QWORD *)this + 11) = v11;
  }
  else
  {
    v26 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v26);
    *((_QWORD *)this + 11) = v26;
    CoinPackedMatrix::reverseOrderedCopyOf(v26, a2);
    v11 = *((_QWORD *)this + 11);
  }
  v12 = *(_DWORD *)(v11 + 64);
  if ( !*(_BYTE *)(v11 + 8) )
    v12 = *(_DWORD *)(v11 + 68);
  *((_DWORD *)this + 11) = v12;
  v13 = *(int *)(v11 + 64);
  if ( *(_BYTE *)(v11 + 8) )
    v13 = *(int *)(v11 + 68);
  *((_DWORD *)this + 10) = v13;
  v14 = *(_DWORD *)(v11 + 72);
  v15 = 8 * v13;
  *((_DWORD *)this + 50) = 1;
  *((double *)this + 26) = a3;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 12) = v14;
  v16 = malloc(8 * v13);
  *((_QWORD *)this + 12) = v16;
  dest = v16;
  v29 = malloc(v15);
  *((_QWORD *)this + 13) = v29;
  v17 = v12;
  v18 = malloc(v17 * 8);
  *((_QWORD *)this + 14) = v18;
  v30 = v18;
  v19 = malloc(v17 * 8);
  *((_QWORD *)this + 15) = v19;
  v31 = v19;
  v32 = malloc(v17 * 8);
  *((_QWORD *)this + 16) = v32;
  if ( src != &src[v15 / 8] )
    memcpy(dest, src, v15);
  if ( a9 != &a9[v15 / 8] )
    memcpy(v29, a9, v15);
  if ( a4 != &a4[v17] )
    memcpy(v30, a4, 8LL * v12);
  if ( a5 != &a5[v17] )
    memcpy(v31, a5, 8LL * v12);
  if ( a6 != &a6[v17] )
    memcpy(v32, a6, 8LL * v12);
  if ( a7 )
  {
    v20 = malloc(v12);
    *((_QWORD *)this + 18) = v20;
    if ( v12 )
      memcpy(v20, a7, v12);
  }
  else
  {
    *((_QWORD *)this + 18) = 0;
  }
  v21 = malloc(1u);
  *(_QWORD *)this = v21;
  *v21 = 0;
  v22 = malloc(1u);
  *((_QWORD *)this + 1) = v22;
  *v22 = 0;
  v23 = malloc(1u);
  *((_QWORD *)this + 2) = v23;
  *v23 = 0;
  v24 = malloc(1u);
  *((_QWORD *)this + 3) = v24;
  *v24 = 0;
  result = malloc(1u);
  *result = 0;
  *((_QWORD *)this + 4) = result;
  return result;
}

