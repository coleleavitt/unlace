__int64 __fastcall CoinFactorization::updateColumnTransposeUDensish(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // r8
  double v8; // xmm4_8
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // r10
  double v13; // xmm2_8
  int v14; // ebp
  int v15; // ecx
  int v16; // r13d
  int v17; // r11d
  __int64 v18; // rdx
  __int64 v19; // rax
  int *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdi
  double *v24; // rcx
  double v25; // xmm1_8
  double *v26; // rsi
  double *v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-60h]
  __int64 v30; // [rsp+8h] [rbp-58h]
  __int64 v31; // [rsp+10h] [rbp-50h]
  __int64 v32; // [rsp+18h] [rbp-48h]
  CoinIndexedVector *v33; // [rsp+28h] [rbp-38h]

  v3 = *((_QWORD *)this + 84);
  v4 = *((_QWORD *)this + 63);
  v5 = *((_QWORD *)this + 75);
  v6 = *((_DWORD *)this + 145);
  v7 = *((_QWORD *)a2 + 1);
  v31 = *(_QWORD *)a2;
  v8 = *((double *)this + 1);
  v9 = *((_QWORD *)this + 23);
  result = 0;
  if ( *((int *)this + 48) <= -2 )
    v9 = 0;
  v32 = v9;
  if ( *((int *)this + 170) <= -2 )
    v3 = 0;
  if ( *((int *)this + 128) <= -2 )
    v4 = 0;
  if ( *((int *)this + 152) <= -2 )
    v5 = 0;
  if ( *((int *)this + 54) > -2 )
    result = *((_QWORD *)this + 26);
  v30 = result;
  if ( v6 <= a3 )
  {
    *((_DWORD *)a2 + 4) = 0;
    goto LABEL_25;
  }
  result = a3;
  v11 = 0;
  v12 = a3 + 1LL;
  v33 = a2;
  v29 = (unsigned int)(v6 + ~a3) + v12;
  while ( 1 )
  {
    v13 = *(double *)(v7 + 8 * result);
    v14 = result;
    if ( fabs(v13) > v8 )
      break;
    *(_QWORD *)(v7 + 8 * result) = 0;
    result = v12;
    if ( v29 == v12 )
      goto LABEL_22;
LABEL_14:
    ++v12;
  }
  v15 = *(_DWORD *)(v32 + 4 * result);
  v16 = *(_DWORD *)(v30 + 4 * result);
  v17 = v15 + (v16 & 0xFFFFFFFE);
  if ( v15 < v17 )
  {
    v18 = 4LL * v15;
    v19 = v4 + v18;
    v20 = (int *)(v3 + v18);
    v21 = v4 + 8 + 4 * (((v17 + ~v15) & 0xFFFFFFFE) + (__int64)v15);
    do
    {
      v22 = v20[1];
      v23 = *v20;
      v19 += 8;
      v20 += 2;
      v24 = (double *)(v7 + 8LL * *(int *)(v19 - 4));
      v25 = *(double *)(v5 + 8 * v22) * v13;
      v26 = (double *)(v7 + 8LL * *(int *)(v19 - 8));
      *v26 = *v26 - *(double *)(v5 + 8 * v23) * v13;
      *v24 = *v24 - v25;
    }
    while ( v21 != v19 );
  }
  if ( (v16 & 1) != 0 )
  {
    v27 = (double *)(v7 + 8LL * *(int *)(v4 + 4LL * v17));
    *v27 = *v27 - v13 * *(double *)(v5 + 8LL * *(int *)(v3 + 4LL * v17));
  }
  v28 = v11++;
  *(_DWORD *)(v31 + 4 * v28) = v14;
  result = v12;
  if ( v29 != v12 )
    goto LABEL_14;
LABEL_22:
  a2 = v33;
  *((_DWORD *)v33 + 4) = v11;
  if ( !v11 )
LABEL_25:
    *((_BYTE *)a2 + 28) = 0;
  return result;
}

