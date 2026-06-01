int sub_34FC10()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Allow loop rotation multiple times in order to reach a better latch exit");
  qword_2CE3F80 = (__int64)&unk_2CE3F90;
  v1 = v0;
  qword_2CE3F50 = 0;
  qword_2CE3F58 = 0;
  qword_2CE3F60 = 0;
  qword_2CE3F40 = (__int64)&off_2C4B8B0;
  qword_2CE3F48 = (unsigned int)qword_2CE3F48 & 0x80000000;
  qword_2CE3F88 = 0x100000000LL;
  qword_2CE3F68 = 0;
  qword_2CE3F70 = 0;
  qword_2CE3F78 = 0;
  qword_2CE3F98 = (__int64)&unk_2CE3FB0;
  qword_2CE3FA0 = 1;
  dword_2CE3FA8 = 0;
  byte_2CE3FAC = 1;
  v2 = sub_21ED2B0("Allow loop rotation multiple times in order to reach a better latch exit");
  v3 = (unsigned int)qword_2CE3F88;
  v4 = (unsigned int)qword_2CE3F88 + 1LL;
  if ( v4 > HIDWORD(qword_2CE3F88) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CE3F90 - 16, &unk_2CE3F90, v4, 8);
    v3 = (unsigned int)qword_2CE3F88;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CE3F80 + 8 * v3) = v2;
  word_2CE3FC8 = 0;
  xmmword_2CE3FE8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE3F88) = qword_2CE3F88 + 1;
  qword_2CE3FC0 = (__int64)off_2C474E8;
  byte_2CE3FB8 = 0;
  qword_2CE3F40 = (__int64)off_2C4B848;
  qword_2CE3FD0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE3F40, "loop-rotate-multi", 17);
  word_2CE3FC8 = 256;
  qword_2CE3F68 = v1;
  byte_2CE3FB8 = 0;
  BYTE2(qword_2CE3F48) = BYTE2(qword_2CE3F48) & 0x9F | 0x20;
  qword_2CE3F60 = (__int64)"Allow loop rotation multiple times in order to reach a better latch exit";
  sub_21F4400(&qword_2CE3F40);
  return __cxa_atexit(sub_1FEA450, &qword_2CE3F40, &off_2AFC540);
}

