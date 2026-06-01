int sub_34AA80()
{
  __m128i si128; // xmm1
  size_t v1; // rax
  __m128i v2; // xmm1
  size_t v3; // rax
  __m128i v4; // xmm1
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm2
  size_t v10; // rax
  __m128i v11; // xmm2
  size_t v12; // rax
  __m128 v14; // [rsp+0h] [rbp-78h] BYREF
  const char *v15; // [rsp+10h] [rbp-68h] BYREF
  __int16 v16; // [rsp+30h] [rbp-48h]

  v14 = _mm_loadh_ps((const double *)off_2C78368);
  sub_200F820(&qword_2D09000, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v14);
  word_2D09088 = 0;
  xmmword_2D090A8 = (__int128)si128;
  byte_2D09078 = 0;
  qword_2D09000 = (__int64)off_2C75848;
  qword_2D09080 = (__int64)off_2C714E8;
  qword_2D09090 = (__int64)off_2BEAB08;
  v1 = j__strlen("spp-print-liveset");
  sub_2217250(&qword_2D09000, "spp-print-liveset", v1);
  word_2D09088 = 256;
  byte_2D09078 = 0;
  byte_2D0900A = byte_2D0900A & 0x9F | 0x20;
  sub_2218140(&qword_2D09000);
  __cxa_atexit(sub_200E190, &qword_2D09000, &off_2B25620);
  sub_200F820(&qword_2D08F40, 0, 0);
  v2 = _mm_load_si128((const __m128i *)&v14);
  word_2D08FC8 = 0;
  xmmword_2D08FE8 = (__int128)v2;
  qword_2D08F40 = (__int64)off_2C75848;
  byte_2D08FB8 = 0;
  qword_2D08FC0 = (__int64)off_2C714E8;
  qword_2D08FD0 = (__int64)off_2BEAB08;
  v3 = j__strlen("spp-print-liveset-size");
  sub_2217250(&qword_2D08F40, "spp-print-liveset-size", v3);
  word_2D08FC8 = 256;
  byte_2D08FB8 = 0;
  byte_2D08F4A = byte_2D08F4A & 0x9F | 0x20;
  sub_2218140(&qword_2D08F40);
  __cxa_atexit(sub_200E190, &qword_2D08F40, &off_2B25620);
  sub_200F820(&qword_2D08E80, 0, 0);
  v4 = _mm_load_si128((const __m128i *)&v14);
  word_2D08F08 = 0;
  xmmword_2D08F28 = (__int128)v4;
  qword_2D08E80 = (__int64)off_2C75848;
  byte_2D08EF8 = 0;
  qword_2D08F00 = (__int64)off_2C714E8;
  qword_2D08F10 = (__int64)off_2BEAB08;
  v5 = j__strlen("spp-print-base-pointers");
  sub_2217250(&qword_2D08E80, "spp-print-base-pointers", v5);
  byte_2D08EF8 = 0;
  word_2D08F08 = 256;
  byte_2D08E8A = byte_2D08E8A & 0x9F | 0x20;
  sub_2218140(&qword_2D08E80);
  __cxa_atexit(sub_200E190, &qword_2D08E80, &off_2B25620);
  sub_200F820(&qword_2D08DC0, 0, 0);
  dword_2D08E38 = 0;
  dword_2D08E48 = 0;
  qword_2D08E40 = (__int64)off_2C712D0;
  xmmword_2D08E68 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  byte_2D08E4C = 0;
  qword_2D08DC0 = (__int64)off_2C75710;
  qword_2D08E50 = (__int64)off_2BEAB98;
  v6 = j__strlen("spp-rematerialization-threshold");
  sub_2217250(&qword_2D08DC0, "spp-rematerialization-threshold", v6);
  dword_2D08E38 = 6;
  byte_2D08E4C = 1;
  dword_2D08E48 = 6;
  byte_2D08DCA = byte_2D08DCA & 0x9F | 0x20;
  sub_2218140(&qword_2D08DC0);
  __cxa_atexit(sub_1FED260, &qword_2D08DC0, &off_2B25620);
  sub_200F820(&qword_2D08D00, 0, 0);
  qword_2D08D78 = 0;
  byte_2D08D89 = 0;
  xmmword_2D08DA8 = (__int128)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2D08D80 = (__int64)off_2C714E8;
  qword_2D08D00 = (__int64)off_2C71D10;
  qword_2D08D90 = (__int64)off_2BEAB08;
  v7 = j__strlen("rs4gc-clobber-non-live");
  sub_2217250(&qword_2D08D00, "rs4gc-clobber-non-live", v7);
  if ( qword_2D08D78 )
  {
    v8 = sub_227D6D0(&qword_2D08D00, "rs4gc-clobber-non-live");
    v16 = 259;
    v15 = "cl::location(x) specified more than once!";
    sub_22116C0(&qword_2D08D00, &v15, 0, 0, v8);
  }
  else
  {
    byte_2D08D89 = 1;
    qword_2D08D78 = (__int64)&byte_2D08DB8;
    byte_2D08D88 = byte_2D08DB8;
  }
  byte_2D08D0A = byte_2D08D0A & 0x9F | 0x20;
  sub_2218140(&qword_2D08D00);
  __cxa_atexit(sub_2015670, &qword_2D08D00, &off_2B25620);
  sub_200F820(&qword_2D08C40, 0, 0);
  v9 = _mm_load_si128((const __m128i *)&v14);
  qword_2D08CC0 = (__int64)off_2C714E8;
  xmmword_2D08CE8 = (__int128)v9;
  qword_2D08C40 = (__int64)off_2C75848;
  qword_2D08CD0 = (__int64)off_2BEAB08;
  byte_2D08CB8 = 0;
  word_2D08CC8 = 0;
  v10 = j__strlen("rs4gc-allow-statepoint-with-no-deopt-info");
  sub_2217250(&qword_2D08C40, "rs4gc-allow-statepoint-with-no-deopt-info", v10);
  word_2D08CC8 = 257;
  byte_2D08CB8 = 1;
  byte_2D08C4A = byte_2D08C4A & 0x9F | 0x20;
  sub_2218140(&qword_2D08C40);
  __cxa_atexit(sub_200E190, &qword_2D08C40, &off_2B25620);
  sub_200F820(&qword_2D08B80, 0, 0);
  v11 = _mm_load_si128((const __m128i *)&v14);
  word_2D08C08 = 0;
  xmmword_2D08C28 = (__int128)v11;
  qword_2D08C00 = (__int64)off_2C714E8;
  qword_2D08B80 = (__int64)off_2C75848;
  qword_2D08C10 = (__int64)off_2BEAB08;
  byte_2D08BF8 = 0;
  v12 = j__strlen("rs4gc-remat-derived-at-uses");
  sub_2217250(&qword_2D08B80, "rs4gc-remat-derived-at-uses", v12);
  word_2D08C08 = 257;
  byte_2D08BF8 = 1;
  byte_2D08B8A = byte_2D08B8A & 0x9F | 0x20;
  sub_2218140(&qword_2D08B80);
  return __cxa_atexit(sub_200E190, &qword_2D08B80, &off_2B25620);
}
