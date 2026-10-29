int sub_332FB0()
{
  size_t v0; // rax
  __int64 v1; // r12
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

  v0 = j__strlen("Use optimistic attributes describing 'as-if' properties of runtime calls.");
  qword_2CD4C10 = 0;
  v1 = v0;
  qword_2CD4C18 = 0;
  qword_2CD4C20 = 0;
  qword_2CD4C00 = (__int64)&off_2C4B8B0;
  qword_2CD4C08 = (unsigned int)qword_2CD4C08 & 0x80000000;
  qword_2CD4C48 = 0x100000000LL;
  qword_2CD4C28 = 0;
  qword_2CD4C30 = 0;
  qword_2CD4C38 = 0;
  qword_2CD4C40 = (__int64)&unk_2CD4C50;
  qword_2CD4C58 = (__int64)&unk_2CD4C70;
  qword_2CD4C60 = 1;
  dword_2CD4C68 = 0;
  byte_2CD4C6C = 1;
  v2 = sub_21ED2B0("Use optimistic attributes describing 'as-if' properties of runtime calls.");
  v3 = (unsigned int)qword_2CD4C48;
  v4 = (unsigned int)qword_2CD4C48 + 1LL;
  if ( v4 > HIDWORD(qword_2CD4C48) )
  {
    v13 = v2;
    sub_22134E0((char *)&unk_2CD4C50 - 16, &unk_2CD4C50, v4, 8);
    v3 = (unsigned int)qword_2CD4C48;
    v2 = v13;
  }
  *(_QWORD *)(qword_2CD4C40 + 8 * v3) = v2;
  word_2CD4C88 = 0;
  xmmword_2CD4CA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD4C48) = qword_2CD4C48 + 1;
  qword_2CD4C80 = (__int64)off_2C474E8;
  byte_2CD4C78 = 0;
  qword_2CD4C00 = (__int64)off_2C4B848;
  qword_2CD4C90 = (__int64)off_2BC0B68;
  v5 = j__strlen("openmp-ir-builder-optimistic-attributes");
  sub_21F3510(&qword_2CD4C00, "openmp-ir-builder-optimistic-attributes", v5);
  word_2CD4C88 = 256;
  qword_2CD4C28 = v1;
  byte_2CD4C78 = 0;
  BYTE2(qword_2CD4C08) = BYTE2(qword_2CD4C08) & 0x9F | 0x20;
  qword_2CD4C20 = (__int64)"Use optimistic attributes describing 'as-if' properties of runtime calls.";
  sub_21F4400(&qword_2CD4C00);
  __cxa_atexit(sub_1FEA450, &qword_2CD4C00, &off_2AFC540);
  v6 = j__strlen("Factor for the unroll threshold to account for code simplifications still taking place");
  byte_2CD4BAC = 1;
  qword_2CD4B50 = 0;
  v7 = v6;
  qword_2CD4B40 = (__int64)&off_2C4B8B0;
  qword_2CD4B48 = (unsigned int)qword_2CD4B48 & 0x80000000;
  qword_2CD4B88 = 0x100000000LL;
  qword_2CD4B58 = 0;
  qword_2CD4B60 = 0;
  qword_2CD4B68 = 0;
  qword_2CD4B70 = 0;
  qword_2CD4B78 = 0;
  qword_2CD4B80 = (__int64)&unk_2CD4B90;
  qword_2CD4B98 = (__int64)&unk_2CD4BB0;
  qword_2CD4BA0 = 1;
  dword_2CD4BA8 = 0;
  v8 = sub_21ED2B0("Factor for the unroll threshold to account for code simplifications still taking place");
  v9 = (unsigned int)qword_2CD4B88;
  v10 = (unsigned int)qword_2CD4B88 + 1LL;
  if ( v10 > HIDWORD(qword_2CD4B88) )
  {
    v14 = v8;
    sub_22134E0((char *)&unk_2CD4B90 - 16, &unk_2CD4B90, v10, 8);
    v9 = (unsigned int)qword_2CD4B88;
    v8 = v14;
  }
  *(_QWORD *)(qword_2CD4B80 + 8 * v9) = v8;
  xmmword_2CD4BF0 = (__int128)_mm_loadh_ps((const double *)off_2C4DC00);
  LODWORD(qword_2CD4B88) = qword_2CD4B88 + 1;
  qword_2CD4BC0 = (__int64)off_2C476B8;
  qword_2CD4BB8 = 0;
  byte_2CD4BD0 = 0;
  qword_2CD4B40 = (__int64)off_2C476D8;
  qword_2CD4BC8 = 0;
  qword_2CD4BD8 = (__int64)off_2BC0C58;
  v11 = j__strlen("openmp-ir-builder-unroll-threshold-factor");
  sub_21F3510(&qword_2CD4B40, "openmp-ir-builder-unroll-threshold-factor", v11);
  qword_2CD4B68 = v7;
  qword_2CD4BB8 = 0x3FF8000000000000LL;
  byte_2CD4BD0 = 1;
  BYTE2(qword_2CD4B48) = BYTE2(qword_2CD4B48) & 0x9F | 0x20;
  qword_2CD4B60 = (__int64)"Factor for the unroll threshold to account for code simplifications still taking place";
  qword_2CD4BC8 = 0x3FF8000000000000LL;
  sub_21F4400(&qword_2CD4B40);
  return __cxa_atexit(sub_1FEC5B0, &qword_2CD4B40, &off_2AFC540);
}

