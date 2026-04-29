__int64 __fastcall sub_3C9230(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v5; // r8

  result = a1;
  for ( i = (a2 - a1) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v5 = result + 8 * (i >> 1);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) >= a3 )
        break;
      result = v5 + 8;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}
