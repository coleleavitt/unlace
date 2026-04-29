__int64 __fastcall sub_225C0(__m128i *a1, __int64 a2)
{
  __m128i si128; // xmm0
  __int8 *v4; // rdi
  unsigned __int32 v5; // eax
  __int64 v6; // rdi
  int v7; // edx
  __int64 result; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_250E0);
  a1->m128i_i64[0] = (__int64)&off_2ED18;
  a1[6].m128i_i64[0] = (__int64)"arm_unwindinfo";
  a1[11].m128i_i64[0] = (__int64)"arm_unwindinfo";
  a1[13].m128i_i64[1] = (__int64)sub_21460;
  a1->m128i_i64[1] = a2;
  a1[7].m128i_i64[1] = (__int64)"DCD";
  a1[1] = si128;
  a1[3].m128i_i64[0] = 0;
  a1[3].m128i_i64[1] = 0;
  a1[4].m128i_i8[0] = 0;
  a1[15].m128i_i64[0] = 0;
  a1[4].m128i_i32[2] = 248;
  a1[5].m128i_i32[2] = 0;
  a1[6].m128i_i64[1] = 0;
  a1[7].m128i_i64[0] = 0;
  a1[8].m128i_i64[0] = 4;
  a1[9].m128i_i32[2] = 248;
  a1[10].m128i_i32[2] = 0;
  a1[11].m128i_i64[1] = 0;
  a1[12].m128i_i64[0] = 0;
  a1[12].m128i_i64[1] = 4;
  a1[13].m128i_i32[0] = 32;
  a1[14].m128i_i64[0] = 0;
  a1[14].m128i_i64[1] = (__int64)sub_21270;
  a1[5].m128i_i64[0] = (__int64)a1;
  a1[10].m128i_i64[0] = (__int64)a1;
  v4 = &a1[4].m128i_i8[8];
  *(_OWORD *)(v4 - 40) = -1;
  *((_OWORD *)v4 + 4) = 0;
  a1[15].m128i_i32[0] = register_custom_data_type();
  v5 = register_custom_data_format(&a1[9].m128i_u64[1]);
  v6 = a1[15].m128i_u32[0];
  a1[15].m128i_i32[1] = v5;
  if ( (unsigned __int8)attach_custom_data_format(v6, v5) )
  {
    v7 = getinf(5);
    result = 0;
    if ( v7 == 11 )
    {
      result = sub_21300();
      a1[2].m128i_i64[0] = result;
    }
    else
    {
      a1[2].m128i_i64[0] = 0;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30623);
    return sub_22740();
  }
  return result;
}
