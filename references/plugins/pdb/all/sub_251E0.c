_QWORD *__fastcall sub_251E0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 i; // rsi
  _QWORD *v5; // rcx

  result = a1;
  for ( i = 0x8E38E38E38E38E39LL * ((a2 - (__int64)a1) >> 4); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v5 = &result[18 * (i >> 1)];
      if ( *v5 >= *a3 )
        break;
      result = v5 + 18;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return result;
    }
  }
  return result;
}
