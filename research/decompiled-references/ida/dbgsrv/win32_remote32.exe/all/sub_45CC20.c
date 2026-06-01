/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CC20
// Address: 0x0045CC20

//----- (0045CC20) --------------------------------------------------------
int __stdcall sub_45CC20(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 == -1 )
    return *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 132);
  *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 132) = a1;
  return result;
}
// 4B783C: using guessed type int TlsIndex;
