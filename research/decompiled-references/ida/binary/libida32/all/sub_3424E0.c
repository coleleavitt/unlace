int sub_3424E0()
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
  qword_2CDBDB0 = 0;
  v1 = v0;
  qword_2CDBDB8 = 0;
  qword_2CDBDC0 = 0;
  qword_2CDBDA0 = (__int64)&off_2C4B8B0;
  qword_2CDBDA8 = (unsigned int)qword_2CDBDA8 & 0x80000000;
  qword_2CDBDE8 = 0x100000000LL;
  qword_2CDBDC8 = 0;
  qword_2CDBDD0 = 0;
  qword_2CDBDD8 = 0;
  qword_2CDBDE0 = (__int64)&unk_2CDBDF0;
  qword_2CDBDF8 = (__int64)&unk_2CDBE10;
  qword_2CDBE00 = 1;
  dword_2CDBE08 = 0;
  byte_2CDBE0C = 1;
  v2 = sub_21ED2B0("The default maximum header size for automatic loop rotation");
  v3 = (unsigned int)qword_2CDBDE8;
  v4 = (unsigned int)qword_2CDBDE8 + 1LL;
  if ( v4 > HIDWORD(qword_2CDBDE8) )
  {
    v11 = v2;
    sub_22134E0((char *)&unk_2CDBDF0 - 16, &unk_2CDBDF0, v4, 8);
    v3 = (unsigned int)qword_2CDBDE8;
    v2 = v11;
  }
  *(_QWORD *)(qword_2CDBDE0 + 8 * v3) = v2;
  xmmword_2CDBE48 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CDBDE8) = qword_2CDBDE8 + 1;
  qword_2CDBE20 = (__int64)off_2C472D0;
  dword_2CDBE18 = 0;
  byte_2CDBE2C = 0;
  qword_2CDBDA0 = (__int64)off_2C4B710;
  dword_2CDBE28 = 0;
  qword_2CDBE30 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CDBDA0, "rotation-max-header-size", 24);
  dword_2CDBE18 = 16;
  byte_2CDBE2C = 1;
  qword_2CDBDC8 = v1;
  dword_2CDBE28 = 16;
  BYTE2(qword_2CDBDA8) = BYTE2(qword_2CDBDA8) & 0x9F | 0x20;
  qword_2CDBDC0 = (__int64)"The default maximum header size for automatic loop rotation";
  sub_21F4400(&qword_2CDBDA0);
  __cxa_atexit(sub_1FC9520, &qword_2CDBDA0, &off_2AFC540);
  v5 = j__strlen("Run loop-rotation in the prepare-for-lto stage. This option should be used for testing only.");
  byte_2CDBD4C = 1;
  qword_2CDBCF0 = 0;
  v6 = v5;
  qword_2CDBCE0 = (__int64)&off_2C4B8B0;
  qword_2CDBCE8 = (unsigned int)qword_2CDBCE8 & 0x80000000;
  qword_2CDBD28 = 0x100000000LL;
  qword_2CDBCF8 = 0;
  qword_2CDBD00 = 0;
  qword_2CDBD08 = 0;
  qword_2CDBD10 = 0;
  qword_2CDBD18 = 0;
  qword_2CDBD20 = (__int64)&unk_2CDBD30;
  qword_2CDBD38 = (__int64)&unk_2CDBD50;
  qword_2CDBD40 = 1;
  dword_2CDBD48 = 0;
  v7 = sub_21ED2B0("Run loop-rotation in the prepare-for-lto stage. This option should be used for testing only.");
  v8 = (unsigned int)qword_2CDBD28;
  v9 = (unsigned int)qword_2CDBD28 + 1LL;
  if ( v9 > HIDWORD(qword_2CDBD28) )
  {
    v12 = v7;
    sub_22134E0((char *)&unk_2CDBD30 - 16, &unk_2CDBD30, v9, 8);
    v8 = (unsigned int)qword_2CDBD28;
    v7 = v12;
  }
  *(_QWORD *)(qword_2CDBD20 + 8 * v8) = v7;
  word_2CDBD68 = 0;
  xmmword_2CDBD88 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CDBD28) = qword_2CDBD28 + 1;
  qword_2CDBD60 = (__int64)off_2C474E8;
  byte_2CDBD58 = 0;
  qword_2CDBCE0 = (__int64)off_2C4B848;
  qword_2CDBD70 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CDBCE0, "rotation-prepare-for-lto", 24);
  word_2CDBD68 = 256;
  qword_2CDBD08 = v6;
  byte_2CDBD58 = 0;
  BYTE2(qword_2CDBCE8) = BYTE2(qword_2CDBCE8) & 0x9F | 0x20;
  qword_2CDBD00 = (__int64)"Run loop-rotation in the prepare-for-lto stage. This option should be used for testing only.";
  sub_21F4400(&qword_2CDBCE0);
  return __cxa_atexit(sub_1FEA450, &qword_2CDBCE0, &off_2AFC540);
}

