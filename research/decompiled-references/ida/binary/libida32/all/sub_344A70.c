int sub_344A70()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("LoopVersioningLICM's minimum allowed percentage of possible invariant instructions per loop");
  qword_2CDDB10 = 0;
  v1 = v0;
  qword_2CDDB18 = 0;
  qword_2CDDB20 = 0;
  qword_2CDDB00 = (__int64)&off_2C4B8B0;
  qword_2CDDB08 = (unsigned int)qword_2CDDB08 & 0x80000000;
  qword_2CDDB48 = 0x100000000LL;
  qword_2CDDB28 = 0;
  qword_2CDDB30 = 0;
  qword_2CDDB38 = 0;
  qword_2CDDB40 = (__int64)&unk_2CDDB50;
  qword_2CDDB58 = (__int64)&unk_2CDDB70;
  qword_2CDDB60 = 1;
  dword_2CDDB68 = 0;
  byte_2CDDB6C = 1;
  v2 = sub_21ED2B0("LoopVersioningLICM's minimum allowed percentage of possible invariant instructions per loop");
  v3 = (unsigned int)qword_2CDDB48;
  v4 = (unsigned int)qword_2CDDB48 + 1LL;
  if ( v4 > HIDWORD(qword_2CDDB48) )
  {
    v11 = v2;
    sub_22134E0((char *)&unk_2CDDB50 - 16, &unk_2CDDB50, v4, 8);
    v3 = (unsigned int)qword_2CDDB48;
    v2 = v11;
  }
  *(_QWORD *)(qword_2CDDB40 + 8 * v3) = v2;
  xmmword_2CDDBA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E0C0);
  LODWORD(qword_2CDDB48) = qword_2CDDB48 + 1;
  qword_2CDDB80 = (__int64)off_2C479C8;
  dword_2CDDB78 = 0;
  byte_2CDDB8C = 0;
  qword_2CDDB00 = (__int64)off_2C479E8;
  dword_2CDDB88 = 0;
  qword_2CDDB90 = (__int64)off_2BC0C88;
  sub_21F3510(&qword_2CDDB00, "licm-versioning-invariant-threshold", 35);
  qword_2CDDB20 = (__int64)"LoopVersioningLICM's minimum allowed percentage of possible invariant instructions per loop";
  dword_2CDDB78 = 1103626240;
  dword_2CDDB88 = 1103626240;
  qword_2CDDB28 = v1;
  BYTE2(qword_2CDDB08) = BYTE2(qword_2CDDB08) & 0x9F | 0x20;
  byte_2CDDB8C = 1;
  sub_21F4400(&qword_2CDDB00);
  __cxa_atexit(sub_1FEEED0, &qword_2CDDB00, &off_2AFC540);
  v5 = j__strlen("LoopVersioningLICM's threshold for maximum allowed loop nest/depth");
  byte_2CDDAAC = 1;
  qword_2CDDA50 = 0;
  v6 = v5;
  qword_2CDDA40 = (__int64)&off_2C4B8B0;
  qword_2CDDA48 = (unsigned int)qword_2CDDA48 & 0x80000000;
  qword_2CDDA88 = 0x100000000LL;
  qword_2CDDA58 = 0;
  qword_2CDDA60 = 0;
  qword_2CDDA68 = 0;
  qword_2CDDA70 = 0;
  qword_2CDDA78 = 0;
  qword_2CDDA80 = (__int64)&unk_2CDDA90;
  qword_2CDDA98 = (__int64)&unk_2CDDAB0;
  qword_2CDDAA0 = 1;
  dword_2CDDAA8 = 0;
  v7 = sub_21ED2B0("LoopVersioningLICM's threshold for maximum allowed loop nest/depth");
  v8 = (unsigned int)qword_2CDDA88;
  v9 = (unsigned int)qword_2CDDA88 + 1LL;
  if ( v9 > HIDWORD(qword_2CDDA88) )
  {
    v12 = v7;
    sub_22134E0((char *)&unk_2CDDA90 - 16, &unk_2CDDA90, v9, 8);
    v8 = (unsigned int)qword_2CDDA88;
    v7 = v12;
  }
  *(_QWORD *)(qword_2CDDA80 + 8 * v8) = v7;
  xmmword_2CDDAE8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CDDA88) = qword_2CDDA88 + 1;
  qword_2CDDAC0 = (__int64)off_2C472D0;
  dword_2CDDAB8 = 0;
  byte_2CDDACC = 0;
  qword_2CDDA40 = (__int64)off_2C4B710;
  dword_2CDDAC8 = 0;
  qword_2CDDAD0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CDDA40, "licm-versioning-max-depth-threshold", 35);
  qword_2CDDA68 = v6;
  qword_2CDDA60 = (__int64)"LoopVersioningLICM's threshold for maximum allowed loop nest/depth";
  dword_2CDDAB8 = 2;
  byte_2CDDACC = 1;
  dword_2CDDAC8 = 2;
  BYTE2(qword_2CDDA48) = BYTE2(qword_2CDDA48) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDDA40);
  return __cxa_atexit(sub_1FC9520, &qword_2CDDA40, &off_2AFC540);
}

