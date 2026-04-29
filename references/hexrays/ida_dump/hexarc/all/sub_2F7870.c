unsigned __int64 __fastcall sub_2F7870(const __m128i *a1, const __m128i *a2)
{
  __m128i v3[3]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v4[12]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v5[48]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v6; // [rsp+C0h] [rbp-28h]
  unsigned __int64 v7; // [rsp+C8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  sub_2C6F90(v3, a1);
  v3[0].m128i_i64[0] = (__int64)off_4AF528;
  v6 = a1[12].m128i_i64[0];
  sub_2ABBE0((__int64)a1, a2);
  a1[12].m128i_i64[0] = a2[12].m128i_i64[0];
  sub_2ABBE0((__int64)a2, v3);
  a2[12].m128i_i64[0] = v6;
  v3[0].m128i_i64[0] = (__int64)&off_4ADD28;
  cleanup_argloc(v5);
  sub_2B2600(v4);
  cleanup_argloc(&v3[0].m128i_u64[1]);
  return v7 - __readfsqword(0x28u);
}
