_QWORD *__fastcall rangeset_t_upper_bound(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r8
  __int64 i; // rax
  unsigned __int64 *v4; // rdx

  v2 = (_QWORD *)*a1;
  for ( i = (16LL * a1[1]) >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v4 = &v2[2 * (i >> 1)];
      if ( a2 < *v4 )
        break;
      v2 = v4 + 2;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return v2;
    }
  }
  return v2;
}
