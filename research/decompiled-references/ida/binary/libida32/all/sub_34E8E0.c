int __fastcall sub_34E8E0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE3710 = 0;
  qword_2CE3718 = 0;
  qword_2CE3720 = 0;
  qword_2CE3700 = (__int64)&off_2C4B8B0;
  qword_2CE3708 = (unsigned int)qword_2CE3708 & 0x80000000;
  qword_2CE3748 = 0x100000000LL;
  qword_2CE3728 = 0;
  qword_2CE3730 = 0;
  qword_2CE3738 = 0;
  qword_2CE3740 = (__int64)&unk_2CE3750;
  qword_2CE3758 = (__int64)&unk_2CE3770;
  qword_2CE3760 = 1;
  dword_2CE3768 = 0;
  byte_2CE376C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE3748;
  v3 = (unsigned int)qword_2CE3748 + 1LL;
  if ( v3 > HIDWORD(qword_2CE3748) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE3750 - 16, &unk_2CE3750, v3, 8);
    v2 = (unsigned int)qword_2CE3748;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE3740 + 8 * v2) = v1;
  word_2CE3788 = 0;
  xmmword_2CE37A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE3748) = qword_2CE3748 + 1;
  qword_2CE3780 = (__int64)off_2C474E8;
  byte_2CE3778 = 0;
  qword_2CE3700 = (__int64)off_2C4B848;
  qword_2CE3790 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE3700, "ignore-redundant-instrumentation", 32);
  qword_2CE3720 = (__int64)"Ignore redundant instrumentation";
  word_2CE3788 = 256;
  byte_2CE3778 = 0;
  qword_2CE3728 = 32;
  BYTE2(qword_2CE3708) = BYTE2(qword_2CE3708) & 0x9F | 0x20;
  sub_21F4400(&qword_2CE3700);
  return __cxa_atexit(sub_1FEA450, &qword_2CE3700, &off_2AFC540);
}

