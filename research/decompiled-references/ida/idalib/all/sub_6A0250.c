__int64 __fastcall sub_6A0250(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v9; // r15

  v4 = a2 - a1;
  v5 = a1;
  v6 = v4 >> 4;
  if ( v4 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v6 >> 1;
        if ( !a4(v5 + 16 * (v6 >> 1), a3) )
          break;
        v5 += 16 * (v6 >> 1) + 16;
        v6 = v6 - 1 - v9;
        if ( v6 <= 0 )
          return v5;
      }
      v6 >>= 1;
    }
    while ( v9 > 0 );
  }
  return v5;
}
