void __fastcall sub_179E990(__int64 *a1, unsigned int a2, const __m128i *a3)
{
  __int32 v3; // eax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i v6; // [rsp+0h] [rbp-B8h] BYREF
  __int32 v7; // [rsp+10h] [rbp-A8h]
  _BYTE v8[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = a3[1].m128i_i32[0];
  v4 = _mm_loadu_si128(a3);
  a3->m128i_i64[0] = 0;
  v7 = v3;
  v5 = *a1;
  v6 = v4;
  sub_168CDE0((__int64)v8, (__int64 *)(v5 + 8), a2, (__int64)&v6, 0);
  sub_15F7200(v8);
  if ( v6.m128i_i64[0] )
  {
    if ( v6.m128i_i64[1] )
      sub_1580C40(v6.m128i_u64[1], v6.m128i_u64[0]);
  }
}
