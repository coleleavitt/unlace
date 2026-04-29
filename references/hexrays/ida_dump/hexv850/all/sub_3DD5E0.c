__int64 __fastcall sub_3DD5E0(__int64 a1)
{
  __int64 v1; // r12
  __m128i v3; // xmm0
  __int64 v4; // rdi
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi

  v1 = a1 - 32;
  *(_QWORD *)(a1 - 32) = off_4BD0F0;
  v3 = _mm_loadl_epi64((const __m128i *)off_4BD278);
  *(_QWORD *)a1 = off_4BD150;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)&off_4BD228);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BD280),
                             (__m128i)(unsigned __int64)&off_4BD258);
  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v4);
  }
  v5 = *(_QWORD *)(a1 + 216);
  v6 = _mm_loadl_epi64((const __m128i *)off_4BD288);
  *(_QWORD *)(a1 - 32) = &unk_4BF8D8;
  *(_QWORD *)a1 = &unk_4BF910;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)&off_4BF9E8);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4BD290),
                             (__m128i)(unsigned __int64)&off_4BFA18);
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 224);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = v5 + 32 * i;
        v10 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          *(_QWORD *)(v9 + 16) = 0;
          qfree(v10);
          v5 = *(_QWORD *)(a1 + 216);
        }
      }
    }
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v5);
  }
  v11 = a1 + 176;
  *(_QWORD *)a1 = &unk_4BEC88;
  do
  {
    v12 = *(_QWORD *)(v11 - 24);
    v11 -= 24;
    if ( v12 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      qfree(v12);
    }
  }
  while ( v11 != a1 + 80 );
  v13 = *(_QWORD *)(a1 - 24);
  *(_QWORD *)(a1 - 32) = &off_4BAF08;
  if ( v13 )
  {
    *(_QWORD *)(a1 - 16) = 0;
    qfree(v13);
  }
  return qfree(v1);
}
