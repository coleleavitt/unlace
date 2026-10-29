int __fastcall sub_33D1A0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD91B0 = 0;
  qword_2CD91B8 = 0;
  qword_2CD91C0 = 0;
  qword_2CD91A0 = (__int64)&off_2C4B8B0;
  qword_2CD91A8 = (unsigned int)qword_2CD91A8 & 0x80000000;
  qword_2CD91E8 = 0x100000000LL;
  qword_2CD91C8 = 0;
  qword_2CD91D0 = 0;
  qword_2CD91D8 = 0;
  qword_2CD91E0 = (__int64)&unk_2CD91F0;
  qword_2CD91F8 = (__int64)&unk_2CD9210;
  qword_2CD9200 = 1;
  dword_2CD9208 = 0;
  byte_2CD920C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD91E8;
  v3 = (unsigned int)qword_2CD91E8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD91E8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD91F0 - 16, &unk_2CD91F0, v3, 8);
    v2 = (unsigned int)qword_2CD91E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD91E0 + 8 * v2) = v1;
  word_2CD9228 = 0;
  xmmword_2CD9248 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD91E8) = qword_2CD91E8 + 1;
  qword_2CD9220 = (__int64)off_2C474E8;
  byte_2CD9218 = 0;
  qword_2CD91A0 = (__int64)off_2C4B848;
  qword_2CD9230 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD91A0, "assume-default-is-flat-addrspace", 32);
  word_2CD9228 = 256;
  byte_2CD9218 = 0;
  qword_2CD91C8 = 96;
  BYTE2(qword_2CD91A8) = BYTE2(qword_2CD91A8) & 0x9F | 0x40;
  qword_2CD91C0 = (__int64)"The default address space is assumed as the flat address space. This is mainly for test purpose.";
  sub_21F4400(&qword_2CD91A0);
  return __cxa_atexit(sub_1FEA450, &qword_2CD91A0, &off_2AFC540);
}

