unsigned int *__fastcall sub_7D12E0(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdx
  __int64 i; // rsi
  unsigned int *v6; // rcx

  v4 = a4 + (a3 << 32);
  for ( i = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 3); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v6 = &a1[2 * (i >> 1) + 2 * (i & 0xFFFFFFFFFFFFFFFELL)];
      if ( v4 < v6[1] + ((unsigned __int64)*v6 << 32) )
        break;
      a1 = v6 + 6;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return a1;
    }
  }
  return a1;
}

