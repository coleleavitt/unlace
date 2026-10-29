int __fastcall sub_5975F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AFB850 = 0;
  qword_4AFB858 = 0;
  qword_4AFB860 = 0;
  qword_4AFB840 = (__int64)&off_4A6E058;
  qword_4AFB848 = (unsigned int)qword_4AFB848 & 0x80000000;
  qword_4AFB868 = 0;
  qword_4AFB888 = 0x100000000LL;
  qword_4AFB870 = 0;
  qword_4AFB878 = 0;
  qword_4AFB880 = (__int64)&qword_4AFB890;
  qword_4AFB898 = (__int64)&qword_4AFB8B0;
  qword_4AFB8A0 = 1;
  dword_4AFB8A8 = 0;
  byte_4AFB8AC = 1;
  v1 = sub_259AC30(a1, &qword_4AFB890);
  v2 = (unsigned int)qword_4AFB888;
  v3 = (unsigned int)qword_4AFB888 + 1LL;
  if ( HIDWORD(qword_4AFB888) < v3 )
  {
    sub_25D6060(&qword_4AFB890 - 2, &qword_4AFB890, v3, 8);
    v2 = (unsigned int)qword_4AFB888;
  }
  *(_QWORD *)(qword_4AFB880 + 8 * v2) = v1;
  xmmword_4AFB8D8 = 0;
  LODWORD(qword_4AFB888) = qword_4AFB888 + 1;
  qword_4AFB8C0 = (__int64)&off_4A64710;
  dword_4AFB8B8 = 0;
  byte_4AFB8CC = 0;
  qword_4AFB840 = (__int64)off_4A6DEB8;
  dword_4AFB8C8 = 0;
  qword_4AFB8D0 = (__int64)off_49D9228;
  xmmword_4AFB8E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB058),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AFB840, "huge-size-for-split", 19);
  qword_4AFB868 = 90;
  dword_4AFB8B8 = 5000;
  byte_4AFB8CC = 1;
  dword_4AFB8C8 = 5000;
  BYTE2(qword_4AFB848) = BYTE2(qword_4AFB848) & 0x9F | 0x20;
  qword_4AFB860 = (__int64)"A threshold of live range size which may cause high compile time cost in global splitting.";
  sub_259EC40(&qword_4AFB840);
  return __cxa_atexit(sub_1F6C940, &qword_4AFB840, &off_47CFE00);
}

