int __fastcall sub_5BC620(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B0C8B0 = 0;
  qword_4B0C8B8 = 0;
  qword_4B0C8C0 = 0;
  qword_4B0C8A0 = (__int64)&off_4A6E058;
  qword_4B0C8A8 = (unsigned int)qword_4B0C8A8 & 0x80000000;
  qword_4B0C8C8 = 0;
  qword_4B0C8E8 = 0x100000000LL;
  qword_4B0C8D0 = 0;
  qword_4B0C8D8 = 0;
  qword_4B0C8E0 = (__int64)&qword_4B0C8F0;
  qword_4B0C8F8 = (__int64)&qword_4B0C910;
  qword_4B0C900 = 1;
  dword_4B0C908 = 0;
  byte_4B0C90C = 1;
  v1 = sub_259AC30(a1, &qword_4B0C8F0);
  v2 = (unsigned int)qword_4B0C8E8;
  v3 = (unsigned int)qword_4B0C8E8 + 1LL;
  if ( HIDWORD(qword_4B0C8E8) < v3 )
  {
    sub_25D6060(&qword_4B0C8F0 - 2, &qword_4B0C8F0, v3, 8);
    v2 = (unsigned int)qword_4B0C8E8;
  }
  *(_QWORD *)(qword_4B0C8E0 + 8 * v2) = v1;
  word_4B0C928 = 0;
  xmmword_4B0C938 = 0;
  LODWORD(qword_4B0C8E8) = qword_4B0C8E8 + 1;
  qword_4B0C920 = (__int64)&off_4A64730;
  byte_4B0C918 = 0;
  qword_4B0C8A0 = (__int64)off_4A6DFF0;
  qword_4B0C930 = (__int64)off_49D9168;
  xmmword_4B0C948 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC250),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B0C8A0, "interactive-model-runner-echo-reply", 35);
  word_4B0C928 = 256;
  byte_4B0C918 = 0;
  qword_4B0C8C8 = 109;
  BYTE2(qword_4B0C8A8) = BYTE2(qword_4B0C8A8) & 0x9F | 0x20;
  qword_4B0C8C0 = (__int64)"The InteractiveModelRunner will echo back to stderr the data received from the host (for debu"
                           "gging purposes).";
  sub_259EC40(&qword_4B0C8A0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0C8A0, &off_47CFE00);
}

