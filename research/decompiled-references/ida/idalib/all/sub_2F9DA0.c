int sub_2F9DA0()
{
  __int64 v1; // [rsp+0h] [rbp-E8h] BYREF
  __int64 *v2; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v3[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-B8h] BYREF
  int v6; // [rsp+40h] [rbp-A8h]
  const char *v7; // [rsp+48h] [rbp-A0h]
  __int64 v8; // [rsp+50h] [rbp-98h]
  char *v9; // [rsp+58h] [rbp-90h]
  __int64 v10; // [rsp+60h] [rbp-88h]
  int v11; // [rsp+68h] [rbp-80h]
  const char *v12; // [rsp+70h] [rbp-78h]
  __int64 v13; // [rsp+78h] [rbp-70h]

  v3[0] = "Enable inliner stats for imported functions";
  v3[1] = 43;
  v5[0] = "basic";
  v7 = "basic statistics";
  v9 = "verbose";
  v12 = "printing of statistics for each inlined function";
  ptr[1] = (void *)0x400000002LL;
  ptr[0] = v5;
  v5[1] = 5;
  v6 = 1;
  v8 = 16;
  v10 = 7;
  v11 = 2;
  v13 = 48;
  v2 = &v1;
  ((void (__fastcall *)(void *, const char *, __int64 **, void **, char *, _QWORD *, __int64))sub_20139C0)(
    &unk_2CDD520,
    "inliner-function-import-stats",
    &v2,
    ptr,
    (char *)&v1 + 4,
    v3,
    0x100000000LL);
  if ( ptr[0] != v5 )
    free(ptr[0]);
  return __cxa_atexit(sub_2013880, &unk_2CDD520, &off_2B25620);
}
