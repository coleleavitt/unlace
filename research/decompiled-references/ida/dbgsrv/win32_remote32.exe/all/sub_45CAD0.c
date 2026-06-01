/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CAD0
// Address: 0x0045CAD0

//----- (0045CAD0) --------------------------------------------------------
int __stdcall sub_45CAD0(unsigned int a1, int a2)
{
  if ( a1 >= 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(480);
  }
  *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4 * a1 + 8) = a2;
  return a2;
}
// 4B70F0: using guessed type char byte_4B70F0;
// 4B783C: using guessed type int TlsIndex;
