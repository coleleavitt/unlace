int __fastcall sub_5860A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF2610 = 0;
  qword_4AF2618 = 0;
  qword_4AF2620 = 0;
  qword_4AF2600 = (__int64)&off_4A6E058;
  qword_4AF2608 = (unsigned int)qword_4AF2608 & 0x80000000;
  qword_4AF2628 = 0;
  qword_4AF2648 = 0x100000000LL;
  qword_4AF2630 = 0;
  qword_4AF2638 = 0;
  qword_4AF2640 = (__int64)&qword_4AF2650;
  qword_4AF2658 = (__int64)&qword_4AF2670;
  qword_4AF2660 = 1;
  dword_4AF2668 = 0;
  byte_4AF266C = 1;
  v1 = sub_259AC30(a1, &qword_4AF2650);
  v2 = (unsigned int)qword_4AF2648;
  v3 = (unsigned int)qword_4AF2648 + 1LL;
  if ( HIDWORD(qword_4AF2648) < v3 )
  {
    sub_25D6060(&qword_4AF2650 - 2, &qword_4AF2650, v3, 8);
    v2 = (unsigned int)qword_4AF2648;
  }
  *(_QWORD *)(qword_4AF2640 + 8 * v2) = v1;
  word_4AF2688 = 0;
  xmmword_4AF2698 = 0;
  LODWORD(qword_4AF2648) = qword_4AF2648 + 1;
  qword_4AF2680 = (__int64)&off_4A64730;
  byte_4AF2678 = 0;
  qword_4AF2600 = (__int64)off_4A6DFF0;
  qword_4AF2690 = (__int64)off_49D9168;
  xmmword_4AF26A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9420),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF2600, "disable-cgdata-for-merging", 26);
  word_4AF2688 = 256;
  byte_4AF2678 = 0;
  qword_4AF2628 = 90;
  BYTE2(qword_4AF2608) = BYTE2(qword_4AF2608) & 0x9F | 0x20;
  qword_4AF2620 = (__int64)"Disable codegen data for function merging. Local merging is still enabled within a module.";
  sub_259EC40(&qword_4AF2600);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF2600, &off_47CFE00);
}

