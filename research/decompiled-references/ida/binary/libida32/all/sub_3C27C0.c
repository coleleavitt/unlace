unsigned __int64 __fastcall sub_3C27C0(__m128i *a1)
{
  __int64 v3; // rdi
  __m128i v4; // xmm0
  char v5[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( !a1[95].m128i_i8[9] )
  {
    get_root_filename(v5);
    sub_4EFFD0(&a1[85], v5, "$ hidden_ranges", 40);
    v3 = a1[87].m128i_i64[1];
    v4 = _mm_loadl_epi64((const __m128i *)off_2AFD000);
    a1[89].m128i_i64[0] = (__int64)sub_3B3670;
    a1[88] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)sub_3B3910);
    sub_4F0B10(v3, &a1[85], v5, "$ hidden_ranges", 40);
    a1[95].m128i_i8[9] = 1;
  }
  return v6 - __readfsqword(0x28u);
}

