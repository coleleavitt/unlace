/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064080
// Address: 0x0000000140064080

//----- (0000000140064080) ----------------------------------------------------
__int64 __fastcall sub_140064080(char a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl

  v1 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v2 = *(_BYTE *)(v1 + 268);
  *(_BYTE *)(v1 + 268) = a1;
  return v2;
}
// 1400CC020: using guessed type int TlsIndex;
