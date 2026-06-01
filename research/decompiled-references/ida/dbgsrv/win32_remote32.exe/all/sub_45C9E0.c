/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C9E0
// Address: 0x0045C9E0

//----- (0045C9E0) --------------------------------------------------------
int sub_45C9E0()
{
  return *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 132);
}
// 4B783C: using guessed type int TlsIndex;
