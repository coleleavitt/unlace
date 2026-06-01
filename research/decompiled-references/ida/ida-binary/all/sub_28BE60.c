__int64 __fastcall sub_28BE60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 func; // rsi
  __int64 v4; // rsi
  __m128i v5; // xmm3
  __m128i v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+18h] [rbp-50h] BYREF
  __m128i v10; // [rsp+20h] [rbp-48h] BYREF
  __m128i v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v8, (__m128i)(unsigned __int64)&v9);
  if ( a2 == -1 )
  {
    v2 = xmmword_8CC810;
    v8 = sub_28DA30(a1);
    v4 = v8;
    if ( v2 == -1 )
      goto LABEL_6;
  }
  else
  {
    v2 = a2;
    v8 = sub_28DA30(a1);
  }
  func = get_func(v2);
  if ( func || (func = get_prev_func(v2)) != 0 )
    sub_28D6D0(v8, func);
  v4 = v8;
LABEL_6:
  v5 = _mm_load_si128(&v7);
  v9 = -1;
  v10 = v5;
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_860B60), (__m128i)(unsigned __int64)sub_28A050);
  sub_4C21B0(a1, v4, 0, &v10, 0);
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v11.m128i_i64[0])(&v10, &v10, 3);
  return get_func(v9);
}
