int __fastcall sub_570010(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  const char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]

  qword_4AE2AD0 = 0;
  qword_4AE2AD8 = 0;
  qword_4AE2AE0 = 0;
  qword_4AE2AC0 = (__int64)&off_4A6E058;
  qword_4AE2AC8 = (unsigned int)qword_4AE2AC8 & 0x80000000;
  qword_4AE2AE8 = 0;
  qword_4AE2B08 = 0x100000000LL;
  qword_4AE2AF0 = 0;
  qword_4AE2AF8 = 0;
  qword_4AE2B00 = (__int64)&qword_4AE2B10;
  qword_4AE2B18 = (__int64)&qword_4AE2B30;
  qword_4AE2B20 = 1;
  dword_4AE2B28 = 0;
  byte_4AE2B2C = 1;
  v1 = sub_259AC30(a1, &qword_4AE2B10);
  v2 = (unsigned int)qword_4AE2B08;
  v3 = (unsigned int)qword_4AE2B08 + 1LL;
  if ( HIDWORD(qword_4AE2B08) < v3 )
  {
    sub_25D6060(&qword_4AE2B10 - 2, &qword_4AE2B10, v3, 8);
    v2 = (unsigned int)qword_4AE2B08;
  }
  *(_QWORD *)(qword_4AE2B00 + 8 * v2) = v1;
  xmmword_4AE2B58 = 0;
  LODWORD(qword_4AE2B08) = qword_4AE2B08 + 1;
  qword_4AE2B40 = (__int64)&off_4A64730;
  qword_4AE2B38 = 0;
  byte_4AE2B49 = 0;
  qword_4AE2AC0 = (__int64)off_4A6D260;
  qword_4AE2B50 = (__int64)off_49D9168;
  xmmword_4AE2B68 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8718),
                                (__m128i)(unsigned __int64)nullsub_329);
  sub_259F400(&qword_4AE2AC0, "verify-dom-info", 15);
  if ( qword_4AE2B38 )
  {
    v6 = sub_26260E0(&qword_4AE2AC0, "verify-dom-info", v4, v5);
    v10 = 259;
    v9 = "cl::location(x) specified more than once!";
    sub_2598800(&qword_4AE2AC0, &v9, 0, 0, v6, v7);
  }
  else
  {
    byte_4AE2B49 = 1;
    qword_4AE2B38 = (__int64)&qword_4AE2B78;
    byte_4AE2B48 = qword_4AE2B78;
  }
  qword_4AE2AE8 = 38;
  BYTE2(qword_4AE2AC8) = BYTE2(qword_4AE2AC8) & 0x9F | 0x20;
  qword_4AE2AE0 = (__int64)"Verify dominator info (time consuming)";
  sub_259EC40(&qword_4AE2AC0);
  return __cxa_atexit(sub_23D25A0, &qword_4AE2AC0, &off_47CFE00);
}

