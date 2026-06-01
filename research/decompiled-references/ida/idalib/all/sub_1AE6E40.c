__int64 __fastcall sub_1AE6E40(__m128i *a1, unsigned int a2, __int32 a3, __int32 a4)
{
  __m128i *v4; // r10
  __m128i *v5; // r9
  __int64 result; // rax
  __m128i si128; // xmm0
  __m128i *v8; // [rsp+28h] [rbp-50h]

  v4 = a1 + 11;
  v5 = a1 + 16;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  a1[25].m128i_i64[0] = (__int64)a1[26].m128i_i64;
  a1[30].m128i_i64[0] = (__int64)a1[31].m128i_i64;
  a1->m128i_i64[1] = 0x800000000LL;
  a1[5].m128i_i64[1] = 0x800000000LL;
  a1[10].m128i_i64[1] = 0x800000000LL;
  a1[15].m128i_i64[1] = 0x800000000LL;
  a1[20].m128i_i64[1] = 0x800000000LL;
  a1[25].m128i_i64[1] = 0x800000000LL;
  a1[30].m128i_i64[1] = 0x800000000LL;
  a1[35].m128i_i64[0] = (__int64)a1[36].m128i_i64;
  result = (__int64)a1[49].m128i_i64;
  a1[35].m128i_i64[1] = 0x800000000LL;
  a1[40].m128i_i64[1] = 0x800000000LL;
  a1[5].m128i_i64[0] = (__int64)a1[6].m128i_i64;
  a1[10].m128i_i64[0] = (__int64)a1[11].m128i_i64;
  a1[15].m128i_i64[0] = (__int64)a1[16].m128i_i64;
  a1[20].m128i_i64[0] = (__int64)a1[21].m128i_i64;
  a1[40].m128i_i64[0] = (__int64)a1[41].m128i_i64;
  a1[45].m128i_i64[0] = (__int64)a1[46].m128i_i64;
  a1[45].m128i_i64[1] = 0x400000000LL;
  a1[48].m128i_i64[0] = (__int64)a1[49].m128i_i64;
  a1[48].m128i_i64[1] = 0x400000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  a1[51].m128i_i32[0] = a3;
  a1[51].m128i_i32[1] = a4;
  a1[51].m128i_i64[1] = (__int64)a1[53].m128i_i64;
  a1[52] = si128;
  if ( a2 > 8uLL )
  {
    result = sub_2237220(a1, &a1[1], a2, 8);
    v5 = a1 + 16;
    v4 = a1 + 11;
    if ( a2 > (unsigned __int64)a1[5].m128i_u32[3] )
    {
      result = sub_2237220(&a1[5], &a1[6], a2, 8);
      v4 = a1 + 11;
      v5 = a1 + 16;
    }
  }
  if ( a2 > (unsigned __int64)a1[10].m128i_u32[3] )
  {
    v8 = v5;
    result = sub_2237220(&a1[10], v4, a2, 8);
    v5 = v8;
  }
  if ( a2 > (unsigned __int64)a1[15].m128i_u32[3] )
    result = sub_2237220(&a1[15], v5, a2, 8);
  if ( a2 > (unsigned __int64)a1[20].m128i_u32[3] )
    result = sub_2237220(&a1[20], &a1[21], a2, 8);
  if ( (unsigned __int64)a2 > a1[52].m128i_i64[1] )
    result = sub_2236E10(&a1[51].m128i_u64[1], &a1[53], a2, 1);
  if ( a1[51].m128i_i32[0] != 1 )
    goto LABEL_11;
  if ( a2 > (unsigned __int64)a1[25].m128i_u32[3] )
    result = sub_2237220(&a1[25], &a1[26], a2, 8);
  if ( a2 > (unsigned __int64)a1[30].m128i_u32[3] )
    result = sub_2237220(&a1[30], &a1[31], a2, 8);
  if ( a2 <= (unsigned __int64)a1[35].m128i_u32[3] )
  {
LABEL_11:
    if ( a2 > (unsigned __int64)a1[40].m128i_u32[3] )
      goto LABEL_21;
LABEL_12:
    if ( a2 > (unsigned __int64)a1[45].m128i_u32[3] )
      goto LABEL_22;
    goto LABEL_13;
  }
  result = sub_2237220(&a1[35], &a1[36], a2, 8);
  if ( a2 <= (unsigned __int64)a1[40].m128i_u32[3] )
    goto LABEL_12;
LABEL_21:
  result = sub_2237220(&a1[40], &a1[41], a2, 8);
  if ( a2 > (unsigned __int64)a1[45].m128i_u32[3] )
  {
LABEL_22:
    result = sub_2237220(&a1[45], &a1[46], a2, 8);
    if ( a2 > (unsigned __int64)a1[48].m128i_u32[3] )
      return sub_2237220(&a1[48], &a1[49], a2, 8);
    return result;
  }
LABEL_13:
  if ( a2 > (unsigned __int64)a1[48].m128i_u32[3] )
    return sub_2237220(&a1[48], &a1[49], a2, 8);
  return result;
}
