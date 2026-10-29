int __fastcall sub_58F9D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF7130 = 0;
  qword_4AF7138 = 0;
  qword_4AF7140 = 0;
  qword_4AF7120 = (__int64)&off_4A6E058;
  qword_4AF7128 = (unsigned int)qword_4AF7128 & 0x80000000;
  qword_4AF7148 = 0;
  qword_4AF7168 = 0x100000000LL;
  qword_4AF7150 = 0;
  qword_4AF7158 = 0;
  qword_4AF7160 = (__int64)&qword_4AF7170;
  qword_4AF7178 = (__int64)&qword_4AF7190;
  qword_4AF7180 = 1;
  dword_4AF7188 = 0;
  byte_4AF718C = 1;
  v1 = sub_259AC30(a1, &qword_4AF7170);
  v2 = (unsigned int)qword_4AF7168;
  v3 = (unsigned int)qword_4AF7168 + 1LL;
  if ( HIDWORD(qword_4AF7168) < v3 )
  {
    sub_25D6060(&qword_4AF7170 - 2, &qword_4AF7170, v3, 8);
    v2 = (unsigned int)qword_4AF7168;
  }
  *(_QWORD *)(qword_4AF7160 + 8 * v2) = v1;
  word_4AF71A8 = 0;
  xmmword_4AF71B8 = 0;
  LODWORD(qword_4AF7168) = qword_4AF7168 + 1;
  qword_4AF71A0 = (__int64)&off_4A64730;
  byte_4AF7198 = 0;
  qword_4AF7120 = (__int64)off_4A6DFF0;
  qword_4AF71B0 = (__int64)off_49D9168;
  xmmword_4AF71C8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA248),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF7120, "safe-stack-layout", 17);
  qword_4AF7140 = (__int64)"enable safe stack layout";
  word_4AF71A8 = 257;
  byte_4AF7198 = 1;
  qword_4AF7148 = 24;
  BYTE2(qword_4AF7128) = BYTE2(qword_4AF7128) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF7120);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF7120, &off_47CFE00);
}

