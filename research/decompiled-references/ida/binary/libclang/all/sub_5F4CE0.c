int sub_5F4CE0()
{
  char v1; // [rsp+3h] [rbp-55h] BYREF
  int v2; // [rsp+4h] [rbp-54h] BYREF
  char *v3; // [rsp+8h] [rbp-50h] BYREF
  const char *v4; // [rsp+10h] [rbp-48h] BYREF
  __int64 v5; // [rsp+18h] [rbp-40h]

  v4 = "Import full type definitions for ThinLTO.";
  v3 = &v1;
  v5 = 41;
  v2 = 1;
  v1 = 0;
  sub_39745D0(qword_4B331A0, "import-full-type-definitions", &v3, &v2, &v4);
  __cxa_atexit(sub_1F6C9D0, qword_4B331A0, &off_47CFE00);
  v3 = &v1;
  v4 = "Force disable the lazy-loading on-demand of metadata when loading bitcode for importing.";
  v5 = 88;
  v2 = 1;
  v1 = 0;
  sub_39745D0(qword_4B330E0, "disable-ondemand-mds-loading", &v3, &v2, &v4);
  return __cxa_atexit(sub_1F6C9D0, qword_4B330E0, &off_47CFE00);
}

