int sub_332E20()
{
  int v1; // [rsp+4h] [rbp-24h] BYREF
  void *v2; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v3[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = 1;
  v3[1] = j__strlen("Verify dominator info (time consuming)");
  v3[0] = "Verify dominator info (time consuming)";
  v2 = &unk_2CFD2B8;
  sub_208D180(&unk_2CFD200, "verify-dom-info", &v2, &v1, v3);
  return __cxa_atexit(sub_2015670, &unk_2CFD200, &off_2B25620);
}
