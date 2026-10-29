char *__fastcall sub_333CC0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  char *result; // rax
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD5110 = 0;
  qword_2CD5118 = 0;
  qword_2CD5120 = 0;
  qword_2CD5100 = (__int64)&off_2C4B8B0;
  qword_2CD5108 = (unsigned int)qword_2CD5108 & 0x80000000;
  qword_2CD5148 = 0x100000000LL;
  qword_2CD5128 = 0;
  qword_2CD5130 = 0;
  qword_2CD5138 = 0;
  qword_2CD5140 = (__int64)&unk_2CD5150;
  qword_2CD5158 = (__int64)&unk_2CD5170;
  qword_2CD5160 = 1;
  dword_2CD5168 = 0;
  byte_2CD516C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD5148;
  v3 = (unsigned int)qword_2CD5148 + 1LL;
  if ( v3 > HIDWORD(qword_2CD5148) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD5150 - 16, &unk_2CD5150, v3, 8);
    v2 = (unsigned int)qword_2CD5148;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD5140 + 8 * v2) = v1;
  word_2CD5188 = 0;
  xmmword_2CD51A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD5148) = qword_2CD5148 + 1;
  qword_2CD5180 = (__int64)off_2C474E8;
  byte_2CD5178 = 0;
  qword_2CD5100 = (__int64)off_2C4B848;
  qword_2CD5190 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD5100, "disable-bitcode-version-upgrade", 31);
  qword_2CD5128 = 54;
  BYTE2(qword_2CD5108) = BYTE2(qword_2CD5108) & 0x9F | 0x20;
  qword_2CD5120 = (__int64)"Disable automatic bitcode upgrade for version mismatch";
  sub_21F4400(&qword_2CD5100);
  __cxa_atexit(sub_1FEA450, &qword_2CD5100, &off_2AFC540);
  result = getenv("LLVM_OVERRIDE_PRODUCER");
  if ( !result )
    result = a2115;
  qword_2CD50E8 = (__int64)result;
  return result;
}

