int sub_32FCE0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v7; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Disables inttoptr/ptrtoint roundtrip optimization");
  qword_2CD34C0 = (__int64)&unk_2CD34D0;
  v1 = v0;
  qword_2CD3490 = 0;
  qword_2CD3498 = 0;
  qword_2CD34A0 = 0;
  qword_2CD3480 = (__int64)&off_2C4B8B0;
  qword_2CD3488 = (unsigned int)qword_2CD3488 & 0x80000000;
  qword_2CD34C8 = 0x100000000LL;
  qword_2CD34A8 = 0;
  qword_2CD34B0 = 0;
  qword_2CD34B8 = 0;
  qword_2CD34D8 = (__int64)&unk_2CD34F0;
  qword_2CD34E0 = 1;
  dword_2CD34E8 = 0;
  byte_2CD34EC = 1;
  v2 = sub_21ED2B0("Disables inttoptr/ptrtoint roundtrip optimization");
  v3 = (unsigned int)qword_2CD34C8;
  v4 = (unsigned int)qword_2CD34C8 + 1LL;
  if ( v4 > HIDWORD(qword_2CD34C8) )
  {
    v7 = v2;
    sub_22134E0((char *)&unk_2CD34D0 - 16, &unk_2CD34D0, v4, 8);
    v3 = (unsigned int)qword_2CD34C8;
    v2 = v7;
  }
  *(_QWORD *)(qword_2CD34C0 + 8 * v3) = v2;
  word_2CD3508 = 0;
  xmmword_2CD3528 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD34C8) = qword_2CD34C8 + 1;
  qword_2CD3500 = (__int64)off_2C474E8;
  byte_2CD34F8 = 0;
  qword_2CD3480 = (__int64)off_2C4B848;
  qword_2CD3510 = (__int64)off_2BC0B68;
  v5 = j__strlen("disable-i2p-p2i-opt");
  sub_21F3510(&qword_2CD3480, "disable-i2p-p2i-opt", v5);
  word_2CD3508 = 256;
  qword_2CD34A8 = v1;
  byte_2CD34F8 = 0;
  qword_2CD34A0 = (__int64)"Disables inttoptr/ptrtoint roundtrip optimization";
  sub_21F4400(&qword_2CD3480);
  return __cxa_atexit(sub_1FEA450, &qword_2CD3480, &off_2AFC540);
}

