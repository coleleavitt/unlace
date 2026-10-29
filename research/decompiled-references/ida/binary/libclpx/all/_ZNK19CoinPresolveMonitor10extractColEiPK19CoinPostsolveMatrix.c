CoinPackedVector *__fastcall CoinPresolveMonitor::extractCol(
        CoinPresolveMonitor *this,
        int a2,
        const CoinPostsolveMatrix *a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  CoinPackedVector *v7; // rbx
  int v8; // eax
  int *v9; // r15
  int v10; // ebp
  __int64 v11; // r14
  __int64 v13; // [rsp+8h] [rbp-40h]

  v3 = *((_QWORD *)a3 + 5);
  v4 = *((_QWORD *)a3 + 6);
  v5 = *((_QWORD *)a3 + 8);
  v6 = *((_QWORD *)a3 + 7);
  v13 = *((_QWORD *)a3 + 33);
  v7 = (CoinPackedVector *)operator new(0x48u);
  CoinPackedVector::CoinPackedVector(v7, 0);
  v8 = *(_DWORD *)(v3 + 4LL * a2);
  v9 = (int *)(v4 + 4LL * a2);
  if ( *v9 > 0 )
  {
    v10 = 0;
    do
    {
      v11 = v8;
      ++v10;
      CoinPackedVector::insert(v7, *(_DWORD *)(v6 + 4LL * v8), *(double *)(v5 + 8LL * v8));
      v8 = *(_DWORD *)(v13 + 4 * v11);
    }
    while ( *v9 > v10 );
  }
  return v7;
}

