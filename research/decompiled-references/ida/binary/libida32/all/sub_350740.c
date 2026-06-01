int __fastcall sub_350740(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE43D0 = 0;
  qword_2CE43D8 = 0;
  qword_2CE43E0 = 0;
  qword_2CE43C0 = (__int64)&off_2C4B8B0;
  qword_2CE43C8 = (unsigned int)qword_2CE43C8 & 0x80000000;
  qword_2CE4408 = 0x100000000LL;
  qword_2CE43E8 = 0;
  qword_2CE43F0 = 0;
  qword_2CE43F8 = 0;
  qword_2CE4400 = (__int64)&unk_2CE4410;
  qword_2CE4418 = (__int64)&unk_2CE4430;
  qword_2CE4420 = 1;
  dword_2CE4428 = 0;
  byte_2CE442C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE4408;
  v3 = (unsigned int)qword_2CE4408 + 1LL;
  if ( v3 > HIDWORD(qword_2CE4408) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE4410 - 16, &unk_2CE4410, v3, 8);
    v2 = (unsigned int)qword_2CE4408;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE4400 + 8 * v2) = v1;
  word_2CE4448 = 0;
  xmmword_2CE4468 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE4408) = qword_2CE4408 + 1;
  qword_2CE4440 = (__int64)off_2C474E8;
  byte_2CE4438 = 0;
  qword_2CE43C0 = (__int64)off_2C4B848;
  qword_2CE4450 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE43C0, "loop-version-annotate-no-alias", 30);
  word_2CE4448 = 257;
  byte_2CE4438 = 1;
  qword_2CE43E8 = 76;
  BYTE2(qword_2CE43C8) = BYTE2(qword_2CE43C8) & 0x9F | 0x20;
  qword_2CE43E0 = (__int64)"Add no-alias annotation for instructions that are disambiguated by memchecks";
  sub_21F4400(&qword_2CE43C0);
  return __cxa_atexit(sub_1FEA450, &qword_2CE43C0, &off_2AFC540);
}

