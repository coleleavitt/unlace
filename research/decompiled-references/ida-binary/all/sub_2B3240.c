__int64 __fastcall sub_2B3240(double *a1, int a2, int a3, int a4, int a5)
{
  double v5; // xmm0_8
  int v7; // edx
  double v8; // xmm3_8
  double v9; // xmm2_8
  unsigned int v10; // edi
  __int64 v11; // r9
  int v12; // ecx

  v5 = *a1;
  v7 = a4;
  if ( *a1 > 0.0 )
  {
    v8 = a1[2];
    v9 = a1[1];
    a5 = (int)((double)a5 / v5 + v8);
    v7 = (int)((double)a4 / v5 + v9);
    a3 = (int)((double)a3 / v5 + v8);
    a2 = (int)((double)a2 / v5 + v9);
  }
  v10 = v7;
  v11 = (unsigned int)a5;
  v12 = a5;
  if ( a2 <= v7 )
    v10 = a2;
  if ( a3 <= a5 )
    v11 = (unsigned int)a3;
  if ( a2 < v7 )
    a2 = v7;
  if ( a3 >= a5 )
    v12 = a3;
  if ( (int)v10 > a2 )
  {
    v10 = a2;
    if ( (int)v11 <= v12 )
      return (v11 << 32) | v10;
LABEL_15:
    v11 = (unsigned int)v12;
    return (v11 << 32) | v10;
  }
  if ( (int)v11 > v12 )
    goto LABEL_15;
  return (v11 << 32) | v10;
}
