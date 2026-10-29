_DWORD *__fastcall rangeset_t_upper_bound(_QWORD *a1, unsigned int a2)
{
  _DWORD *v2; // r8
  __int64 i; // rax
  unsigned int *v4; // rcx

  v2 = (_DWORD *)*a1;
  for ( i = (8LL * a1[1]) >> 3; i > 0; i >>= 1 )
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

