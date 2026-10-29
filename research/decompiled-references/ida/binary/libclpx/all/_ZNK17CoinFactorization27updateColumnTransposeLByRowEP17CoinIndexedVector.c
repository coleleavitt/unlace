__int64 __fastcall CoinFactorization::updateColumnTransposeLByRow(CoinFactorization *this, CoinIndexedVector *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rbx
  double v7; // xmm3_8
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  double v11; // xmm1_8
  int v12; // r12d
  int v13; // ebp
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdi
  double v19; // xmm2_8

  v2 = *((_QWORD *)this + 138);
  v3 = *((_QWORD *)this + 132);
  v4 = *((_QWORD *)this + 135);
  v5 = *((_QWORD *)a2 + 1);
  v6 = *(_QWORD *)a2;
  v7 = *((double *)this + 1);
  if ( *((int *)this + 278) <= -2 )
    v2 = 0;
  if ( *((int *)this + 266) <= -2 )
    v3 = 0;
  if ( *((int *)this + 272) <= -2 )
    v4 = 0;
  result = (unsigned int)(*((_DWORD *)this + 8) - 1);
  if ( (int)result < 0 )
  {
LABEL_12:
    *((_DWORD *)a2 + 4) = 0;
LABEL_13:
    *((_BYTE *)a2 + 28) = 0;
    return result;
  }
  v9 = (int)result;
  if ( *(double *)(v5 + 8LL * (int)result) == 0.0 )
  {
    v10 = v5 + 8LL * (int)result - 8;
    while ( 1 )
    {
      result = (unsigned int)(result - 1);
      if ( (_DWORD)result == -1 )
        goto LABEL_12;
      v10 -= 8;
      if ( *(double *)(v10 + 8) != 0.0 )
      {
        v9 = (int)result;
        break;
      }
    }
  }
  result = 0;
  do
  {
    while ( 1 )
    {
      v11 = *(double *)(v5 + 8 * v9);
      if ( fabs(v11) > v7 )
        break;
      *(_QWORD *)(v5 + 8 * v9--) = 0;
      if ( (int)v9 < 0 )
        goto LABEL_23;
    }
    *(_DWORD *)(v6 + 4 * result) = v9;
    v12 = result + 1;
    v13 = *(_DWORD *)(v3 + 4 * v9);
    v14 = *(_DWORD *)(v3 + 4 * v9 + 4) - 1;
    if ( v14 >= v13 )
    {
      v15 = v14;
      v16 = v14 - 1LL;
      v17 = v16 - (unsigned int)(v14 - v13);
      while ( 1 )
      {
        v18 = *(int *)(v4 + 4 * v15);
        v19 = *(double *)(v2 + 8 * v15);
        v15 = v16;
        *(double *)(v5 + 8 * v18) = *(double *)(v5 + 8 * v18) - v19 * v11;
        if ( v16 == v17 )
          break;
        --v16;
      }
    }
    --v9;
    result = v12;
  }
  while ( (int)v9 >= 0 );
LABEL_23:
  *((_DWORD *)a2 + 4) = result;
  if ( !(_DWORD)result )
    goto LABEL_13;
  return result;
}

