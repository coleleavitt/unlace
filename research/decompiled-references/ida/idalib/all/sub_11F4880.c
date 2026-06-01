void __fastcall sub_11F4880(__m128i *a1, const __m128i *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  void *v13; // rax
  __int32 v14; // edx
  const void *v15; // rsi

  a1[5].m128i_i8[8] = 0;
  if ( a2[5].m128i_i8[8] )
  {
    v4 = _mm_loadu_si128(a2);
    v5 = _mm_loadu_si128(a2 + 1);
    v6 = _mm_loadu_si128(a2 + 2);
    v7 = _mm_loadu_si128(a2 + 3);
    a1[4].m128i_i64[0] = 0;
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i32[0] = 0;
    *a1 = v4;
    a1[1] = v5;
    a1[2] = v6;
    a1[3] = v7;
    operator delete(0, 0, 4);
    v12 = a2[5].m128i_u32[0];
    a1[5].m128i_i32[0] = v12;
    if ( (_DWORD)v12 )
    {
      v13 = (void *)sub_22300B0(32 * v12, 4, v8, v9, v10, v11);
      v14 = a2[4].m128i_i32[2];
      a1[4].m128i_i64[0] = (__int64)v13;
      v15 = (const void *)a2[4].m128i_i64[0];
      a1[4].m128i_i32[2] = v14;
      a1[4].m128i_i32[3] = a2[4].m128i_i32[3];
      memcpy(v13, v15, 32LL * a1[5].m128i_u32[0]);
    }
    else
    {
      a1[4].m128i_i64[0] = 0;
      a1[4].m128i_i64[1] = 0;
    }
    a1[5].m128i_i8[8] = 1;
  }
}
