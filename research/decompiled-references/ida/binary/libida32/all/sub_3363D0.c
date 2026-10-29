int __fastcall sub_3363D0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD66D0 = 0;
  qword_2CD66D8 = 0;
  qword_2CD66E0 = 0;
  qword_2CD66C0 = (__int64)&off_2C4B8B0;
  qword_2CD66C8 = (unsigned int)qword_2CD66C8 & 0x80000000;
  qword_2CD6708 = 0x100000000LL;
  qword_2CD66E8 = 0;
  qword_2CD66F0 = 0;
  qword_2CD66F8 = 0;
  qword_2CD6700 = (__int64)&unk_2CD6710;
  qword_2CD6718 = (__int64)&unk_2CD6730;
  qword_2CD6720 = 1;
  dword_2CD6728 = 0;
  byte_2CD672C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD6708;
  v3 = (unsigned int)qword_2CD6708 + 1LL;
  if ( v3 > HIDWORD(qword_2CD6708) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD6710 - 16, &unk_2CD6710, v3, 8);
    v2 = (unsigned int)qword_2CD6708;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD6700 + 8 * v2) = v1;
  xmmword_2CD6768 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CD6708) = qword_2CD6708 + 1;
  qword_2CD6740 = (__int64)off_2C472D0;
  dword_2CD6738 = 0;
  byte_2CD674C = 0;
  qword_2CD66C0 = (__int64)off_2C4B710;
  dword_2CD6748 = 0;
  qword_2CD6750 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CD66C0, "callsite-splitting-duplication-threshold", 40);
  qword_2CD66E8 = 82;
  dword_2CD6738 = 5;
  byte_2CD674C = 1;
  dword_2CD6748 = 5;
  BYTE2(qword_2CD66C8) = BYTE2(qword_2CD66C8) & 0x9F | 0x20;
  qword_2CD66E0 = (__int64)"Only allow instructions before a call, if their cost is below DuplicationThreshold";
  sub_21F4400(&qword_2CD66C0);
  return __cxa_atexit(sub_1FC9520, &qword_2CD66C0, &off_2AFC540);
}

