__int64 (__fastcall **__fastcall sub_3D6B50(__int64 a1))()
{
  __m128i v1; // xmm0
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  __int64 (__fastcall **result)(); // rax

  v1 = _mm_loadl_epi64((const __m128i *)off_4E8978);
  *(_QWORD *)(a1 - 32) = off_4E87E8;
  *(_QWORD *)a1 = off_4E8848;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_4E8920);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E8980),
                             (__m128i)(unsigned __int64)&off_4E8950);
  if ( *(_QWORD *)(a1 + 240) )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
  }
  v3 = *(_QWORD *)(a1 + 216);
  v4 = _mm_loadl_epi64((const __m128i *)off_4E8988);
  *(_QWORD *)(a1 - 32) = &unk_4EBA00;
  *(_QWORD *)a1 = &unk_4EBA38;
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_4EBB10);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E8990),
                             (__m128i)(unsigned __int64)&off_4EBB40);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = v3 + 32 * i;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 216);
        }
      }
    }
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
  }
  v8 = (_QWORD *)(a1 + 152);
  *(_QWORD *)a1 = &unk_4EB238;
  do
  {
    if ( *v8 )
    {
      v8[1] = 0;
      qfree();
    }
    v8 -= 3;
  }
  while ( (_QWORD *)(a1 + 56) != v8 );
  v9 = *(_QWORD *)(a1 - 24);
  result = &off_4E6AE8;
  *(_QWORD *)(a1 - 32) = &off_4E6AE8;
  if ( v9 )
  {
    *(_QWORD *)(a1 - 16) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
