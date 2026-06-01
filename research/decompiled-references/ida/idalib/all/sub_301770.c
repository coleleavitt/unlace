int __fastcall sub_301770(__int64 a1, __int64 a2)
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
  qword_2CE1250 = 0;
  v24[1] = v2;
  v24[0] = "Force all edges in the function summary to cold";
  v23 = &unk_2CE1490;
  qword_2CE1240 = (__int64)&off_2C758B0;
  qword_2CE1248 = (unsigned int)qword_2CE1248 & 0x80000000;
  qword_2CE1288 = 0x100000000LL;
  qword_2CE1258 = 0;
  qword_2CE1260 = 0;
  qword_2CE1268 = 0;
  qword_2CE1270 = 0;
  qword_2CE1278 = 0;
  qword_2CE1280 = (__int64)&unk_2CE1290;
  qword_2CE1298 = (__int64)&unk_2CE12B0;
  qword_2CE12A0 = 1;
  dword_2CE12A8 = 0;
  byte_2CE12AC = 1;
  v3 = COERCE_DOUBLE(sub_2210FF0("Force all edges in the function summary to cold", a2));
  v4 = (unsigned int)qword_2CE1288;
  v5 = (unsigned int)qword_2CE1288 + 1LL;
  if ( v5 > HIDWORD(qword_2CE1288) )
  {
    v22[0] = v3;
    sub_2237220((char *)&unk_2CE1290 - 16, &unk_2CE1290, v5, 8);
    v4 = (unsigned int)qword_2CE1288;
    v3 = v22[0];
  }
  *(double *)(qword_2CE1280 + 8 * v4) = v3;
  LODWORD(qword_2CE1288) = qword_2CE1288 + 1;
  byte_2CE12CC = 0;
  qword_2CE12C0 = (__int64)off_2C71E50;
  qword_2CE12B8 = 0;
  qword_2CE1240 = (__int64)&off_2C71EC0;
  *(_QWORD *)&v22[0] = &qword_2CE1240;
  qword_2CE12E0 = (__int64)&unk_2CE12F0;
  qword_2CE12E8 = 0x800000000LL;
  xmmword_2CE12D0 = (__int128)_mm_loadh_ps(v22);
  xmmword_2CE1480 = (__int128)_mm_loadh_ps((const double *)off_2C78018);
  v6 = j__strlen("force-summary-edges-cold");
  sub_2217250(&qword_2CE1240, "force-summary-edges-cold", v6);
  BYTE2(qword_2CE1248) = BYTE2(qword_2CE1248) & 0x9F | 0x20;
  sub_2018390(&qword_2CE1240, &v23, v24, ptr);
  sub_2218140(&qword_2CE1240);
  if ( ptr[0] != v26 )
    free(ptr[0]);
  __cxa_atexit(sub_2016B20, &qword_2CE1240, &off_2B25620);
  v7 = j__strlen("File to emit dot graph of new summary into");
  v8 = j__strlen("filename");
  qword_2CE1180 = (__int64)&unk_2CE1190;
  v9 = v8;
  qword_2CE1150 = 0;
  qword_2CE1140 = (__int64)&off_2C758B0;
  qword_2CE1148 = (unsigned int)qword_2CE1148 & 0x80000000;
  qword_2CE1188 = 0x100000000LL;
  qword_2CE1158 = 0;
  qword_2CE1160 = 0;
  qword_2CE1168 = 0;
  qword_2CE1170 = 0;
  qword_2CE1178 = 0;
  qword_2CE1198 = (__int64)&unk_2CE11B0;
  qword_2CE11A0 = 1;
  dword_2CE11A8 = 0;
  byte_2CE11AC = 1;
  v10 = COERCE_DOUBLE(sub_2210FF0("filename", &qword_2CE1240));
  v11 = (unsigned int)qword_2CE1188;
  v12 = (unsigned int)qword_2CE1188 + 1LL;
  if ( v12 > HIDWORD(qword_2CE1188) )
  {
    v22[0] = v10;
    sub_2237220((char *)&unk_2CE1190 - 16, &unk_2CE1190, v12, 8);
    v11 = (unsigned int)qword_2CE1188;
    v10 = v22[0];
  }
  *(double *)(qword_2CE1180 + 8 * v11) = v10;
  qword_2CE11B8 = (__int64)&byte_2CE11C8;
  LODWORD(qword_2CE1188) = qword_2CE1188 + 1;
  *(_QWORD *)&v22[0] = &byte_2CE11F0;
  qword_2CE11C0 = 0;
  byte_2CE11C8 = 0;
  v13 = _mm_loadh_ps(v22);
  qword_2CE1140 = (__int64)off_2C757E0;
  xmmword_2CE11D8 = (__int128)v13;
  byte_2CE11F0 = 0;
  byte_2CE1200 = 0;
  xmmword_2CE1220 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CE11E8 = 0;
  qword_2CE1208 = (__int64)off_2BEAC58;
  v14 = j__strlen("module-summary-dot-file");
  sub_2217250(&qword_2CE1140, "module-summary-dot-file", v14);
  qword_2CE1178 = v9;
  qword_2CE1168 = v7;
  BYTE2(qword_2CE1148) = BYTE2(qword_2CE1148) & 0x9F | 0x20;
  qword_2CE1170 = (__int64)"filename";
  qword_2CE1160 = (__int64)"File to emit dot graph of new summary into";
  sub_2218140(&qword_2CE1140);
  __cxa_atexit(sub_1FED2E0, &qword_2CE1140, &off_2B25620);
  v15 = j__strlen("Enable MemProf support for summarizing and cloning indirect calls");
  qword_2CE10C0 = (__int64)&unk_2CE10D0;
  v16 = v15;
  qword_2CE1090 = 0;
  qword_2CE1080 = (__int64)&off_2C758B0;
  qword_2CE1088 = (unsigned int)qword_2CE1088 & 0x80000000;
  qword_2CE10C8 = 0x100000000LL;
  qword_2CE1098 = 0;
  qword_2CE10A0 = 0;
  qword_2CE10A8 = 0;
  qword_2CE10B0 = 0;
  qword_2CE10B8 = 0;
  qword_2CE10D8 = (__int64)&unk_2CE10F0;
  qword_2CE10E0 = 1;
  dword_2CE10E8 = 0;
  byte_2CE10EC = 1;
  v17 = COERCE_DOUBLE(sub_2210FF0("Enable MemProf support for summarizing and cloning indirect calls", &qword_2CE1140));
  v18 = (unsigned int)qword_2CE10C8;
  v19 = (unsigned int)qword_2CE10C8 + 1LL;
  if ( v19 > HIDWORD(qword_2CE10C8) )
  {
    v22[0] = v17;
    sub_2237220((char *)&unk_2CE10D0 - 16, &unk_2CE10D0, v19, 8);
    v18 = (unsigned int)qword_2CE10C8;
    v17 = v22[0];
  }
  *(double *)(qword_2CE10C0 + 8 * v18) = v17;
  word_2CE1108 = 0;
  xmmword_2CE1128 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CE10C8) = qword_2CE10C8 + 1;
  qword_2CE1100 = (__int64)off_2C714E8;
  byte_2CE10F8 = 0;
  qword_2CE1080 = (__int64)off_2C75848;
  qword_2CE1110 = (__int64)off_2BEAB08;
  v20 = j__strlen("enable-memprof-indirect-call-support");
  sub_2217250(&qword_2CE1080, "enable-memprof-indirect-call-support", v20);
  word_2CE1108 = 257;
  qword_2CE10A8 = v16;
  byte_2CE10F8 = 1;
  BYTE2(qword_2CE1088) = BYTE2(qword_2CE1088) & 0x9F | 0x20;
  qword_2CE10A0 = (__int64)"Enable MemProf support for summarizing and cloning indirect calls";
  sub_2218140(&qword_2CE1080);
  return __cxa_atexit(sub_200E190, &qword_2CE1080, &off_2B25620);
}
