int __fastcall sub_592280(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF8450 = 0;
  qword_4AF8458 = 0;
  qword_4AF8460 = 0;
  qword_4AF8440 = (__int64)&off_4A6E058;
  qword_4AF8448 = (unsigned int)qword_4AF8448 & 0x80000000;
  qword_4AF8468 = 0;
  qword_4AF8488 = 0x100000000LL;
  qword_4AF8470 = 0;
  qword_4AF8478 = 0;
  qword_4AF8480 = (__int64)&qword_4AF8490;
  qword_4AF8498 = (__int64)&qword_4AF84B0;
  qword_4AF84A0 = 1;
  dword_4AF84A8 = 0;
  byte_4AF84AC = 1;
  v1 = sub_259AC30(a1, &qword_4AF8490);
  v2 = (unsigned int)qword_4AF8488;
  v3 = (unsigned int)qword_4AF8488 + 1LL;
  if ( HIDWORD(qword_4AF8488) < v3 )
  {
    sub_25D6060(&qword_4AF8490 - 2, &qword_4AF8490, v3, 8);
    v2 = (unsigned int)qword_4AF8488;
  }
  *(_QWORD *)(qword_4AF8480 + 8 * v2) = v1;
  word_4AF84C8 = 0;
  xmmword_4AF84D8 = 0;
  LODWORD(qword_4AF8488) = qword_4AF8488 + 1;
  qword_4AF84C0 = (__int64)&off_4A64730;
  byte_4AF84B8 = 0;
  qword_4AF8440 = (__int64)off_4A6DFF0;
  qword_4AF84D0 = (__int64)off_49D9168;
  xmmword_4AF84E8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA8E8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF8440, "disable-sched-hazard", 20);
  word_4AF84C8 = 256;
  byte_4AF84B8 = 0;
  qword_4AF8468 = 48;
  BYTE2(qword_4AF8448) = BYTE2(qword_4AF8448) & 0x9F | 0x20;
  qword_4AF8460 = (__int64)"Disable hazard detection during preRA scheduling";
  sub_259EC40(&qword_4AF8440);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF8440, &off_47CFE00);
}

