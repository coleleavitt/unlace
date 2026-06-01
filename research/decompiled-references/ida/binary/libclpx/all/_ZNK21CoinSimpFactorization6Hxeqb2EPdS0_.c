double *__fastcall CoinSimpFactorization::Hxeqb2(CoinSimpFactorization *this, double *a2, double *a3)
{
  double *result; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rcx
  int v12; // r13d
  double v13; // xmm1_8
  double v14; // xmm2_8
  int *v15; // rax
  double *v16; // rcx
  int *i; // r14
  __int64 v18; // rdi
  double v19; // xmm0_8
  __int64 v20; // rax
  double *v21; // rcx

  result = (double *)*((int *)this + 125);
  if ( (int)result >= 0 )
  {
    v4 = 4LL * (_QWORD)result + 4;
    v5 = 0;
    v6 = *((_QWORD *)this + 57);
    v7 = *((_QWORD *)this + 58);
    v8 = *((_QWORD *)this + 60);
    v9 = *((_QWORD *)this + 59);
    v10 = *((_QWORD *)this + 61);
    do
    {
      v11 = *(int *)(v7 + v5);
      v12 = *(_DWORD *)(v6 + v5);
      v13 = 0.0;
      v14 = 0.0;
      v15 = (int *)(v8 + 4 * v11);
      v16 = (double *)(v10 + 8 * v11);
      for ( i = &v15[*(int *)(v9 + v5)]; i != v15; v13 = v13 + v19 * a3[v18] )
      {
        v18 = *v15;
        v19 = *v16;
        ++v15;
        ++v16;
        v14 = v14 + a2[v18] * v19;
      }
      v5 += 4;
      v20 = v12;
      v21 = &a2[v20];
      result = &a3[v20];
      *v21 = *v21 - v14;
      *result = *result - v13;
    }
    while ( v4 != v5 );
  }
  return result;
}

