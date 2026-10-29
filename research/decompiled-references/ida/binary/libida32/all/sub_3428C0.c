int __fastcall sub_3428C0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CDBE70 = 0;
  qword_2CDBE78 = 0;
  qword_2CDBE80 = 0;
  qword_2CDBE60 = (__int64)&off_2C4B8B0;
  qword_2CDBE68 = (unsigned int)qword_2CDBE68 & 0x80000000;
  qword_2CDBEA8 = 0x100000000LL;
  qword_2CDBE88 = 0;
  qword_2CDBE90 = 0;
  qword_2CDBE98 = 0;
  qword_2CDBEA0 = (__int64)&unk_2CDBEB0;
  qword_2CDBEB8 = (__int64)&unk_2CDBED0;
  qword_2CDBEC0 = 1;
  dword_2CDBEC8 = 0;
  byte_2CDBECC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CDBEA8;
  v3 = (unsigned int)qword_2CDBEA8 + 1LL;
  if ( v3 > HIDWORD(qword_2CDBEA8) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CDBEB0 - 16, &unk_2CDBEB0, v3, 8);
    v2 = (unsigned int)qword_2CDBEA8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CDBEA0 + 8 * v2) = v1;
  word_2CDBEE8 = 0;
  LODWORD(qword_2CDBEA8) = qword_2CDBEA8 + 1;
  xmmword_2CDBF08 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CDBEE0 = (__int64)off_2C474E8;
  byte_2CDBED8 = 0;
  qword_2CDBE60 = (__int64)off_2C4B848;
  qword_2CDBEF0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDBE60, "enable-loop-simplifycfg-term-folding", 36);
  byte_2CDBED8 = 1;
  word_2CDBEE8 = 257;
  sub_21F4400(&qword_2CDBE60);
  return __cxa_atexit(sub_1FEA450, &qword_2CDBE60, &off_2AFC540);
}

