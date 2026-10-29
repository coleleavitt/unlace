_QWORD *__fastcall sub_F60E90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  _QWORD *result; // rax
  char v8; // bp

  if ( !a1 )
    return a1;
  v6 = a1[9] >> 16;
  if ( (a1[9] & 0x10000LL) != 0 )
    return a1;
  result = a1;
  v8 = WORD1(a1[9]) & 2;
  if ( !v8 )
  {
    while ( 1 )
    {
      if ( (result[12] & 3) != 0 )
      {
        if ( v8 )
          return a1;
        v8 = 1;
      }
      result = sub_7052B0(result + 12, (__int64)result, v6, a4, a5, a6);
      if ( a1 == result || !result )
        break;
      if ( (result[9] & 0x10000LL) == 0 )
      {
        v6 = (result[9] >> 16) & 2LL;
        if ( !(_DWORD)v6 )
          continue;
      }
      return result;
    }
    return a1;
  }
  return result;
}
