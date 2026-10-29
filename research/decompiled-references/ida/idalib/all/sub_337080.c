char *__fastcall sub_337080(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  char *result; // rax
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CFF030 = 0;
  qword_2CFF038 = 0;
  qword_2CFF040 = 0;
  qword_2CFF020 = (__int64)&off_2C758B0;
  qword_2CFF028 = (unsigned int)qword_2CFF028 & 0x80000000;
  qword_2CFF068 = 0x100000000LL;
  qword_2CFF048 = 0;
  qword_2CFF050 = 0;
  qword_2CFF058 = 0;
  qword_2CFF060 = (__int64)&unk_2CFF070;
  qword_2CFF078 = (__int64)&unk_2CFF090;
  qword_2CFF080 = 1;
  dword_2CFF088 = 0;
  byte_2CFF08C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2CFF068;
  v3 = (unsigned int)qword_2CFF068 + 1LL;
  if ( v3 > HIDWORD(qword_2CFF068) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2CFF070 - 16, &unk_2CFF070, v3, 8);
    v2 = (unsigned int)qword_2CFF068;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CFF060 + 8 * v2) = v1;
  word_2CFF0A8 = 0;
  xmmword_2CFF0C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFF068) = qword_2CFF068 + 1;
  qword_2CFF0A0 = (__int64)off_2C714E8;
  byte_2CFF098 = 0;
  qword_2CFF020 = (__int64)off_2C75848;
  qword_2CFF0B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CFF020, "disable-bitcode-version-upgrade", 31);
  qword_2CFF048 = 54;
  BYTE2(qword_2CFF028) = BYTE2(qword_2CFF028) & 0x9F | 0x20;
  qword_2CFF040 = (__int64)"Disable automatic bitcode upgrade for version mismatch";
  sub_2218140(&qword_2CFF020);
  __cxa_atexit(sub_200E190, &qword_2CFF020, &off_2B25620);
  result = getenv("LLVM_OVERRIDE_PRODUCER");
  if ( !result )
    result = a2115;
  qword_2CFF008 = (__int64)result;
  return result;
}
