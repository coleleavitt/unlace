int sub_332AC0()
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

  v5.m128_u64[0] = (unsigned __int64)nullsub_1291;
  v5 = _mm_loadh_ps((const double *)v5.m128_u64);
  __cxa_atexit(sub_208B840, &unk_2CFD1F0, &off_2B25620);
  __cxa_atexit(sub_208B840, &unk_2CFD1E0, &off_2B25620);
  __cxa_atexit(sub_208B840, &unk_2CFD1D0, &off_2B25620);
  v10 = 2;
  v12 = &unk_2CFD1F0;
  v11 = 1;
  v0 = j__strlen("Enable optimization remarks from passes whose name match the given regular expression");
  v13 = "Enable optimization remarks from passes whose name match the given regular expression";
  v14 = v0;
  v1 = j__strlen("pattern");
  v15 = "pattern";
  v16 = v1;
  sub_200F820(&qword_2CFD120, 0, 0);
  xmmword_2CFD1C0 = (__int128)_mm_load_si128((const __m128i *)&v5);
  qword_2CFD1A0 = (__int64)off_2C72118;
  qword_2CFD120 = (__int64)&off_2C72138;
  qword_2CFD1A8 = (__int64)off_2BEAC58;
  v7 = &v11;
  v8 = (__int64 *)&v13;
  v9 = &v15;
  v6 = &v12;
  qword_2CFD198 = 0;
  sub_3329E0((__int64)&qword_2CFD120, "pass-remarks", &v15, (__int64 *)&v13, &v11, &v12, &v10);
  sub_2218140(&qword_2CFD120);
  __cxa_atexit(sub_208B760, &qword_2CFD120, &off_2B25620);
  v10 = 2;
  v12 = &unk_2CFD1E0;
  v11 = 1;
  v2 = j__strlen("Enable missed optimization remarks from passes whose name match the given regular expression");
  v13 = "Enable missed optimization remarks from passes whose name match the given regular expression";
  v14 = v2;
  v16 = j__strlen("pattern");
  v15 = "pattern";
  sub_200F820(&qword_2CFD060, 0, 0);
  xmmword_2CFD100 = (__int128)_mm_load_si128((const __m128i *)&v5);
  qword_2CFD0E0 = (__int64)off_2C72118;
  qword_2CFD060 = (__int64)&off_2C72138;
  qword_2CFD0E8 = (__int64)off_2BEAC58;
  qword_2CFD0D8 = 0;
  sub_3329E0((__int64)&qword_2CFD060, "pass-remarks-missed", v9, v8, v7, v6, &v10);
  sub_2218140(&qword_2CFD060);
  __cxa_atexit(sub_208B760, &qword_2CFD060, &off_2B25620);
  v10 = 2;
  v12 = &unk_2CFD1D0;
  v11 = 1;
  v3 = j__strlen("Enable optimization analysis remarks from passes whose name match the given regular expression");
  v13 = "Enable optimization analysis remarks from passes whose name match the given regular expression";
  v14 = v3;
  v16 = j__strlen("pattern");
  v15 = "pattern";
  sub_200F820(&qword_2CFCFA0, 0, 0);
  xmmword_2CFD040 = (__int128)_mm_load_si128((const __m128i *)&v5);
  qword_2CFD020 = (__int64)off_2C72118;
  qword_2CFCFA0 = (__int64)&off_2C72138;
  qword_2CFD028 = (__int64)off_2BEAC58;
  qword_2CFD018 = 0;
  sub_3329E0((__int64)&qword_2CFCFA0, "pass-remarks-analysis", v9, v8, v7, v6, &v10);
  sub_2218140(&qword_2CFCFA0);
  return __cxa_atexit(sub_208B760, &qword_2CFCFA0, &off_2B25620);
}
