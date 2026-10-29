__int64 __fastcall lex_init_string(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  bool v4; // zf
  __m128i si128; // xmm1
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 64) == 0;
  v7[0] = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  if ( !v4 )
  {
    do
      sub_79F2A0(a1);
    while ( *(_QWORD *)(a1 + 64) );
  }
  si128 = _mm_load_si128(v7);
  *(_QWORD *)(a1 + 232) = a2;
  *(_QWORD *)(a1 + 216) = sub_79F050;
  *(_QWORD *)(a1 + 224) = a1 + 232;
  *(_BYTE *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(__m128i *)a1 = si128;
  if ( a3 )
    return sub_7A71C0(a1, a3, 0);
  else
    return 0;
}
