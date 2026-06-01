double __fastcall ClpMatrixBase::reducedCost(ClpMatrixBase *this, ClpSimplex *a2, int a3)
{
  if ( *((_DWORD *)a2 + 26) + *((_DWORD *)a2 + 27) > a3 )
    return *(double *)(*((_QWORD *)a2 + 147) + 8LL * a3);
  else
    return *((double *)this + 4);
}

