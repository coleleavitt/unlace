double *__fastcall CoinSimpFactorization::Hxeqb(CoinSimpFactorization *this, double *a2)
{
  double *result; // rax
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rdx
  int v11; // r9d
  double v12; // xmm1_8
  int *v13; // rax
  __int64 v14; // rdx
  int *i; // rdi
  __int64 v16; // rcx

  result = (double *)*((int *)this + 125);
  if ( (int)result >= 0 )
  {
    v3 = 4LL * (_QWORD)result + 4;
    v4 = 0;
    v5 = *((_QWORD *)this + 57);
    v6 = *((_QWORD *)this + 58);
    v7 = *((_QWORD *)this + 60);
    v8 = *((_QWORD *)this + 59);
    v9 = *((_QWORD *)this + 61);
    do
    {
      v10 = *(int *)(v6 + v4);
      v11 = *(_DWORD *)(v5 + v4);
      v12 = 0.0;
      v13 = (int *)(v7 + 4 * v10);
      v14 = v9 + 8 * v10;
      for ( i = &v13[*(int *)(v8 + v4)]; i != v13; v12 = v12 + a2[v16] * *(double *)(v14 - 8) )
      {
        v16 = *v13++;
        v14 += 8;
      }
      v4 += 4;
      result = &a2[v11];
      *result = *result - v12;
    }
    while ( v3 != v4 );
  }
  return result;
}

