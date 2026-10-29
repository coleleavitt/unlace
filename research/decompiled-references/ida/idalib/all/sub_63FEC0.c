unsigned __int64 __fastcall sub_63FEC0(__m128i *a1)
{
  _QWORD *v2; // rdi
  __m128i v3; // xmm0
  char v5[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  get_root_filename(v5);
  sub_5075C0((__int64)&a1[179].m128i_i64[1], (__int64)v5, (__int64)"$ fileregions", 24);
  v2 = (_QWORD *)a1[182].m128i_i64[1];
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B37180), (__m128i)(unsigned __int64)sub_63FCD0);
  a1[183] = v3;
  sub_508110(
    v2,
    (__int64)&a1[179].m128i_i64[1],
    v5,
    (__int64)"$ fileregions",
    24,
    *(double *)v3.m128i_i64,
    COERCE_DOUBLE(sub_63FCD0));
  a1[184].m128i_i8[8] = 1;
  if ( (dword_2CCC3C8 & 0x200000) != 0 )
    sub_504B40((__int64)&a1[179].m128i_i64[1]);
  return v6 - __readfsqword(0x28u);
}
