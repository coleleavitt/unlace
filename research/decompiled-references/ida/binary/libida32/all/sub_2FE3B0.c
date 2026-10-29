int __fastcall sub_2FE3B0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  double v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  size_t v6; // rax
  size_t v7; // rbx
  size_t v8; // rax
  __int64 v9; // r12
  double v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __m128 v13; // xmm0
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // r12
  double v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  size_t v20; // rax
  double v22[2]; // [rsp+8h] [rbp-100h] BYREF
  void *v23; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+50h] [rbp-B8h]
  const char *v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  const char *v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  int v32; // [rsp+78h] [rbp-90h]
  const char *v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h]
  char *v35; // [rsp+90h] [rbp-78h]
  __int64 v36; // [rsp+98h] [rbp-70h]
  int v37; // [rsp+A0h] [rbp-68h]
  const char *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]

  v26[1] = 4;
  v27 = 0;
  ptr[0] = v26;
  v26[0] = "none";
  v28 = "None.";
  v30 = "all-non-critical";
  v33 = "All non-critical edges.";
  v35 = "all";
  v38 = "All edges.";
  v29 = 5;
  v31 = 16;
  v32 = 1;
  v34 = 23;
  v36 = 3;
  v37 = 2;
  v39 = 10;
  ptr[1] = (void *)0x400000003LL;
  v2 = j__strlen("Force all edges in the function summary to cold");
  qword_2CB7330 = 0;
  v24[1] = v2;
  v24[0] = "Force all edges in the function summary to cold";
  v23 = &unk_2CB7570;
  qword_2CB7320 = (__int64)&off_2C4B8B0;
  qword_2CB7328 = (unsigned int)qword_2CB7328 & 0x80000000;
  qword_2CB7368 = 0x100000000LL;
  qword_2CB7338 = 0;
  qword_2CB7340 = 0;
  qword_2CB7348 = 0;
  qword_2CB7350 = 0;
  qword_2CB7358 = 0;
  qword_2CB7360 = (__int64)&unk_2CB7370;
  qword_2CB7378 = (__int64)&unk_2CB7390;
  qword_2CB7380 = 1;
  dword_2CB7388 = 0;
  byte_2CB738C = 1;
  v3 = COERCE_DOUBLE(sub_21ED2B0("Force all edges in the function summary to cold", a2));
  v4 = (unsigned int)qword_2CB7368;
  v5 = (unsigned int)qword_2CB7368 + 1LL;
  if ( v5 > HIDWORD(qword_2CB7368) )
  {
    v22[0] = v3;
    sub_22134E0((char *)&unk_2CB7370 - 16, &unk_2CB7370, v5, 8);
    v4 = (unsigned int)qword_2CB7368;
    v3 = v22[0];
  }
  *(double *)(qword_2CB7360 + 8 * v4) = v3;
  LODWORD(qword_2CB7368) = qword_2CB7368 + 1;
  byte_2CB73AC = 0;
  qword_2CB73A0 = (__int64)off_2C47E50;
  qword_2CB7398 = 0;
  qword_2CB7320 = (__int64)&off_2C47EC0;
  *(_QWORD *)&v22[0] = &qword_2CB7320;
  qword_2CB73C0 = (__int64)&unk_2CB73D0;
  qword_2CB73C8 = 0x800000000LL;
  xmmword_2CB73B0 = (__int128)_mm_loadh_ps(v22);
  xmmword_2CB7560 = (__int128)_mm_loadh_ps((const double *)off_2C4E018);
  v6 = j__strlen("force-summary-edges-cold");
  sub_21F3510(&qword_2CB7320, "force-summary-edges-cold", v6);
  BYTE2(qword_2CB7328) = BYTE2(qword_2CB7328) & 0x9F | 0x20;
  sub_1FF4650(&qword_2CB7320, &v23, v24, ptr);
  sub_21F4400(&qword_2CB7320);
  if ( ptr[0] != v26 )
    free(ptr[0]);
  __cxa_atexit(sub_1FF2DE0, &qword_2CB7320, &off_2AFC540);
  v7 = j__strlen("File to emit dot graph of new summary into");
  v8 = j__strlen("filename");
  qword_2CB7260 = (__int64)&unk_2CB7270;
  v9 = v8;
  qword_2CB7230 = 0;
  qword_2CB7220 = (__int64)&off_2C4B8B0;
  qword_2CB7228 = (unsigned int)qword_2CB7228 & 0x80000000;
  qword_2CB7268 = 0x100000000LL;
  qword_2CB7238 = 0;
  qword_2CB7240 = 0;
  qword_2CB7248 = 0;
  qword_2CB7250 = 0;
  qword_2CB7258 = 0;
  qword_2CB7278 = (__int64)&unk_2CB7290;
  qword_2CB7280 = 1;
  dword_2CB7288 = 0;
  byte_2CB728C = 1;
  v10 = COERCE_DOUBLE(sub_21ED2B0("filename", &qword_2CB7320));
  v11 = (unsigned int)qword_2CB7268;
  v12 = (unsigned int)qword_2CB7268 + 1LL;
  if ( v12 > HIDWORD(qword_2CB7268) )
  {
    v22[0] = v10;
    sub_22134E0((char *)&unk_2CB7270 - 16, &unk_2CB7270, v12, 8);
    v11 = (unsigned int)qword_2CB7268;
    v10 = v22[0];
  }
  *(double *)(qword_2CB7260 + 8 * v11) = v10;
  qword_2CB7298 = (__int64)&byte_2CB72A8;
  LODWORD(qword_2CB7268) = qword_2CB7268 + 1;
  *(_QWORD *)&v22[0] = &byte_2CB72D0;
  qword_2CB72A0 = 0;
  byte_2CB72A8 = 0;
  v13 = _mm_loadh_ps(v22);
  qword_2CB7220 = (__int64)off_2C4B7E0;
  xmmword_2CB72B8 = (__int128)v13;
  byte_2CB72D0 = 0;
  byte_2CB72E0 = 0;
  xmmword_2CB7300 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CB72C8 = 0;
  qword_2CB72E8 = (__int64)off_2BC0CB8;
  v14 = j__strlen("module-summary-dot-file");
  sub_21F3510(&qword_2CB7220, "module-summary-dot-file", v14);
  qword_2CB7258 = v9;
  qword_2CB7248 = v7;
  BYTE2(qword_2CB7228) = BYTE2(qword_2CB7228) & 0x9F | 0x20;
  qword_2CB7250 = (__int64)"filename";
  qword_2CB7240 = (__int64)"File to emit dot graph of new summary into";
  sub_21F4400(&qword_2CB7220);
  __cxa_atexit(sub_1FC95A0, &qword_2CB7220, &off_2AFC540);
  v15 = j__strlen("Enable MemProf support for summarizing and cloning indirect calls");
  qword_2CB71A0 = (__int64)&unk_2CB71B0;
  v16 = v15;
  qword_2CB7170 = 0;
  qword_2CB7160 = (__int64)&off_2C4B8B0;
  qword_2CB7168 = (unsigned int)qword_2CB7168 & 0x80000000;
  qword_2CB71A8 = 0x100000000LL;
  qword_2CB7178 = 0;
  qword_2CB7180 = 0;
  qword_2CB7188 = 0;
  qword_2CB7190 = 0;
  qword_2CB7198 = 0;
  qword_2CB71B8 = (__int64)&unk_2CB71D0;
  qword_2CB71C0 = 1;
  dword_2CB71C8 = 0;
  byte_2CB71CC = 1;
  v17 = COERCE_DOUBLE(sub_21ED2B0("Enable MemProf support for summarizing and cloning indirect calls", &qword_2CB7220));
  v18 = (unsigned int)qword_2CB71A8;
  v19 = (unsigned int)qword_2CB71A8 + 1LL;
  if ( v19 > HIDWORD(qword_2CB71A8) )
  {
    v22[0] = v17;
    sub_22134E0((char *)&unk_2CB71B0 - 16, &unk_2CB71B0, v19, 8);
    v18 = (unsigned int)qword_2CB71A8;
    v17 = v22[0];
  }
  *(double *)(qword_2CB71A0 + 8 * v18) = v17;
  word_2CB71E8 = 0;
  xmmword_2CB7208 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB71A8) = qword_2CB71A8 + 1;
  qword_2CB71E0 = (__int64)off_2C474E8;
  byte_2CB71D8 = 0;
  qword_2CB7160 = (__int64)off_2C4B848;
  qword_2CB71F0 = (__int64)off_2BC0B68;
  v20 = j__strlen("enable-memprof-indirect-call-support");
  sub_21F3510(&qword_2CB7160, "enable-memprof-indirect-call-support", v20);
  word_2CB71E8 = 257;
  qword_2CB7188 = v16;
  byte_2CB71D8 = 1;
  BYTE2(qword_2CB7168) = BYTE2(qword_2CB7168) & 0x9F | 0x20;
  qword_2CB7180 = (__int64)"Enable MemProf support for summarizing and cloning indirect calls";
  sub_21F4400(&qword_2CB7160);
  return __cxa_atexit(sub_1FEA450, &qword_2CB7160, &off_2AFC540);
}

