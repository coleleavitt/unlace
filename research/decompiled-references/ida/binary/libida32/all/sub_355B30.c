int sub_355B30()
{
  size_t v0; // rbx
  size_t v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v7; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("filename");
  v1 = j__strlen("Symbol Rewrite Map");
  qword_2CE7140 = (__int64)&unk_2CE7150;
  v2 = v1;
  qword_2CE7110 = 0;
  qword_2CE7118 = 0;
  qword_2CE7120 = 0;
  qword_2CE7100 = (__int64)&off_2C4B8B0;
  qword_2CE7128 = 0;
  qword_2CE7130 = 0;
  qword_2CE7138 = 0;
  qword_2CE7108 = (unsigned int)qword_2CE7108 & 0x80000000 | 0x10000LL;
  qword_2CE7148 = 0x100000000LL;
  qword_2CE7158 = (__int64)&unk_2CE7170;
  qword_2CE7160 = 1;
  dword_2CE7168 = 0;
  byte_2CE716C = 1;
  v3 = sub_21ED2B0("Symbol Rewrite Map");
  v4 = (unsigned int)qword_2CE7148;
  v5 = (unsigned int)qword_2CE7148 + 1LL;
  if ( v5 > HIDWORD(qword_2CE7148) )
  {
    v7 = v3;
    sub_22134E0((char *)&unk_2CE7150 - 16, &unk_2CE7150, v5, 8);
    v4 = (unsigned int)qword_2CE7148;
    v3 = v7;
  }
  *(_QWORD *)(qword_2CE7140 + 8 * v4) = v3;
  xmmword_2CE71B0 = 0;
  LODWORD(qword_2CE7148) = qword_2CE7148 + 1;
  qword_2CE7100 = (__int64)&off_2C47420;
  xmmword_2CE71E0 = (__int128)_mm_loadh_ps((const double *)&off_2C4EDD8);
  qword_2CE7178 = 0;
  qword_2CE71C8 = (__int64)off_2BC0CB8;
  qword_2CE7180 = 0;
  qword_2CE7188 = 0;
  qword_2CE7190 = 0;
  qword_2CE7198 = 0;
  qword_2CE71A0 = 0;
  byte_2CE71A8 = 0;
  qword_2CE71C0 = 0;
  sub_21F3510(&qword_2CE7100, "rewrite-map-file", 16);
  qword_2CE7128 = v2;
  qword_2CE7120 = (__int64)"Symbol Rewrite Map";
  qword_2CE7130 = (__int64)"filename";
  qword_2CE7138 = v0;
  BYTE2(qword_2CE7108) = BYTE2(qword_2CE7108) & 0x9F | 0x20;
  sub_21F4400(&qword_2CE7100);
  return __cxa_atexit(sub_1FCEA40, &qword_2CE7100, &off_2AFC540);
}

