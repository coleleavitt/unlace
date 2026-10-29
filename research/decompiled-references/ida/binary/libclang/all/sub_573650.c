int sub_573650()
{
  int v1; // [rsp+20h] [rbp-68h] BYREF
  int v2; // [rsp+24h] [rbp-64h] BYREF
  __int64 *v3; // [rsp+28h] [rbp-60h] BYREF
  char *v4; // [rsp+30h] [rbp-58h] BYREF
  __int64 v5; // [rsp+38h] [rbp-50h]
  const char *v6; // [rsp+40h] [rbp-48h] BYREF
  __int64 v7; // [rsp+48h] [rbp-40h]

  __cxa_atexit(sub_2564010, &qword_4AE43B0, &off_47CFE00);
  __cxa_atexit(sub_2564010, &qword_4AE43A0, &off_47CFE00);
  __cxa_atexit(sub_2564010, &qword_4AE4390, &off_47CFE00);
  v3 = &qword_4AE43B0;
  v2 = 2;
  v4 = "pattern";
  v6 = "Enable optimization remarks from passes whose name match the given regular expression";
  v1 = 1;
  v7 = 85;
  v5 = 7;
  sub_573440((__int64)qword_4AE42E0, "pass-remarks", &v4, (__int64 *)&v6, &v1, &v3, &v2);
  __cxa_atexit(sub_2563A40, qword_4AE42E0, &off_47CFE00);
  v6 = "Enable missed optimization remarks from passes whose name match the given regular expression";
  v3 = &qword_4AE43A0;
  v4 = "pattern";
  v2 = 2;
  v1 = 1;
  v7 = 92;
  v5 = 7;
  sub_573440((__int64)qword_4AE4220, "pass-remarks-missed", &v4, (__int64 *)&v6, &v1, &v3, &v2);
  __cxa_atexit(sub_2563A40, qword_4AE4220, &off_47CFE00);
  v4 = "pattern";
  v6 = "Enable optimization analysis remarks from passes whose name match the given regular expression";
  v2 = 2;
  v3 = &qword_4AE4390;
  v1 = 1;
  v7 = 94;
  v5 = 7;
  sub_573440((__int64)qword_4AE4160, "pass-remarks-analysis", &v4, (__int64 *)&v6, &v1, &v3, &v2);
  return __cxa_atexit(sub_2563A40, qword_4AE4160, &off_47CFE00);
}

