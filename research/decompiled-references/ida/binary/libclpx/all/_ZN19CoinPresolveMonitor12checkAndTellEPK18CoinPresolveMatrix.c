__int64 __fastcall CoinPresolveMonitor::checkAndTell(CoinPresolveMonitor *this, const CoinPresolveMatrix *a2)
{
  int v3; // esi
  CoinPackedVector *Row; // rax
  __int64 v5; // r13
  __int64 v6; // r12

  v3 = *((_DWORD *)this + 1);
  if ( *(_BYTE *)this )
  {
    v5 = *((_QWORD *)a2 + 13);
    v6 = *((_QWORD *)a2 + 14);
    Row = (CoinPackedVector *)CoinPresolveMonitor::extractRow(this, v3, a2);
  }
  else
  {
    Row = (CoinPackedVector *)CoinPresolveMonitor::extractCol(this, v3, a2);
    v5 = *((_QWORD *)a2 + 11);
    v6 = *((_QWORD *)a2 + 12);
  }
  return CoinPresolveMonitor::checkAndTell(
           this,
           Row,
           *(double *)(v5 + 8LL * *((int *)this + 1)),
           *(double *)(v6 + 8LL * *((int *)this + 1)));
}

