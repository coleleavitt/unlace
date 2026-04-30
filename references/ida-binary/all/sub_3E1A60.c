__m128i *__fastcall sub_3E1A60(__m128i *a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 1116) == -1 )
  {
    QT::QString::fromUtf8(ptr, 6, "Locals");
    v3 = _mm_loadu_si128(a1);
    v4 = a1[1].m128i_i64[0];
    v5 = v7;
    *a1 = _mm_load_si128((const __m128i *)ptr);
    a1[1].m128i_i64[0] = v5;
    v7 = v4;
    *(__m128i *)ptr = v3;
    if ( v3.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v3.m128i_i64[0], 1u) )
        free(ptr[0]);
    }
  }
  return a1;
}
