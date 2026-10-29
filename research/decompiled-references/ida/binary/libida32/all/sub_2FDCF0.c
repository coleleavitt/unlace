int __fastcall sub_2FDCF0(__int64 a1, __int64 a2)
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
  qword_2CB7070 = 0;
  v4 = v3;
  qword_2CB7078 = 0;
  qword_2CB7080 = 0;
  qword_2CB7060 = (__int64)&off_2C4B8B0;
  qword_2CB7068 = (unsigned int)qword_2CB7068 & 0x80000000;
  qword_2CB70A8 = 0x100000000LL;
  qword_2CB7088 = 0;
  qword_2CB7090 = 0;
  qword_2CB7098 = 0;
  qword_2CB70A0 = (__int64)&unk_2CB70B0;
  qword_2CB70B8 = (__int64)&unk_2CB70D0;
  qword_2CB70C0 = 1;
  dword_2CB70C8 = 0;
  byte_2CB70CC = 1;
  v5 = sub_21ED2B0("file name for generated dot file", a2);
  v6 = (unsigned int)qword_2CB70A8;
  v7 = (unsigned int)qword_2CB70A8 + 1LL;
  if ( v7 > HIDWORD(qword_2CB70A8) )
  {
    v25 = (char *)v5;
    sub_22134E0((char *)&unk_2CB70B0 - 16, &unk_2CB70B0, v7, 8);
    v6 = (unsigned int)qword_2CB70A8;
    v5 = (__int64)v25;
  }
  *(_QWORD *)(qword_2CB70A0 + 8 * v6) = v5;
  qword_2CB70D8 = (__int64)&byte_2CB70E8;
  LODWORD(qword_2CB70A8) = qword_2CB70A8 + 1;
  v25 = &byte_2CB7110;
  qword_2CB70E0 = 0;
  byte_2CB70E8 = 0;
  v8 = _mm_loadh_ps((const double *)&v25);
  qword_2CB7060 = (__int64)off_2C4B7E0;
  xmmword_2CB70F8 = (__int128)v8;
  byte_2CB7110 = 0;
  byte_2CB7120 = 0;
  xmmword_2CB7140 = (__int128)_mm_loadh_ps((const double *)off_2C4D938);
  qword_2CB7108 = 0;
  qword_2CB7128 = (__int64)off_2BC0CB8;
  v9 = j__strlen("dot-cfg-mssa");
  sub_21F3510(&qword_2CB7060, "dot-cfg-mssa", v9);
  qword_2CB7088 = v2;
  qword_2CB7090 = (__int64)"file name for generated dot file";
  qword_2CB7098 = v4;
  qword_2CB7080 = (__int64)"file name for generated dot file";
  v26[0] = v27;
  v10 = j__strlen(&byte_22CD811);
  sub_1FF28C0(v26, &byte_22CD811, &byte_22CD811 + v10);
  sub_9CAB60(&qword_2CB70D8, v26);
  byte_2CB7120 = 1;
  sub_9CAB60((char *)&xmmword_2CB70F8 + 8, v26);
  if ( v26[0] != v27 )
    operator delete(v26[0]);
  sub_21F4400(&qword_2CB7060);
  __cxa_atexit(sub_1FC95A0, &qword_2CB7060, &off_2AFC540);
  v11 = j__strlen("The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)");
  qword_2CB6FE0 = (__int64)&unk_2CB6FF0;
  v12 = v11;
  qword_2CB6FB0 = 0;
  qword_2CB6FA0 = (__int64)&off_2C4B8B0;
  qword_2CB6FA8 = (unsigned int)qword_2CB6FA8 & 0x80000000;
  qword_2CB6FE8 = 0x100000000LL;
  qword_2CB6FB8 = 0;
  qword_2CB6FC0 = 0;
  qword_2CB6FC8 = 0;
  qword_2CB6FD0 = 0;
  qword_2CB6FD8 = 0;
  qword_2CB6FF8 = (__int64)&unk_2CB7010;
  qword_2CB7000 = 1;
  dword_2CB7008 = 0;
  byte_2CB700C = 1;
  v13 = sub_21ED2B0(
          "The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)",
          &qword_2CB7060);
  v14 = (unsigned int)qword_2CB6FE8;
  v15 = (unsigned int)qword_2CB6FE8 + 1LL;
  if ( v15 > HIDWORD(qword_2CB6FE8) )
  {
    v25 = (char *)v13;
    sub_22134E0((char *)&unk_2CB6FF0 - 16, &unk_2CB6FF0, v15, 8);
    v14 = (unsigned int)qword_2CB6FE8;
    v13 = (__int64)v25;
  }
  *(_QWORD *)(qword_2CB6FE0 + 8 * v14) = v13;
  xmmword_2CB7048 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CB6FE8) = qword_2CB6FE8 + 1;
  qword_2CB7020 = (__int64)off_2C472D0;
  dword_2CB7018 = 0;
  byte_2CB702C = 0;
  qword_2CB6FA0 = (__int64)off_2C4B710;
  dword_2CB7028 = 0;
  qword_2CB7030 = (__int64)off_2BC0BF8;
  v16 = j__strlen("memssa-check-limit");
  sub_21F3510(&qword_2CB6FA0, "memssa-check-limit", v16);
  qword_2CB6FC8 = v12;
  dword_2CB7018 = 100;
  byte_2CB702C = 1;
  dword_2CB7028 = 100;
  BYTE2(qword_2CB6FA8) = BYTE2(qword_2CB6FA8) & 0x9F | 0x20;
  qword_2CB6FC0 = (__int64)"The maximum number of stores/phis MemorySSAwill consider trying to walk past (default = 100)";
  sub_21F4400(&qword_2CB6FA0);
  __cxa_atexit(sub_1FC9520, &qword_2CB6FA0, &off_2AFC540);
  v17 = j__strlen("Enable verification of MemorySSA.");
  byte_2CB6F4C = 1;
  qword_2CB6EF0 = 0;
  v18 = v17;
  qword_2CB6EE0 = (__int64)&off_2C4B8B0;
  qword_2CB6EE8 = (unsigned int)qword_2CB6EE8 & 0x80000000;
  qword_2CB6F28 = 0x100000000LL;
  qword_2CB6EF8 = 0;
  qword_2CB6F00 = 0;
  qword_2CB6F08 = 0;
  qword_2CB6F10 = 0;
  qword_2CB6F18 = 0;
  qword_2CB6F20 = (__int64)&unk_2CB6F30;
  qword_2CB6F38 = (__int64)&unk_2CB6F50;
  qword_2CB6F40 = 1;
  dword_2CB6F48 = 0;
  v19 = sub_21ED2B0("Enable verification of MemorySSA.", &qword_2CB6FA0);
  v20 = (unsigned int)qword_2CB6F28;
  v21 = (unsigned int)qword_2CB6F28 + 1LL;
  if ( v21 > HIDWORD(qword_2CB6F28) )
  {
    v25 = (char *)v19;
    sub_22134E0((char *)&unk_2CB6F30 - 16, &unk_2CB6F30, v21, 8);
    v20 = (unsigned int)qword_2CB6F28;
    v19 = (__int64)v25;
  }
  *(_QWORD *)(qword_2CB6F20 + 8 * v20) = v19;
  LODWORD(qword_2CB6F28) = qword_2CB6F28 + 1;
  xmmword_2CB6F88 = (__int128)_mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CB6F60 = (__int64)off_2C474E8;
  qword_2CB6F58 = 0;
  byte_2CB6F69 = 0;
  qword_2CB6EE0 = (__int64)off_2C47D10;
  qword_2CB6F70 = (__int64)off_2BC0B68;
  v22 = j__strlen("verify-memoryssa");
  sub_21F3510(&qword_2CB6EE0, "verify-memoryssa", v22);
  if ( qword_2CB6F58 )
  {
    v23 = sub_2259990();
    v27[8] = 259;
    v26[0] = "cl::location(x) specified more than once!";
    sub_21ED980(&qword_2CB6EE0, v26, 0, 0, v23);
  }
  else
  {
    byte_2CB6F69 = 1;
    qword_2CB6F58 = (__int64)byte_2CB6F98;
    byte_2CB6F68 = byte_2CB6F98[0];
  }
  qword_2CB6F08 = v18;
  BYTE2(qword_2CB6EE8) = BYTE2(qword_2CB6EE8) & 0x9F | 0x20;
  qword_2CB6F00 = (__int64)"Enable verification of MemorySSA.";
  sub_21F4400(&qword_2CB6EE0);
  return __cxa_atexit(sub_1FF1930, &qword_2CB6EE0, &off_2AFC540);
}

