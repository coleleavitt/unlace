unsigned __int64 __fastcall sub_2E0DE0(const __m128i *a1, __int64 a2)
{
  const __m128i *v2; // rbx
  __int64 v3; // rax
  __m128i v5[12]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v6; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v7; // [rsp+C8h] [rbp-30h]

  v2 = (const __m128i *)((char *)a1 - 200);
  v7 = __readfsqword(0x28u);
  sub_2CE310(v5, a1);
  v5[0].m128i_i64[0] = (__int64)off_4E2D50;
  v6 = a1[12].m128i_i64[0];
  if ( !*(_QWORD *)(a2 + 16) )
LABEL_6:
    std::__throw_bad_function_call();
  while ( (*(int (__fastcall **)(__int64, __m128i *, const __m128i *))(a2 + 24))(a2, v5, v2) < 0 )
  {
    sub_2B2F60((__int64)&v2[12].m128i_i64[1], v2);
    v3 = v2[12].m128i_i64[0];
    v2 = (const __m128i *)((char *)v2 - 200);
    v2[37].m128i_i64[0] = v3;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_6;
  }
  sub_2B2F60((__int64)&v2[12].m128i_i64[1], v5);
  v2[24].m128i_i64[1] = v6;
  v5[0].m128i_i64[0] = (__int64)&off_4E1550;
  sub_2BA730((__int64)v5);
  return v7 - __readfsqword(0x28u);
}
