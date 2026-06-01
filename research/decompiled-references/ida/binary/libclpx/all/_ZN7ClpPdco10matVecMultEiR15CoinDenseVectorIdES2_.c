__int64 __fastcall ClpPdco::matVecMult(ClpPdco *a1, int a2, __int64 a3, __int64 a4)
{
  return ClpPdco::matVecMult(a1, a2, *(double **)(a3 + 8), *(double **)(a4 + 8));
}

