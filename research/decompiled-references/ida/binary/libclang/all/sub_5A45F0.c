int __fastcall sub_5A45F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B02490 = 0;
  qword_4B02498 = 0;
  qword_4B024A0 = 0;
  qword_4B02480 = (__int64)&off_4A6E058;
  qword_4B02488 = (unsigned int)qword_4B02488 & 0x80000000;
  qword_4B024A8 = 0;
  qword_4B024C8 = 0x100000000LL;
  qword_4B024B0 = 0;
  qword_4B024B8 = 0;
  qword_4B024C0 = (__int64)&qword_4B024D0;
  qword_4B024D8 = (__int64)&qword_4B024F0;
  qword_4B024E0 = 1;
  dword_4B024E8 = 0;
  byte_4B024EC = 1;
  v1 = sub_259AC30(a1, &qword_4B024D0);
  v2 = (unsigned int)qword_4B024C8;
  v3 = (unsigned int)qword_4B024C8 + 1LL;
  if ( HIDWORD(qword_4B024C8) < v3 )
  {
    sub_25D6060(&qword_4B024D0 - 2, &qword_4B024D0, v3, 8);
    v2 = (unsigned int)qword_4B024C8;
  }
  *(_QWORD *)(qword_4B024C0 + 8 * v2) = v1;
  word_4B02508 = 0;
  xmmword_4B02518 = 0;
  LODWORD(qword_4B024C8) = qword_4B024C8 + 1;
  qword_4B02500 = (__int64)&off_4A64730;
  byte_4B024F8 = 0;
  qword_4B02480 = (__int64)off_4A6DFF0;
  qword_4B02510 = (__int64)off_49D9168;
  xmmword_4B02528 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB680),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B02480, "enable-patchpoint-liveness", 26);
  word_4B02508 = 257;
  byte_4B024F8 = 1;
  qword_4B024A8 = 40;
  BYTE2(qword_4B02488) = BYTE2(qword_4B02488) & 0x9F | 0x20;
  qword_4B024A0 = (__int64)"Enable PatchPoint Liveness Analysis Pass";
  sub_259EC40(&qword_4B02480);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B02480, &off_47CFE00);
}

