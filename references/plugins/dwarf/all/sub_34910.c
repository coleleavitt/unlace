unsigned __int64 __fastcall sub_34910(const __m128i *a1)
{
  __int64 v2; // rax
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  __int64 *v5; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  __m128i v8; // [rsp+18h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v7 = 0;
  if ( (unsigned __int8)tinfo_t__build_anon_type_name(&v7, &a1->m128i_u64[1]) )
  {
    v2 = a1[2].m128i_i64[1];
    v3 = _mm_loadu_si128(&v8);
    v4 = _mm_loadu_si128(a1 + 3);
    a1[2].m128i_i64[1] = v7;
    v7 = v2;
    a1[3] = v3;
    v6 = 0x7E83B8DEDDE45EC6LL;
    v8 = v4;
    v5 = (__int64 *)sub_85700(&v6, &a1[2].m128i_u64[1]);
    sub_348C0((__int64)a1, v5);
  }
  if ( v7 )
  {
    v8.m128i_i64[0] = 0;
    qfree(v7);
  }
  return v9 - __readfsqword(0x28u);
}
