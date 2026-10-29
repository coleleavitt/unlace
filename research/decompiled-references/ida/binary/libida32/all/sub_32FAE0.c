int __fastcall sub_32FAE0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD33B0 = 0;
  qword_2CD33B8 = 0;
  qword_2CD33C0 = 0;
  qword_2CD33A0 = (__int64)&off_2C4B8B0;
  qword_2CD33A8 = (unsigned int)qword_2CD33A8 & 0x80000000;
  qword_2CD33E8 = 0x100000000LL;
  qword_2CD33C8 = 0;
  qword_2CD33D0 = 0;
  qword_2CD33D8 = 0;
  qword_2CD33E0 = (__int64)&unk_2CD33F0;
  qword_2CD33F8 = (__int64)&unk_2CD3410;
  qword_2CD3400 = 1;
  dword_2CD3408 = 0;
  byte_2CD340C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD33E8;
  v3 = (unsigned int)qword_2CD33E8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD33E8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD33F0 - 16, &unk_2CD33F0, v3, 8);
    v2 = (unsigned int)qword_2CD33E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD33E0 + 8 * v2) = v1;
  xmmword_2CD3448 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  LODWORD(qword_2CD33E8) = qword_2CD33E8 + 1;
  qword_2CD3420 = (__int64)off_2C47BB0;
  dword_2CD3418 = 0;
  byte_2CD342C = 0;
  qword_2CD33A0 = (__int64)off_2C4B778;
  dword_2CD3428 = 0;
  qword_2CD3430 = (__int64)off_2BC0BC8;
  sub_21F3510(&qword_2CD33A0, "non-global-value-max-name-size", 30);
  dword_2CD3418 = 1024;
  byte_2CD342C = 1;
  dword_2CD3428 = 1024;
  qword_2CD33C8 = 47;
  BYTE2(qword_2CD33A8) = BYTE2(qword_2CD33A8) & 0x9F | 0x20;
  qword_2CD33C0 = (__int64)"Maximum size for the name of non-global values.";
  sub_21F4400(&qword_2CD33A0);
  return __cxa_atexit(sub_1FF0490, &qword_2CD33A0, &off_2AFC540);
}

