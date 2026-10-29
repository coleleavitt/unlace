CoinPackedVector *__fastcall CoinPresolveMonitor::extractCol(
        CoinPresolveMonitor *this,
        int a2,
        const CoinPresolveMatrix *a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  int *v6; // r15
  CoinPackedVector *v7; // rbp

  v3 = *((_QWORD *)a3 + 6);
  v4 = *((_QWORD *)a3 + 8);
  v5 = *((_QWORD *)a3 + 7);
  v6 = (int *)(*((_QWORD *)a3 + 5) + 4LL * a2);
  v7 = (CoinPackedVector *)operator new(0x48u);
  CoinPackedVector::CoinPackedVector(
    v7,
    *(_DWORD *)(v3 + 4LL * a2),
    (const int *)(v5 + 4LL * *v6),
    (const double *)(v4 + 8LL * *v6),
    0);
  return v7;
}

