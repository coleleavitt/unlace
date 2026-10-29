/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063C90
// Address: 0x0000000140063C90

//----- (0000000140063C90) ----------------------------------------------------
__int64 sub_140063C90()
{
  return *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 240LL;
}
// 1400CC020: using guessed type int TlsIndex;
