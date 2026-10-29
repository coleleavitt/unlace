int sub_3360D0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating");
  qword_2CFE960 = (__int64)&unk_2CFE970;
  v1 = v0;
  qword_2CFE930 = 0;
  qword_2CFE938 = 0;
  qword_2CFE940 = 0;
  qword_2CFE920 = (__int64)&off_2C758B0;
  qword_2CFE928 = (unsigned int)qword_2CFE928 & 0x80000000;
  qword_2CFE968 = 0x100000000LL;
  qword_2CFE948 = 0;
  qword_2CFE950 = 0;
  qword_2CFE958 = 0;
  qword_2CFE978 = (__int64)&unk_2CFE990;
  qword_2CFE980 = 1;
  dword_2CFE988 = 0;
  byte_2CFE98C = 1;
  v2 = sub_2210FF0("Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating");
  v3 = (unsigned int)qword_2CFE968;
  v4 = (unsigned int)qword_2CFE968 + 1LL;
  if ( v4 > HIDWORD(qword_2CFE968) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CFE970 - 16, &unk_2CFE970, v4, 8);
    v3 = (unsigned int)qword_2CFE968;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CFE960 + 8 * v3) = v2;
  word_2CFE9A8 = 0;
  xmmword_2CFE9C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFE968) = qword_2CFE968 + 1;
  qword_2CFE9A0 = (__int64)off_2C714E8;
  byte_2CFE998 = 0;
  qword_2CFE920 = (__int64)off_2C75848;
  qword_2CFE9B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFE920, "verify-noalias-scope-decl-dom", 29);
  word_2CFE9A8 = 256;
  qword_2CFE948 = v1;
  byte_2CFE998 = 0;
  BYTE2(qword_2CFE928) = BYTE2(qword_2CFE928) & 0x9F | 0x20;
  qword_2CFE940 = (__int64)"Ensure that llvm.experimental.noalias.scope.decl for identical scopes are not dominating";
  sub_2218140(&qword_2CFE920);
  return __cxa_atexit(sub_200E190, &qword_2CFE920, &off_2B25620);
}
