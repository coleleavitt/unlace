int __fastcall sub_569460(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADF3D0 = 0;
  qword_4ADF3D8 = 0;
  qword_4ADF3E0 = 0;
  qword_4ADF3C0 = (__int64)&off_4A6E058;
  qword_4ADF3C8 = (unsigned int)qword_4ADF3C8 & 0x80000000;
  qword_4ADF3E8 = 0;
  qword_4ADF408 = 0x100000000LL;
  qword_4ADF3F0 = 0;
  qword_4ADF3F8 = 0;
  qword_4ADF400 = (__int64)&qword_4ADF410;
  qword_4ADF418 = (__int64)&qword_4ADF430;
  qword_4ADF420 = 1;
  dword_4ADF428 = 0;
  byte_4ADF42C = 1;
  v1 = sub_259AC30(a1, &qword_4ADF410);
  v2 = (unsigned int)qword_4ADF408;
  v3 = (unsigned int)qword_4ADF408 + 1LL;
  if ( HIDWORD(qword_4ADF408) < v3 )
  {
    sub_25D6060(&qword_4ADF410 - 2, &qword_4ADF410, v3, 8);
    v2 = (unsigned int)qword_4ADF408;
  }
  *(_QWORD *)(qword_4ADF400 + 8 * v2) = v1;
  word_4ADF448 = 0;
  qword_4ADF440 = (__int64)&off_4A64730;
  xmmword_4ADF458 = 0;
  LODWORD(qword_4ADF408) = qword_4ADF408 + 1;
  qword_4ADF3C0 = (__int64)off_4A6DFF0;
  byte_4ADF438 = 0;
  qword_4ADF450 = (__int64)off_49D9168;
  xmmword_4ADF468 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBBC0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADF3C0, "fixup-byte-word-insts", 21);
  qword_4ADF3E0 = (__int64)"Change byte and word instructions to larger sizes";
  word_4ADF448 = 257;
  byte_4ADF438 = 1;
  qword_4ADF3E8 = 49;
  BYTE2(qword_4ADF3C8) = BYTE2(qword_4ADF3C8) & 0x9F | 0x20;
  sub_259EC40(&qword_4ADF3C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADF3C0, &off_47CFE00);
}

