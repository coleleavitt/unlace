/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C920
// Address: 0x0045C920

//----- (0045C920) --------------------------------------------------------
int sub_45C920()
{
  return *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 84;
}
// 4B783C: using guessed type int TlsIndex;
