int sub_32F700()
{
  size_t v0; // rax
  size_t v1; // rax
  size_t v2; // rax
  size_t v3; // rax
  __m128 v5; // [rsp+10h] [rbp-98h] BYREF
  void **v6; // [rsp+20h] [rbp-88h]
  int *v7; // [rsp+28h] [rbp-80h]
  __int64 *v8; // [rsp+30h] [rbp-78h]
  char **v9; // [rsp+38h] [rbp-70h]
  int v10; // [rsp+40h] [rbp-68h] BYREF
  int v11; // [rsp+44h] [rbp-64h] BYREF
  void *v12; // [rsp+48h] [rbp-60h] BYREF
  const char *v13; // [rsp+50h] [rbp-58h] BYREF
  size_t v14; // [rsp+58h] [rbp-50h]
  char *v15; // [rsp+60h] [rbp-48h] BYREF
  size_t v16; // [rsp+68h] [rbp-40h]

  v5.m128_u64[0] = (unsigned __int64)nullsub_1270;
  v5 = _mm_loadh_ps((const double *)v5.m128_u64);
  __cxa_atexit(sub_2067B00, &unk_2CD32D0, &off_2AFC540);
  __cxa_atexit(sub_2067B00, &unk_2CD32C0, &off_2AFC540);
  __cxa_atexit(sub_2067B00, &unk_2CD32B0, &off_2AFC540);
  v10 = 2;
  v12 = &unk_2CD32D0;
  v11 = 1;
  v0 = j__strlen("Enable optimization remarks from passes whose name match the given regular expression");
  v13 = "Enable optimization remarks from passes whose name match the given regular expression";
  v14 = v0;
  v1 = j__strlen("pattern");
  v15 = "pattern";
  v16 = v1;
  sub_1FEBAE0(&qword_2CD3200, 0, 0);
  xmmword_2CD32A0 = (__int128)_mm_load_si128((const __m128i *)&v5);
  qword_2CD3280 = (__int64)off_2C48118;
  qword_2CD3200 = (__int64)&off_2C48138;
  qword_2CD3288 = (__int64)off_2BC0CB8;
  v7 = &v11;
  v8 = (__int64 *)&v13;
  v9 = &v15;
  v6 = &v12;
  qword_2CD3278 = 0;
  sub_32F620((__int64)&qword_2CD3200, "pass-remarks", &v15, (__int64 *)&v13, &v11, &v12, &v10);
  sub_21F4400(&qword_2CD3200);
  __cxa_atexit(sub_2067A20, &qword_2CD3200, &off_2AFC540);
  v10 = 2;
  v12 = &unk_2CD32C0;
  v11 = 1;
  v2 = j__strlen("Enable missed optimization remarks from passes whose name match the given regular expression");
  v13 = "Enable missed optimization remarks from passes whose name match the given regular expression";
  v14 = v2;
  v16 = j__strlen("pattern");
  v15 = "pattern";
  sub_1FEBAE0(&qword_2CD3140, 0, 0);
  xmmword_2CD31E0 = (__int128)_mm_load_si128((const __m128i *)&v5);
  qword_2CD31C0 = (__int64)off_2C48118;
  qword_2CD3140 = (__int64)&off_2C48138;
  qword_2CD31C8 = (__int64)off_2BC0CB8;
  qword_2CD31B8 = 0;
  sub_32F620((__int64)&qword_2CD3140, "pass-remarks-missed", v9, v8, v7, v6, &v10);
  sub_21F4400(&qword_2CD3140);
  __cxa_atexit(sub_2067A20, &qword_2CD3140, &off_2AFC540);
  v10 = 2;
  v12 = &unk_2CD32B0;
  v11 = 1;
  v3 = j__strlen("Enable optimization analysis remarks from passes whose name match the given regular expression");
  v13 = "Enable optimization analysis remarks from passes whose name match the given regular expression";
  v14 = v3;
  v16 = j__strlen("pattern");
  v15 = "pattern";
  sub_1FEBAE0(&qword_2CD3080, 0, 0);
  xmmword_2CD3120 = (__int128)_mm_load_si128((const __m128i *)&v5);
  qword_2CD3100 = (__int64)off_2C48118;
  qword_2CD3080 = (__int64)&off_2C48138;
  qword_2CD3108 = (__int64)off_2BC0CB8;
  qword_2CD30F8 = 0;
  sub_32F620((__int64)&qword_2CD3080, "pass-remarks-analysis", v9, v8, v7, v6, &v10);
  sub_21F4400(&qword_2CD3080);
  return __cxa_atexit(sub_2067A20, &qword_2CD3080, &off_2AFC540);
}

