__int64 __fastcall ClpPdco::matPrecon(ClpPdco *a1, __int64 a2, __int64 a3, double a4)
{
  return ClpPdco::matPrecon(a1, a4, *(double **)(a2 + 8), *(double **)(a3 + 8));
}

