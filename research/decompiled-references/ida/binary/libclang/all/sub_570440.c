int __fastcall sub_570440(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE2C50 = 0;
  qword_4AE2C58 = 0;
  qword_4AE2C60 = 0;
  qword_4AE2C40 = (__int64)&off_4A6E058;
  qword_4AE2C48 = (unsigned int)qword_4AE2C48 & 0x80000000;
  qword_4AE2C68 = 0;
  qword_4AE2C88 = 0x100000000LL;
  qword_4AE2C70 = 0;
  qword_4AE2C78 = 0;
  qword_4AE2C80 = (__int64)&qword_4AE2C90;
  qword_4AE2C98 = (__int64)&qword_4AE2CB0;
  qword_4AE2CA0 = 1;
  dword_4AE2CA8 = 0;
  byte_4AE2CAC = 1;
  v1 = sub_259AC30(a1, &qword_4AE2C90);
  v2 = (unsigned int)qword_4AE2C88;
  v3 = (unsigned int)qword_4AE2C88 + 1LL;
  if ( HIDWORD(qword_4AE2C88) < v3 )
  {
    sub_25D6060(&qword_4AE2C90 - 2, &qword_4AE2C90, v3, 8);
    v2 = (unsigned int)qword_4AE2C88;
  }
  *(_QWORD *)(qword_4AE2C80 + 8 * v2) = v1;
  word_4AE2CC8 = 0;
  xmmword_4AE2CD8 = 0;
  LODWORD(qword_4AE2C88) = qword_4AE2C88 + 1;
  qword_4AE2CC0 = (__int64)&off_4A64730;
  byte_4AE2CB8 = 0;
  qword_4AE2C40 = (__int64)off_4A6DFF0;
  qword_4AE2CD0 = (__int64)off_49D9168;
  xmmword_4AE2CE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8B50),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE2C40, "disable-i2p-p2i-opt", 19);
  word_4AE2CC8 = 256;
  byte_4AE2CB8 = 0;
  qword_4AE2C60 = (__int64)"Disables inttoptr/ptrtoint roundtrip optimization";
  qword_4AE2C68 = 49;
  sub_259EC40(&qword_4AE2C40);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE2C40, &off_47CFE00);
}

