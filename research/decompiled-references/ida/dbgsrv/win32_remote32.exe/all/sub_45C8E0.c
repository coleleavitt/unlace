/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C8E0
// Address: 0x0045C8E0

//----- (0045C8E0) --------------------------------------------------------
int sub_45C8E0()
{
  return *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 120;
}
// 4B783C: using guessed type int TlsIndex;
