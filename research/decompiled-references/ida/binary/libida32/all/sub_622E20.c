unsigned __int64 __fastcall sub_622E20(__m128i *a1)
{
  _QWORD *v2; // rdi
  __m128i v3; // xmm0
  char v5[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  get_root_filename(v5);
  sub_4EFFD0((__int64)a1[167].m128i_i64, (__int64)v5, (__int64)"$ fileregions", 16);
  v2 = (_QWORD *)a1[169].m128i_i64[1];
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B0D1C0), (__m128i)(unsigned __int64)sub_622AD0);
  a1[170] = v3;
  sub_4F0B10(v2, a1 + 167, v5, (__int64)"$ fileregions", 16, *(double *)v3.m128i_i64, COERCE_DOUBLE(sub_622AD0));
  a1[171].m128i_i8[8] = 1;
  if ( (dword_2CA24C8 & 0x200000) != 0 )
    sub_4ED600((unsigned int *)&a1[167]);
  return v6 - __readfsqword(0x28u);
}

