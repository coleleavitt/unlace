__int64 __fastcall CoinSimpFactorization::Uxeqb(CoinSimpFactorization *this, double *a2, double *a3)
{
  int v3; // r8d
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // rbp
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  double v12; // xmm1_8
  double *v13; // r12
  double v14; // xmm1_8
  __int64 v15; // r9
  int *v16; // rax
  int *v17; // r11
  double *i; // rcx
  __int64 v19; // r9
  double v20; // xmm2_8
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rdi
  double v26; // xmm0_8

  v3 = *((_DWORD *)this + 9);
  v4 = *((_DWORD *)this + 141);
  result = (unsigned int)(v3 - 1);
  if ( (int)result >= v4 )
  {
    v6 = v3 - 2;
    v7 = 4 * ((int)result - v6);
    v8 = v7 + *((_QWORD *)this + 55);
    v9 = *((_QWORD *)this + 51) + v7;
    do
    {
      while ( 1 )
      {
        v10 = *(int *)(v8 + 4 * v6);
        v11 = *(int *)(v9 + 4 * v6);
        v12 = a2[v10];
        v13 = &a3[v11];
        if ( v12 != 0.0 )
          break;
        result = (unsigned int)v6--;
        *v13 = 0.0;
        if ( (int)result < v4 )
          goto LABEL_8;
      }
      v14 = v12 * *(double *)(*((_QWORD *)this + 50) + 8 * v10);
      v15 = *(int *)(*((_QWORD *)this + 41) + 4 * v11);
      v16 = (int *)(*((_QWORD *)this + 44) + 4 * v15);
      v17 = &v16[*(int *)(*((_QWORD *)this + 42) + 4 * v11)];
      for ( i = (double *)(*((_QWORD *)this + 43) + 8 * v15); v17 != v16; a2[v19] = a2[v19] - v20 * v14 )
      {
        v19 = *v16;
        v20 = *i;
        ++v16;
        ++i;
      }
      result = (unsigned int)v6--;
      *v13 = v14;
    }
    while ( (int)result >= v4 );
  }
LABEL_8:
  v21 = v4 - 1;
  if ( v21 >= 0 )
  {
    v22 = v21;
    v23 = *((_QWORD *)this + 55);
    result = v21 - 1LL;
    v24 = *((_QWORD *)this + 51);
    while ( 1 )
    {
      v25 = *(int *)(v24 + 4 * v22);
      v26 = a2[*(int *)(v23 + 4 * v22)];
      v22 = result;
      a3[v25] = -v26;
      if ( v21 - 1LL - (unsigned int)v21 == result )
        break;
      --result;
    }
  }
  return result;
}

