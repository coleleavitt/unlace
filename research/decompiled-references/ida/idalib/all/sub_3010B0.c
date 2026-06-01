int __fastcall sub_3010B0(__int64 a1, __int64 a2)
{
  size_t v2; // r12
  size_t v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __m128 v8; // xmm0
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  size_t v16; // rax
  size_t v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  size_t v22; // rax
  __int64 v23; // rax
  char *v25; // [rsp+8h] [rbp-60h] BYREF
  void *v26[2]; // [rsp+10h] [rbp-58h] BYREF
  _WORD v27[36]; // [rsp+20h] [rbp-48h] BYREF

  v2 = j__strlen("file name for generated dot file");
  v3 = j__strlen("file name for generated dot file");
  qword_2CE0F90 = 0;
  v4 = v3;
  qword_2CE0F98 = 0;
  qword_2CE0FA0 = 0;
  qword_2CE0F80 = (__int64)&off_2C758B0;
  qword_2CE0F88 = (unsigned int)qword_2CE0F88 & 0x80000000;
  qword_2CE0FC8 = 0x100000000LL;
  qword_2CE0FA8 = 0;
  qword_2CE0FB0 = 0;
  qword_2CE0FB8 = 0;
  qword_2CE0FC0 = (__int64)&unk_2CE0FD0;
  qword_2CE0FD8 = (__int64)&unk_2CE0FF0;
  qword_2CE0FE0 = 1;
  dword_2CE0FE8 = 0;
  byte_2CE0FEC = 1;
  v5 = sub_2210FF0("file name for generated dot file", a2);
  v6 = (unsigned int)qword_2CE0FC8;
  v7 = (unsigned int)qword_2CE0FC8 + 1LL;
  if ( v7 > HIDWORD(qword_2CE0FC8) )
  {
    v25 = (char *)v5;
    sub_2237220((char *)&unk_2CE0FD0 - 16, &unk_2CE0FD0, v7, 8);
    v6 = (unsigned int)qword_2CE0FC8;
    v5 = (__int64)v25;
  }
  *(_QWORD *)(qword_2CE0FC0 + 8 * v6) = v5;
  qword_2CE0FF8 = (__int64)&byte_2CE1008;
  LODWORD(qword_2CE0FC8) = qword_2CE0FC8 + 1;
  v25 = &byte_2CE1030;
  qword_2CE1000 = 0;
  byte_2CE1008 = 0;
  v8 = _mm_loadh_ps((const double *)&v25);
  qword_2CE0F80 = (__int64)off_2C757E0;
  xmmword_2CE1018 = (__int128)v8;
  byte_2CE1030 = 0;
  byte_2CE1040 = 0;
  xmmword_2CE1060 = (__int128)_mm_loadh_ps((const double *)off_2C77938);
  qword_2CE1028 = 0;
  qword_2CE1048 = (__int64)off_2BEAC58;
  v9 = j__strlen("dot-cfg-mssa");
  sub_2217250(&qword_2CE0F80, "dot-cfg-mssa", v9);
  qword_2CE0FA8 = v2;
  qword_2CE0FB0 = (__int64)"file name for generated dot file";
  qword_2CE0FB8 = v4;
  qword_2CE0FA0 = (__int64)"file name for generated dot file";
  v26[0] = v27;
  v10 = j__strlen(&byte_22F0C30);
  sub_2016600(v26, &byte_22F0C30, &byte_22F0C30 + v10);
  sub_9EE8A0(&qword_2CE0FF8, v26);
  byte_2CE1040 = 1;
  sub_9EE8A0((char *)&xmmword_2CE1018 + 8, v26);
  if ( v26[0] != v27 )
    operator delete(v26[0]);
  sub_2218140(&qword_2CE0F80);
  __cxa_atexit(sub_1FED2E0, &qword_2CE0F80, &off_2B25620);
  v11 = j__strlen("The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)");
  qword_2CE0F00 = (__int64)&unk_2CE0F10;
  v12 = v11;
  qword_2CE0ED0 = 0;
  qword_2CE0EC0 = (__int64)&off_2C758B0;
  qword_2CE0EC8 = (unsigned int)qword_2CE0EC8 & 0x80000000;
  qword_2CE0F08 = 0x100000000LL;
  qword_2CE0ED8 = 0;
  qword_2CE0EE0 = 0;
  qword_2CE0EE8 = 0;
  qword_2CE0EF0 = 0;
  qword_2CE0EF8 = 0;
  qword_2CE0F18 = (__int64)&unk_2CE0F30;
  qword_2CE0F20 = 1;
  dword_2CE0F28 = 0;
  byte_2CE0F2C = 1;
  v13 = sub_2210FF0(
          "The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)",
          &qword_2CE0F80);
  v14 = (unsigned int)qword_2CE0F08;
  v15 = (unsigned int)qword_2CE0F08 + 1LL;
  if ( v15 > HIDWORD(qword_2CE0F08) )
  {
    v25 = (char *)v13;
    sub_2237220((char *)&unk_2CE0F10 - 16, &unk_2CE0F10, v15, 8);
    v14 = (unsigned int)qword_2CE0F08;
    v13 = (__int64)v25;
  }
  *(_QWORD *)(qword_2CE0F00 + 8 * v14) = v13;
  xmmword_2CE0F68 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2CE0F08) = qword_2CE0F08 + 1;
  qword_2CE0F40 = (__int64)off_2C712D0;
  dword_2CE0F38 = 0;
  byte_2CE0F4C = 0;
  qword_2CE0EC0 = (__int64)off_2C75710;
  dword_2CE0F48 = 0;
  qword_2CE0F50 = (__int64)off_2BEAB98;
  v16 = j__strlen("memssa-check-limit");
  sub_2217250(&qword_2CE0EC0, "memssa-check-limit", v16);
  qword_2CE0EE8 = v12;
  dword_2CE0F38 = 100;
  byte_2CE0F4C = 1;
  dword_2CE0F48 = 100;
  BYTE2(qword_2CE0EC8) = BYTE2(qword_2CE0EC8) & 0x9F | 0x20;
  qword_2CE0EE0 = (__int64)"The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)";
  sub_2218140(&qword_2CE0EC0);
  __cxa_atexit(sub_1FED260, &qword_2CE0EC0, &off_2B25620);
  v17 = j__strlen("Enable verification of MemorySSA.");
  byte_2CE0E6C = 1;
  qword_2CE0E10 = 0;
  v18 = v17;
  qword_2CE0E00 = (__int64)&off_2C758B0;
  qword_2CE0E08 = (unsigned int)qword_2CE0E08 & 0x80000000;
  qword_2CE0E48 = 0x100000000LL;
  qword_2CE0E18 = 0;
  qword_2CE0E20 = 0;
  qword_2CE0E28 = 0;
  qword_2CE0E30 = 0;
  qword_2CE0E38 = 0;
  qword_2CE0E40 = (__int64)&unk_2CE0E50;
  qword_2CE0E58 = (__int64)&unk_2CE0E70;
  qword_2CE0E60 = 1;
  dword_2CE0E68 = 0;
  v19 = sub_2210FF0("Enable verification of MemorySSA.", &qword_2CE0EC0);
  v20 = (unsigned int)qword_2CE0E48;
  v21 = (unsigned int)qword_2CE0E48 + 1LL;
  if ( v21 > HIDWORD(qword_2CE0E48) )
  {
    v25 = (char *)v19;
    sub_2237220((char *)&unk_2CE0E50 - 16, &unk_2CE0E50, v21, 8);
    v20 = (unsigned int)qword_2CE0E48;
    v19 = (__int64)v25;
  }
  *(_QWORD *)(qword_2CE0E40 + 8 * v20) = v19;
  LODWORD(qword_2CE0E48) = qword_2CE0E48 + 1;
  xmmword_2CE0EA8 = (__int128)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2CE0E80 = (__int64)off_2C714E8;
  qword_2CE0E78 = 0;
  byte_2CE0E89 = 0;
  qword_2CE0E00 = (__int64)off_2C71D10;
  qword_2CE0E90 = (__int64)off_2BEAB08;
  v22 = j__strlen("verify-memoryssa");
  sub_2217250(&qword_2CE0E00, "verify-memoryssa", v22);
  if ( qword_2CE0E78 )
  {
    v23 = sub_227D6D0();
    v27[8] = 259;
    v26[0] = "cl::location(x) specified more than once!";
    sub_22116C0(&qword_2CE0E00, v26, 0, 0, v23);
  }
  else
  {
    byte_2CE0E89 = 1;
    qword_2CE0E78 = (__int64)byte_2CE0EB8;
    byte_2CE0E88 = byte_2CE0EB8[0];
  }
  qword_2CE0E28 = v18;
  BYTE2(qword_2CE0E08) = BYTE2(qword_2CE0E08) & 0x9F | 0x20;
  qword_2CE0E20 = (__int64)"Enable verification of MemorySSA.";
  sub_2218140(&qword_2CE0E00);
  return __cxa_atexit(sub_2015670, &qword_2CE0E00, &off_2B25620);
}
