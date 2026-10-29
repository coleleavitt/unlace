__int64 __fastcall CoinSimpFactorization::upColumnTranspose(
        CoinSimpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  double *v4; // r13
  __int64 v5; // r15
  double *v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  double *v11; // rbp
  __int64 v12; // rax
  __int64 i; // rcx
  int v14; // esi
  int v16; // edx
  int v17; // eax
  double v18; // xmm0_8
  __int64 v19; // rdx

  v4 = *((double **)a3 + 1);
  v5 = *(_QWORD *)a3;
  v6 = v4;
  if ( *((_BYTE *)a3 + 28) )
  {
    v7 = *((_DWORD *)a3 + 4);
    v6 = *((double **)a2 + 1);
    if ( v7 > 0 )
    {
      v8 = (unsigned int)(v7 - 1);
      v9 = 0;
      v10 = v8 + 1;
      do
      {
        v6[*(int *)(v5 + 4 * v9)] = v4[v9];
        v4[v9++] = 0.0;
      }
      while ( v10 != v9 );
    }
  }
  v11 = *((double **)this + 14);
  CoinSimpFactorization::btran(this, v6, v11);
  if ( *((_BYTE *)a3 + 28) )
  {
    memset(v6, 0, 8LL * *((int *)this + 9));
    v16 = *((_DWORD *)this + 9);
    if ( v16 > 0 )
    {
      v17 = 0;
      LODWORD(i) = 0;
      do
      {
        while ( 1 )
        {
          v18 = *v11;
          if ( fabs(*v11) <= *((double *)this + 2) )
            break;
          v19 = (int)i;
          ++v11;
          LODWORD(i) = i + 1;
          v4[v19] = v18;
          *(_DWORD *)(v5 + 4 * v19) = v17;
          v16 = *((_DWORD *)this + 9);
          if ( ++v17 >= v16 )
          {
            *((_DWORD *)a3 + 4) = i;
            return 0;
          }
        }
        ++v17;
        ++v11;
      }
      while ( v17 < v16 );
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
  v12 = 0;
  for ( i = 0; ; i = v14 )
  {
    while ( fabs(v11[v12]) <= *((double *)this + 2) )
    {
      v6[v12++] = 0.0;
      if ( *((_DWORD *)this + 9) <= (int)v12 )
        goto LABEL_12;
    }
    v6[v12] = v11[v12];
    *(_DWORD *)(v5 + 4 * i) = v12++;
    v14 = i + 1;
    if ( *((_DWORD *)this + 9) <= (int)v12 )
      break;
  }
  *((_DWORD *)a3 + 4) = v14;
  return 0;
}

