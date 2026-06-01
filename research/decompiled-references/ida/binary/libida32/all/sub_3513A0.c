int __fastcall sub_3513A0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CE4AD0 = 0;
  qword_2CE4AD8 = 0;
  qword_2CE4AE0 = 0;
  qword_2CE4AC0 = (__int64)&off_2C4B8B0;
  qword_2CE4AC8 = (unsigned int)qword_2CE4AC8 & 0x80000000;
  qword_2CE4B08 = 0x100000000LL;
  qword_2CE4AE8 = 0;
  qword_2CE4AF0 = 0;
  qword_2CE4AF8 = 0;
  qword_2CE4B00 = (__int64)&unk_2CE4B10;
  qword_2CE4B18 = (__int64)&unk_2CE4B30;
  qword_2CE4B20 = 1;
  dword_2CE4B28 = 0;
  byte_2CE4B2C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CE4B08;
  v3 = (unsigned int)qword_2CE4B08 + 1LL;
  if ( v3 > HIDWORD(qword_2CE4B08) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CE4B10 - 16, &unk_2CE4B10, v3, 8);
    v2 = (unsigned int)qword_2CE4B08;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CE4B00 + 8 * v2) = v1;
  xmmword_2CE4B68 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CE4B08) = qword_2CE4B08 + 1;
  qword_2CE4B40 = (__int64)off_2C472D0;
  dword_2CE4B38 = 0;
  byte_2CE4B4C = 0;
  qword_2CE4AC0 = (__int64)off_2C4B710;
  dword_2CE4B48 = 0;
  qword_2CE4B50 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CE4AC0, "move-auto-init-threshold", 24);
  dword_2CE4B38 = 128;
  byte_2CE4B4C = 1;
  dword_2CE4B48 = 128;
  qword_2CE4AE8 = 56;
  BYTE2(qword_2CE4AC8) = BYTE2(qword_2CE4AC8) & 0x9F | 0x20;
  qword_2CE4AE0 = (__int64)"Maximum instructions to analyze per moved initialization";
  sub_21F4400(&qword_2CE4AC0);
  return __cxa_atexit(sub_1FC9520, &qword_2CE4AC0, &off_2AFC540);
}

