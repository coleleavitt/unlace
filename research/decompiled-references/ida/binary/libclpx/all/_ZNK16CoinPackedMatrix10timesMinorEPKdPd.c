__int64 __fastcall CoinPackedMatrix::timesMinor(CoinPackedMatrix *this, const double *a2, double *a3)
{
  double *v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r10
  int v11; // edx
  __int64 v12; // r11
  double v13; // xmm1_8
  __int64 v14; // rdi
  __int64 v15; // rsi
  double v16; // xmm0_8

  v5 = (double *)memset(a3, 0, 8LL * *((int *)this + 16));
  result = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (int)result >= 0 )
  {
    v7 = (int)result;
    v8 = *((_QWORD *)this + 6);
    v9 = *((_QWORD *)this + 7);
    v10 = (int)result - 1LL;
    v11 = *(_DWORD *)(v9 + 4LL * (int)result);
    v12 = v10 - (unsigned int)result;
    result = *(int *)(v8 + 4LL * (int)result);
    if ( (int)result >= (int)result + v11 )
      goto LABEL_7;
    while ( 1 )
    {
      v13 = 0.0;
      v14 = *((_QWORD *)this + 5) + 4 * result;
      v15 = *((_QWORD *)this + 4) + 8 * result;
      result = 0;
      do
      {
        v16 = a2[*(int *)(v14 + 4 * result)] * *(double *)(v15 + 8 * result);
        ++result;
        v13 = v13 + v16;
      }
      while ( (unsigned int)(v11 - 1) + 1LL != result );
      v5[v7] = v13;
      v7 = v10;
      if ( v12 == v10 )
        break;
      while ( 1 )
      {
        result = *(int *)(v8 + 4 * v7);
        --v10;
        v11 = *(_DWORD *)(v9 + 4 * v7);
        if ( (int)result < (int)result + v11 )
          break;
LABEL_7:
        v5[v7] = 0.0;
        v7 = v10;
        if ( v12 == v10 )
          return result;
      }
    }
  }
  return result;
}

