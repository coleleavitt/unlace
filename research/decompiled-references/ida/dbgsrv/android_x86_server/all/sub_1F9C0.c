/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F9C0
// Address: 0x0001F9C0

//----- (0001F9C0) --------------------------------------------------------
size_t sub_1F9C0()
{
  size_t result; // eax
  int v1; // ecx

  result = qgetenv("IDA_USE_LIBTHREAD_DB", 0);
  if ( (_BYTE)result || (result = sub_1FA20(), v1 = 2, result != 1) )
  {
    v1 = 3;
    if ( !byte_13BCD8 )
      byte_13BCD8 = 1;
  }
  dword_13BCDC = v1;
  return result;
}
// 13BCD8: using guessed type char byte_13BCD8;
// 13BCDC: using guessed type int dword_13BCDC;
