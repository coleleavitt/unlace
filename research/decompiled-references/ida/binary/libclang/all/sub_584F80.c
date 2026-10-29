int __fastcall sub_584F80(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF1E90 = 0;
  qword_4AF1E98 = 0;
  qword_4AF1EA0 = 0;
  qword_4AF1E80 = (__int64)&off_4A6E058;
  qword_4AF1E88 = (unsigned int)qword_4AF1E88 & 0x80000000;
  qword_4AF1EA8 = 0;
  qword_4AF1EC8 = 0x100000000LL;
  qword_4AF1EB0 = 0;
  qword_4AF1EB8 = 0;
  qword_4AF1EC0 = (__int64)&qword_4AF1ED0;
  qword_4AF1ED8 = (__int64)&qword_4AF1EF0;
  qword_4AF1EE0 = 1;
  dword_4AF1EE8 = 0;
  byte_4AF1EEC = 1;
  v1 = sub_259AC30(a1, &qword_4AF1ED0);
  v2 = (unsigned int)qword_4AF1EC8;
  v3 = (unsigned int)qword_4AF1EC8 + 1LL;
  if ( HIDWORD(qword_4AF1EC8) < v3 )
  {
    sub_25D6060(&qword_4AF1ED0 - 2, &qword_4AF1ED0, v3, 8);
    v2 = (unsigned int)qword_4AF1EC8;
  }
  *(_QWORD *)(qword_4AF1EC0 + 8 * v2) = v1;
  xmmword_4AF1F18 = 0;
  LODWORD(qword_4AF1EC8) = qword_4AF1EC8 + 1;
  qword_4AF1F00 = (__int64)&off_4A64710;
  dword_4AF1EF8 = 0;
  byte_4AF1F0C = 0;
  qword_4AF1E80 = (__int64)off_4A6DEB8;
  dword_4AF1F08 = 0;
  qword_4AF1F10 = (__int64)off_49D9228;
  xmmword_4AF1F28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E93B8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AF1E80, "dfa-instr-limit", 15);
  dword_4AF1EF8 = 0;
  byte_4AF1F0C = 1;
  dword_4AF1F08 = 0;
  qword_4AF1EA8 = 50;
  BYTE2(qword_4AF1E88) = BYTE2(qword_4AF1E88) & 0x9F | 0x20;
  qword_4AF1EA0 = (__int64)"If present, stops packetizing after N instructions";
  sub_259EC40(&qword_4AF1E80);
  return __cxa_atexit(sub_1F6C940, &qword_4AF1E80, &off_47CFE00);
}

