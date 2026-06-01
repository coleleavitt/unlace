unsigned int *__fastcall sub_7D1260(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int *v4; // r8
  unsigned __int64 v5; // rdx
  __int64 i; // rsi
  unsigned int *v7; // rdi

  v4 = a1;
  v5 = a4 + (a3 << 32);
  for ( i = 0xCCCCCCCCCCCCCCCDLL * ((a2 - (__int64)a1) >> 3); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v7 = &v4[10 * (i >> 1)];
      if ( v7[1] + ((unsigned __int64)*v7 << 32) >= v5 )
        break;
      v4 = v7 + 10;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return v4;
    }
  }
  return v4;
}

