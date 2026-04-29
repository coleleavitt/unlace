__int64 __fastcall sub_30E3B0(__m128i *a1)
{
  __int32 v1; // eax
  __int32 v2; // ecx
  __int64 v3; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  __m128i si128; // xmm2
  _QWORD v8[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v9; // [rsp+10h] [rbp-68h] BYREF
  __m128i v10[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-20h]

  v1 = a1->m128i_i32[0];
  v11 = __readfsqword(0x28u);
  if ( v1 == 1 )
    return sub_30B800((__int64)a1);
  if ( v1 )
  {
    if ( v1 != 8 )
    {
      if ( (v1 & 0xF) != 2 )
      {
        if ( !under_debugger )
          sub_37B760(51850);
        BUG();
      }
      v2 = a1->m128i_i32[1];
      v3 = 0;
      v9.m128i_i32[0] = 2;
      v9.m128i_i64[1] = 0;
      v9.m128i_i32[1] = v2;
      v10[0] = 0;
      if ( v2 != 8 )
        v3 = 1LL << (8 * (unsigned __int8)v2);
      v8[1] = v3;
      v8[0] = 0;
      sub_30F830(&v9.m128i_u64[1], v8);
      sub_3108E0(&v9.m128i_u64[1], &a1->m128i_u64[1]);
      v4 = _mm_loadu_si128(a1);
      v5 = _mm_loadu_si128(a1 + 1);
      *a1 = _mm_load_si128(&v9);
      si128 = _mm_load_si128(v10);
      v10[1] = v4;
      a1[1] = si128;
      v10[2] = v5;
      v9 = v4;
      v10[0] = v5;
      sub_30B800((__int64)&v9);
    }
  }
  else
  {
    sub_30B800((__int64)a1);
    a1->m128i_i32[0] = 1;
  }
  return v11 - __readfsqword(0x28u);
}
