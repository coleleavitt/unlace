__int64 __fastcall ClpSimplex::reducedGradient(ClpSimplex *this, int a2)
{
  __int64 v2; // rax
  double v4; // [rsp+0h] [rbp-10h]

  v2 = *((_QWORD *)this + 20);
  if ( *(int *)(v2 + 16) <= 1 || !*(_DWORD *)(v2 + 20) )
    return ClpSimplex::primal(this, 0, 0);
  if ( (*((int *)this + 80) < 0 || *((_DWORD *)this + 308)) && !a2 )
  {
    *(_DWORD *)(v2 + 20) = 0;
    v4 = *(double *)this;
    ClpModel::setOptimizationDirection(this, 0.0);
    ClpSimplex::primal(this, 1, 0);
    ClpModel::setOptimizationDirection(this, v4);
    *(_DWORD *)(*((_QWORD *)this + 20) + 20LL) = 1;
    if ( *((_DWORD *)this + 308) )
      return 0;
  }
  return ClpSimplexNonlinear::primal(this);
}

