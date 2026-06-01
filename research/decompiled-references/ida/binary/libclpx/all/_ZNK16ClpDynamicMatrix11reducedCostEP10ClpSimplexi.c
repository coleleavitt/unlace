double __fastcall ClpDynamicMatrix::reducedCost(ClpDynamicMatrix *this, ClpSimplex *a2, int a3)
{
  if ( *((_DWORD *)this + 65) + *((_DWORD *)a2 + 26) > a3 )
    return *(double *)(*((_QWORD *)a2 + 147) + 8LL * a3);
  else
    return *((double *)this + 4);
}

