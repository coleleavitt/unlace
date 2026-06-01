int sub_301EC0()
{
  char v1; // [rsp+Bh] [rbp-2Dh] BYREF
  int v2; // [rsp+Ch] [rbp-2Ch] BYREF
  char *v3; // [rsp+10h] [rbp-28h] BYREF
  void *v4; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  v3 = &v1;
  v2 = 1;
  v4 = &unk_2CE1558;
  v5[0] = "enable/disable all ARC Optimizations";
  v5[1] = 36;
  sub_2018950(&unk_2CE14A0, "enable-objc-arc-opts", v5, &v4, &v3, &v2);
  return __cxa_atexit(sub_2015670, &unk_2CE14A0, &off_2B25620);
}
