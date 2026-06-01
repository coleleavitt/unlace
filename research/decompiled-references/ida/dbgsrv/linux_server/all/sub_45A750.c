/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A750
// Address: 0x000000000045A750

//----- (000000000045A750) ----------------------------------------------------
const char *sub_45A750()
{
  const char *result; // rax
  void *v1; // rsi

  if ( byte_4C8308 )
  {
    result = s1;
    if ( (_QWORD)xmmword_4C82F8 )
      return (const char *)qword_4C82F0;
    return result;
  }
  if ( !(unsigned __int8)sub_4837D0((char *)"DEBUG_FILE_DIRECTORY", (__int64)&qword_4C82F0) )
    sub_4837D0("ELF_DEBUG_FILE_DIRECTORY", (__int64)&qword_4C82F0);
  if ( (unsigned __int64)xmmword_4C82F8 > 1 )
  {
    byte_4C8308 = 1;
    return (const char *)qword_4C82F0;
  }
  v1 = (void *)qword_4C82F0;
  if ( *((_QWORD *)&xmmword_4C82F8 + 1) <= 0xEu )
  {
    qword_4C82F0 = (__int64)sub_481540((__int64)&qword_4C82F0, (void *)qword_4C82F0, 0xFu, 1u);
    v1 = (void *)qword_4C82F0;
  }
  byte_4C8308 = 1;
  *(_QWORD *)&xmmword_4C82F8 = 15;
  qmemcpy(v1, "/usr/lib/debug", 14);
  *(_BYTE *)(qword_4C82F0 + 14) = 0;
  result = s1;
  if ( (_QWORD)xmmword_4C82F8 )
    return (const char *)qword_4C82F0;
  return result;
}
// 4C82F0: using guessed type __int64 qword_4C82F0;
// 4C82F8: using guessed type __int128 xmmword_4C82F8;
// 4C8308: using guessed type char byte_4C8308;
