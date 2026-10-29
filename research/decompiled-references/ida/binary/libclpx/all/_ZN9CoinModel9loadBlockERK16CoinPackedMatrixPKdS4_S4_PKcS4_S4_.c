void __fastcall CoinModel::loadBlock(
        CoinModel *this,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        char *a6,
        double *a7,
        double *a8)
{
  int v9; // ebx
  char *v10; // r14
  double *v11; // r12
  unsigned int v12; // r9d
  unsigned __int64 v13; // r15
  double *v14; // r13
  double *v15; // rbx
  double *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r9
  double v20; // xmm0_8
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rax
  int v25; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v26; // [rsp+1Ch] [rbp-5Ch]

  v9 = *((_DWORD *)a2 + 16);
  if ( *((_BYTE *)a2 + 8) )
    v9 = *((_DWORD *)a2 + 17);
  v10 = a6;
  if ( !a6 )
  {
    v23 = (char *)operator new[](v9);
    v10 = v23;
    if ( v9 > 0 )
      memset(v23, 71, (unsigned int)(v9 - 1) + 1LL);
  }
  if ( a7 )
  {
    if ( a8 )
    {
      if ( (unsigned __int64)v9 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v11 = a7;
LABEL_8:
        v12 = v9 - 1;
LABEL_9:
        v13 = 8LL * v9;
        v14 = a8;
        goto LABEL_10;
      }
LABEL_38:
      __cxa_throw_bad_array_new_length();
    }
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_38;
    v13 = 8LL * v9;
    v14 = (double *)operator new[](v13);
    v11 = a7;
    v12 = v9 - 1;
    if ( v9 > 0 )
      goto LABEL_29;
  }
  else
  {
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_38;
    v13 = 8LL * v9;
    v11 = (double *)operator new[](v13);
    if ( v9 > 0 )
    {
      memset(v11, 0, 8LL * (unsigned int)(v9 - 1) + 8);
      v12 = v9 - 1;
      if ( a8 )
        goto LABEL_9;
      v21 = operator new[](8LL * v9);
      v12 = v9 - 1;
      v14 = (double *)v21;
LABEL_29:
      v26 = v12;
      memset(v14, 0, 8LL * v12 + 8);
      v12 = v26;
      goto LABEL_10;
    }
    if ( a8 )
      goto LABEL_8;
    v22 = operator new[](8LL * v9);
    v12 = v9 - 1;
    v14 = (double *)v22;
  }
LABEL_10:
  v25 = v12;
  v15 = (double *)operator new[](v13);
  v16 = (double *)operator new[](v13);
  if ( v25 >= 0 )
  {
    v17 = v25;
    v18 = v25 - 1LL;
    v19 = v18 - (unsigned int)v25;
    while ( 1 )
    {
      v20 = v11[v17];
      switch ( v10[v17] )
      {
        case 'E':
          v16[v17] = v20;
          v15[v17] = v20;
          goto LABEL_14;
        case 'G':
          v15[v17] = v20;
          v16[v17] = 1.797693134862316e308;
          goto LABEL_14;
        case 'L':
          v15[v17] = -1.797693134862316e308;
          v16[v17] = v20;
          goto LABEL_14;
        case 'N':
          v15[v17] = -1.797693134862316e308;
          v16[v17] = 1.797693134862316e308;
          v17 = v18;
          if ( v19 == v18 )
            goto LABEL_17;
          goto LABEL_15;
        case 'R':
          v16[v17] = v20;
          v15[v17] = v20 - v14[v17];
          goto LABEL_14;
        default:
LABEL_14:
          v17 = v18;
          if ( v19 == v18 )
            goto LABEL_17;
LABEL_15:
          --v18;
          break;
      }
    }
  }
LABEL_17:
  if ( v10 != a6 )
    operator delete[](v10);
  if ( v11 != a7 )
    operator delete[](v11);
  if ( v14 != a8 )
    operator delete[](v14);
  CoinModel::loadBlock(this, a2, a3, a4, a5, v15, v16);
  operator delete[](v15);
  operator delete[](v16);
}

