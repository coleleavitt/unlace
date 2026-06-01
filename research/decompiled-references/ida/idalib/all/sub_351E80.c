int sub_351E80()
{
  int v1; // [rsp+4h] [rbp-24h] BYREF
  void *v2; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v3[3]; // [rsp+10h] [rbp-18h] BYREF

  v3[0] = "Verify loop lcssa form (time consuming)";
  v2 = &unk_2D0D798;
  v1 = 1;
  v3[1] = 39;
  sub_22C8170(&unk_2D0D6E0, "verify-loop-lcssa", &v2, &v1, v3);
  return __cxa_atexit(sub_2015670, &unk_2D0D6E0, &off_2B25620);
}
