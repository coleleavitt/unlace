__int64 __fastcall CoinFactorization::replaceColumnPFI(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        double a3,
        int a4)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // r14d
  int v12; // r9d
  _DWORD *v13; // r12
  int *v14; // rcx
  __int64 result; // rax
  int v16; // r10d
  double v17; // xmm2_8
  bool v18; // cc
  double v19; // xmm2_8
  __int64 v20; // rbp
  __int64 v21; // r8
  double v22; // xmm3_8
  __int64 v23; // rax
  __int64 v24; // rsi
  double v25; // xmm0_8
  __int64 v26; // r13
  int v27; // r9d
  int v28; // eax
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rax
  double v32; // xmm0_8
  __int64 v33; // r9
  __int64 v34; // [rsp+0h] [rbp-40h]
  _DWORD *v35; // [rsp+8h] [rbp-38h]

  v4 = *((_QWORD *)this + 81);
  if ( *((int *)this + 164) <= -2 )
    v4 = 0;
  v5 = *((_QWORD *)this + 78);
  v6 = *((_QWORD *)this + 75);
  v7 = *((int *)this + 17);
  v8 = *((int *)this + 8);
  v9 = *((_QWORD *)this + 69);
  v10 = *((_QWORD *)a2 + 1);
  v11 = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 158) <= -2 )
    v5 = 0;
  v12 = *((_DWORD *)this + 17);
  v13 = (_DWORD *)(v4 + 4 * v8);
  v14 = *(int **)a2;
  if ( *((int *)this + 152) <= -2 )
    v6 = 0;
  if ( *((int *)this + 140) <= -2 )
    v9 = 0;
  if ( !(_DWORD)v7 )
  {
    *v13 = v13[*((int *)this + 13)];
    v12 = *((_DWORD *)this + 17);
  }
  result = 5;
  if ( *((_DWORD *)this + 16) > v12 )
  {
    v34 = 4 * v7;
    v16 = v13[v7];
    v35 = &v13[v7];
    if ( *((_DWORD *)this + 148) - (v16 + v11) < 0 )
      return 3;
    v17 = fabs(a3);
    if ( v12 )
    {
      if ( v17 < 0.00001 )
        return (unsigned int)(v17 < 0.0000001) + 1;
    }
    else
    {
      result = 2;
      if ( v17 < 0.00000001 )
        return result;
    }
    v18 = *((_DWORD *)this + 22) <= -2;
    v19 = 1.0 / a3;
    *(double *)(v9 + 8 * (v8 + v7)) = 1.0 / a3;
    v20 = *((_QWORD *)this + 10);
    v21 = 0;
    v22 = *((double *)this + 1);
    if ( !v18 )
      v21 = *((_QWORD *)this + 10);
    if ( *((_BYTE *)a2 + 28) )
    {
      if ( v11 <= 0 )
      {
LABEL_28:
        v27 = v12 + 1;
        *((_DWORD *)this + 17) = v27;
        v28 = v16 - *v35;
        v13[v27] = v16;
        *((_DWORD *)this + 18) += v28;
        v29 = *(_DWORD *)(v21 + 4LL * a4);
        if ( *((int *)this + 22) <= -2 )
          v20 = 0;
        *(_DWORD *)(v20 + 4LL * *((int *)this + 8) + v34) = v29;
        return 0;
      }
      v23 = 0;
      do
      {
        v24 = v14[v23];
        if ( a4 != (_DWORD)v24 )
        {
          v25 = *(double *)(v10 + 8 * v23);
          if ( fabs(v25) > v22 )
          {
            v26 = v16++;
            *(_DWORD *)(v5 + 4 * v26) = *(_DWORD *)(v21 + 4 * v24);
            *(double *)(v6 + 8 * v26) = v25 * v19;
          }
        }
        ++v23;
      }
      while ( (unsigned int)(v11 - 1) + 1LL != v23 );
    }
    else
    {
      if ( v11 <= 0 )
        goto LABEL_28;
      v30 = (__int64)&v14[v11 - 1 + 1];
      do
      {
        v31 = *v14;
        if ( (_DWORD)v31 != a4 )
        {
          v32 = *(double *)(v10 + 8 * v31);
          if ( fabs(v32) > v22 )
          {
            v33 = v16++;
            *(_DWORD *)(v5 + 4 * v33) = *(_DWORD *)(v21 + 4 * v31);
            *(double *)(v6 + 8 * v33) = v32 * v19;
          }
        }
        ++v14;
      }
      while ( (int *)v30 != v14 );
    }
    v12 = *((_DWORD *)this + 17);
    goto LABEL_28;
  }
  return result;
}

