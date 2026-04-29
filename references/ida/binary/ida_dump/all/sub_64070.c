__int64 __fastcall sub_64070(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  size_t v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 *v6; // rdx
  __int64 v7; // r12
  int v8; // [rsp+8h] [rbp-40h]

  v2 = a2 >> 6;
  sub_63DE0(a1, a2);
  v3 = 8 * v2;
  v4 = v2 << 6;
  for ( result = (__int64)memset((void *)*a1, -1, v3); a2 >= v4; ++v4 )
  {
    if ( (v4 & 0x80000000) != 0LL )
    {
      if ( !under_debugger )
        sub_383060(50313);
      BUG();
    }
    v7 = *a1;
    if ( (int)v4 >= (unsigned __int64)a1[1] )
    {
      v8 = (v4 + 64) & 0xFFFFFFC0;
      v7 = qrealloc_or_throw();
      memset((void *)(v7 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v8 - a1[1]) >> 3);
      *a1 = v7;
      a1[1] = v8;
    }
    result = 1LL << v4;
    v6 = (__int64 *)(v7 + 8LL * ((int)v4 >> 6));
    if ( (*v6 & (1LL << v4)) == 0 )
    {
      result |= *v6;
      *v6 = result;
    }
  }
  return result;
}
