int sub_3476C0()
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

  v14 = _mm_loadh_ps((const double *)off_2C4E368);
  sub_1FEBAE0(&qword_2CDF0E0, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v14);
  word_2CDF168 = 0;
  xmmword_2CDF188 = (__int128)si128;
  byte_2CDF158 = 0;
  qword_2CDF0E0 = (__int64)off_2C4B848;
  qword_2CDF160 = (__int64)off_2C474E8;
  qword_2CDF170 = (__int64)off_2BC0B68;
  v1 = j__strlen("spp-print-liveset");
  sub_21F3510(&qword_2CDF0E0, "spp-print-liveset", v1);
  word_2CDF168 = 256;
  byte_2CDF158 = 0;
  byte_2CDF0EA = byte_2CDF0EA & 0x9F | 0x20;
  sub_21F4400(&qword_2CDF0E0);
  __cxa_atexit(sub_1FEA450, &qword_2CDF0E0, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDF020, 0, 0);
  v2 = _mm_load_si128((const __m128i *)&v14);
  word_2CDF0A8 = 0;
  xmmword_2CDF0C8 = (__int128)v2;
  qword_2CDF020 = (__int64)off_2C4B848;
  byte_2CDF098 = 0;
  qword_2CDF0A0 = (__int64)off_2C474E8;
  qword_2CDF0B0 = (__int64)off_2BC0B68;
  v3 = j__strlen("spp-print-liveset-size");
  sub_21F3510(&qword_2CDF020, "spp-print-liveset-size", v3);
  word_2CDF0A8 = 256;
  byte_2CDF098 = 0;
  byte_2CDF02A = byte_2CDF02A & 0x9F | 0x20;
  sub_21F4400(&qword_2CDF020);
  __cxa_atexit(sub_1FEA450, &qword_2CDF020, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDEF60, 0, 0);
  v4 = _mm_load_si128((const __m128i *)&v14);
  word_2CDEFE8 = 0;
  xmmword_2CDF008 = (__int128)v4;
  qword_2CDEF60 = (__int64)off_2C4B848;
  byte_2CDEFD8 = 0;
  qword_2CDEFE0 = (__int64)off_2C474E8;
  qword_2CDEFF0 = (__int64)off_2BC0B68;
  v5 = j__strlen("spp-print-base-pointers");
  sub_21F3510(&qword_2CDEF60, "spp-print-base-pointers", v5);
  byte_2CDEFD8 = 0;
  word_2CDEFE8 = 256;
  byte_2CDEF6A = byte_2CDEF6A & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEF60);
  __cxa_atexit(sub_1FEA450, &qword_2CDEF60, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDEEA0, 0, 0);
  dword_2CDEF18 = 0;
  dword_2CDEF28 = 0;
  qword_2CDEF20 = (__int64)off_2C472D0;
  xmmword_2CDEF48 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  byte_2CDEF2C = 0;
  qword_2CDEEA0 = (__int64)off_2C4B710;
  qword_2CDEF30 = (__int64)off_2BC0BF8;
  v6 = j__strlen("spp-rematerialization-threshold");
  sub_21F3510(&qword_2CDEEA0, "spp-rematerialization-threshold", v6);
  dword_2CDEF18 = 6;
  byte_2CDEF2C = 1;
  dword_2CDEF28 = 6;
  byte_2CDEEAA = byte_2CDEEAA & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEEA0);
  __cxa_atexit(sub_1FC9520, &qword_2CDEEA0, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDEDE0, 0, 0);
  qword_2CDEE58 = 0;
  byte_2CDEE69 = 0;
  xmmword_2CDEE88 = (__int128)_mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CDEE60 = (__int64)off_2C474E8;
  qword_2CDEDE0 = (__int64)off_2C47D10;
  qword_2CDEE70 = (__int64)off_2BC0B68;
  v7 = j__strlen("rs4gc-clobber-non-live");
  sub_21F3510(&qword_2CDEDE0, "rs4gc-clobber-non-live", v7);
  if ( qword_2CDEE58 )
  {
    v8 = sub_2259990(&qword_2CDEDE0, "rs4gc-clobber-non-live");
    v16 = 259;
    v15 = "cl::location(x) specified more than once!";
    sub_21ED980(&qword_2CDEDE0, &v15, 0, 0, v8);
  }
  else
  {
    byte_2CDEE69 = 1;
    qword_2CDEE58 = (__int64)&byte_2CDEE98;
    byte_2CDEE68 = byte_2CDEE98;
  }
  byte_2CDEDEA = byte_2CDEDEA & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEDE0);
  __cxa_atexit(sub_1FF1930, &qword_2CDEDE0, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDED20, 0, 0);
  v9 = _mm_load_si128((const __m128i *)&v14);
  qword_2CDEDA0 = (__int64)off_2C474E8;
  xmmword_2CDEDC8 = (__int128)v9;
  qword_2CDED20 = (__int64)off_2C4B848;
  qword_2CDEDB0 = (__int64)off_2BC0B68;
  byte_2CDED98 = 0;
  word_2CDEDA8 = 0;
  v10 = j__strlen("rs4gc-allow-statepoint-with-no-deopt-info");
  sub_21F3510(&qword_2CDED20, "rs4gc-allow-statepoint-with-no-deopt-info", v10);
  word_2CDEDA8 = 257;
  byte_2CDED98 = 1;
  byte_2CDED2A = byte_2CDED2A & 0x9F | 0x20;
  sub_21F4400(&qword_2CDED20);
  __cxa_atexit(sub_1FEA450, &qword_2CDED20, &off_2AFC540);
  sub_1FEBAE0(&qword_2CDEC60, 0, 0);
  v11 = _mm_load_si128((const __m128i *)&v14);
  word_2CDECE8 = 0;
  xmmword_2CDED08 = (__int128)v11;
  qword_2CDECE0 = (__int64)off_2C474E8;
  qword_2CDEC60 = (__int64)off_2C4B848;
  qword_2CDECF0 = (__int64)off_2BC0B68;
  byte_2CDECD8 = 0;
  v12 = j__strlen("rs4gc-remat-derived-at-uses");
  sub_21F3510(&qword_2CDEC60, "rs4gc-remat-derived-at-uses", v12);
  word_2CDECE8 = 257;
  byte_2CDECD8 = 1;
  byte_2CDEC6A = byte_2CDEC6A & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEC60);
  return __cxa_atexit(sub_1FEA450, &qword_2CDEC60, &off_2AFC540);
}

