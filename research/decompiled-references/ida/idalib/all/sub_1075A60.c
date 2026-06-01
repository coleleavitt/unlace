_UNKNOWN **__fastcall sub_1075A60(__m128i *a1, const __m128i *a2, __int64 a3)
{
  __m128i *v3; // rax
  __int8 *v4; // r13
  signed __int64 v5; // rbp
  __int32 v6; // eax

  sub_10751D0((__int64)a1, a2, a3);
  a1[21].m128i_i8[8] = 1;
  a1[9].m128i_i64[1] = 0x400000004LL;
  a1->m128i_i64[0] = (__int64)&off_2C2B2B8;
  v3 = a1 + 41;
  a1[40].m128i_i64[0] = (__int64)a1[41].m128i_i64;
  v4 = (__int8 *)a2->m128i_i64[0];
  v5 = a2->m128i_i64[1];
  if ( v5 + a2->m128i_i64[0] && !v4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v3 = (__m128i *)operator new(v5 + 1);
    a1[41].m128i_i64[0] = v5;
    a1[40].m128i_i64[0] = (__int64)v3;
    goto LABEL_11;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
      goto LABEL_6;
LABEL_11:
    memcpy(v3, v4, v5);
    v3 = (__m128i *)a1[40].m128i_i64[0];
    goto LABEL_6;
  }
  a1[41].m128i_i8[0] = *v4;
LABEL_6:
  a1[40].m128i_i64[1] = v5;
  v3->m128i_i8[v5] = 0;
  a1[42] = _mm_loadu_si128(a2 + 2);
  a1[43].m128i_i32[0] = a2[3].m128i_i32[0];
  v6 = a2[3].m128i_i32[1];
  a1[21].m128i_i32[1] = 1;
  a1[43].m128i_i32[1] = v6;
  a1->m128i_i64[0] = (__int64)&off_2C2B6A8;
  return &off_2C2B6A8;
}
