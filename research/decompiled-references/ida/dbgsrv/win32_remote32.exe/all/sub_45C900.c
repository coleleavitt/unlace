/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C900
// Address: 0x0045C900

//----- (0045C900) --------------------------------------------------------
int sub_45C900()
{
  return *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 72;
}
// 4B783C: using guessed type int TlsIndex;
