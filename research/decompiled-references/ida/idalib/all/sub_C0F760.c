unsigned __int64 __fastcall sub_C0F760(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rsi

  result = a2;
  if ( (a1 & 1) != 0 || (byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
  {
    v4 = a2 | 1;
    if ( !a3 )
      result = v4;
  }
  if ( (a1 & 4) != 0 || (byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    return result & 7 | 4 | result & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}
