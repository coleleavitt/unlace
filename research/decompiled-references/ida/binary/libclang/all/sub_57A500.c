int __fastcall sub_57A500(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AEAEB0 = 0;
  qword_4AEAEB8 = 0;
  qword_4AEAEC0 = 0;
  qword_4AEAEA0 = (__int64)&off_4A6E058;
  qword_4AEAEA8 = (unsigned int)qword_4AEAEA8 & 0x80000000;
  qword_4AEAEC8 = 0;
  qword_4AEAEE8 = 0x100000000LL;
  qword_4AEAED0 = 0;
  qword_4AEAED8 = 0;
  qword_4AEAEE0 = (__int64)&qword_4AEAEF0;
  qword_4AEAEF8 = (__int64)&qword_4AEAF10;
  qword_4AEAF00 = 1;
  dword_4AEAF08 = 0;
  byte_4AEAF0C = 1;
  v1 = sub_259AC30(a1, &qword_4AEAEF0);
  v2 = (unsigned int)qword_4AEAEE8;
  v3 = (unsigned int)qword_4AEAEE8 + 1LL;
  if ( HIDWORD(qword_4AEAEE8) < v3 )
  {
    sub_25D6060(&qword_4AEAEF0 - 2, &qword_4AEAEF0, v3, 8);
    v2 = (unsigned int)qword_4AEAEE8;
  }
  *(_QWORD *)(qword_4AEAEE0 + 8 * v2) = v1;
  word_4AEAF28 = 0;
  xmmword_4AEAF38 = 0;
  LODWORD(qword_4AEAEE8) = qword_4AEAEE8 + 1;
  qword_4AEAF20 = (__int64)&off_4A64730;
  byte_4AEAF18 = 0;
  qword_4AEAEA0 = (__int64)off_4A6DFF0;
  qword_4AEAF30 = (__int64)off_49D9168;
  xmmword_4AEAF48 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8680),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AEAEA0, "trim-var-locs", 13);
  word_4AEAF28 = 257;
  byte_4AEAF18 = 1;
  BYTE2(qword_4AEAEA8) = BYTE2(qword_4AEAEA8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AEAEA0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEAEA0, &off_47CFE00);
}

