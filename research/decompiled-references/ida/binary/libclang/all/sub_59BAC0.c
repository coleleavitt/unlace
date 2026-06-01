int __fastcall sub_59BAC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx

  qword_4AFDAC0 = (__int64)&off_4A6E058;
  qword_4AFDAC8 = (unsigned int)qword_4AFDAC8 & 0x80000000;
  qword_4AFDAD0 = 0;
  qword_4AFDAD8 = 0;
  qword_4AFDAE0 = 0;
  qword_4AFDAE8 = 0;
  qword_4AFDAF0 = 0;
  qword_4AFDAF8 = 0;
  qword_4AFDB00 = (__int64)&qword_4AFDB10;
  qword_4AFDB08 = 0x100000000LL;
  qword_4AFDB18 = (__int64)&qword_4AFDB30;
  qword_4AFDB20 = 1;
  dword_4AFDB28 = 0;
  byte_4AFDB2C = 1;
  v1 = sub_259AC30(a1, &qword_4AFDB10);
  v2 = (unsigned int)qword_4AFDB08;
  v3 = (unsigned int)qword_4AFDB08 + 1LL;
  if ( HIDWORD(qword_4AFDB08) < v3 )
  {
    sub_25D6060(&qword_4AFDB10 - 2, &qword_4AFDB10, v3, 8);
    v2 = (unsigned int)qword_4AFDB08;
  }
  *(_QWORD *)(qword_4AFDB00 + 8 * v2) = v1;
  xmmword_4AFDB58 = 0;
  LODWORD(qword_4AFDB08) = qword_4AFDB08 + 1;
  qword_4AFDB40 = (__int64)&off_4A692B8;
  dword_4AFDB38 = 0;
  byte_4AFDB4C = 0;
  qword_4AFDAC0 = (__int64)off_4A6DF20;
  dword_4AFDB48 = 0;
  qword_4AFDB50 = (__int64)off_49D91C8;
  xmmword_4AFDB68 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB1B0),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AFDAC0, "imp-null-check-page-size", 24);
  qword_4AFDAE8 = 36;
  qword_4AFDAE0 = (__int64)"The page size of the target in bytes";
  dword_4AFDB38 = 4096;
  byte_4AFDB4C = 1;
  dword_4AFDB48 = 4096;
  BYTE2(qword_4AFDAC8) = BYTE2(qword_4AFDAC8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFDAC0);
  __cxa_atexit(sub_20B86E0, &qword_4AFDAC0, &off_47CFE00);
  qword_4AFDA60 = 1;
  qword_4AFDA00 = (__int64)&off_4A6E058;
  qword_4AFDA08 = (unsigned int)qword_4AFDA08 & 0x80000000;
  qword_4AFDA40 = (__int64)&qword_4AFDA50;
  qword_4AFDA10 = 0;
  qword_4AFDA18 = 0;
  qword_4AFDA20 = 0;
  qword_4AFDA28 = 0;
  qword_4AFDA30 = 0;
  qword_4AFDA38 = 0;
  qword_4AFDA48 = 0x100000000LL;
  qword_4AFDA58 = (__int64)&qword_4AFDA70;
  dword_4AFDA68 = 0;
  byte_4AFDA6C = 1;
  v4 = sub_259AC30(sub_20B86E0, &qword_4AFDA50);
  v5 = (unsigned int)qword_4AFDA48;
  v6 = (unsigned int)qword_4AFDA48 + 1LL;
  if ( HIDWORD(qword_4AFDA48) < v6 )
  {
    sub_25D6060(&qword_4AFDA50 - 2, &qword_4AFDA50, v6, 8);
    v5 = (unsigned int)qword_4AFDA48;
  }
  *(_QWORD *)(qword_4AFDA40 + 8 * v5) = v4;
  xmmword_4AFDA98 = 0;
  LODWORD(qword_4AFDA48) = qword_4AFDA48 + 1;
  qword_4AFDA80 = (__int64)&off_4A64710;
  dword_4AFDA78 = 0;
  byte_4AFDA8C = 0;
  qword_4AFDA00 = (__int64)off_4A6DEB8;
  dword_4AFDA88 = 0;
  qword_4AFDA90 = (__int64)off_49D9228;
  xmmword_4AFDAA8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB1B8),
                                (__m128i)(unsigned __int64)nullsub_267);
  sub_259F400(&qword_4AFDA00, "imp-null-max-insts-to-consider", 30);
  qword_4AFDA28 = 108;
  qword_4AFDA20 = (__int64)"The max number of instructions to consider hoisting loads over (the algorithm is quadratic over this number)";
  dword_4AFDA78 = 8;
  byte_4AFDA8C = 1;
  dword_4AFDA88 = 8;
  BYTE2(qword_4AFDA08) = BYTE2(qword_4AFDA08) & 0x9F | 0x20;
  sub_259EC40(&qword_4AFDA00);
  return __cxa_atexit(sub_1F6C940, &qword_4AFDA00, &off_47CFE00);
}

