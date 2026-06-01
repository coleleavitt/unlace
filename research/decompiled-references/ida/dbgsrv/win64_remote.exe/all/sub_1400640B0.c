/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400640B0
// Address: 0x00000001400640B0

//----- (00000001400640B0) ----------------------------------------------------
__int64 __fastcall sub_1400640B0(unsigned int a1)
{
  if ( a1 == -1 )
    return *(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 264LL);
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 264LL) = a1;
  return a1;
}
// 1400CC020: using guessed type int TlsIndex;
