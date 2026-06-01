void (__fastcall *__fastcall sub_121C060(__int64 a1, __int64 a2))(__int64, __int64, __int64)
{
  __int64 v2; // r13
  signed __int64 v4; // r12
  unsigned __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  void (__fastcall *result)(__int64, __int64, __int64); // rax
  __m128i v14[4]; // [rsp+0h] [rbp-40h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 6);
  if ( v5 )
  {
    if ( v5 > 0x155555555555555LL )
      std::__throw_bad_alloc();
    v2 = operator new(v4);
  }
  v14[0].m128i_i64[0] = v2;
  v6 = _mm_loadl_epi64(v14);
  *(_QWORD *)(a1 + 16) = v2 + v4;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v6, v6);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)a2;
  if ( v7 != *(_QWORD *)a2 )
  {
    v9 = *(_QWORD *)a2;
    v10 = v2;
    do
    {
      v11 = v9;
      v9 += 192;
      v14[0].m128i_i64[0] = v8;
      sub_110AD80(v10, v11);
      v10 += 192;
      v8 = v14[0].m128i_i64[0];
    }
    while ( v7 != v9 );
    v2 += (3 * ((0x2AAAAAAAAAAAAABLL * ((unsigned __int64)(v7 - 192 - v14[0].m128i_i64[0]) >> 6)) & 0x3FFFFFFFFFFFFFFLL)
         + 3) << 6;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 32) = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 32) )
    sub_1180210(a1 + 24, a2 + 24);
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 104) = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 104) )
    sub_1180630(a1 + 96, a2 + 96);
  *(_QWORD *)(a1 + 288) = 0;
  v12 = *(void (__fastcall **)(__int64, __int64, __int64))(a2 + 288);
  if ( v12 )
  {
    v12(a1 + 272, a2 + 272, 2);
    *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 296);
    *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 288);
  }
  *(_QWORD *)(a1 + 320) = 0;
  result = *(void (__fastcall **)(__int64, __int64, __int64))(a2 + 320);
  if ( result )
  {
    result(a1 + 304, a2 + 304, 2);
    *(_QWORD *)(a1 + 328) = *(_QWORD *)(a2 + 328);
    result = *(void (__fastcall **)(__int64, __int64, __int64))(a2 + 320);
    *(_QWORD *)(a1 + 320) = result;
  }
  return result;
}
