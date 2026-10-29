int __fastcall sub_586290(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF26F0 = 0;
  qword_4AF26F8 = 0;
  qword_4AF2700 = 0;
  qword_4AF26E0 = (__int64)&off_4A6E058;
  qword_4AF26E8 = (unsigned int)qword_4AF26E8 & 0x80000000;
  qword_4AF2708 = 0;
  qword_4AF2728 = 0x100000000LL;
  qword_4AF2710 = 0;
  qword_4AF2718 = 0;
  qword_4AF2720 = (__int64)&qword_4AF2730;
  qword_4AF2738 = (__int64)&qword_4AF2750;
  qword_4AF2740 = 1;
  dword_4AF2748 = 0;
  byte_4AF274C = 1;
  v1 = sub_259AC30(a1, &qword_4AF2730);
  v2 = (unsigned int)qword_4AF2728;
  v3 = (unsigned int)qword_4AF2728 + 1LL;
  if ( HIDWORD(qword_4AF2728) < v3 )
  {
    sub_25D6060(&qword_4AF2730 - 2, &qword_4AF2730, v3, 8);
    v2 = (unsigned int)qword_4AF2728;
  }
  *(_QWORD *)(qword_4AF2720 + 8 * v2) = v1;
  word_4AF2768 = 0;
  xmmword_4AF2778 = 0;
  LODWORD(qword_4AF2728) = qword_4AF2728 + 1;
  qword_4AF2760 = (__int64)&off_4A64730;
  byte_4AF2758 = 0;
  qword_4AF26E0 = (__int64)off_4A6DFF0;
  qword_4AF2770 = (__int64)off_49D9168;
  xmmword_4AF2788 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9428),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF26E0, "lower-interleaved-accesses", 26);
  qword_4AF2700 = (__int64)"Enable lowering interleaved accesses to intrinsics";
  word_4AF2768 = 257;
  byte_4AF2758 = 1;
  qword_4AF2708 = 50;
  BYTE2(qword_4AF26E8) = BYTE2(qword_4AF26E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF26E0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF26E0, &off_47CFE00);
}

