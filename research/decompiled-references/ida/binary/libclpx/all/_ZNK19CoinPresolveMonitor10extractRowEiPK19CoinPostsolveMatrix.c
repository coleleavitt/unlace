CoinPackedVector *__fastcall CoinPresolveMonitor::extractRow(
        CoinPresolveMonitor *this,
        int a2,
        const CoinPostsolveMatrix *a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  const int *v5; // r14
  const int *v6; // rbp
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  int minor3; // eax
  __int64 v12; // [rsp+8h] [rbp-50h]
  CoinPackedVector *v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]

  v3 = *((_QWORD *)a3 + 5);
  v4 = *((_QWORD *)a3 + 6);
  v5 = *((const int **)a3 + 7);
  v6 = *((const int **)a3 + 33);
  v7 = *(_DWORD *)a3;
  v14 = *((_QWORD *)a3 + 8);
  v13 = (CoinPackedVector *)operator new(0x48u);
  CoinPackedVector::CoinPackedVector(v13, 0);
  if ( v7 > 0 )
  {
    v8 = (unsigned int)(v7 - 1) + 1LL;
    v9 = 0;
    v12 = v8;
    do
    {
      minor3 = presolve_find_minor3(a2, *(_DWORD *)(v3 + 4 * v9), *(_DWORD *)(v4 + 4 * v9), v5, v6);
      if ( minor3 >= 0 )
        CoinPackedVector::insert(v13, v9, *(double *)(v14 + 8LL * minor3));
      ++v9;
    }
    while ( v9 != v12 );
  }
  return v13;
}

