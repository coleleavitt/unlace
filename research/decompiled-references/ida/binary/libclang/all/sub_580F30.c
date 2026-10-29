int __fastcall sub_580F30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AEEDF0 = 0;
  qword_4AEEDF8 = 0;
  qword_4AEEE00 = 0;
  qword_4AEEDE0 = (__int64)&off_4A6E058;
  qword_4AEEDE8 = (unsigned int)qword_4AEEDE8 & 0x80000000;
  qword_4AEEE08 = 0;
  qword_4AEEE28 = 0x100000000LL;
  qword_4AEEE10 = 0;
  qword_4AEEE18 = 0;
  qword_4AEEE20 = (__int64)&qword_4AEEE30;
  qword_4AEEE38 = (__int64)&qword_4AEEE50;
  qword_4AEEE40 = 1;
  dword_4AEEE48 = 0;
  byte_4AEEE4C = 1;
  v1 = sub_259AC30(a1, &qword_4AEEE30);
  v2 = (unsigned int)qword_4AEEE28;
  v3 = (unsigned int)qword_4AEEE28 + 1LL;
  if ( HIDWORD(qword_4AEEE28) < v3 )
  {
    sub_25D6060(&qword_4AEEE30 - 2, &qword_4AEEE30, v3, 8);
    v2 = (unsigned int)qword_4AEEE28;
  }
  *(_QWORD *)(qword_4AEEE20 + 8 * v2) = v1;
  word_4AEEE68 = 0;
  xmmword_4AEEE78 = 0;
  LODWORD(qword_4AEEE28) = qword_4AEEE28 + 1;
  qword_4AEEE60 = (__int64)&off_4A64730;
  byte_4AEEE58 = 0;
  qword_4AEEDE0 = (__int64)off_4A6DFF0;
  qword_4AEEE70 = (__int64)off_49D9168;
  xmmword_4AEEE88 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8F90),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AEEDE0, "dag-dump-verbose", 16);
  qword_4AEEE08 = 58;
  BYTE2(qword_4AEEDE8) = BYTE2(qword_4AEEDE8) & 0x9F | 0x20;
  qword_4AEEE00 = (__int64)"Display more information when dumping selection DAG nodes.";
  sub_259EC40(&qword_4AEEDE0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AEEDE0, &off_47CFE00);
}

