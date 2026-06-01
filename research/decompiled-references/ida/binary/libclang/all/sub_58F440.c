int __fastcall sub_58F440(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF6E70 = 0;
  qword_4AF6E78 = 0;
  qword_4AF6E80 = 0;
  qword_4AF6E60 = (__int64)&off_4A6E058;
  qword_4AF6E68 = (unsigned int)qword_4AF6E68 & 0x80000000;
  qword_4AF6E88 = 0;
  qword_4AF6EA8 = 0x100000000LL;
  qword_4AF6E90 = 0;
  qword_4AF6E98 = 0;
  qword_4AF6EA0 = (__int64)&qword_4AF6EB0;
  qword_4AF6EB8 = (__int64)&qword_4AF6ED0;
  qword_4AF6EC0 = 1;
  dword_4AF6EC8 = 0;
  byte_4AF6ECC = 1;
  v1 = sub_259AC30(a1, &qword_4AF6EB0);
  v2 = (unsigned int)qword_4AF6EA8;
  v3 = (unsigned int)qword_4AF6EA8 + 1LL;
  if ( HIDWORD(qword_4AF6EA8) < v3 )
  {
    sub_25D6060(&qword_4AF6EB0 - 2, &qword_4AF6EB0, v3, 8);
    v2 = (unsigned int)qword_4AF6EA8;
  }
  *(_QWORD *)(qword_4AF6EA0 + 8 * v2) = v1;
  word_4AF6EE8 = 0;
  xmmword_4AF6EF8 = 0;
  LODWORD(qword_4AF6EA8) = qword_4AF6EA8 + 1;
  qword_4AF6EE0 = (__int64)&off_4A64730;
  byte_4AF6ED8 = 0;
  qword_4AF6E60 = (__int64)off_4A6DFF0;
  qword_4AF6EF0 = (__int64)off_49D9168;
  xmmword_4AF6F08 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA1D8),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4AF6E60, "print-regusage", 14);
  word_4AF6EE8 = 256;
  byte_4AF6ED8 = 0;
  qword_4AF6E88 = 52;
  BYTE2(qword_4AF6E68) = BYTE2(qword_4AF6E68) & 0x9F | 0x20;
  qword_4AF6E80 = (__int64)"print register usage details collected for analysis.";
  sub_259EC40(&qword_4AF6E60);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AF6E60, &off_47CFE00);
}

