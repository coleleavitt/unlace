int sub_3458A0()
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

  v0 = j__strlen("The default maximum header size for automatic loop rotation");
  qword_2D05CD0 = 0;
  v1 = v0;
  qword_2D05CD8 = 0;
  qword_2D05CE0 = 0;
  qword_2D05CC0 = (__int64)&off_2C758B0;
  qword_2D05CC8 = (unsigned int)qword_2D05CC8 & 0x80000000;
  qword_2D05D08 = 0x100000000LL;
  qword_2D05CE8 = 0;
  qword_2D05CF0 = 0;
  qword_2D05CF8 = 0;
  qword_2D05D00 = (__int64)&unk_2D05D10;
  qword_2D05D18 = (__int64)&unk_2D05D30;
  qword_2D05D20 = 1;
  dword_2D05D28 = 0;
  byte_2D05D2C = 1;
  v2 = sub_2210FF0("The default maximum header size for automatic loop rotation");
  v3 = (unsigned int)qword_2D05D08;
  v4 = (unsigned int)qword_2D05D08 + 1LL;
  if ( v4 > HIDWORD(qword_2D05D08) )
  {
    v11 = v2;
    sub_2237220((char *)&unk_2D05D10 - 16, &unk_2D05D10, v4, 8);
    v3 = (unsigned int)qword_2D05D08;
    v2 = v11;
  }
  *(_QWORD *)(qword_2D05D00 + 8 * v3) = v2;
  xmmword_2D05D68 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D05D08) = qword_2D05D08 + 1;
  qword_2D05D40 = (__int64)off_2C712D0;
  dword_2D05D38 = 0;
  byte_2D05D4C = 0;
  qword_2D05CC0 = (__int64)off_2C75710;
  dword_2D05D48 = 0;
  qword_2D05D50 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D05CC0, "rotation-max-header-size", 24);
  dword_2D05D38 = 16;
  byte_2D05D4C = 1;
  qword_2D05CE8 = v1;
  dword_2D05D48 = 16;
  BYTE2(qword_2D05CC8) = BYTE2(qword_2D05CC8) & 0x9F | 0x20;
  qword_2D05CE0 = (__int64)"The default maximum header size for automatic loop rotation";
  sub_2218140(&qword_2D05CC0);
  __cxa_atexit(sub_1FED260, &qword_2D05CC0, &off_2B25620);
  v5 = j__strlen("Run loop-rotation in the prepare-for-lto stage. This option should be used for testing only.");
  byte_2D05C6C = 1;
  qword_2D05C10 = 0;
  v6 = v5;
  qword_2D05C00 = (__int64)&off_2C758B0;
  qword_2D05C08 = (unsigned int)qword_2D05C08 & 0x80000000;
  qword_2D05C48 = 0x100000000LL;
  qword_2D05C18 = 0;
  qword_2D05C20 = 0;
  qword_2D05C28 = 0;
  qword_2D05C30 = 0;
  qword_2D05C38 = 0;
  qword_2D05C40 = (__int64)&unk_2D05C50;
  qword_2D05C58 = (__int64)&unk_2D05C70;
  qword_2D05C60 = 1;
  dword_2D05C68 = 0;
  v7 = sub_2210FF0("Run loop-rotation in the prepare-for-lto stage. This option should be used for testing only.");
  v8 = (unsigned int)qword_2D05C48;
  v9 = (unsigned int)qword_2D05C48 + 1LL;
  if ( v9 > HIDWORD(qword_2D05C48) )
  {
    v12 = v7;
    sub_2237220((char *)&unk_2D05C50 - 16, &unk_2D05C50, v9, 8);
    v8 = (unsigned int)qword_2D05C48;
    v7 = v12;
  }
  *(_QWORD *)(qword_2D05C40 + 8 * v8) = v7;
  word_2D05C88 = 0;
  xmmword_2D05CA8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D05C48) = qword_2D05C48 + 1;
  qword_2D05C80 = (__int64)off_2C714E8;
  byte_2D05C78 = 0;
  qword_2D05C00 = (__int64)off_2C75848;
  qword_2D05C90 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D05C00, "rotation-prepare-for-lto", 24);
  word_2D05C88 = 256;
  qword_2D05C28 = v6;
  byte_2D05C78 = 0;
  BYTE2(qword_2D05C08) = BYTE2(qword_2D05C08) & 0x9F | 0x20;
  qword_2D05C20 = (__int64)"Run loop-rotation in the prepare-for-lto stage. This option should be used for testing only.";
  sub_2218140(&qword_2D05C00);
  return __cxa_atexit(sub_200E190, &qword_2D05C00, &off_2B25620);
}
