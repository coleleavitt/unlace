_DWORD *__fastcall sub_3DAE60(_DWORD *a1, __int64 a2, int a3)
{
  _DWORD *result; // rax
  __int64 i; // rsi
  _DWORD *v5; // r8

  result = a1;
  for ( i = (a2 - (__int64)a1) >> 2; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v5 = &result[i >> 1];
      if ( *v5 > a3 )
        break;
      result = v5 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}
