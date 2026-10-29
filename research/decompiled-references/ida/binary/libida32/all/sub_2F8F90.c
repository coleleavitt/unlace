int sub_2F8F90()
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
  sub_1FF0F60(&unk_2CB52E0, "inline-priority-mode", &v9, &v8, v10, ptr);
  if ( ptr[0] != v12 )
    free(ptr[0]);
  __cxa_atexit(sub_1FF0E20, &unk_2CB52E0, &off_2AFC540);
  v0 = j__strlen("The cost threshold for call sites that get inlined without the cost-benefit analysis");
  qword_2CB5260 = (__int64)&unk_2CB5270;
  v1 = v0;
  qword_2CB5230 = 0;
  qword_2CB5238 = 0;
  qword_2CB5240 = 0;
  qword_2CB5220 = (__int64)&off_2C4B8B0;
  qword_2CB5228 = (unsigned int)qword_2CB5228 & 0x80000000;
  qword_2CB5268 = 0x100000000LL;
  qword_2CB5248 = 0;
  qword_2CB5250 = 0;
  qword_2CB5258 = 0;
  qword_2CB5278 = (__int64)&unk_2CB5290;
  qword_2CB5280 = 1;
  dword_2CB5288 = 0;
  byte_2CB528C = 1;
  v2 = sub_21ED2B0("The cost threshold for call sites that get inlined without the cost-benefit analysis", &unk_2CB52E0);
  v3 = (unsigned int)qword_2CB5268;
  v4 = (unsigned int)qword_2CB5268 + 1LL;
  if ( v4 > HIDWORD(qword_2CB5268) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB5270 - 16, &unk_2CB5270, v4, 8);
    v3 = (unsigned int)qword_2CB5268;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB5260 + 8 * v3) = v2;
  xmmword_2CB52C8 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  LODWORD(qword_2CB5268) = qword_2CB5268 + 1;
  qword_2CB52A0 = (__int64)off_2C47BB0;
  dword_2CB5298 = 0;
  byte_2CB52AC = 0;
  qword_2CB5220 = (__int64)off_2C4B778;
  dword_2CB52A8 = 0;
  qword_2CB52B0 = (__int64)off_2BC0BC8;
  sub_21F3510(&qword_2CB5220, "module-inliner-top-priority-threshold", 37);
  qword_2CB5248 = v1;
  dword_2CB5298 = 0;
  byte_2CB52AC = 1;
  dword_2CB52A8 = 0;
  BYTE2(qword_2CB5228) = BYTE2(qword_2CB5228) & 0x9F | 0x20;
  qword_2CB5240 = (__int64)"The cost threshold for call sites that get inlined without the cost-benefit analysis";
  sub_21F4400(&qword_2CB5220);
  return __cxa_atexit(sub_1FF0490, &qword_2CB5220, &off_2AFC540);
}

