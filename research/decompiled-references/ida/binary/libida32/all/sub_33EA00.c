int __fastcall sub_33EA00(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD9E70 = 0;
  qword_2CD9E78 = 0;
  qword_2CD9E80 = 0;
  qword_2CD9E60 = (__int64)&off_2C4B8B0;
  qword_2CD9E68 = (unsigned int)qword_2CD9E68 & 0x80000000;
  qword_2CD9EA8 = 0x100000000LL;
  qword_2CD9E88 = 0;
  qword_2CD9E90 = 0;
  qword_2CD9E98 = 0;
  qword_2CD9EA0 = (__int64)&unk_2CD9EB0;
  qword_2CD9EB8 = (__int64)&unk_2CD9ED0;
  qword_2CD9EC0 = 1;
  dword_2CD9EC8 = 0;
  byte_2CD9ECC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD9EA8;
  v3 = (unsigned int)qword_2CD9EA8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD9EA8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD9EB0 - 16, &unk_2CD9EB0, v3, 8);
    v2 = (unsigned int)qword_2CD9EA8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD9EA0 + 8 * v2) = v1;
  word_2CD9EE8 = 0;
  xmmword_2CD9F08 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD9EA8) = qword_2CD9EA8 + 1;
  qword_2CD9EE0 = (__int64)off_2C474E8;
  byte_2CD9ED8 = 0;
  qword_2CD9E60 = (__int64)off_2C4B848;
  qword_2CD9EF0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD9E60, "loop-deletion-enable-symbolic-execution", 39);
  word_2CD9EE8 = 257;
  byte_2CD9ED8 = 1;
  qword_2CD9E88 = 111;
  BYTE2(qword_2CD9E68) = BYTE2(qword_2CD9E68) & 0x9F | 0x20;
  qword_2CD9E80 = (__int64)"Break backedge through symbolic execution of 1st iteration attempting to prove that the backe"
                           "dge is never taken";
  sub_21F4400(&qword_2CD9E60);
  return __cxa_atexit(sub_1FEA450, &qword_2CD9E60, &off_2AFC540);
}

