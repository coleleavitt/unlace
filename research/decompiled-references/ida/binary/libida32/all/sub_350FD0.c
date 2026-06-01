int sub_350FD0()
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

  v0 = j__strlen("Use this option to turn on/off warnings about incorrect usage of llvm.expect intrinsics.");
  qword_2CE4A10 = 0;
  v1 = v0;
  qword_2CE4A18 = 0;
  qword_2CE4A20 = 0;
  qword_2CE4A00 = (__int64)&off_2C4B8B0;
  qword_2CE4A08 = (unsigned int)qword_2CE4A08 & 0x80000000;
  qword_2CE4A48 = 0x100000000LL;
  qword_2CE4A28 = 0;
  qword_2CE4A30 = 0;
  qword_2CE4A38 = 0;
  qword_2CE4A40 = (__int64)&unk_2CE4A50;
  qword_2CE4A58 = (__int64)&unk_2CE4A70;
  qword_2CE4A60 = 1;
  dword_2CE4A68 = 0;
  byte_2CE4A6C = 1;
  v2 = sub_21ED2B0("Use this option to turn on/off warnings about incorrect usage of llvm.expect intrinsics.");
  v3 = (unsigned int)qword_2CE4A48;
  v4 = (unsigned int)qword_2CE4A48 + 1LL;
  if ( v4 > HIDWORD(qword_2CE4A48) )
  {
    v11 = v2;
    sub_22134E0((char *)&unk_2CE4A50 - 16, &unk_2CE4A50, v4, 8);
    v3 = (unsigned int)qword_2CE4A48;
    v2 = v11;
  }
  *(_QWORD *)(qword_2CE4A40 + 8 * v3) = v2;
  word_2CE4A88 = 0;
  xmmword_2CE4AA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE4A48) = qword_2CE4A48 + 1;
  qword_2CE4A80 = (__int64)off_2C474E8;
  byte_2CE4A78 = 0;
  qword_2CE4A00 = (__int64)off_2C4B848;
  qword_2CE4A90 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE4A00, "pgo-warn-misexpect", 18);
  word_2CE4A88 = 256;
  byte_2CE4A78 = 0;
  qword_2CE4A28 = v1;
  BYTE2(qword_2CE4A08) = BYTE2(qword_2CE4A08) & 0x9F | 0x20;
  qword_2CE4A20 = (__int64)"Use this option to turn on/off warnings about incorrect usage of llvm.expect intrinsics.";
  sub_21F4400(&qword_2CE4A00);
  __cxa_atexit(sub_1FEA450, &qword_2CE4A00, &off_2AFC540);
  v5 = j__strlen("Prevents emitting diagnostics when profile counts are within N% of the threshold..");
  byte_2CE49AC = 1;
  qword_2CE4950 = 0;
  v6 = v5;
  qword_2CE4940 = (__int64)&off_2C4B8B0;
  qword_2CE4948 = (unsigned int)qword_2CE4948 & 0x80000000;
  qword_2CE4988 = 0x100000000LL;
  qword_2CE4958 = 0;
  qword_2CE4960 = 0;
  qword_2CE4968 = 0;
  qword_2CE4970 = 0;
  qword_2CE4978 = 0;
  qword_2CE4980 = (__int64)&unk_2CE4990;
  qword_2CE4998 = (__int64)&unk_2CE49B0;
  qword_2CE49A0 = 1;
  dword_2CE49A8 = 0;
  v7 = sub_21ED2B0(
         "Prevents emitting diagnostics when profile counts are within N% of the threshold..",
         (unsigned int)&qword_2CE4A00);
  v8 = (unsigned int)qword_2CE4988;
  v9 = (unsigned int)qword_2CE4988 + 1LL;
  if ( v9 > HIDWORD(qword_2CE4988) )
  {
    v12 = v7;
    sub_22134E0((char *)&unk_2CE4990 - 16, &unk_2CE4990, v9, 8);
    v8 = (unsigned int)qword_2CE4988;
    v7 = v12;
  }
  *(_QWORD *)(qword_2CE4980 + 8 * v8) = v7;
  LODWORD(qword_2CE4988) = qword_2CE4988 + 1;
  xmmword_2CE49E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CE49C0 = (__int64)off_2C472D0;
  dword_2CE49B8 = 0;
  byte_2CE49CC = 0;
  qword_2CE4940 = (__int64)off_2C4B710;
  dword_2CE49C8 = 0;
  qword_2CE49D0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CE4940, "misexpect-tolerance", 19);
  qword_2CE4968 = v6;
  dword_2CE49B8 = 0;
  byte_2CE49CC = 1;
  dword_2CE49C8 = 0;
  qword_2CE4960 = (__int64)"Prevents emitting diagnostics when profile counts are within N% of the threshold..";
  sub_21F4400(&qword_2CE4940);
  return __cxa_atexit(sub_1FC9520, &qword_2CE4940, &off_2AFC540);
}

