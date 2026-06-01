int __fastcall sub_597AB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AFBC00 = (__int64)&off_4A6E058;
  qword_4AFBC08 = (unsigned int)qword_4AFBC08 & 0x80000000;
  qword_4AFBC10 = 0;
  qword_4AFBC18 = 0;
  qword_4AFBC20 = 0;
  qword_4AFBC28 = 0;
  qword_4AFBC30 = 0;
  qword_4AFBC38 = 0;
  qword_4AFBC40 = (__int64)&qword_4AFBC50;
  qword_4AFBC48 = 0x100000000LL;
  qword_4AFBC58 = (__int64)&qword_4AFBC70;
  qword_4AFBC60 = 1;
  dword_4AFBC68 = 0;
  byte_4AFBC6C = 1;
  v1 = sub_259AC30(a1, &qword_4AFBC50);
  v2 = (unsigned int)qword_4AFBC48;
  v3 = (unsigned int)qword_4AFBC48 + 1LL;
  if ( HIDWORD(qword_4AFBC48) < v3 )
  {
    sub_25D6060(&qword_4AFBC50 - 2, &qword_4AFBC50, v3, 8);
    v2 = (unsigned int)qword_4AFBC48;
  }
  *(_QWORD *)(qword_4AFBC40 + 8 * v2) = v1;
  word_4AFBC88 = 0;
  xmmword_4AFBC98 = 0;
  LODWORD(qword_4AFBC48) = qword_4AFBC48 + 1;
  qword_4AFBC80 = (__int64)&off_4A64730;
  byte_4AFBC78 = 0;
  qword_4AFBC00 = (__int64)off_4A6DFF0;
  qword_4AFBC90 = (__int64)off_49D9168;
  xmmword_4AFBCA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB070),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AFBC00, "twoaddr-reschedule", 18);
  qword_4AFBC20 = (__int64)"Coalesce copies by rescheduling (default=true)";
  word_4AFBC88 = 257;
  byte_4AFBC78 = 1;
  qword_4AFBC28 = 46;
  BYTE2(qword_4AFBC08) = BYTE2(qword_4AFBC08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFBC00);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFBC00, &off_47CFE00);
  qword_4AFBBA0 = 1;
  qword_4AFBB40 = (__int64)&off_4A6E058;
  qword_4AFBB48 = (unsigned int)qword_4AFBB48 & 0x80000000;
  qword_4AFBB80 = (__int64)&qword_4AFBB90;
  qword_4AFBB50 = 0;
  qword_4AFBB58 = 0;
  qword_4AFBB60 = 0;
  qword_4AFBB68 = 0;
  qword_4AFBB70 = 0;
  qword_4AFBB78 = 0;
  qword_4AFBB88 = 0x100000000LL;
  qword_4AFBB98 = (__int64)&qword_4AFBBB0;
  dword_4AFBBA8 = 0;
  byte_4AFBBAC = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AFBB90);
  v5 = (unsigned int)qword_4AFBB88;
  v6 = (unsigned int)qword_4AFBB88 + 1LL;
  if ( HIDWORD(qword_4AFBB88) < v6 )
  {
    sub_25D6060(&qword_4AFBB90 - 2, &qword_4AFBB90, v6, 8);
    v5 = (unsigned int)qword_4AFBB88;
  }
  *(_QWORD *)(qword_4AFBB80 + 8 * v5) = v4;
  xmmword_4AFBBD8 = 0;
  LODWORD(qword_4AFBB88) = qword_4AFBB88 + 1;
  qword_4AFBBC0 = (__int64)&off_4A64710;
  dword_4AFBBB8 = 0;
  byte_4AFBBCC = 0;
  qword_4AFBB40 = (__int64)off_4A6DEB8;
  dword_4AFBBC8 = 0;
  qword_4AFBBD0 = (__int64)off_49D9228;
  xmmword_4AFBBE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB078),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AFBB40, "dataflow-edge-limit", 19);
  dword_4AFBBB8 = 3;
  byte_4AFBBCC = 1;
  dword_4AFBBC8 = 3;
  qword_4AFBB68 = 94;
  BYTE2(qword_4AFBB48) = BYTE2(qword_4AFBB48) & 0x9F | 0x20;
  qword_4AFBB60 = (__int64)"Maximum number of dataflow edges to traverse when evaluating the benefit of commuting operands";
  sub_259EC40(&qword_4AFBB40);
  return __cxa_atexit(sub_1F6C940, &qword_4AFBB40, &off_47CFE00);
}

