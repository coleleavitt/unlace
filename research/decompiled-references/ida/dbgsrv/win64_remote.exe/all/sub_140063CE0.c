/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063CE0
// Address: 0x0000000140063CE0

//----- (0000000140063CE0) ----------------------------------------------------
__int64 sub_140063CE0()
{
  return *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 168LL;
}
// 1400CC020: using guessed type int TlsIndex;
