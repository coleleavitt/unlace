int __fastcall sub_34B410(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE1A90 = 0;
  qword_2CE1A98 = 0;
  qword_2CE1AA0 = 0;
  qword_2CE1A80 = (__int64)&off_2C4B8B0;
  qword_2CE1A88 = (unsigned int)qword_2CE1A88 & 0x80000000;
  qword_2CE1AC8 = 0x100000000LL;
  qword_2CE1AA8 = 0;
  qword_2CE1AB0 = 0;
  qword_2CE1AB8 = 0;
  qword_2CE1AC0 = (__int64)&unk_2CE1AD0;
  qword_2CE1AD8 = (__int64)&unk_2CE1AF0;
  qword_2CE1AE0 = 1;
  dword_2CE1AE8 = 0;
  byte_2CE1AEC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE1AC8;
  v3 = (unsigned int)qword_2CE1AC8 + 1LL;
  if ( v3 > HIDWORD(qword_2CE1AC8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE1AD0 - 16, &unk_2CE1AD0, v3, 8);
    v2 = (unsigned int)qword_2CE1AC8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE1AC0 + 8 * v2) = v1;
  word_2CE1B08 = 0;
  LODWORD(qword_2CE1AC8) = qword_2CE1AC8 + 1;
  xmmword_2CE1B28 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CE1B00 = (__int64)off_2C474E8;
  byte_2CE1AF8 = 0;
  qword_2CE1A80 = (__int64)off_2C4B848;
  qword_2CE1B10 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE1A80, "no-discriminators", 17);
  word_2CE1B08 = 256;
  byte_2CE1AF8 = 0;
  qword_2CE1AA0 = (__int64)"Disable generation of discriminator information.";
  qword_2CE1AA8 = 48;
  sub_21F4400(&qword_2CE1A80);
  return __cxa_atexit(sub_1FEA450, &qword_2CE1A80, &off_2AFC540);
}

