int __fastcall sub_569270(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4ADF2D0 = 0;
  qword_4ADF2D8 = 0;
  qword_4ADF2E0 = 0;
  qword_4ADF2C0 = (__int64)&off_4A6E058;
  qword_4ADF2C8 = (unsigned int)qword_4ADF2C8 & 0x80000000;
  qword_4ADF2E8 = 0;
  qword_4ADF308 = 0x100000000LL;
  qword_4ADF2F0 = 0;
  qword_4ADF2F8 = 0;
  qword_4ADF300 = (__int64)&qword_4ADF310;
  qword_4ADF318 = (__int64)&qword_4ADF330;
  qword_4ADF320 = 1;
  dword_4ADF328 = 0;
  byte_4ADF32C = 1;
  v1 = sub_259AC30(a1, &qword_4ADF310);
  v2 = (unsigned int)qword_4ADF308;
  v3 = (unsigned int)qword_4ADF308 + 1LL;
  if ( HIDWORD(qword_4ADF308) < v3 )
  {
    sub_25D6060(&qword_4ADF310 - 2, &qword_4ADF310, v3, 8);
    v2 = (unsigned int)qword_4ADF308;
  }
  *(_QWORD *)(qword_4ADF300 + 8 * v2) = v1;
  word_4ADF348 = 0;
  qword_4ADF340 = (__int64)&off_4A64730;
  xmmword_4ADF358 = 0;
  LODWORD(qword_4ADF308) = qword_4ADF308 + 1;
  qword_4ADF2C0 = (__int64)off_4A6DFF0;
  byte_4ADF338 = 0;
  qword_4ADF350 = (__int64)off_49D9168;
  xmmword_4ADF368 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBBB0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4ADF2C0, "enable-x86-scalar-amx", 21);
  word_4ADF348 = 256;
  byte_4ADF338 = 0;
  qword_4ADF2E8 = 30;
  BYTE2(qword_4ADF2C8) = BYTE2(qword_4ADF2C8) & 0x9F | 0x20;
  qword_4ADF2E0 = (__int64)"X86: enable AMX scalarizition.";
  sub_259EC40(&qword_4ADF2C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4ADF2C0, &off_47CFE00);
}

