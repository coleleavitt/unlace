int __fastcall sub_5DF070(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4B23640 = (__int64)&off_4A6E058;
  qword_4B23648 = (unsigned int)qword_4B23648 & 0x80000000;
  qword_4B23650 = 0;
  qword_4B23658 = 0;
  qword_4B23660 = 0;
  qword_4B23668 = 0;
  qword_4B23670 = 0;
  qword_4B23678 = 0;
  qword_4B23680 = (__int64)&qword_4B23690;
  qword_4B23688 = 0x100000000LL;
  qword_4B23698 = (__int64)&qword_4B236B0;
  qword_4B236A0 = 1;
  dword_4B236A8 = 0;
  byte_4B236AC = 1;
  v1 = sub_259AC30(a1, &qword_4B23690);
  v2 = (unsigned int)qword_4B23688;
  v3 = (unsigned int)qword_4B23688 + 1LL;
  if ( HIDWORD(qword_4B23688) < v3 )
  {
    sub_25D6060(&qword_4B23690 - 2, &qword_4B23690, v3, 8);
    v2 = (unsigned int)qword_4B23688;
  }
  *(_QWORD *)(qword_4B23680 + 8 * v2) = v1;
  xmmword_4B236E0 = 0;
  LODWORD(qword_4B23688) = qword_4B23688 + 1;
  qword_4B236C0 = (__int64)off_4A6E4B8;
  qword_4B236B8 = 0;
  byte_4B236D0 = 0;
  qword_4B23640 = (__int64)off_4A6E4D8;
  qword_4B236C8 = 0;
  qword_4B236D8 = (__int64)off_49D9258;
  xmmword_4B236F0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F1408),
                                (__m128i)(unsigned __int64)nullsub_374);
  sub_259F400(&qword_4B23640, "profile-symbol-list-cutoff", 26);
  qword_4B236B8 = -1;
  byte_4B236D0 = 1;
  qword_4B236C8 = -1;
  qword_4B23668 = 118;
  BYTE2(qword_4B23648) = BYTE2(qword_4B23648) & 0x9F | 0x20;
  qword_4B23660 = (__int64)"Cutoff value about how many symbols in profile symbol list will be used. This is very useful "
                           "for performance debugging";
  sub_259EC40(&qword_4B23640);
  __cxa_atexit(sub_25D0820, &qword_4B23640, &off_47CFE00);
  qword_4B235E0 = 1;
  qword_4B23580 = (__int64)&off_4A6E058;
  qword_4B23588 = (unsigned int)qword_4B23588 & 0x80000000;
  qword_4B235C0 = (__int64)&qword_4B235D0;
  qword_4B23590 = 0;
  qword_4B23598 = 0;
  qword_4B235A0 = 0;
  qword_4B235A8 = 0;
  qword_4B235B0 = 0;
  qword_4B235B8 = 0;
  qword_4B235C8 = 0x100000000LL;
  qword_4B235D8 = (__int64)&qword_4B235F0;
  dword_4B235E8 = 0;
  byte_4B235EC = 1;
  v4 = sub_259AC30(sub_25D0820, &qword_4B235D0);
  v5 = (unsigned int)qword_4B235C8;
  v6 = (unsigned int)qword_4B235C8 + 1LL;
  if ( HIDWORD(qword_4B235C8) < v6 )
  {
    sub_25D6060(&qword_4B235D0 - 2, &qword_4B235D0, v6, 8);
    v5 = (unsigned int)qword_4B235C8;
  }
  *(_QWORD *)(qword_4B235C0 + 8 * v5) = v4;
  word_4B23608 = 0;
  xmmword_4B23618 = 0;
  LODWORD(qword_4B235C8) = qword_4B235C8 + 1;
  qword_4B23600 = (__int64)&off_4A64730;
  byte_4B235F8 = 0;
  qword_4B23580 = (__int64)off_4A6DFF0;
  qword_4B23610 = (__int64)off_49D9168;
  xmmword_4B23628 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F1410),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B23580, "generate-merged-base-profiles", 29);
  qword_4B235A8 = 144;
  qword_4B235A0 = (__int64)"When generating nested context-sensitive profiles, always generate extra base profile for fun"
                           "ction with all its context profiles merged into it.";
  sub_259EC40(&qword_4B23580);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B23580, &off_47CFE00);
}

