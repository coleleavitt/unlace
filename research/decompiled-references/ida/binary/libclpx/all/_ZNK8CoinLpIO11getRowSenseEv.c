char *__fastcall CoinLpIO::getRowSense(CoinLpIO *this)
{
  char *result; // rax
  size_t v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  double v6; // xmm0_8
  char *v7; // rax
  double v8; // xmm1_8
  double v9; // xmm2_8

  result = *((char **)this + 17);
  if ( !result )
  {
    v3 = *((int *)this + 14);
    result = (char *)malloc(v3);
    *((_QWORD *)this + 17) = result;
    if ( (int)v3 > 0 )
    {
      v4 = 0;
      v5 = (unsigned int)(v3 - 1) + 1LL;
      do
      {
        while ( 1 )
        {
          v6 = *((double *)this + 27);
          v7 = &result[v4];
          v8 = *(double *)(*((_QWORD *)this + 12) + 8 * v4);
          v9 = *(double *)(*((_QWORD *)this + 11) + 8 * v4);
          if ( v9 > -v6 )
            break;
          ++v4;
          *v7 = 2 * (v6 <= v8) + 76;
          result = *((char **)this + 17);
          if ( v5 == v4 )
            return result;
        }
        if ( v6 <= v8 )
        {
          *v7 = 71;
        }
        else if ( v8 == v9 )
        {
          *v7 = 69;
        }
        else
        {
          *v7 = 82;
        }
        ++v4;
        result = *((char **)this + 17);
      }
      while ( v5 != v4 );
    }
  }
  return result;
}

