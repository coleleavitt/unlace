int __fastcall sub_5A3DC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdi

  qword_4B02110 = 0;
  qword_4B02118 = 0;
  qword_4B02120 = 0;
  qword_4B02100 = (__int64)&off_4A6E058;
  qword_4B02108 = (unsigned int)qword_4B02108 & 0x80000000;
  qword_4B02128 = 0;
  qword_4B02148 = 0x100000000LL;
  qword_4B02130 = 0;
  qword_4B02138 = 0;
  qword_4B02140 = (__int64)&qword_4B02150;
  qword_4B02158 = (__int64)&qword_4B02170;
  qword_4B02160 = 1;
  dword_4B02168 = 0;
  byte_4B0216C = 1;
  v1 = sub_259AC30(a1, &qword_4B02150);
  v2 = (unsigned int)qword_4B02148;
  v3 = (unsigned int)qword_4B02148 + 1LL;
  if ( HIDWORD(qword_4B02148) < v3 )
  {
    sub_25D6060(&qword_4B02150 - 2, &qword_4B02150, v3, 8);
    v2 = (unsigned int)qword_4B02148;
  }
  *(_QWORD *)(qword_4B02140 + 8 * v2) = v1;
  word_4B02188 = 0;
  xmmword_4B02198 = 0;
  LODWORD(qword_4B02148) = qword_4B02148 + 1;
  qword_4B02180 = (__int64)&off_4A64730;
  byte_4B02178 = 0;
  qword_4B02100 = (__int64)off_4A6DFF0;
  qword_4B02190 = (__int64)off_49D9168;
  xmmword_4B021A8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB5A0),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B02100, "rafast-ignore-missing-defs", 26);
  BYTE2(qword_4B02108) = BYTE2(qword_4B02108) & 0x9F | 0x20;
  sub_259EC40(&qword_4B02100);
  __cxa_atexit(sub_1F6C9D0, &qword_4B02100, &off_47CFE00);
  qword_4B020D8 = (__int64)"fast register allocator";
  qword_4B020C8 = (__int64)"fast";
  v4 = qword_4AF5B80[2];
  qword_4B020D0 = 4;
  qword_4B020E0 = 23;
  qword_4B020E8 = (__int64)sub_34EDB20;
  qword_4B020C0 = qword_4AF5B80[0];
  qword_4AF5B80[0] = (__int64)&qword_4B020C0;
  if ( v4 )
    (*(void (__fastcall **)(__int64, char *, __int64, __int64 (__fastcall *)(), const char *, __int64))(*(_QWORD *)v4 + 24LL))(
      v4,
      "fast",
      4,
      sub_34EDB20,
      "fast register allocator",
      23);
  return __cxa_atexit(sub_31E9AF0, &qword_4B020C0, &off_47CFE00);
}

