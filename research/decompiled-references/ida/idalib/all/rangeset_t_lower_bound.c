__int64 __fastcall rangeset_t_lower_bound(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rax
  __int64 v4; // rdx

  v2 = *a1;
  for ( i = (16 * a1[1]) >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v4 = v2 + 16 * (i >> 1);
      if ( a2 < *(_QWORD *)(v4 + 8) )
        break;
      v2 = v4 + 16;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return v2;
    }
  }
  return v2;
}
