int __fastcall sub_5F51A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4B333F0 = 0;
  qword_4B333F8 = 0;
  qword_4B33400 = 0;
  qword_4B333E0 = (__int64)&off_4A6E058;
  qword_4B333E8 = (unsigned int)qword_4B333E8 & 0x80000000;
  qword_4B33408 = 0;
  qword_4B33428 = 0x100000000LL;
  qword_4B33410 = 0;
  qword_4B33418 = 0;
  qword_4B33420 = (__int64)&qword_4B33430;
  qword_4B33438 = (__int64)&qword_4B33450;
  qword_4B33440 = 1;
  dword_4B33448 = 0;
  byte_4B3344C = 1;
  v1 = sub_259AC30(a1, &qword_4B33430);
  v2 = (unsigned int)qword_4B33428;
  v3 = (unsigned int)qword_4B33428 + 1LL;
  if ( HIDWORD(qword_4B33428) < v3 )
  {
    sub_25D6060(&qword_4B33430 - 2, &qword_4B33430, v3, 8);
    v2 = (unsigned int)qword_4B33428;
  }
  *(_QWORD *)(qword_4B33420 + 8 * v2) = v1;
  xmmword_4B33478 = 0;
  LODWORD(qword_4B33428) = qword_4B33428 + 1;
  qword_4B33460 = (__int64)off_49D90F8;
  dword_4B33458 = 0;
  byte_4B3346C = 0;
  qword_4B333E0 = (__int64)off_4A6D1F8;
  dword_4B33468 = 0;
  qword_4B33470 = (__int64)off_49D9198;
  xmmword_4B33488 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F2650),
                                (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(&qword_4B333E0, "remarks-section", 15);
  qword_4B33408 = 133;
  qword_4B33400 = (__int64)"Emit a section containing remark diagnostics metadata. By default, this is enabled for the fo"
                           "llowing formats: yaml-strtab, bitstream.";
  dword_4B33458 = 0;
  byte_4B3346C = 1;
  dword_4B33468 = 0;
  BYTE2(qword_4B333E8) = BYTE2(qword_4B333E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4B333E0);
  return __cxa_atexit(sub_23D2630, &qword_4B333E0, &off_47CFE00);
}

