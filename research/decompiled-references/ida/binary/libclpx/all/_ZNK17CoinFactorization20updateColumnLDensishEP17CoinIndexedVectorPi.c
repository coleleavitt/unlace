double *__fastcall CoinFactorization::updateColumnLDensish(CoinFactorization *this, CoinIndexedVector *a2, double *a3)
{
  double *result; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // r8d
  double v7; // xmm4_8
  __int64 v8; // rbx
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r9d
  int *v12; // r11
  int v13; // r8d
  __int64 v14; // rbp
  double v15; // xmm1_8
  int v16; // r13d
  __int64 v17; // rax
  int v18; // r11d
  __int64 v19; // r12
  __int64 v20; // r11
  double *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r8
  double v24; // xmm2_8
  double *v25; // [rsp+0h] [rbp-38h]

  result = nullptr;
  v4 = *((_QWORD *)this + 95);
  v5 = *((_QWORD *)this + 92);
  v6 = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 192) <= -2 )
    v4 = 0;
  v7 = *((double *)this + 1);
  v8 = *((_QWORD *)a2 + 1);
  v9 = *((_DWORD *)this + 8);
  if ( *((int *)this + 186) <= -2 )
    v5 = 0;
  if ( *((int *)this + 180) > -2 )
    result = *((double **)this + 89);
  v10 = *((int *)this + 9);
  v25 = result;
  if ( v6 <= 0 )
  {
    v11 = 0;
    if ( v9 <= (int)v10 )
    {
      *((_DWORD *)a2 + 4) = 0;
LABEL_29:
      *((_BYTE *)a2 + 28) = 0;
      return result;
    }
    do
    {
LABEL_17:
      while ( 1 )
      {
        v15 = *(double *)(v8 + 8 * v10);
        v16 = v10;
        if ( fabs(v15) > v7 )
          break;
        *(_QWORD *)(v8 + 8 * v10++) = 0;
        if ( v9 <= (int)v10 )
          goto LABEL_22;
      }
      v17 = *(int *)(v4 + 4 * v10);
      v18 = *(_DWORD *)(v4 + 4 * v10 + 4);
      if ( (int)v17 < v18 )
      {
        v19 = v5 + 4 * v17;
        v20 = (unsigned int)(v18 - 1 - v17) + 1LL;
        v21 = &v25[v17];
        v22 = 0;
        do
        {
          v23 = *(int *)(v19 + 4 * v22);
          v24 = v21[v22++];
          *(double *)(v8 + 8 * v23) = *(double *)(v8 + 8 * v23) - v24 * v15;
        }
        while ( v20 != v22 );
      }
      ++v10;
      result = (double *)v11++;
      *((_DWORD *)a3 + (_QWORD)result) = v16;
    }
    while ( v9 > (int)v10 );
  }
  else
  {
    result = a3;
    v11 = 0;
    v12 = (int *)a3 + (unsigned int)(v6 - 1) + 1;
    do
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)result;
        if ( *((_DWORD *)this + 175) <= *(_DWORD *)result )
          break;
        result = (double *)((char *)result + 4);
        v14 = v11++;
        *((_DWORD *)a3 + v14) = v13;
        if ( v12 == (int *)result )
          goto LABEL_14;
      }
      if ( (int)v10 > v13 )
        v10 = *(int *)result;
      result = (double *)((char *)result + 4);
    }
    while ( v12 != (int *)result );
LABEL_14:
    if ( (int)v10 < v9 )
      goto LABEL_17;
  }
LABEL_22:
  if ( v9 >= *((_DWORD *)this + 8) )
  {
LABEL_28:
    *((_DWORD *)a2 + 4) = v11;
    if ( v11 )
      return result;
    goto LABEL_29;
  }
  result = (double *)(v8 + 8LL * v9);
  while ( fabs(*result) <= v7 )
  {
LABEL_27:
    *result = 0.0;
    ++v9;
    ++result;
    if ( *((_DWORD *)this + 8) <= v9 )
      goto LABEL_28;
  }
  while ( 1 )
  {
    ++result;
    *((_DWORD *)a3 + v11) = v9++;
    if ( *((_DWORD *)this + 8) <= v9 )
      break;
    ++v11;
    if ( fabs(*result) <= v7 )
      goto LABEL_27;
  }
  *((_DWORD *)a2 + 4) = v11 + 1;
  return result;
}

