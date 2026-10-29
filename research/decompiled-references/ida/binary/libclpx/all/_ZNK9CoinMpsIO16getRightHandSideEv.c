char *__fastcall CoinMpsIO::getRightHandSide(CoinMpsIO *this)
{
  char *result; // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  double v5; // xmm0_8
  double *v6; // rax
  double v7; // xmm1_8
  double v8; // xmm2_8

  result = *((char **)this + 8);
  if ( !result )
  {
    v2 = *((int *)this + 10);
    result = (char *)malloc(8 * v2);
    *((_QWORD *)this + 8) = result;
    if ( (int)v2 > 0 )
    {
      v3 = 8LL * (unsigned int)(v2 - 1) + 8;
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = *((double *)this + 26);
          v6 = (double *)&result[v4];
          v7 = *(double *)(*((_QWORD *)this + 13) + v4);
          v8 = *(double *)(*((_QWORD *)this + 12) + v4);
          if ( v8 <= -v5 )
            break;
          if ( v5 > v7 )
            goto LABEL_11;
          *v6 = v8;
LABEL_6:
          v4 += 8;
          result = *((char **)this + 8);
          if ( v4 == v3 )
            return result;
        }
        if ( v5 > v7 )
        {
LABEL_11:
          *v6 = v7;
          goto LABEL_6;
        }
        v4 += 8;
        *v6 = 0.0;
        result = *((char **)this + 8);
      }
      while ( v4 != v3 );
    }
  }
  return result;
}

