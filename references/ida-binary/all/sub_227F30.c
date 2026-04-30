_QWORD *__fastcall sub_227F30(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *result; // rax
  __int64 i; // rsi
  unsigned __int64 *v5; // rcx

  result = a1;
  for ( i = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 3); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v5 = &result[(i >> 1) + (i & 0xFFFFFFFFFFFFFFFELL)];
      if ( *v5 >= a3 )
        break;
      result = v5 + 3;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}
