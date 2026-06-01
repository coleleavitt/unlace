int sub_2FEB00()
{
  char v1; // [rsp+Bh] [rbp-2Dh] BYREF
  int v2; // [rsp+Ch] [rbp-2Ch] BYREF
  char *v3; // [rsp+10h] [rbp-28h] BYREF
  void *v4; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  v3 = &v1;
  v2 = 1;
  v4 = &unk_2CB7638;
  v5[0] = "enable/disable all ARC Optimizations";
  v5[1] = 36;
  sub_1FF4C10(&unk_2CB7580, "enable-objc-arc-opts", v5, &v4, &v3, &v2);
  return __cxa_atexit(sub_1FF1930, &unk_2CB7580, &off_2AFC540);
}

