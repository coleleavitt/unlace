int sub_335B00()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v7; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Profile uses flow sensitive discriminators");
  qword_2CD6140 = (__int64)&unk_2CD6150;
  v1 = v0;
  qword_2CD6110 = 0;
  qword_2CD6118 = 0;
  qword_2CD6120 = 0;
  qword_2CD6100 = (__int64)&off_2C4B8B0;
  qword_2CD6108 = (unsigned int)qword_2CD6108 & 0x80000000;
  qword_2CD6148 = 0x100000000LL;
  qword_2CD6128 = 0;
  qword_2CD6130 = 0;
  qword_2CD6138 = 0;
  qword_2CD6158 = (__int64)&unk_2CD6170;
  qword_2CD6160 = 1;
  dword_2CD6168 = 0;
  byte_2CD616C = 1;
  v2 = sub_21ED2B0("Profile uses flow sensitive discriminators");
  v3 = (unsigned int)qword_2CD6148;
  v4 = (unsigned int)qword_2CD6148 + 1LL;
  if ( v4 > HIDWORD(qword_2CD6148) )
  {
    v7 = v2;
    sub_22134E0((char *)&unk_2CD6150 - 16, &unk_2CD6150, v4, 8);
    v3 = (unsigned int)qword_2CD6148;
    v2 = v7;
  }
  *(_QWORD *)(qword_2CD6140 + 8 * v3) = v2;
  word_2CD6188 = 0;
  xmmword_2CD61A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD6148) = qword_2CD6148 + 1;
  qword_2CD6180 = (__int64)off_2C474E8;
  byte_2CD6178 = 0;
  qword_2CD6100 = (__int64)off_2C4B848;
  qword_2CD6190 = (__int64)off_2BC0B68;
  v5 = j__strlen("profile-isfs");
  sub_21F3510(&qword_2CD6100, "profile-isfs", v5);
  word_2CD6188 = 256;
  qword_2CD6128 = v1;
  byte_2CD6178 = 0;
  BYTE2(qword_2CD6108) = BYTE2(qword_2CD6108) & 0x9F | 0x20;
  qword_2CD6120 = (__int64)"Profile uses flow sensitive discriminators";
  sub_21F4400(&qword_2CD6100);
  return __cxa_atexit(sub_1FEA450, &qword_2CD6100, &off_2AFC540);
}

