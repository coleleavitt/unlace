char *__fastcall sub_5F4240(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  char *result; // rax

  qword_4B32B70 = 0;
  qword_4B32B78 = 0;
  qword_4B32B80 = 0;
  qword_4B32B60 = (__int64)&off_4A6E058;
  qword_4B32B68 = (unsigned int)qword_4B32B68 & 0x80000000;
  qword_4B32B88 = 0;
  qword_4B32BA8 = 0x100000000LL;
  qword_4B32B90 = 0;
  qword_4B32B98 = 0;
  qword_4B32BA0 = (__int64)&qword_4B32BB0;
  qword_4B32BB8 = (__int64)&qword_4B32BD0;
  qword_4B32BC0 = 1;
  dword_4B32BC8 = 0;
  byte_4B32BCC = 1;
  v1 = sub_259AC30(a1, &qword_4B32BB0);
  v2 = (unsigned int)qword_4B32BA8;
  v3 = (unsigned int)qword_4B32BA8 + 1LL;
  if ( HIDWORD(qword_4B32BA8) < v3 )
  {
    sub_25D6060(&qword_4B32BB0 - 2, &qword_4B32BB0, v3, 8);
    v2 = (unsigned int)qword_4B32BA8;
  }
  *(_QWORD *)(qword_4B32BA0 + 8 * v2) = v1;
  word_4B32BE8 = 0;
  xmmword_4B32BF8 = 0;
  LODWORD(qword_4B32BA8) = qword_4B32BA8 + 1;
  qword_4B32BE0 = (__int64)&off_4A64730;
  byte_4B32BD8 = 0;
  qword_4B32B60 = (__int64)off_4A6DFF0;
  qword_4B32BF0 = (__int64)off_49D9168;
  xmmword_4B32C08 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F1E70),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B32B60, "disable-bitcode-version-upgrade", 31);
  qword_4B32B88 = 54;
  BYTE2(qword_4B32B68) = BYTE2(qword_4B32B68) & 0x9F | 0x20;
  qword_4B32B80 = (__int64)"Disable automatic bitcode upgrade for version mismatch";
  sub_259EC40(&qword_4B32B60);
  __cxa_atexit(sub_1F6C9D0, &qword_4B32B60, &off_47CFE00);
  result = getenv("LLVM_OVERRIDE_PRODUCER");
  if ( !result )
    result = a2010;
  qword_4B32B58 = (__int64)result;
  return result;
}

