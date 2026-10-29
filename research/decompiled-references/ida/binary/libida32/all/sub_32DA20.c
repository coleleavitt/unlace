int sub_32DA20()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  int result; // eax
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)");
  qword_2CD23C0 = (__int64)&unk_2CD23D0;
  v1 = v0;
  qword_2CD2390 = 0;
  qword_2CD2398 = 0;
  qword_2CD23A0 = 0;
  qword_2CD2380 = (__int64)&off_2C4B8B0;
  qword_2CD2388 = (unsigned int)qword_2CD2388 & 0x80000000;
  qword_2CD23C8 = 0x100000000LL;
  qword_2CD23A8 = 0;
  qword_2CD23B0 = 0;
  qword_2CD23B8 = 0;
  qword_2CD23D8 = (__int64)&unk_2CD23F0;
  qword_2CD23E0 = 1;
  dword_2CD23E8 = 0;
  byte_2CD23EC = 1;
  v2 = sub_21ED2B0("Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)");
  v3 = (unsigned int)qword_2CD23C8;
  v4 = (unsigned int)qword_2CD23C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD23C8) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CD23D0 - 16, &unk_2CD23D0, v4, 8);
    v3 = (unsigned int)qword_2CD23C8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CD23C0 + 8 * v3) = v2;
  word_2CD2408 = 0;
  xmmword_2CD2428 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD23C8) = qword_2CD23C8 + 1;
  qword_2CD2400 = (__int64)off_2C474E8;
  byte_2CD23F8 = 0;
  qword_2CD2380 = (__int64)off_2C4B848;
  qword_2CD2410 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD2380, "allow-incomplete-ir", 19);
  word_2CD2408 = 256;
  qword_2CD23A8 = v1;
  byte_2CD23F8 = 0;
  BYTE2(qword_2CD2388) = BYTE2(qword_2CD2388) & 0x9F | 0x20;
  qword_2CD23A0 = (__int64)"Allow incomplete IR on a best effort basis (references to unknown metadata will be dropped)";
  sub_21F4400(&qword_2CD2380);
  result = __cxa_atexit(sub_1FEA450, &qword_2CD2380, &off_2AFC540);
  qword_2CD2378 = -8;
  return result;
}

