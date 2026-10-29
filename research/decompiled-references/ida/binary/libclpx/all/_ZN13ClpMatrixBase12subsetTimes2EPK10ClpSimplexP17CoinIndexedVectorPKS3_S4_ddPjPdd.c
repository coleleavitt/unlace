__int64 __fastcall ClpMatrixBase::subsetTimes2(
        ClpMatrixBase *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double a6,
        double a7,
        unsigned int *a8,
        double a9,
        double *a10)
{
  double v14; // xmm9_8
  __int64 result; // rax
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // r9
  signed int v21; // esi
  double v22; // xmm4_8
  double v23; // xmm5_8
  double v24; // xmm4_8
  double *v25; // rdx
  double v26; // xmm7_8
  double v27; // xmm3_8
  double v28; // xmm7_8
  unsigned int v29; // ecx
  double v30; // xmm3_8

  (*(void (__fastcall **)(ClpMatrixBase *, const ClpSimplex *, const CoinIndexedVector *, CoinIndexedVector *))(*(_QWORD *)this + 400LL))(
    this,
    a2,
    a4,
    a3);
  v14 = 1.0;
  if ( a9 != 0.0 )
    v14 = a9;
  result = *((unsigned int *)a3 + 4);
  v16 = *(_QWORD *)a3;
  v17 = *((_QWORD *)a3 + 1);
  v18 = *((_QWORD *)a5 + 1);
  if ( (int)result > 0 )
  {
    v19 = (unsigned int)(result - 1);
    result = 0;
    v20 = v19 + 1;
    do
    {
      v21 = *(_DWORD *)(v16 + 4 * result);
      v22 = *(double *)(v17 + 8 * result);
      if ( a9 == 0.0 )
        *(_QWORD *)(v17 + 8 * result) = 0;
      v23 = *(double *)(v18 + 8 * result);
      *(_QWORD *)(v18 + 8 * result) = 0;
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v21) & 3) != 1 )
      {
        v24 = v22 * v14;
        v25 = &a10[v21];
        v26 = v24 * v24;
        v27 = v24 * v24 * a7 + v24 * v23 + *v25;
        if ( v27 < 0.0001 )
        {
          if ( a6 < 0.0 )
          {
            v27 = fmax(0.0001, v26 + 1.0);
          }
          else
          {
            v28 = v26 * a6;
            v29 = a8[v21 >> 5];
            v30 = v28;
            if ( _bittest((const int *)&v29, v21) )
              v30 = v28 + 1.0;
            v27 = fmax(v30, 0.0001);
          }
        }
        *v25 = v27;
      }
      ++result;
    }
    while ( result != v20 );
  }
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  return result;
}

