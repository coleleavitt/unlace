/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CBF0
// Address: 0x0045CBF0

//----- (0045CBF0) --------------------------------------------------------
char __stdcall sub_45CBF0(char a1)
{
  int v1; // edx
  char result; // al

  v1 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  result = *(_BYTE *)(v1 + 136);
  *(_BYTE *)(v1 + 136) = a1;
  return result;
}
// 4B783C: using guessed type int TlsIndex;
