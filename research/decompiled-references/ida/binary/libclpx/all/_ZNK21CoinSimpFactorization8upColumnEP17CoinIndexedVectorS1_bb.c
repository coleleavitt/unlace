__int64 __fastcall CoinSimpFactorization::upColumn(
        CoinSimpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        bool a4,
        bool a5)
{
  double *v6; // r15
  __int64 v7; // r14
  double *v8; // r12
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  double *v13; // rbp
  __int64 v14; // rax
  __int64 i; // rcx
  int v16; // esi
  int v18; // edx
  int v19; // eax
  double v20; // xmm0_8
  __int64 v21; // rdx

  v6 = *((double **)a3 + 1);
  v7 = *(_QWORD *)a3;
  v8 = v6;
  if ( *((_BYTE *)a3 + 28) )
  {
    v9 = *((_DWORD *)a3 + 4);
    v8 = *((double **)a2 + 1);
    if ( v9 > 0 )
    {
      v10 = (unsigned int)(v9 - 1);
      v11 = 0;
      v12 = v10 + 1;
      do
      {
        v8[*(int *)(v7 + 4 * v11)] = v6[v11];
        v6[v11++] = 0.0;
      }
      while ( v12 != v11 );
    }
  }
  v13 = *((double **)this + 14);
  CoinSimpFactorization::ftran(this, v8, v13, a5);
  if ( *((_BYTE *)a3 + 28) )
  {
    memset(v8, 0, 8LL * *((int *)this + 9));
    v18 = *((_DWORD *)this + 9);
    if ( v18 > 0 )
    {
      v19 = 0;
      LODWORD(i) = 0;
      do
      {
        while ( 1 )
        {
          v20 = *v13;
          if ( fabs(*v13) <= *((double *)this + 2) )
            break;
          v21 = (int)i;
          ++v13;
          LODWORD(i) = i + 1;
          v6[v21] = v20;
          *(_DWORD *)(v7 + 4 * v21) = v19;
          v18 = *((_DWORD *)this + 9);
          if ( ++v19 >= v18 )
          {
            *((_DWORD *)a3 + 4) = i;
            return 0;
          }
        }
        ++v19;
        ++v13;
      }
      while ( v19 < v18 );
LABEL_12:
      *((_DWORD *)a3 + 4) = i;
      if ( (_DWORD)i )
        return 0;
      goto LABEL_13;
    }
LABEL_23:
    *((_DWORD *)a3 + 4) = 0;
LABEL_13:
    *((_BYTE *)a3 + 28) = 0;
    return 0;
  }
  if ( *((int *)this + 9) <= 0 )
    goto LABEL_23;
  v14 = 0;
  for ( i = 0; ; i = v16 )
  {
    while ( fabs(v13[v14]) <= *((double *)this + 2) )
    {
      v8[v14++] = 0.0;
      if ( *((_DWORD *)this + 9) <= (int)v14 )
        goto LABEL_12;
    }
    v8[v14] = v13[v14];
    *(_DWORD *)(v7 + 4 * i) = v14++;
    v16 = i + 1;
    if ( *((_DWORD *)this + 9) <= (int)v14 )
      break;
  }
  *((_DWORD *)a3 + 4) = v16;
  return 0;
}

