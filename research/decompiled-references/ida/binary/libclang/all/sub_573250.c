int __fastcall sub_573250(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE4090 = 0;
  qword_4AE4098 = 0;
  qword_4AE40A0 = 0;
  qword_4AE4080 = (__int64)&off_4A6E058;
  qword_4AE4088 = (unsigned int)qword_4AE4088 & 0x80000000;
  qword_4AE40A8 = 0;
  qword_4AE40C8 = 0x100000000LL;
  qword_4AE40B0 = 0;
  qword_4AE40B8 = 0;
  qword_4AE40C0 = (__int64)&qword_4AE40D0;
  qword_4AE40D8 = (__int64)&qword_4AE40F0;
  qword_4AE40E0 = 1;
  dword_4AE40E8 = 0;
  byte_4AE40EC = 1;
  v1 = sub_259AC30(a1, &qword_4AE40D0);
  v2 = (unsigned int)qword_4AE40C8;
  v3 = (unsigned int)qword_4AE40C8 + 1LL;
  if ( HIDWORD(qword_4AE40C8) < v3 )
  {
    sub_25D6060(&qword_4AE40D0 - 2, &qword_4AE40D0, v3, 8);
    v2 = (unsigned int)qword_4AE40C8;
  }
  *(_QWORD *)(qword_4AE40C0 + 8 * v2) = v1;
  word_4AE4108 = 0;
  xmmword_4AE4118 = 0;
  LODWORD(qword_4AE40C8) = qword_4AE40C8 + 1;
  qword_4AE4100 = (__int64)&off_4A64730;
  byte_4AE40F8 = 0;
  qword_4AE4080 = (__int64)off_4A6DFF0;
  qword_4AE4110 = (__int64)off_49D9168;
  xmmword_4AE4128 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8D80),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AE4080, "verify-noalias-scope-decl-dom", 29);
  word_4AE4108 = 256;
  byte_4AE40F8 = 0;
  qword_4AE40A8 = 88;
  BYTE2(qword_4AE4088) = BYTE2(qword_4AE4088) & 0x9F | 0x20;
  qword_4AE40A0 = (__int64)"Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating";
  sub_259EC40(&qword_4AE4080);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AE4080, &off_47CFE00);
}

