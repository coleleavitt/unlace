__int64 *__fastcall sub_5869D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF2A60 = (__int64)&off_4A6E058;
  qword_4AF2A68 = (unsigned int)qword_4AF2A68 & 0x80000000;
  qword_4AF2A70 = 0;
  qword_4AF2AA8 = 0x100000000LL;
  qword_4AF2A78 = 0;
  qword_4AF2A80 = 0;
  qword_4AF2A88 = 0;
  qword_4AF2A90 = 0;
  qword_4AF2A98 = 0;
  qword_4AF2AA0 = (__int64)&qword_4AF2AB0;
  qword_4AF2AB8 = (__int64)&qword_4AF2AD0;
  qword_4AF2AC0 = 1;
  dword_4AF2AC8 = 0;
  byte_4AF2ACC = 1;
  v1 = sub_259AC30(a1, &qword_4AF2AB0);
  v2 = (unsigned int)qword_4AF2AA8;
  v3 = (unsigned int)qword_4AF2AA8 + 1LL;
  if ( HIDWORD(qword_4AF2AA8) < v3 )
  {
    sub_25D6060(&qword_4AF2AB0 - 2, &qword_4AF2AB0, v3, 8);
    v2 = (unsigned int)qword_4AF2AA8;
  }
  *(_QWORD *)(qword_4AF2AA0 + 8 * v2) = v1;
  word_4AF2AE8 = 0;
  xmmword_4AF2AF8 = 0;
  LODWORD(qword_4AF2AA8) = qword_4AF2AA8 + 1;
  qword_4AF2AE0 = (__int64)&off_4A64730;
  byte_4AF2AD8 = 0;
  qword_4AF2A60 = (__int64)off_4A6DFF0;
  qword_4AF2AF0 = (__int64)off_49D9168;
  xmmword_4AF2B08 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E9A98),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF2A60, "print-slotindexes", 17);
  qword_4AF2A80 = (__int64)"When printing machine IR, annotate instructions and blocks with SlotIndexes when available";
  word_4AF2AE8 = 257;
  byte_4AF2AD8 = 1;
  qword_4AF2A88 = 90;
  BYTE2(qword_4AF2A68) = BYTE2(qword_4AF2A68) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF2A60);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF2A60, &off_47CFE00);
  qword_4AF2A50[0] = 2;
  qword_4AF2A48 = 1;
  return &qword_4AF2A48;
}

