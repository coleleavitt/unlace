int __fastcall sub_2F8270(__int64 a1, __int64 a2)
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
  qword_2CDC800 = (__int64)&unk_2CDC810;
  v3 = v2;
  qword_2CDC7D0 = 0;
  qword_2CDC7D8 = 0;
  qword_2CDC7E0 = 0;
  qword_2CDC7C0 = (__int64)&off_2C758B0;
  qword_2CDC7C8 = (unsigned int)qword_2CDC7C8 & 0x80000000;
  qword_2CDC808 = 0x100000000LL;
  qword_2CDC7E8 = 0;
  qword_2CDC7F0 = 0;
  qword_2CDC7F8 = 0;
  qword_2CDC818 = (__int64)&unk_2CDC830;
  qword_2CDC820 = 1;
  dword_2CDC828 = 0;
  byte_2CDC82C = 1;
  v4 = sub_2210FF0("simple ddg dot graph", a2);
  v5 = (unsigned int)qword_2CDC808;
  v6 = (unsigned int)qword_2CDC808 + 1LL;
  if ( v6 > HIDWORD(qword_2CDC808) )
  {
    v8 = v4;
    sub_2237220((char *)&unk_2CDC810 - 16, &unk_2CDC810, v6, 8);
    v5 = (unsigned int)qword_2CDC808;
    v4 = v8;
  }
  *(_QWORD *)(qword_2CDC800 + 8 * v5) = v4;
  word_2CDC848 = 0;
  xmmword_2CDC868 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDC808) = qword_2CDC808 + 1;
  qword_2CDC840 = (__int64)off_2C714E8;
  byte_2CDC838 = 0;
  qword_2CDC7C0 = (__int64)off_2C75848;
  qword_2CDC850 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDC7C0, "dot-ddg-only", 12);
  qword_2CDC7E8 = v3;
  BYTE2(qword_2CDC7C8) = BYTE2(qword_2CDC7C8) & 0x9F | 0x20;
  qword_2CDC7E0 = (__int64)"simple ddg dot graph";
  sub_2218140(&qword_2CDC7C0);
  __cxa_atexit(sub_200E190, &qword_2CDC7C0, &off_2B25620);
  v11[0] = "The prefix used for the DDG dot file names.";
  v11[1] = j__strlen("The prefix used for the DDG dot file names.");
  v10 = "ddg";
  v9 = 1;
  sub_20125F0(&unk_2CDC6C0, "dot-ddg-filename-prefix", &v10, &v9, v11);
  return __cxa_atexit(sub_1FED2E0, &unk_2CDC6C0, &off_2B25620);
}
