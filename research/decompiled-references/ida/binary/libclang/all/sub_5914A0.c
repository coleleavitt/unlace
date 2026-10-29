int __fastcall sub_5914A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx

  qword_4AF7D50 = 0;
  qword_4AF7D58 = 0;
  qword_4AF7D60 = 0;
  qword_4AF7D40 = (__int64)&off_4A6E058;
  qword_4AF7D48 = (unsigned int)qword_4AF7D48 & 0x80000000;
  qword_4AF7D68 = 0;
  qword_4AF7D88 = 0x100000000LL;
  qword_4AF7D70 = 0;
  qword_4AF7D78 = 0;
  qword_4AF7D80 = (__int64)&qword_4AF7D90;
  qword_4AF7D98 = (__int64)&qword_4AF7DB0;
  qword_4AF7DA0 = 1;
  dword_4AF7DA8 = 0;
  byte_4AF7DAC = 1;
  v1 = sub_259AC30(a1, &qword_4AF7D90);
  v2 = (unsigned int)qword_4AF7D88;
  v3 = (unsigned int)qword_4AF7D88 + 1LL;
  if ( HIDWORD(qword_4AF7D88) < v3 )
  {
    sub_25D6060(&qword_4AF7D90 - 2, &qword_4AF7D90, v3, 8);
    v2 = (unsigned int)qword_4AF7D88;
  }
  *(_QWORD *)(qword_4AF7D80 + 8 * v2) = v1;
  xmmword_4AF7DD8 = 0;
  LODWORD(qword_4AF7D88) = qword_4AF7D88 + 1;
  qword_4AF7DC0 = (__int64)&off_4A692B8;
  dword_4AF7DB8 = 0;
  byte_4AF7DCC = 0;
  qword_4AF7D40 = (__int64)off_4A6DF20;
  dword_4AF7DC8 = 0;
  qword_4AF7DD0 = (__int64)off_49D91C8;
  xmmword_4AF7DE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EA318),
                                (__m128i)(unsigned __int64)nullsub_291);
  sub_259F400(&qword_4AF7D40, "stackmap-version", 16);
  dword_4AF7DB8 = 3;
  byte_4AF7DCC = 1;
  dword_4AF7DC8 = 3;
  qword_4AF7D68 = 51;
  BYTE2(qword_4AF7D48) = BYTE2(qword_4AF7D48) & 0x9F | 0x20;
  qword_4AF7D60 = (__int64)"Specify the stackmap encoding version (default = 3)";
  sub_259EC40(&qword_4AF7D40);
  return __cxa_atexit(sub_20B86E0, &qword_4AF7D40, &off_47CFE00);
}

