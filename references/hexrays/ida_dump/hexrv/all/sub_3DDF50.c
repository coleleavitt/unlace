__int64 (__fastcall **__fastcall sub_3DDF50(__int64 a1))()
{
  __m128i v1; // xmm0
  __int64 v3; // rdi
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 (__fastcall **result)(); // rax

  v1 = _mm_loadl_epi64((const __m128i *)off_4BC318);
  *(_QWORD *)(a1 - 32) = off_4BC190;
  *(_QWORD *)a1 = off_4BC1F0;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_4BC2C8);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BC320),
                             (__m128i)(unsigned __int64)&off_4BC2F8);
  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 216);
  v5 = _mm_loadl_epi64((const __m128i *)off_4BC328);
  *(_QWORD *)(a1 - 32) = &unk_4BE8D8;
  *(_QWORD *)a1 = &unk_4BE910;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)&off_4BE9E8);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BC330),
                             (__m128i)(unsigned __int64)&off_4BEA18);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 224);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = v4 + 32 * i;
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 16) = 0;
          qfree(v9);
          v4 = *(_QWORD *)(a1 + 216);
        }
      }
    }
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v4);
  }
  v10 = (__int64 *)(a1 + 152);
  *(_QWORD *)a1 = &unk_4BDC88;
  do
  {
    v11 = *v10;
    if ( *v10 )
    {
      v10[1] = 0;
      qfree(v11);
    }
    v10 -= 3;
  }
  while ( (__int64 *)(a1 + 56) != v10 );
  v12 = *(_QWORD *)(a1 - 24);
  result = &off_4B9FA8;
  *(_QWORD *)(a1 - 32) = &off_4B9FA8;
  if ( v12 )
  {
    *(_QWORD *)(a1 - 16) = 0;
    return (__int64 (__fastcall **)())qfree(v12);
  }
  return result;
}
