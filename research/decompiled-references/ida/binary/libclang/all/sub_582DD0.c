int __fastcall sub_582DD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF00B0 = 0;
  qword_4AF00B8 = 0;
  qword_4AF00C0 = 0;
  qword_4AF00A0 = (__int64)&off_4A6E058;
  qword_4AF00A8 = (unsigned int)qword_4AF00A8 & 0x80000000;
  qword_4AF00C8 = 0;
  qword_4AF00E8 = 0x100000000LL;
  qword_4AF00D0 = 0;
  qword_4AF00D8 = 0;
  qword_4AF00E0 = (__int64)&qword_4AF00F0;
  qword_4AF00F8 = (__int64)&qword_4AF0110;
  qword_4AF0100 = 1;
  dword_4AF0108 = 0;
  byte_4AF010C = 1;
  v1 = sub_259AC30(a1, &qword_4AF00F0);
  v2 = (unsigned int)qword_4AF00E8;
  v3 = (unsigned int)qword_4AF00E8 + 1LL;
  if ( HIDWORD(qword_4AF00E8) < v3 )
  {
    sub_25D6060(&qword_4AF00F0 - 2, &qword_4AF00F0, v3, 8);
    v2 = (unsigned int)qword_4AF00E8;
  }
  *(_QWORD *)(qword_4AF00E0 + 8 * v2) = v1;
  xmmword_4AF0138 = 0;
  LODWORD(qword_4AF00E8) = qword_4AF00E8 + 1;
  qword_4AF0120 = (__int64)&off_4A692B8;
  dword_4AF0118 = 0;
  byte_4AF012C = 0;
  qword_4AF00A0 = (__int64)off_4A6DF20;
  dword_4AF0128 = 0;
  qword_4AF0130 = (__int64)off_49D91C8;
  xmmword_4AF0148 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E90E8),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AF00A0, "sched-high-latency-cycles", 25);
  dword_4AF0118 = 10;
  byte_4AF012C = 1;
  dword_4AF0128 = 10;
  qword_4AF00C8 = 105;
  BYTE2(qword_4AF00A8) = BYTE2(qword_4AF00A8) & 0x9F | 0x20;
  qword_4AF00C0 = (__int64)"Roughly estimate the number of cycles that 'long latency' instructions take for targets with no itinerary";
  sub_259EC40(&qword_4AF00A0);
  return __cxa_atexit(sub_20B86E0, &qword_4AF00A0, &off_47CFE00);
}

