int sub_34C150()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Aggregate arguments to code-extracted functions");
  qword_2CE1DC0 = (__int64)&unk_2CE1DD0;
  v1 = v0;
  qword_2CE1D90 = 0;
  qword_2CE1D98 = 0;
  qword_2CE1DA0 = 0;
  qword_2CE1D80 = (__int64)&off_2C4B8B0;
  qword_2CE1D88 = (unsigned int)qword_2CE1D88 & 0x80000000;
  qword_2CE1DC8 = 0x100000000LL;
  qword_2CE1DA8 = 0;
  qword_2CE1DB0 = 0;
  qword_2CE1DB8 = 0;
  qword_2CE1DD8 = (__int64)&unk_2CE1DF0;
  qword_2CE1DE0 = 1;
  dword_2CE1DE8 = 0;
  byte_2CE1DEC = 1;
  v2 = sub_21ED2B0("Aggregate arguments to code-extracted functions");
  v3 = (unsigned int)qword_2CE1DC8;
  v4 = (unsigned int)qword_2CE1DC8 + 1LL;
  if ( v4 > HIDWORD(qword_2CE1DC8) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CE1DD0 - 16, &unk_2CE1DD0, v4, 8);
    v3 = (unsigned int)qword_2CE1DC8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CE1DC0 + 8 * v3) = v2;
  word_2CE1E08 = 0;
  xmmword_2CE1E28 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE1DC8) = qword_2CE1DC8 + 1;
  qword_2CE1E00 = (__int64)off_2C474E8;
  byte_2CE1DF8 = 0;
  qword_2CE1D80 = (__int64)off_2C4B848;
  qword_2CE1E10 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE1D80, "aggregate-extracted-args", 24);
  qword_2CE1DA8 = v1;
  BYTE2(qword_2CE1D88) = BYTE2(qword_2CE1D88) & 0x9F | 0x20;
  qword_2CE1DA0 = (__int64)"Aggregate arguments to code-extracted functions";
  sub_21F4400(&qword_2CE1D80);
  return __cxa_atexit(sub_1FEA450, &qword_2CE1D80, &off_2AFC540);
}

