int sub_335730()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+8h] [rbp-20h]

  v0 = j__strlen(
         "Cutoff value about how many symbols in profile symbol list will be used. This is very useful for performance debugging");
  qword_2CD6050 = 0;
  v1 = v0;
  qword_2CD6058 = 0;
  qword_2CD6060 = 0;
  qword_2CD6040 = (__int64)&off_2C4B8B0;
  qword_2CD6048 = (unsigned int)qword_2CD6048 & 0x80000000;
  qword_2CD6088 = 0x100000000LL;
  qword_2CD6068 = 0;
  qword_2CD6070 = 0;
  qword_2CD6078 = 0;
  qword_2CD6080 = (__int64)&unk_2CD6090;
  qword_2CD6098 = (__int64)&unk_2CD60B0;
  qword_2CD60A0 = 1;
  dword_2CD60A8 = 0;
  byte_2CD60AC = 1;
  v2 = sub_21ED2B0(
         "Cutoff value about how many symbols in profile symbol list will be used. This is very useful for performance debugging");
  v3 = (unsigned int)qword_2CD6088;
  v4 = (unsigned int)qword_2CD6088 + 1LL;
  if ( v4 > HIDWORD(qword_2CD6088) )
  {
    v13 = v2;
    sub_22134E0((char *)&unk_2CD6090 - 16, &unk_2CD6090, v4, 8);
    v3 = (unsigned int)qword_2CD6088;
    v2 = v13;
  }
  *(_QWORD *)(qword_2CD6080 + 8 * v3) = v2;
  xmmword_2CD60F0 = (__int128)_mm_loadh_ps((const double *)off_2C4EC90);
  LODWORD(qword_2CD6088) = qword_2CD6088 + 1;
  qword_2CD60C0 = (__int64)off_2C47B28;
  qword_2CD60B8 = 0;
  byte_2CD60D0 = 0;
  qword_2CD6040 = (__int64)off_2C47B48;
  qword_2CD60C8 = 0;
  qword_2CD60D8 = (__int64)off_2BC0C28;
  v5 = j__strlen("profile-symbol-list-cutoff");
  sub_21F3510(&qword_2CD6040, "profile-symbol-list-cutoff", v5);
  qword_2CD6068 = v1;
  byte_2CD60D0 = 1;
  BYTE2(qword_2CD6048) = BYTE2(qword_2CD6048) & 0x9F | 0x20;
  qword_2CD60B8 = -1;
  qword_2CD60C8 = -1;
  qword_2CD6060 = (__int64)"Cutoff value about how many symbols in profile symbol list will be used. This is very useful "
                           "for performance debugging";
  sub_21F4400(&qword_2CD6040);
  __cxa_atexit(sub_1FF02C0, &qword_2CD6040, &off_2AFC540);
  v6 = j__strlen(
         "When generating nested context-sensitive profiles, always generate extra base profile for function with all its"
         " context profiles merged into it.");
  byte_2CD5FEC = 1;
  qword_2CD5F90 = 0;
  v7 = v6;
  qword_2CD5F80 = (__int64)&off_2C4B8B0;
  qword_2CD5F88 = (unsigned int)qword_2CD5F88 & 0x80000000;
  qword_2CD5FC8 = 0x100000000LL;
  qword_2CD5F98 = 0;
  qword_2CD5FA0 = 0;
  qword_2CD5FA8 = 0;
  qword_2CD5FB0 = 0;
  qword_2CD5FB8 = 0;
  qword_2CD5FC0 = (__int64)&unk_2CD5FD0;
  qword_2CD5FD8 = (__int64)&unk_2CD5FF0;
  qword_2CD5FE0 = 1;
  dword_2CD5FE8 = 0;
  v8 = sub_21ED2B0(
         "When generating nested context-sensitive profiles, always generate extra base profile for function with all its"
         " context profiles merged into it.");
  v9 = (unsigned int)qword_2CD5FC8;
  v10 = (unsigned int)qword_2CD5FC8 + 1LL;
  if ( v10 > HIDWORD(qword_2CD5FC8) )
  {
    v14 = v8;
    sub_22134E0((char *)&unk_2CD5FD0 - 16, &unk_2CD5FD0, v10, 8);
    v9 = (unsigned int)qword_2CD5FC8;
    v8 = v14;
  }
  *(_QWORD *)(qword_2CD5FC0 + 8 * v9) = v8;
  word_2CD6008 = 0;
  xmmword_2CD6028 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD5FC8) = qword_2CD5FC8 + 1;
  qword_2CD6000 = (__int64)off_2C474E8;
  byte_2CD5FF8 = 0;
  qword_2CD5F80 = (__int64)off_2C4B848;
  qword_2CD6010 = (__int64)off_2BC0B68;
  v11 = j__strlen("generate-merged-base-profiles");
  sub_21F3510(&qword_2CD5F80, "generate-merged-base-profiles", v11);
  qword_2CD5FA8 = v7;
  qword_2CD5FA0 = (__int64)"When generating nested context-sensitive profiles, always generate extra base profile for fun"
                           "ction with all its context profiles merged into it.";
  sub_21F4400(&qword_2CD5F80);
  return __cxa_atexit(sub_1FEA450, &qword_2CD5F80, &off_2AFC540);
}

