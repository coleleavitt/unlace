__int64 __fastcall sub_3DBBD0(__int64 a1)
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

  v1 = _mm_loadl_epi64((const __m128i *)off_4B60F8);
  *(_QWORD *)a1 = off_4B5F70;
  *(_QWORD *)(a1 + 32) = off_4B5FD0;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_4B60A8);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4B6100),
                             (__m128i)(unsigned __int64)&off_4B60D8);
  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 248);
  v5 = _mm_loadl_epi64((const __m128i *)off_4B6108);
  *(_QWORD *)a1 = &unk_4B8880;
  *(_QWORD *)(a1 + 32) = &unk_4B88B8;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)&off_4B8990);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4B6110),
                             (__m128i)(unsigned __int64)&off_4B89C0);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 256);
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
          v4 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v4);
  }
  v10 = (__int64 *)(a1 + 184);
  *(_QWORD *)(a1 + 32) = &unk_4B7C88;
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
  while ( (__int64 *)(a1 + 88) != v10 );
  v12 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &off_4B3D88;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v12);
  }
  return qfree(a1);
}
