void __fastcall CoinSimpFactorization::xHeqb(CoinSimpFactorization *this, double *a2)
{
  __int64 v2; // r8
  __int64 v3; // r11
  __int64 v4; // r8
  double v5; // xmm2_8
  __int64 v6; // rdx
  int *v7; // rax
  int *v8; // r9
  double *i; // rdx
  __int64 v10; // rcx
  double v11; // xmm1_8

  v2 = *((int *)this + 125);
  if ( (int)v2 >= 0 )
  {
    v3 = *((_QWORD *)this + 57);
    v4 = 4 * v2;
    do
    {
      v5 = a2[*(int *)(v3 + v4)];
      if ( v5 != 0.0 )
      {
        v6 = *(int *)(*((_QWORD *)this + 58) + v4);
        v7 = (int *)(*((_QWORD *)this + 60) + 4 * v6);
        v8 = &v7[*(int *)(*((_QWORD *)this + 59) + v4)];
        for ( i = (double *)(*((_QWORD *)this + 61) + 8 * v6); v8 != v7; a2[v10] = a2[v10] - v11 * v5 )
        {
          v10 = *v7;
          v11 = *i;
          ++v7;
          ++i;
        }
      }
      v4 -= 4;
    }
    while ( v4 != -4 );
  }
}

