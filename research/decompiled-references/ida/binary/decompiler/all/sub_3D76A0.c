__int64 __fastcall sub_3D76A0(__int64 a1)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  *(_QWORD *)(a1 - 32) = &unk_4EBA00;
  v2 = _mm_loadl_epi64((const __m128i *)off_4E8988);
  *(_QWORD *)a1 = &unk_4EBA38;
  v3 = *(_QWORD *)(a1 + 216);
  *(__m128i *)(a1 + 184) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)&off_4EBB10);
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E8990),
                             (__m128i)(unsigned __int64)&off_4EBB40);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 224);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        if ( *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 216);
        }
      }
    }
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
  }
  v7 = a1 + 176;
  *(_QWORD *)a1 = &unk_4EB238;
  do
  {
    v8 = *(_QWORD *)(v7 - 24);
    v7 -= 24;
    if ( v8 )
    {
      *(_QWORD *)(v7 + 8) = 0;
      qfree();
    }
  }
  while ( v7 != a1 + 80 );
  v9 = *(_QWORD *)(a1 - 24);
  *(_QWORD *)(a1 - 32) = &off_4E6AE8;
  if ( v9 )
  {
    *(_QWORD *)(a1 - 16) = 0;
    qfree();
  }
  return qfree();
}
