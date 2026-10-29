__int64 __fastcall ClpPEDualRowSteepest::updatePrimalSolution(
        ClpPEDualRowSteepest *this,
        CoinIndexedVector *a2,
        double a3,
        double *a4)
{
  int v5; // esi
  double *v7; // [rsp+8h] [rbp-20h]

  v5 = *(_DWORD *)(*((_QWORD *)this + 1) + 1152LL);
  if ( v5 >= 0 )
  {
    v7 = a4;
    ClpPESimplex::updateCompatibleRows(*((ClpPESimplex **)this + 9), v5);
    a4 = v7;
  }
  return ClpDualRowSteepest::updatePrimalSolution(this, a2, a3, a4);
}

