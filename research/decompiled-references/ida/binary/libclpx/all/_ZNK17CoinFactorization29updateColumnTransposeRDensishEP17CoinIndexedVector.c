__int64 __fastcall CoinFactorization::updateColumnTransposeRDensish(CoinFactorization *this, CoinIndexedVector *a2)
{
  __int64 v2; // r11
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r12
  int v6; // edx
  __int64 v7; // r13
  int v8; // esi
  __int64 result; // rax
  __int64 v10; // r11
  __int64 v11; // rdi
  __int64 v12; // rbp
  double v13; // xmm1_8
  __int64 v14; // r10
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  double v22; // xmm2_8

  v2 = *((_QWORD *)this + 102);
  v3 = *((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)this + 13);
  v5 = *((_QWORD *)this + 101);
  v6 = *((_DWORD *)this + 9) - 1;
  v7 = *((_QWORD *)this + 100);
  if ( *((int *)this + 206) <= -2 )
    v2 = 0;
  v8 = *((_DWORD *)this + 8);
  result = 4LL * v8;
  v10 = v2 - result;
  if ( *((int *)this + 28) <= -2 )
    v4 = 0;
  if ( v8 <= v6 )
  {
    result = v6;
    v11 = v6 - 1LL;
    v12 = v11 - (unsigned int)(v6 - v8);
    while ( 1 )
    {
      v13 = *(double *)(v3 + 8 * result);
      v14 = *(int *)(v4 + 4 * result);
      *(_QWORD *)(v3 + 8 * result) = 0;
      if ( v13 == 0.0 )
      {
        result = v11;
        if ( v12 == v11 )
          return result;
      }
      else
      {
        v15 = *(int *)(v10 + 4 * result);
        v16 = *(_DWORD *)(v10 + 4 * result + 4);
        if ( (int)v15 < v16 )
        {
          v17 = v7 + 8 * v15;
          v18 = v5 + 4 * v15;
          v19 = 0;
          v20 = (unsigned int)(v16 - 1 - v15) + 1LL;
          do
          {
            v21 = *(int *)(v18 + 4 * v19);
            v22 = *(double *)(v17 + 8 * v19++);
            *(double *)(v3 + 8 * v21) = *(double *)(v3 + 8 * v21) - v22 * v13;
          }
          while ( v19 != v20 );
        }
        *(double *)(v3 + 8 * v14) = v13;
        result = v11;
        if ( v12 == v11 )
          return result;
      }
      --v11;
    }
  }
  return result;
}

