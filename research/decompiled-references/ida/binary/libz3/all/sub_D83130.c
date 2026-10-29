__int64 __fastcall sub_D83130(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 result; // rax
  unsigned int v9; // eax
  _BYTE v10[48]; // [rsp+0h] [rbp-30h] BYREF

  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i64[1] = a3;
  a1[2].m128i_i64[1] = 0;
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  a1[2].m128i_i64[0] = a2;
  sub_D822E0((__int64)a1, a4);
  sub_180C5A0(v10, "bv");
  v4 = a1->m128i_i64[0];
  v5 = a1->m128i_i64[0] + 560;
  if ( !(unsigned __int8)sub_15D1480(v5, v10) || (v9 = sub_15D1320(v5, v10), (result = sub_15D2690(v4, v9)) == 0) )
  {
    v6 = a1->m128i_i64[0];
    v7 = sub_186B270(0x268u);
    sub_1672BD0(v7);
    return sub_15DA890(v6, v10, v7);
  }
  return result;
}

