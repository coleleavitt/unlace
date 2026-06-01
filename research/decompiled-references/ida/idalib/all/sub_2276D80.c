__int64 __fastcall sub_2276D80(__int64 a1, const void *a2, size_t a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 *v5; // r8
  __int64 *v8; // r15
  __m128i s2; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF

  v4 = 0;
  v5 = *(__int64 **)(a1 + 672);
  if ( v5 )
  {
    sub_226F7A0(&s2, *v5);
    v8 = (__int64 *)s2.m128i_i64[0];
    if ( s2.m128i_i64[1] )
    {
      if ( a3 == s2.m128i_i64[1] )
        LOBYTE(v4) = memcmp(a2, (const void *)s2.m128i_i64[0], a3) == 0;
    }
    else
    {
      v4 = a4;
    }
    if ( v8 != &v11 )
      operator delete(v8);
  }
  return v4;
}
