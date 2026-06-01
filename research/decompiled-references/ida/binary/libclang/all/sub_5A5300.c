int sub_5A5300()
{
  int v1; // [rsp+10h] [rbp-58h] BYREF
  int v2; // [rsp+14h] [rbp-54h] BYREF
  int *v3; // [rsp+18h] [rbp-50h] BYREF
  const char *v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h]

  v4 = "Debug control for aggressive anti-dep breaker";
  v3 = &v1;
  v2 = 1;
  v1 = 0;
  v5 = 45;
  sub_35441F0(qword_4B02F20, "agg-antidep-debugdiv", &v4, &v3, &v2);
  __cxa_atexit(sub_20B86E0, qword_4B02F20, &off_47CFE00);
  v4 = "Debug control for aggressive anti-dep breaker";
  v2 = 1;
  v1 = 0;
  v3 = &v1;
  v5 = 45;
  sub_35441F0(qword_4B02E60, "agg-antidep-debugmod", &v4, &v3, &v2);
  return __cxa_atexit(sub_20B86E0, qword_4B02E60, &off_47CFE00);
}

