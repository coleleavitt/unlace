double __fastcall ClpLinearObjective::objectiveValue(ClpLinearObjective *this, const ClpSimplex *a2, const double *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  double result; // xmm0_8
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  double v8; // xmm1_8

  v3 = *((_QWORD *)this + 3);
  if ( a2 && *((_QWORD *)a2 + 129) )
    v3 = *((_QWORD *)a2 + 129);
  v4 = *((_DWORD *)this + 8);
  if ( v4 <= 0 )
    return 0.0;
  result = 0.0;
  v6 = 8LL * (unsigned int)(v4 - 1) + 8;
  v7 = 0;
  do
  {
    v8 = *(double *)(v3 + v7) * a3[v7 / 8];
    v7 += 8LL;
    result = result + v8;
  }
  while ( v6 != v7 );
  return result;
}

