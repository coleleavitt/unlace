CoinIndexedVector *__fastcall CoinFactorization::updateColumnTransposeRSparse(
        CoinFactorization *this,
        CoinIndexedVector *a2)
{
  int v2; // r13d
  __int64 v3; // r15
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r11d
  __int64 v8; // rsi
  double v9; // xmm4_8
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int *v13; // r10
  double v14; // xmm2_8
  int v15; // r15d
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r12
  int v21; // ecx
  __int64 v22; // r9
  double *v23; // rcx
  double v24; // xmm7_8
  __int64 v25; // rcx
  __int64 v26; // r8
  CoinIndexedVector *result; // rax
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]

  v2 = *((_DWORD *)a2 + 4);
  v3 = *(_QWORD *)a2;
  v4 = *((_QWORD *)this + 102);
  v5 = *((_QWORD *)this + 13);
  v6 = *((_QWORD *)this + 141);
  v7 = *((_DWORD *)this + 9) - 1;
  v8 = *((_QWORD *)a2 + 1);
  v9 = *((double *)this + 1);
  v30 = *((_QWORD *)this + 101);
  v31 = *((_QWORD *)this + 100);
  if ( *((int *)this + 206) <= -2 )
    v4 = 0;
  v10 = 4LL * *((int *)this + 8);
  if ( *((int *)this + 28) <= -2 )
    v5 = 0;
  v28 = v5;
  if ( *((int *)this + 284) <= -2 )
    v6 = 0;
  if ( v2 <= 0 )
  {
    if ( *((_DWORD *)this + 8) <= v7 )
    {
LABEL_11:
      v29 = v3;
      v12 = 4LL * v7;
      v13 = (int *)(v12 + 4 - v10 + v4);
      do
      {
        v14 = *(double *)(v8 + 2 * v12);
        v15 = *(_DWORD *)(v28 + v12);
        *(_QWORD *)(v8 + 2 * v12) = 0;
        if ( v14 != 0.0 )
        {
          v16 = *(v13 - 1);
          v17 = *v13;
          if ( (int)v16 < *v13 )
          {
            v18 = (int)v16 + 1;
            v19 = v30 + -4 * v18 + 4 * v16;
            v20 = v31 + -8 * v18 + 8 * v16;
            while ( 1 )
            {
              v22 = *(int *)(v19 + 4 * v18);
              v23 = (double *)(v8 + 8 * v22);
              v24 = *v23 - *(double *)(v20 + 8 * v18) * v14;
              if ( *v23 != 0.0 )
                break;
              if ( fabs(v24) <= v9 )
              {
LABEL_18:
                v21 = v18++;
                if ( v21 >= v17 )
                  goto LABEL_22;
              }
              else
              {
                *v23 = v24;
                v25 = v2;
                *(_DWORD *)(v6 + 4 * v22) = v2++;
                *(_DWORD *)(v29 + 4 * v25) = v22;
                v17 = *v13;
                LODWORD(v25) = v18++;
                if ( (int)v25 >= *v13 )
                  goto LABEL_22;
              }
            }
            if ( v24 == 0.0 )
              *v23 = 1.0e-100;
            else
              *v23 = v24;
            goto LABEL_18;
          }
LABEL_22:
          v26 = *(int *)(v6 + v12);
          *(double *)(v8 + 8LL * v15) = v14;
          *(_DWORD *)(v29 + 4 * v26) = v15;
          *(_DWORD *)(v6 + 4LL * v15) = v26;
        }
        --v7;
        --v13;
        v12 -= 4;
      }
      while ( *((_DWORD *)this + 8) <= v7 );
    }
    result = a2;
    *((_DWORD *)a2 + 4) = v2;
    if ( !v2 )
      *((_BYTE *)a2 + 28) = 0;
  }
  else
  {
    v11 = 0;
    do
    {
      *(_DWORD *)(v6 + 4LL * *(int *)(v3 + 4 * v11)) = v11;
      ++v11;
    }
    while ( (unsigned int)(v2 - 1) + 1LL != v11 );
    if ( *((_DWORD *)this + 8) <= v7 )
      goto LABEL_11;
    *((_DWORD *)a2 + 4) = v2;
    return a2;
  }
  return result;
}

