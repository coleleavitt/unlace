_QWORD *__fastcall sub_548D50(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *result; // rax
  __int64 i; // rsi
  unsigned __int64 *v5; // rcx

  result = a1;
  for ( i = (a2 - (__int64)a1) >> 7; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v5 = &result[16 * (i >> 1)];
      if ( a3 < *v5 )
        break;
      result = v5 + 16;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}

