__int64 __fastcall CoinFactorization::updateColumnPFI(CoinFactorization *this, CoinIndexedVector *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10
  double v10; // xmm5_8
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // ecx
  double *v18; // r8
  double v19; // xmm0_8
  __int64 v20; // rcx
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // r9
  double *v28; // rcx
  double v29; // xmm2_8
  double v30; // xmm4_8
  int v31; // ecx
  double v32; // xmm0_8
  int v33; // ecx
  __int64 v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+10h] [rbp-38h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 81);
  v4 = *((_QWORD *)this + 78);
  v34 = *(_QWORD *)a2;
  v5 = *((_QWORD *)this + 75);
  v6 = *((_QWORD *)this + 69);
  v7 = 4 * v2;
  v8 = *((_QWORD *)this + 10);
  v9 = *((_QWORD *)a2 + 1);
  v10 = *((double *)this + 1);
  v11 = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 164) <= -2 )
    v3 = 0;
  v12 = v7 + v3;
  if ( *((int *)this + 158) <= -2 )
    v4 = 0;
  if ( *((int *)this + 152) <= -2 )
    v5 = 0;
  v35 = v5;
  if ( *((int *)this + 140) <= -2 )
    v6 = 0;
  v13 = 8 * v2;
  if ( *((int *)this + 22) <= -2 )
    v8 = 0;
  result = *((unsigned int *)this + 17);
  if ( (int)result <= 0 )
    goto LABEL_27;
  v15 = 1;
  v16 = v8 + v7;
  v36 = v6 + v13;
  do
  {
    while ( 1 )
    {
      v18 = (double *)(v9 + 8LL * *(int *)(v16 + 4 * v15 - 4));
      v19 = *v18;
      if ( *v18 == 0.0 )
        goto LABEL_14;
      if ( fabs(v19) > v10 )
        break;
      *v18 = 1.0e-100;
LABEL_14:
      v17 = v15++;
      if ( v17 >= (int)result )
        goto LABEL_27;
    }
    v20 = *(int *)(v12 + 4 * v15 - 4);
    v21 = *(_DWORD *)(v12 + 4 * v15);
    if ( (int)v20 >= v21 )
      goto LABEL_26;
    v22 = (int)v20 + 1;
    v23 = v35 + -8 * v22 + 8 * v20;
    v24 = v4 + -4 * v22 + 4 * v20;
    do
    {
      while ( 1 )
      {
        v27 = *(int *)(v24 + 4 * v22);
        v28 = (double *)(v9 + 8 * v27);
        v29 = *v28 - *(double *)(v23 + 8 * v22) * v19;
        v30 = fabs(v29);
        if ( *v28 == 0.0 )
        {
          if ( v30 > v10 )
          {
            *v28 = v29;
            v25 = v11++;
            *(_DWORD *)(v34 + 4 * v25) = v27;
            v21 = *(_DWORD *)(v12 + 4 * v15);
          }
          goto LABEL_21;
        }
        if ( v30 > v10 )
          break;
        *v28 = 1.0e-100;
LABEL_21:
        v26 = v22++;
        if ( v26 >= v21 )
          goto LABEL_25;
      }
      *v28 = v29;
      v31 = v22++;
    }
    while ( v31 < v21 );
LABEL_25:
    result = *((unsigned int *)this + 17);
LABEL_26:
    v32 = v19 * *(double *)(v36 + 8 * v15 - 8);
    v33 = v15++;
    *v18 = v32;
  }
  while ( v33 < (int)result );
LABEL_27:
  *((_DWORD *)a2 + 4) = v11;
  if ( !v11 )
    *((_BYTE *)a2 + 28) = 0;
  return result;
}

