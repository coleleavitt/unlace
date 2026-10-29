__int64 __fastcall CoinIndexedVector::operator==(__int64 a1, int **a2)
{
  int v2; // r13d
  unsigned int v3; // r15d
  int *v6; // rbx
  double *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // edi
  void *v11; // r12
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  double v16; // xmm0_8
  __int64 v17; // r14
  __int64 v18; // r13
  int *v19; // r12
  __int64 v20; // r13
  double v21; // [rsp+0h] [rbp-48h]
  double v22; // [rsp+0h] [rbp-48h]
  double v23; // [rsp+0h] [rbp-48h]
  double v24; // [rsp+8h] [rbp-40h]
  double v25; // [rsp+8h] [rbp-40h]
  double v26; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 != *((_DWORD *)a2 + 4) )
    return 0;
  v6 = *a2;
  v7 = (double *)a2[1];
  v3 = *((unsigned __int8 *)a2 + 28);
  if ( !*(_BYTE *)(a1 + 28) )
  {
    if ( !(_BYTE)v3 )
    {
      if ( v2 > 0 )
      {
        v8 = (__int64)&v6[v2 - 1 + 1];
        while ( 1 )
        {
          v9 = *v6;
          v24 = v7[v9];
          v21 = *(double *)(*(_QWORD *)(a1 + 8) + 8 * v9);
          if ( (unsigned __int8)CoinIsnan(v24)
            || (unsigned __int8)CoinIsnan(v21)
            || v21 != v24
            && (!(unsigned __int8)CoinFinite(v24)
             || !(unsigned __int8)CoinFinite(v21)
             || (fmax(fabs(v24), fabs(v21)) + 1.0) * 0.00000001 < fabs(v24 - v21)) )
          {
            break;
          }
          if ( ++v6 == (int *)v8 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    v19 = *(int **)(a1 + 8);
LABEL_35:
    if ( v2 > 0 )
    {
      v20 = (__int64)&v6[v2 - 1 + 1];
      while ( 1 )
      {
        v23 = *v7;
        v26 = *(double *)&v19[2 * *v6];
        if ( (unsigned __int8)CoinIsnan(v26)
          || (unsigned __int8)CoinIsnan(v23)
          || v23 != v26
          && (!(unsigned __int8)CoinFinite(v26)
           || !(unsigned __int8)CoinFinite(v23)
           || (fmax(fabs(v26), fabs(v23)) + 1.0) * 0.00000001 < fabs(v26 - v23)) )
        {
          break;
        }
        ++v6;
        ++v7;
        if ( (int *)v20 == v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( !(_BYTE)v3 )
  {
    v19 = a2[1];
    v7 = *(double **)(a1 + 8);
    goto LABEL_35;
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( *((_DWORD *)a2 + 5) >= v10 )
    v10 = *((_DWORD *)a2 + 5);
  if ( (unsigned __int64)v10 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v11 = (void *)operator new[](8LL * v10);
  v12 = *(_DWORD *)(a1 + 20);
  if ( *((_DWORD *)a2 + 5) >= v12 )
    v12 = *((_DWORD *)a2 + 5);
  memset(v11, 0, 8LL * v12);
  if ( v2 > 0 )
  {
    v13 = (unsigned int)(v2 - 1);
    v14 = 0;
    do
    {
      v15 = v6[v14];
      v16 = v7[v14++];
      *((double *)v11 + v15) = v16;
    }
    while ( v13 + 1 != v14 );
    v17 = (__int64)&v6[v13 + 1];
    v18 = 0;
    while ( 1 )
    {
      v22 = *(double *)(*(_QWORD *)(a1 + 8) + v18);
      v25 = *((double *)v11 + *v6);
      if ( (unsigned __int8)CoinIsnan(v25)
        || (unsigned __int8)CoinIsnan(v22)
        || v22 != v25
        && (!(unsigned __int8)CoinFinite(v25)
         || !(unsigned __int8)CoinFinite(v22)
         || (fmax(fabs(v25), fabs(v22)) + 1.0) * 0.00000001 < fabs(v25 - v22)) )
      {
        break;
      }
      ++v6;
      v18 += 8;
      if ( (int *)v17 == v6 )
        goto LABEL_28;
    }
    v3 = 0;
  }
LABEL_28:
  operator delete[](v11);
  return v3;
}

