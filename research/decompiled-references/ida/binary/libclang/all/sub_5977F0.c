int sub_5977F0()
{
  __int64 v0; // r13
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  char v4; // [rsp+3h] [rbp-55h] BYREF
  int v5; // [rsp+4h] [rbp-54h] BYREF
  char *v6; // [rsp+8h] [rbp-50h] BYREF
  const char *v7; // [rsp+10h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]

  v7 = "Use TargetSchedModel for latency lookup";
  v4 = 1;
  v8 = 39;
  v6 = &v4;
  v5 = 1;
  sub_32D8B50(qword_4AFBA80, "schedmodel", &v5, &v6, &v7);
  __cxa_atexit(sub_1F6C9D0, qword_4AFBA80, &off_47CFE00);
  v8 = 41;
  v7 = "Use InstrItineraryData for latency lookup";
  v4 = 1;
  v6 = &v4;
  v5 = 1;
  sub_32D8B50(qword_4AFB9C0, "scheditins", &v5, &v6, &v7);
  __cxa_atexit(sub_1F6C9D0, qword_4AFB9C0, &off_47CFE00);
  qword_4AFB910 = 0;
  qword_4AFB918 = 0;
  qword_4AFB920 = 0;
  qword_4AFB900 = (__int64)&off_4A6E058;
  qword_4AFB908 = (unsigned int)qword_4AFB908 & 0x80000000;
  qword_4AFB928 = 0;
  qword_4AFB948 = 0x100000000LL;
  qword_4AFB930 = 0;
  qword_4AFB938 = 0;
  qword_4AFB940 = (__int64)&qword_4AFB950;
  qword_4AFB958 = (__int64)&qword_4AFB970;
  qword_4AFB960 = 1;
  dword_4AFB968 = 0;
  byte_4AFB96C = 1;
  v0 = sub_259AC30(sub_1F6C9D0, &qword_4AFB950);
  v1 = (unsigned int)qword_4AFB948;
  v2 = (unsigned int)qword_4AFB948 + 1LL;
  if ( HIDWORD(qword_4AFB948) < v2 )
  {
    sub_25D6060(&qword_4AFB950 - 2, &qword_4AFB950, v2, 8);
    v1 = (unsigned int)qword_4AFB948;
  }
  *(_QWORD *)(qword_4AFB940 + 8 * v1) = v0;
  word_4AFB988 = 0;
  xmmword_4AFB998 = 0;
  LODWORD(qword_4AFB948) = qword_4AFB948 + 1;
  qword_4AFB980 = (__int64)&off_4A64730;
  byte_4AFB978 = 0;
  qword_4AFB900 = (__int64)off_4A6DFF0;
  qword_4AFB990 = (__int64)off_49D9168;
  xmmword_4AFB9A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB060),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFB900, "sched-model-force-enable-intervals", 34);
  word_4AFB988 = 256;
  byte_4AFB978 = 0;
  qword_4AFB928 = 57;
  BYTE2(qword_4AFB908) = BYTE2(qword_4AFB908) & 0x9F | 0x20;
  qword_4AFB920 = (__int64)"Force the use of resource intervals in the schedule model";
  sub_259EC40(&qword_4AFB900);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFB900, &off_47CFE00);
}

