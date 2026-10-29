CoinPackedVector *__fastcall CoinPresolveMonitor::extractRow(
        CoinPresolveMonitor *this,
        int a2,
        const CoinPresolveMatrix *a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  int v5; // ebp
  int *v6; // r14
  CoinPackedVector *v7; // rbx

  v3 = *((_QWORD *)a3 + 38);
  v4 = *((_QWORD *)a3 + 37);
  v5 = *(_DWORD *)(*((_QWORD *)a3 + 36) + 4LL * a2);
  v6 = (int *)(*((_QWORD *)a3 + 35) + 4LL * a2);
  v7 = (CoinPackedVector *)operator new(0x48u);
  CoinPackedVector::CoinPackedVector(v7, v5, (const int *)(v3 + 4LL * *v6), (const double *)(v4 + 8LL * *v6), 0);
  return v7;
}

