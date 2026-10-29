int sub_347E30()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("LoopVersioningLICM's minimum allowed percentage of possible invariant instructions per loop");
  qword_2D07A30 = 0;
  v1 = v0;
  qword_2D07A38 = 0;
  qword_2D07A40 = 0;
  qword_2D07A20 = (__int64)&off_2C758B0;
  qword_2D07A28 = (unsigned int)qword_2D07A28 & 0x80000000;
  qword_2D07A68 = 0x100000000LL;
  qword_2D07A48 = 0;
  qword_2D07A50 = 0;
  qword_2D07A58 = 0;
  qword_2D07A60 = (__int64)&unk_2D07A70;
  qword_2D07A78 = (__int64)&unk_2D07A90;
  qword_2D07A80 = 1;
  dword_2D07A88 = 0;
  byte_2D07A8C = 1;
  v2 = sub_2210FF0("LoopVersioningLICM's minimum allowed percentage of possible invariant instructions per loop");
  v3 = (unsigned int)qword_2D07A68;
  v4 = (unsigned int)qword_2D07A68 + 1LL;
  if ( v4 > HIDWORD(qword_2D07A68) )
  {
    v11 = v2;
    sub_2237220((char *)&unk_2D07A70 - 16, &unk_2D07A70, v4, 8);
    v3 = (unsigned int)qword_2D07A68;
    v2 = v11;
  }
  *(_QWORD *)(qword_2D07A60 + 8 * v3) = v2;
  xmmword_2D07AC8 = (__int128)_mm_loadh_ps((const double *)off_2C780C0);
  LODWORD(qword_2D07A68) = qword_2D07A68 + 1;
  qword_2D07AA0 = (__int64)off_2C719C8;
  dword_2D07A98 = 0;
  byte_2D07AAC = 0;
  qword_2D07A20 = (__int64)off_2C719E8;
  dword_2D07AA8 = 0;
  qword_2D07AB0 = (__int64)off_2BEAC28;
  sub_2217250(&qword_2D07A20, "licm-versioning-invariant-threshold", 35);
  qword_2D07A40 = (__int64)"LoopVersioningLICM's minimum allowed percentage of possible invariant instructions per loop";
  dword_2D07A98 = 1103626240;
  dword_2D07AA8 = 1103626240;
  qword_2D07A48 = v1;
  BYTE2(qword_2D07A28) = BYTE2(qword_2D07A28) & 0x9F | 0x20;
  byte_2D07AAC = 1;
  sub_2218140(&qword_2D07A20);
  __cxa_atexit(sub_2012C10, &qword_2D07A20, &off_2B25620);
  v5 = j__strlen("LoopVersioningLICM's threshold for maximum allowed loop nest/depth");
  byte_2D079CC = 1;
  qword_2D07970 = 0;
  v6 = v5;
  qword_2D07960 = (__int64)&off_2C758B0;
  qword_2D07968 = (unsigned int)qword_2D07968 & 0x80000000;
  qword_2D079A8 = 0x100000000LL;
  qword_2D07978 = 0;
  qword_2D07980 = 0;
  qword_2D07988 = 0;
  qword_2D07990 = 0;
  qword_2D07998 = 0;
  qword_2D079A0 = (__int64)&unk_2D079B0;
  qword_2D079B8 = (__int64)&unk_2D079D0;
  qword_2D079C0 = 1;
  dword_2D079C8 = 0;
  v7 = sub_2210FF0("LoopVersioningLICM's threshold for maximum allowed loop nest/depth");
  v8 = (unsigned int)qword_2D079A8;
  v9 = (unsigned int)qword_2D079A8 + 1LL;
  if ( v9 > HIDWORD(qword_2D079A8) )
  {
    v12 = v7;
    sub_2237220((char *)&unk_2D079B0 - 16, &unk_2D079B0, v9, 8);
    v8 = (unsigned int)qword_2D079A8;
    v7 = v12;
  }
  *(_QWORD *)(qword_2D079A0 + 8 * v8) = v7;
  xmmword_2D07A08 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D079A8) = qword_2D079A8 + 1;
  qword_2D079E0 = (__int64)off_2C712D0;
  dword_2D079D8 = 0;
  byte_2D079EC = 0;
  qword_2D07960 = (__int64)off_2C75710;
  dword_2D079E8 = 0;
  qword_2D079F0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D07960, "licm-versioning-max-depth-threshold", 35);
  qword_2D07988 = v6;
  qword_2D07980 = (__int64)"LoopVersioningLICM's threshold for maximum allowed loop nest/depth";
  dword_2D079D8 = 2;
  byte_2D079EC = 1;
  dword_2D079E8 = 2;
  BYTE2(qword_2D07968) = BYTE2(qword_2D07968) & 0x9F | 0x20;
  sub_2218140(&qword_2D07960);
  return __cxa_atexit(sub_1FED260, &qword_2D07960, &off_2B25620);
}
