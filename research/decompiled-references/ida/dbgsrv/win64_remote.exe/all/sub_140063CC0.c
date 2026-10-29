/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063CC0
// Address: 0x0000000140063CC0

//----- (0000000140063CC0) ----------------------------------------------------
__int64 sub_140063CC0()
{
  return *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 144LL;
}
// 1400CC020: using guessed type int TlsIndex;
