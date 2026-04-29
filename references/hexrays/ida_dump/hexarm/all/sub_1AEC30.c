__int64 __fastcall sub_1AEC30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a2 != -1 )
  {
    v4 = a2 & 7;
    if ( (int)v4 > 2 )
      sub_1ADA10(a1, v4, a3, a4);
    return sub_32AE10(a1, (unsigned int)(v4 + 41));
  }
  return result;
}
