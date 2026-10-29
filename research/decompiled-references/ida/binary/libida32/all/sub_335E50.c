int __fastcall sub_335E50(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD6490 = 0;
  qword_2CD6498 = 0;
  qword_2CD64A0 = 0;
  qword_2CD6480 = (__int64)&off_2C4B8B0;
  qword_2CD6488 = (unsigned int)qword_2CD6488 & 0x80000000;
  qword_2CD64C8 = 0x100000000LL;
  qword_2CD64A8 = 0;
  qword_2CD64B0 = 0;
  qword_2CD64B8 = 0;
  qword_2CD64C0 = (__int64)&unk_2CD64D0;
  qword_2CD64D8 = (__int64)&unk_2CD64F0;
  qword_2CD64E0 = 1;
  dword_2CD64E8 = 0;
  byte_2CD64EC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD64C8;
  v3 = (unsigned int)qword_2CD64C8 + 1LL;
  if ( v3 > HIDWORD(qword_2CD64C8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD64D0 - 16, &unk_2CD64D0, v3, 8);
    v2 = (unsigned int)qword_2CD64C8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD64C0 + 8 * v2) = v1;
  xmmword_2CD6528 = (__int128)_mm_loadh_ps((const double *)off_2C4DB30);
  LODWORD(qword_2CD64C8) = qword_2CD64C8 + 1;
  qword_2CD6500 = (__int64)off_2BC0B28;
  dword_2CD64F8 = 0;
  byte_2CD650C = 0;
  qword_2CD6480 = (__int64)off_2C48A80;
  dword_2CD6508 = 0;
  qword_2CD6510 = (__int64)off_2BC0B98;
  sub_21F3510(&qword_2CD6480, "remarks-section", 15);
  qword_2CD64A8 = 120;
  qword_2CD64A0 = (__int64)"Emit a section containing remark diagnostics metadata. By default, this is enabled for the fo"
                           "llowing formats: bitstream.";
  dword_2CD64F8 = 0;
  byte_2CD650C = 1;
  dword_2CD6508 = 0;
  BYTE2(qword_2CD6488) = BYTE2(qword_2CD6488) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD6480);
  return __cxa_atexit(sub_20DA4B0, &qword_2CD6480, &off_2AFC540);
}

