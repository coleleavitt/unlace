int __fastcall sub_568CD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADF070 = 0;
  qword_4ADF078 = 0;
  qword_4ADF080 = 0;
  qword_4ADF060 = (__int64)&off_4A6E058;
  qword_4ADF068 = (unsigned int)qword_4ADF068 & 0x80000000;
  qword_4ADF088 = 0;
  qword_4ADF0A8 = 0x100000000LL;
  qword_4ADF090 = 0;
  qword_4ADF098 = 0;
  qword_4ADF0A0 = (__int64)&qword_4ADF0B0;
  qword_4ADF0B8 = (__int64)&qword_4ADF0D0;
  qword_4ADF0C0 = 1;
  dword_4ADF0C8 = 0;
  byte_4ADF0CC = 1;
  v1 = sub_259AC30(a1, &qword_4ADF0B0);
  v2 = (unsigned int)qword_4ADF0A8;
  v3 = (unsigned int)qword_4ADF0A8 + 1LL;
  if ( HIDWORD(qword_4ADF0A8) < v3 )
  {
    sub_25D6060(&qword_4ADF0B0 - 2, &qword_4ADF0B0, v3, 8);
    v2 = (unsigned int)qword_4ADF0A8;
  }
  *(_QWORD *)(qword_4ADF0A0 + 8 * v2) = v1;
  word_4ADF0E8 = 0;
  qword_4ADF0E0 = (__int64)&off_4A64730;
  xmmword_4ADF0F8 = 0;
  LODWORD(qword_4ADF0A8) = qword_4ADF0A8 + 1;
  qword_4ADF060 = (__int64)off_4A6DFF0;
  byte_4ADF0D8 = 0;
  qword_4ADF0F0 = (__int64)off_49D9168;
  xmmword_4ADF108 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBBA0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADF060, "disable-x86-domain-reassignment", 31);
  word_4ADF0E8 = 256;
  byte_4ADF0D8 = 0;
  qword_4ADF088 = 43;
  BYTE2(qword_4ADF068) = BYTE2(qword_4ADF068) & 0x9F | 0x20;
  qword_4ADF080 = (__int64)"X86: Disable Virtual Register Reassignment.";
  sub_259EC40(&qword_4ADF060);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADF060, &off_47CFE00);
}

