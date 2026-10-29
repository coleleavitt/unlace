int sub_2FC350()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-F0h]
  int v7; // [rsp+10h] [rbp-E8h] BYREF
  int v8; // [rsp+14h] [rbp-E4h] BYREF
  int *v9; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-A8h]
  const char *v14; // [rsp+58h] [rbp-A0h]
  __int64 v15; // [rsp+60h] [rbp-98h]
  char *v16; // [rsp+68h] [rbp-90h]
  __int64 v17; // [rsp+70h] [rbp-88h]
  int v18; // [rsp+78h] [rbp-80h]
  const char *v19; // [rsp+80h] [rbp-78h]
  __int64 v20; // [rsp+88h] [rbp-70h]
  const char *v21; // [rsp+90h] [rbp-68h]
  __int64 v22; // [rsp+98h] [rbp-60h]
  int v23; // [rsp+A0h] [rbp-58h]
  const char *v24; // [rsp+A8h] [rbp-50h]
  __int64 v25; // [rsp+B0h] [rbp-48h]
  const char *v26; // [rsp+B8h] [rbp-40h]
  __int64 v27; // [rsp+C0h] [rbp-38h]
  int v28; // [rsp+C8h] [rbp-30h]
  const char *v29; // [rsp+D0h] [rbp-28h]
  __int64 v30; // [rsp+D8h] [rbp-20h]

  v12[0] = "size";
  v14 = "Use callee size priority.";
  v16 = "cost";
  v19 = "Use inline cost priority.";
  v21 = "cost-benefit";
  v24 = "Use cost-benefit ratio.";
  v26 = "ml";
  v29 = "Use ML.";
  ptr[0] = v12;
  v12[1] = 4;
  v13 = 0;
  v15 = 25;
  v17 = 4;
  v18 = 1;
  v20 = 25;
  v22 = 12;
  v23 = 2;
  v25 = 23;
  v27 = 2;
  v28 = 3;
  v30 = 7;
  ptr[1] = (void *)0x400000004LL;
  v10[0] = "Choose the priority mode to use in module inline";
  v10[1] = j__strlen("Choose the priority mode to use in module inline");
  v8 = 1;
  v7 = 0;
  v9 = &v7;
  sub_2014CA0(&unk_2CDF200, "inline-priority-mode", &v9, &v8, v10, ptr);
  if ( ptr[0] != v12 )
    free(ptr[0]);
  __cxa_atexit(sub_2014B60, &unk_2CDF200, &off_2B25620);
  v0 = j__strlen("The cost threshold for call sites that get inlined without the cost-benefit analysis");
  qword_2CDF180 = (__int64)&unk_2CDF190;
  v1 = v0;
  qword_2CDF150 = 0;
  qword_2CDF158 = 0;
  qword_2CDF160 = 0;
  qword_2CDF140 = (__int64)&off_2C758B0;
  qword_2CDF148 = (unsigned int)qword_2CDF148 & 0x80000000;
  qword_2CDF188 = 0x100000000LL;
  qword_2CDF168 = 0;
  qword_2CDF170 = 0;
  qword_2CDF178 = 0;
  qword_2CDF198 = (__int64)&unk_2CDF1B0;
  qword_2CDF1A0 = 1;
  dword_2CDF1A8 = 0;
  byte_2CDF1AC = 1;
  v2 = sub_2210FF0("The cost threshold for call sites that get inlined without the cost-benefit analysis", &unk_2CDF200);
  v3 = (unsigned int)qword_2CDF188;
  v4 = (unsigned int)qword_2CDF188 + 1LL;
  if ( v4 > HIDWORD(qword_2CDF188) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CDF190 - 16, &unk_2CDF190, v4, 8);
    v3 = (unsigned int)qword_2CDF188;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDF180 + 8 * v3) = v2;
  xmmword_2CDF1E8 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  LODWORD(qword_2CDF188) = qword_2CDF188 + 1;
  qword_2CDF1C0 = (__int64)off_2C71BB0;
  dword_2CDF1B8 = 0;
  byte_2CDF1CC = 0;
  qword_2CDF140 = (__int64)off_2C75778;
  dword_2CDF1C8 = 0;
  qword_2CDF1D0 = (__int64)off_2BEAB68;
  sub_2217250(&qword_2CDF140, "module-inliner-top-priority-threshold", 37);
  qword_2CDF168 = v1;
  dword_2CDF1B8 = 0;
  byte_2CDF1CC = 1;
  dword_2CDF1C8 = 0;
  BYTE2(qword_2CDF148) = BYTE2(qword_2CDF148) & 0x9F | 0x20;
  qword_2CDF160 = (__int64)"The cost threshold for call sites that get inlined without the cost-benefit analysis";
  sub_2218140(&qword_2CDF140);
  return __cxa_atexit(sub_20141D0, &qword_2CDF140, &off_2B25620);
}
