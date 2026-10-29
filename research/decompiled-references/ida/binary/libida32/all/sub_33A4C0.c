int __fastcall sub_33A4C0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD7990 = 0;
  qword_2CD7998 = 0;
  qword_2CD79A0 = 0;
  qword_2CD7980 = (__int64)&off_2C4B8B0;
  qword_2CD7988 = (unsigned int)qword_2CD7988 & 0x80000000;
  qword_2CD79C8 = 0x100000000LL;
  qword_2CD79A8 = 0;
  qword_2CD79B0 = 0;
  qword_2CD79B8 = 0;
  qword_2CD79C0 = (__int64)&unk_2CD79D0;
  qword_2CD79D8 = (__int64)&unk_2CD79F0;
  qword_2CD79E0 = 1;
  dword_2CD79E8 = 0;
  byte_2CD79EC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD79C8;
  v3 = (unsigned int)qword_2CD79C8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD79C8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD79D0 - 16, &unk_2CD79D0, v3, 8);
    v2 = (unsigned int)qword_2CD79C8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD79C0 + 8 * v2) = v1;
  xmmword_2CD7A28 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CD79C8) = qword_2CD79C8 + 1;
  qword_2CD7A00 = (__int64)off_2C472D0;
  dword_2CD79F8 = 0;
  byte_2CD7A0C = 0;
  qword_2CD7980 = (__int64)off_2C4B710;
  dword_2CD7A08 = 0;
  qword_2CD7A10 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CD7980, "float2int-max-integer-bw", 24);
  dword_2CD79F8 = 64;
  byte_2CD7A0C = 1;
  dword_2CD7A08 = 64;
  qword_2CD79A8 = 57;
  BYTE2(qword_2CD7988) = BYTE2(qword_2CD7988) & 0x9F | 0x20;
  qword_2CD79A0 = (__int64)"Max integer bitwidth to consider in float2int(default=64)";
  sub_21F4400(&qword_2CD7980);
  return __cxa_atexit(sub_1FC9520, &qword_2CD7980, &off_2AFC540);
}

