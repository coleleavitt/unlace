int __fastcall sub_3474E0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CDEBB0 = 0;
  qword_2CDEBB8 = 0;
  qword_2CDEBC0 = 0;
  qword_2CDEBA0 = (__int64)&off_2C4B8B0;
  qword_2CDEBA8 = (unsigned int)qword_2CDEBA8 & 0x80000000;
  qword_2CDEBE8 = 0x100000000LL;
  qword_2CDEBC8 = 0;
  qword_2CDEBD0 = 0;
  qword_2CDEBD8 = 0;
  qword_2CDEBE0 = (__int64)&unk_2CDEBF0;
  qword_2CDEBF8 = (__int64)&unk_2CDEC10;
  qword_2CDEC00 = 1;
  dword_2CDEC08 = 0;
  byte_2CDEC0C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CDEBE8;
  v3 = (unsigned int)qword_2CDEBE8 + 1LL;
  if ( v3 > HIDWORD(qword_2CDEBE8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CDEBF0 - 16, &unk_2CDEBF0, v3, 8);
    v2 = (unsigned int)qword_2CDEBE8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CDEBE0 + 8 * v2) = v1;
  word_2CDEC28 = 0;
  xmmword_2CDEC48 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDEBE8) = qword_2CDEBE8 + 1;
  qword_2CDEC20 = (__int64)off_2C474E8;
  byte_2CDEC18 = 0;
  qword_2CDEBA0 = (__int64)off_2C4B848;
  qword_2CDEC30 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDEBA0, "reassociate-use-cse-local", 25);
  qword_2CDEBC0 = (__int64)"Only reorder expressions within a basic block when exposing CSE opportunities";
  word_2CDEC28 = 257;
  byte_2CDEC18 = 1;
  qword_2CDEBC8 = 77;
  BYTE2(qword_2CDEBA8) = BYTE2(qword_2CDEBA8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDEBA0);
  return __cxa_atexit(sub_1FEA450, &qword_2CDEBA0, &off_2AFC540);
}

