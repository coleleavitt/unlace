__int64 __fastcall CoinModel::decodeBit(CoinModel *this, char *a2, char **a3, double *a4, char a5)
{
  CoinModel *v5; // r9
  char *v8; // rbx
  char v9; // bp
  double v10; // xmm1_8
  char *v11; // r15
  __int64 result; // rax
  double v13; // xmm0_8
  double v14; // xmm0_8
  char v15; // [rsp+Ch] [rbp-3Ch]
  char v16; // [rsp+Ch] [rbp-3Ch]

  v5 = this;
  if ( ((*a2 - 43) & 0xFD) != 0 )
  {
    v9 = *a2;
    v8 = a2;
  }
  else
  {
    v8 = a2 + 1;
    v9 = a2[1];
  }
  while ( 1 )
  {
    if ( !v9 )
    {
LABEL_9:
      v10 = 1.0;
      v11 = a2;
      goto LABEL_10;
    }
    if ( v9 == 42 )
      break;
    if ( ((v9 - 43) & 0xFD) == 0 )
    {
      if ( a2 == v8 )
      {
        v9 = *a2;
        v11 = a2;
        v10 = 1.0;
        goto LABEL_10;
      }
      if ( *(v8 - 1) != 101 )
        goto LABEL_9;
    }
    v9 = *++v8;
  }
  *v8 = 0;
  v16 = a5;
  v11 = v8 + 1;
  v14 = strtod(a2, nullptr);
  v9 = v8[1];
  v10 = v14;
  *v8 = 42;
  v5 = this;
  a5 = v16;
  if ( v9 )
  {
    ++v8;
    if ( ((v9 - 43) & 0xFD) != 0 )
    {
      do
        v9 = *++v8;
      while ( *v8 && ((v9 - 43) & 0xFD) != 0 );
    }
  }
  else
  {
    ++v8;
  }
LABEL_10:
  *v8 = 0;
  if ( *v11 == 43 )
  {
    ++v11;
  }
  else if ( *v11 == 45 )
  {
    ++v11;
    v10 = -v10;
  }
  v15 = a5;
  result = CoinModel::column(v5, v11);
  if ( (int)result < 0 )
  {
    if ( !v15 )
    {
      *v8 = v9;
      printf("bad nonlinear term %s\n", a2);
      abort();
    }
    v13 = strtod(v11, nullptr);
    result = 4294967294LL;
    v10 = v10 * v13;
  }
  *v8 = v9;
  *a4 = v10;
  *a3 = v8;
  return result;
}

