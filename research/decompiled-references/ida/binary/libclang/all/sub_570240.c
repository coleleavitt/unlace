int __fastcall sub_570240(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AE2B90 = 0;
  qword_4AE2B98 = 0;
  qword_4AE2BA0 = 0;
  qword_4AE2B80 = (__int64)&off_4A6E058;
  qword_4AE2B88 = (unsigned int)qword_4AE2B88 & 0x80000000;
  qword_4AE2BA8 = 0;
  qword_4AE2BC8 = 0x100000000LL;
  qword_4AE2BB0 = 0;
  qword_4AE2BB8 = 0;
  qword_4AE2BC0 = (__int64)&qword_4AE2BD0;
  qword_4AE2BD8 = (__int64)&qword_4AE2BF0;
  qword_4AE2BE0 = 1;
  dword_4AE2BE8 = 0;
  byte_4AE2BEC = 1;
  v1 = sub_259AC30(a1, &qword_4AE2BD0);
  v2 = (unsigned int)qword_4AE2BC8;
  v3 = (unsigned int)qword_4AE2BC8 + 1LL;
  if ( HIDWORD(qword_4AE2BC8) < v3 )
  {
    sub_25D6060(&qword_4AE2BD0 - 2, &qword_4AE2BD0, v3, 8);
    v2 = (unsigned int)qword_4AE2BC8;
  }
  *(_QWORD *)(qword_4AE2BC0 + 8 * v2) = v1;
  xmmword_4AE2C18 = 0;
  LODWORD(qword_4AE2BC8) = qword_4AE2BC8 + 1;
  qword_4AE2C00 = (__int64)&off_4A692B8;
  dword_4AE2BF8 = 0;
  byte_4AE2C0C = 0;
  qword_4AE2B80 = (__int64)off_4A6DF20;
  dword_4AE2C08 = 0;
  qword_4AE2C10 = (__int64)off_49D91C8;
  xmmword_4AE2C28 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8720),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AE2B80, "non-global-value-max-name-size", 30);
  dword_4AE2BF8 = 1024;
  byte_4AE2C0C = 1;
  dword_4AE2C08 = 1024;
  qword_4AE2BA8 = 47;
  BYTE2(qword_4AE2B88) = BYTE2(qword_4AE2B88) & 0x9F | 0x20;
  qword_4AE2BA0 = (__int64)"Maximum size for the name of non-global values.";
  sub_259EC40(&qword_4AE2B80);
  return __cxa_atexit(sub_20B86E0, &qword_4AE2B80, &off_47CFE00);
}

