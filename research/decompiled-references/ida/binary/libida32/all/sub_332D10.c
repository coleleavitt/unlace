int sub_332D10()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating");
  qword_2CD4A40 = (__int64)&unk_2CD4A50;
  v1 = v0;
  qword_2CD4A10 = 0;
  qword_2CD4A18 = 0;
  qword_2CD4A20 = 0;
  qword_2CD4A00 = (__int64)&off_2C4B8B0;
  qword_2CD4A08 = (unsigned int)qword_2CD4A08 & 0x80000000;
  qword_2CD4A48 = 0x100000000LL;
  qword_2CD4A28 = 0;
  qword_2CD4A30 = 0;
  qword_2CD4A38 = 0;
  qword_2CD4A58 = (__int64)&unk_2CD4A70;
  qword_2CD4A60 = 1;
  dword_2CD4A68 = 0;
  byte_2CD4A6C = 1;
  v2 = sub_21ED2B0("Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating");
  v3 = (unsigned int)qword_2CD4A48;
  v4 = (unsigned int)qword_2CD4A48 + 1LL;
  if ( v4 > HIDWORD(qword_2CD4A48) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CD4A50 - 16, &unk_2CD4A50, v4, 8);
    v3 = (unsigned int)qword_2CD4A48;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CD4A40 + 8 * v3) = v2;
  word_2CD4A88 = 0;
  xmmword_2CD4AA8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD4A48) = qword_2CD4A48 + 1;
  qword_2CD4A80 = (__int64)off_2C474E8;
  byte_2CD4A78 = 0;
  qword_2CD4A00 = (__int64)off_2C4B848;
  qword_2CD4A90 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD4A00, "verify-noalias-scope-decl-dom", 29);
  word_2CD4A88 = 256;
  qword_2CD4A28 = v1;
  byte_2CD4A78 = 0;
  BYTE2(qword_2CD4A08) = BYTE2(qword_2CD4A08) & 0x9F | 0x20;
  qword_2CD4A20 = (__int64)"Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating";
  sub_21F4400(&qword_2CD4A00);
  return __cxa_atexit(sub_1FEA450, &qword_2CD4A00, &off_2AFC540);
}

