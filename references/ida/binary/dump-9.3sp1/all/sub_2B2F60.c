__int64 __fastcall sub_2B2F60(__int64 a1, const __m128i *a2)
{
  __int64 v3; // r12
  __m128i si128; // xmm0
  __int64 v5; // rdi
  __int64 v6; // r12
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 result; // rax
  __m128i v10[2]; // [rsp+0h] [rbp-28h] BYREF

  copy_argloc();
  *(_QWORD *)(a1 + 24) = a2[1].m128i_i64[1];
  *(_QWORD *)(a1 + 32) = a2[2].m128i_i64[0];
  *(_DWORD *)(a1 + 40) = a2[2].m128i_i32[2];
  copy_argloc();
  *(_QWORD *)(a1 + 64) = a2[4].m128i_i64[0];
  v3 = a2[4].m128i_i64[1];
  si128 = _mm_loadu_si128(a2 + 5);
  a2[4].m128i_i64[1] = 0;
  a2[5] = 0;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v10[0] = si128;
    qfree(v5);
    si128 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 72) = v3;
  *(__m128i *)(a1 + 80) = si128;
  copy_tinfo_t();
  v6 = a2[6].m128i_i64[1];
  v7 = _mm_loadu_si128(a2 + 7);
  a2[6].m128i_i64[1] = 0;
  a2[7] = 0;
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    v10[0] = v7;
    qfree(v8);
    v7 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 104) = v6;
  *(__m128i *)(a1 + 112) = v7;
  *(_QWORD *)(a1 + 128) = a2[8].m128i_i64[0];
  *(_DWORD *)(a1 + 136) = a2[8].m128i_i32[2];
  copy_argloc();
  *(_QWORD *)(a1 + 160) = a2[10].m128i_i64[0];
  *(_QWORD *)(a1 + 168) = a2[10].m128i_i64[1];
  *(_DWORD *)(a1 + 176) = a2[11].m128i_i32[0];
  result = a2[11].m128i_u32[2];
  *(_DWORD *)(a1 + 184) = result;
  return result;
}
