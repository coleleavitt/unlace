_DWORD *__fastcall sub_46BE60(_DWORD *a1, __int64 a2, unsigned int a3)
{
  _DWORD *result; // rax
  __int64 i; // rsi
  unsigned int *v5; // r8

  result = a1;
  for ( i = (a2 - (__int64)a1) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v5 = &result[2 * (i >> 1)];
      if ( *v5 >= a3 )
        break;
      result = v5 + 2;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}

