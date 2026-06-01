char *__fastcall CoinLpIO::getRowRange(CoinLpIO *this)
{
  __int64 v2; // r12
  char *v3; // rcx
  __int64 v4; // rax
  double *v5; // rcx
  double v6; // xmm2_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  bool v9; // dl

  if ( *((_QWORD *)this + 16) )
    return *((char **)this + 16);
  v2 = *((int *)this + 14);
  v3 = (char *)malloc(8 * v2);
  *((_QWORD *)this + 16) = v3;
  if ( v3 != &v3[8 * v2] )
    v3 = (char *)memset(v3, 0, 8 * v2);
  if ( (int)v2 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = (double *)&v3[v4];
      v6 = *(double *)(*((_QWORD *)this + 12) + v4);
      v7 = *(double *)(*((_QWORD *)this + 11) + v4);
      *v5 = 0.0;
      v8 = *((double *)this + 27);
      if ( v7 > -v8 && v8 > v6 )
      {
        v9 = 1;
        if ( v6 != v7 )
          v9 = v8 <= v6;
        if ( !v9 )
          *v5 = v6 - v7;
      }
      v4 += 8;
      v3 = *((char **)this + 16);
    }
    while ( 8LL * (unsigned int)(v2 - 1) + 8 != v4 );
  }
  return v3;
}

