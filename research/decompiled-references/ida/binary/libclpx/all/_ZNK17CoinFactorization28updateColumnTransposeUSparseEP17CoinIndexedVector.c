unsigned __int64 __fastcall CoinFactorization::updateColumnTransposeUSparse(
        CoinFactorization *this,
        CoinIndexedVector *a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  double v4; // xmm3_8
  int v5; // eax
  __int64 v6; // rbx
  int *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  _DWORD *v10; // rbx
  __int64 v11; // r10
  _DWORD *v12; // r13
  _DWORD *v13; // r10
  int *v14; // r14
  int v15; // ebp
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 result; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  _BYTE *v21; // rdi
  int v22; // ecx
  int v23; // edi
  _BYTE *v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  int v27; // edx
  int *v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rdx
  double *v31; // rcx
  int v32; // r11d
  double v33; // xmm1_8
  int v34; // ecx
  int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // [rsp+0h] [rbp-70h]
  _DWORD *v45; // [rsp+8h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-60h]
  int *v47; // [rsp+18h] [rbp-58h]
  __int64 v48; // [rsp+20h] [rbp-50h]
  __int64 v50; // [rsp+30h] [rbp-40h]
  __int64 v51; // [rsp+38h] [rbp-38h]

  v2 = *((_QWORD *)this + 23);
  v3 = *((_QWORD *)this + 26);
  v4 = *((double *)this + 1);
  v5 = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 48) <= -2 )
    v2 = 0;
  v51 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 84);
  v7 = *(int **)a2;
  if ( *((int *)this + 170) <= -2 )
    v6 = 0;
  v47 = v7;
  v48 = v6;
  v8 = *((_QWORD *)this + 63);
  if ( *((int *)this + 128) <= -2 )
    v8 = 0;
  v44 = v8;
  v9 = *((_QWORD *)this + 75);
  if ( *((int *)this + 152) <= -2 )
    v9 = 0;
  v50 = v9;
  v10 = *((_DWORD **)this + 141);
  if ( *((int *)this + 54) <= -2 )
    v3 = 0;
  if ( *((int *)this + 284) <= -2 )
    v10 = nullptr;
  v11 = *((int *)this + 10);
  v12 = &v10[v11 + v11];
  v45 = &v10[v11];
  v13 = &v12[v11];
  if ( v5 <= 0 )
    goto LABEL_34;
  v14 = v7;
  v15 = 0;
  v46 = (__int64)&v7[v5 - 1 + 1];
  do
  {
    v16 = *v14;
    v17 = 1;
    *v10 = v16;
    *v12 = *(_DWORD *)(v2 + 4 * v16) + *(_DWORD *)(v3 + 4 * v16) - 1;
    while ( 1 )
    {
      result = (unsigned int)(v17 - 1);
      v19 = (int)result;
      v20 = (int)v10[v19];
      v21 = (char *)v13 + v20;
      if ( *((_BYTE *)v13 + v20) == 1 )
        break;
      v22 = v12[(int)result];
      if ( *(_DWORD *)(v2 + 4 * v20) > v22 )
      {
        v26 = v15++;
        v45[v26] = v10[(int)result];
        *v21 = 1;
        break;
      }
      v23 = *(_DWORD *)(v44 + 4LL * v22);
      v12[(int)result] = v22 - 1;
      LODWORD(result) = v17;
      v24 = (char *)v13 + v23;
      if ( !*v24 )
      {
        v25 = *(_DWORD *)(v2 + 4LL * v23) + *(_DWORD *)(v3 + 4LL * v23);
        LODWORD(result) = v17 + 1;
        v10[v19 + 1] = v23;
        *v24 = 2;
        v12[v19 + 1] = v25 - 1;
      }
LABEL_20:
      v17 = result;
    }
    if ( v17 != 1 )
      goto LABEL_20;
    ++v14;
  }
  while ( (int *)v46 != v14 );
  v27 = v15 - 1;
  if ( !v15 )
  {
LABEL_34:
    *((_DWORD *)a2 + 4) = 0;
LABEL_35:
    *((_BYTE *)a2 + 28) = 0;
    return (unsigned __int64)a2;
  }
  v28 = &v45[v27];
  v29 = (__int64)&v28[-v27 - 1];
  do
  {
    while ( 1 )
    {
      v30 = *v28;
      v31 = (double *)(v51 + 8 * v30);
      *((_BYTE *)v13 + v30) = 0;
      v32 = v30;
      v33 = *v31;
      if ( fabs(*v31) > v4 )
        break;
      --v28;
      *v31 = 0.0;
      if ( (int *)v29 == v28 )
        goto LABEL_32;
    }
    v34 = *(_DWORD *)(v2 + 4 * v30);
    v35 = *(_DWORD *)(v3 + 4 * v30);
    if ( v34 < v34 + v35 )
    {
      v36 = 4LL * v34;
      v37 = 4LL * (unsigned int)(v35 - 1) + 4;
      v38 = 0;
      v39 = v36 + v44;
      v40 = v48 + v36;
      do
      {
        v41 = *(int *)(v40 + v38);
        v42 = *(int *)(v39 + v38);
        v38 += 4;
        *(double *)(v51 + 8 * v42) = *(double *)(v51 + 8 * v42) - *(double *)(v50 + 8 * v41) * v33;
      }
      while ( v37 != v38 );
    }
    --v28;
    v43 = (int)result;
    result = (unsigned int)(result + 1);
    v47[v43] = v32;
  }
  while ( (int *)v29 != v28 );
LABEL_32:
  *((_DWORD *)a2 + 4) = result;
  if ( !(_DWORD)result )
    goto LABEL_35;
  return result;
}

