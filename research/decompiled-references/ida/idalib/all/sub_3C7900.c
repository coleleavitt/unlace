unsigned __int64 __fastcall sub_3C7900(__m128i *a1)
{
  __int64 v3; // rdi
  __m128i v4; // xmm0
  char v5[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( !a1[98].m128i_i8[9] )
  {
    get_root_filename(v5);
    sub_5075C0(&a1[87].m128i_u64[1], v5, "$ hidden_ranges", 48);
    v3 = a1[90].m128i_i64[1];
    v4 = _mm_loadl_epi64((const __m128i *)off_2B26140);
    a1[92].m128i_i64[0] = (__int64)sub_3B7F00;
    a1[91] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)sub_3B80F0);
    sub_508110(v3, &a1[87].m128i_u64[1], v5, "$ hidden_ranges", 48);
    a1[98].m128i_i8[9] = 1;
  }
  return v6 - __readfsqword(0x28u);
}
