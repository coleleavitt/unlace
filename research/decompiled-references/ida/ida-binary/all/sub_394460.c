__int64 __fastcall sub_394460(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, unsigned __int64))
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v9; // r15

  v4 = a2 - a1;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4);
  v6 = a1;
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v5 >> 1;
        if ( a4(a3, v6 + 16 * ((v5 >> 1) + (v5 & 0xFFFFFFFFFFFFFFFELL))) )
          break;
        v6 += 16 * ((v5 >> 1) + (v5 & 0xFFFFFFFFFFFFFFFELL)) + 48;
        v5 = v5 - 1 - v9;
        if ( v5 <= 0 )
          return v6;
      }
      v5 >>= 1;
    }
    while ( v9 > 0 );
  }
  return v6;
}
