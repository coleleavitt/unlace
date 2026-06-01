/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C940
// Address: 0x0045C940

//----- (0045C940) --------------------------------------------------------
char sub_45C940()
{
  return *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 136);
}
// 4B783C: using guessed type int TlsIndex;
