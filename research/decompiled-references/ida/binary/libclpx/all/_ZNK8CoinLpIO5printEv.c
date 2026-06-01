int __fastcall CoinLpIO::print(const char **this)
{
  __int64 v1; // r12
  int v2; // ebp
  double v3; // xmm0_8
  __int64 v4; // r12
  int v5; // ebp
  double v6; // xmm0_8
  __int64 v7; // r12
  int v8; // ebp
  double v9; // xmm0_8
  __int64 v10; // r12
  int v11; // ebp
  double v12; // xmm0_8
  _QWORD *v13; // r12
  int v14; // r14d
  __int64 v15; // rbp
  __int64 v16; // rbp
  const char *v17; // rsi

  printf("problemName_: %s\n", *this);
  printf("numberRows_: %d\n", *((_DWORD *)this + 14));
  printf("numberColumns_: %d\n", *((_DWORD *)this + 15));
  puts("matrixByRows_:");
  CoinPackedMatrix::dumpMatrix((CoinPackedMatrix *)*(this + 10), nullptr);
  puts("rowlower_:");
  if ( *((int *)this + 14) > 0 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      ++v2;
      v3 = *(double *)&(*(this + 11))[v1];
      v1 += 8;
      printf("%.5f ", v3);
    }
    while ( *((_DWORD *)this + 14) > v2 );
  }
  putchar(10);
  puts("rowupper_:");
  if ( *((int *)this + 14) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(double *)&(*(this + 12))[v4];
      v4 += 8;
      printf("%.5f ", v6);
    }
    while ( *((_DWORD *)this + 14) > v5 );
  }
  putchar(10);
  puts("collower_:");
  if ( *((int *)this + 15) > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = *(double *)&(*(this + 13))[v7];
      v7 += 8;
      printf("%.5f ", v9);
    }
    while ( *((_DWORD *)this + 15) > v8 );
  }
  putchar(10);
  puts("colupper_:");
  if ( *((int *)this + 15) > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v11;
      v12 = *(double *)&(*(this + 14))[v10];
      v10 += 8;
      printf("%.5f ", v12);
    }
    while ( *((_DWORD *)this + 15) > v11 );
  }
  putchar(10);
  if ( *((int *)this + 40) > 0 )
  {
    v13 = this + 18;
    v14 = 0;
    do
    {
      printf("objective_[%i]:\n", v14);
      if ( *((int *)this + 15) > 0 )
      {
        v15 = 0;
        do
          printf("%.5f ", *(double *)(*v13 + 8 * v15++));
        while ( *((_DWORD *)this + 15) > (int)v15 );
      }
      ++v14;
      ++v13;
    }
    while ( *((_DWORD *)this + 40) > v14 );
  }
  putchar(10);
  if ( *(this + 23) )
  {
    v16 = 0;
    puts("integerType_:");
    if ( *((int *)this + 15) > 0 )
    {
      do
        printf("%c ", (unsigned int)(*(this + 23))[v16++]);
      while ( *((_DWORD *)this + 15) > (int)v16 );
    }
  }
  else
  {
    puts("integerType_: NULL");
  }
  putchar(10);
  v17 = *(this + 26);
  if ( v17 )
    printf("fileName_: %s\n", v17);
  return printf("infinity_: %.5f\n", *((double *)this + 27));
}

