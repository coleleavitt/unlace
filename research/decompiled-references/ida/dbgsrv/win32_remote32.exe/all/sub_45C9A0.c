/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C9A0
// Address: 0x0045C9A0

//----- (0045C9A0) --------------------------------------------------------
int __stdcall sub_45C9A0(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(483);
  }
  return *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 12 * a1 + 24);
}
// 4B70F0: using guessed type char byte_4B70F0;
// 4B783C: using guessed type int TlsIndex;
