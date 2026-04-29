__int64 __fastcall sub_5F5F0(__int64 *a1, int a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rbx
  size_t v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rdx
  __int64 v8; // r12
  int v9; // esi
  int v10; // [rsp+8h] [rbp-40h]

  v2 = a2;
  v3 = a2 >> 6;
  sub_5F350(a1, a2);
  v4 = 8 * v3;
  v5 = v3 << 6;
  result = (__int64)memset((void *)*a1, -1, v4);
  if ( a2 >= v5 )
  {
    do
    {
      if ( (v5 & 0x80000000) != 0LL )
      {
        if ( !under_debugger )
          sub_37CFE0(50313);
        BUG();
      }
      v8 = *a1;
      if ( (int)v5 >= (unsigned __int64)a1[1] )
      {
        v9 = ((v5 + 64) & 0xFFFFFFC0) + 7;
        v10 = (v5 + 64) & 0xFFFFFFC0;
        if ( (int)v5 + 64 >= 0 )
          v9 = (v5 + 64) & 0xFFFFFFC0;
        v8 = qrealloc_or_throw(*a1, v9 >> 3);
        memset((void *)(v8 + 8 * ((unsigned __int64)a1[1] >> 6)), 0, (unsigned __int64)(v10 - a1[1]) >> 3);
        *a1 = v8;
        a1[1] = v10;
      }
      result = 1LL << v5;
      v7 = (__int64 *)(v8 + 8LL * ((int)v5 >> 6));
      if ( (*v7 & (1LL << v5)) == 0 )
      {
        result |= *v7;
        *v7 = result;
      }
      ++v5;
    }
    while ( v2 >= v5 );
  }
  return result;
}
