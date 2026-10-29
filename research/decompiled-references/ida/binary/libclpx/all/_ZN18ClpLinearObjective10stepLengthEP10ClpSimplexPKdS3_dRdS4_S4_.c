double __fastcall ClpLinearObjective::stepLength(
        ClpLinearObjective *this,
        ClpSimplex *a2,
        const double *a3,
        const double *a4,
        double result,
        double *a6,
        double *a7,
        double *a8)
{
  int v8; // eax
  __int64 v9; // rdi
  int v10; // esi
  int v11; // eax
  double v12; // xmm3_8
  double v13; // xmm2_8
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  double v16; // xmm1_8
  double v17; // xmm4_8
  double v18; // xmm1_8
  double v19; // xmm0_8

  v8 = *((_DWORD *)a2 + 26);
  v9 = *((_QWORD *)a2 + 129);
  v10 = *((_DWORD *)a2 + 27);
  *a6 = 0.0;
  v11 = v10 + v8;
  *a8 = 0.0;
  if ( v11 <= 0 )
  {
    v19 = result * 0.0;
    v12 = 0.0;
    *a8 = *a6 + v19;
    *a7 = v19 + *a6;
LABEL_7:
    printf("odd linear direction %g\n", v12);
    return 0.0;
  }
  v12 = 0.0;
  v13 = *a6;
  v14 = 8LL * (unsigned int)(v11 - 1) + 8;
  v15 = 0;
  do
  {
    v16 = *(double *)(v9 + v15);
    v17 = a4[v15 / 8] * v16;
    v18 = v16 * a3[v15 / 8];
    v15 += 8LL;
    v12 = v12 + v17;
    v13 = v13 + v18;
    *a6 = v13;
  }
  while ( v14 != v15 );
  *a8 = v13 + v12 * result;
  *a7 = v12 * result + *a6;
  if ( v12 >= 0.0 )
    goto LABEL_7;
  return result;
}

