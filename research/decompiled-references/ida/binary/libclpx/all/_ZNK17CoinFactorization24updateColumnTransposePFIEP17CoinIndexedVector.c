CoinIndexedVector *__fastcall CoinFactorization::updateColumnTransposePFI(
        CoinFactorization *this,
        CoinIndexedVector *a2)
{
  __int64 v2; // r8
  int v3; // r13d
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  double v9; // xmm3_8
  __int64 v10; // rsi
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // r10
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // r14
  double v19; // xmm1_8
  double *v20; // r11
  int v21; // ebx
  __int64 v22; // rax
  int v23; // edx
  double v24; // xmm2_8
  double v25; // xmm1_8
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  double v31; // xmm0_8
  __int64 v32; // rax
  CoinIndexedVector *result; // rax
  __int64 v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+8h] [rbp-40h]

  v2 = *((_QWORD *)this + 10);
  v3 = *((_DWORD *)a2 + 4);
  v4 = *((_QWORD *)this + 69);
  v5 = *((_QWORD *)this + 81);
  v6 = *((_QWORD *)this + 78);
  v7 = *((_QWORD *)this + 75);
  if ( *((int *)this + 22) <= -2 )
    v2 = 0;
  v35 = *(_QWORD *)a2;
  v8 = *((int *)this + 8);
  v9 = *((double *)this + 1);
  v10 = *((_QWORD *)a2 + 1);
  if ( *((int *)this + 140) <= -2 )
    v4 = 0;
  v11 = 4 * v8;
  v12 = 8 * v8;
  if ( *((int *)this + 164) <= -2 )
    v5 = 0;
  v13 = v11 + v5;
  if ( *((int *)this + 158) <= -2 )
    v6 = 0;
  if ( *((int *)this + 152) <= -2 )
    v7 = 0;
  v14 = *((_DWORD *)this + 17) - 1;
  if ( v14 >= 0 )
  {
    v15 = v14;
    v16 = v14 - 1LL;
    v17 = v2 + v11;
    v18 = v4 + v12;
    v34 = v16 - (unsigned int)v14;
    while ( 1 )
    {
      v19 = *(double *)(v18 + 8 * v15);
      v20 = (double *)(v10 + 8LL * *(int *)(v17 + 4 * v15));
      v21 = *(_DWORD *)(v17 + 4 * v15);
      v22 = *(int *)(v13 + 4 * v15);
      v23 = *(_DWORD *)(v13 + 4 * v15 + 4);
      v24 = *v20;
      v25 = v19 * *v20;
      if ( (int)v22 < v23 )
      {
        v26 = v6 + 4 * v22;
        v27 = v7 + 8 * v22;
        v28 = (unsigned int)(v23 - 1 - v22);
        v29 = 0;
        v30 = v28 + 1;
        do
        {
          v31 = *(double *)(v10 + 8LL * *(int *)(v26 + 4 * v29)) * *(double *)(v27 + 8 * v29);
          ++v29;
          v25 = v25 - v31;
        }
        while ( v30 != v29 );
      }
      if ( fabs(v25) > v9 )
        break;
      if ( v24 == 0.0 )
        goto LABEL_20;
      *v20 = 1.0e-100;
      v15 = v16;
      if ( v34 == v16 )
        goto LABEL_24;
LABEL_21:
      --v16;
    }
    if ( v24 == 0.0 )
    {
      v32 = v3++;
      *(_DWORD *)(v35 + 4 * v32) = v21;
    }
    *v20 = v25;
LABEL_20:
    v15 = v16;
    if ( v34 == v16 )
      goto LABEL_24;
    goto LABEL_21;
  }
LABEL_24:
  result = a2;
  *((_DWORD *)a2 + 4) = v3;
  if ( !v3 )
    *((_BYTE *)a2 + 28) = 0;
  return result;
}

