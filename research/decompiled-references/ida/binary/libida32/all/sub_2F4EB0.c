int __fastcall sub_2F4EB0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp-40h]
  int v9; // [rsp+14h] [rbp-34h] BYREF
  const char *v10; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = j__strlen("simple ddg dot graph");
  qword_2CB28E0 = (__int64)&unk_2CB28F0;
  v3 = v2;
  qword_2CB28B0 = 0;
  qword_2CB28B8 = 0;
  qword_2CB28C0 = 0;
  qword_2CB28A0 = (__int64)&off_2C4B8B0;
  qword_2CB28A8 = (unsigned int)qword_2CB28A8 & 0x80000000;
  qword_2CB28E8 = 0x100000000LL;
  qword_2CB28C8 = 0;
  qword_2CB28D0 = 0;
  qword_2CB28D8 = 0;
  qword_2CB28F8 = (__int64)&unk_2CB2910;
  qword_2CB2900 = 1;
  dword_2CB2908 = 0;
  byte_2CB290C = 1;
  v4 = sub_21ED2B0("simple ddg dot graph", a2);
  v5 = (unsigned int)qword_2CB28E8;
  v6 = (unsigned int)qword_2CB28E8 + 1LL;
  if ( v6 > HIDWORD(qword_2CB28E8) )
  {
    v8 = v4;
    sub_22134E0((char *)&unk_2CB28F0 - 16, &unk_2CB28F0, v6, 8);
    v5 = (unsigned int)qword_2CB28E8;
    v4 = v8;
  }
  *(_QWORD *)(qword_2CB28E0 + 8 * v5) = v4;
  word_2CB2928 = 0;
  xmmword_2CB2948 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB28E8) = qword_2CB28E8 + 1;
  qword_2CB2920 = (__int64)off_2C474E8;
  byte_2CB2918 = 0;
  qword_2CB28A0 = (__int64)off_2C4B848;
  qword_2CB2930 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB28A0, "dot-ddg-only", 12);
  qword_2CB28C8 = v3;
  BYTE2(qword_2CB28A8) = BYTE2(qword_2CB28A8) & 0x9F | 0x20;
  qword_2CB28C0 = (__int64)"simple ddg dot graph";
  sub_21F4400(&qword_2CB28A0);
  __cxa_atexit(sub_1FEA450, &qword_2CB28A0, &off_2AFC540);
  v11[0] = "The prefix used for the DDG dot file names.";
  v11[1] = j__strlen("The prefix used for the DDG dot file names.");
  v10 = "ddg";
  v9 = 1;
  sub_1FEE8B0(&unk_2CB27A0, "dot-ddg-filename-prefix", &v10, &v9, v11);
  return __cxa_atexit(sub_1FC95A0, &unk_2CB27A0, &off_2AFC540);
}

