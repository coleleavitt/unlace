/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412170
// Address: 0x00412170

//----- (00412170) --------------------------------------------------------
bool __userpurge sub_412170@<al>(int a1@<ecx>, __m128i a2@<xmm0>, char *lpBaseAddress, _BYTE *lpBuffer, SIZE_T nSize)
{
  char *v6; // eax
  _BYTE Buffer[12]; // [esp+Ch] [ebp-124h] BYREF
  int v9; // [esp+18h] [ebp-118h]
  __m128i v10[7]; // [esp+34h] [ebp-FCh] BYREF
  int v11; // [esp+ACh] [ebp-84h]

  if ( sub_412370(a1, a2, lpBaseAddress, v10) == -1
    || !v11
    || sub_40C190(a1, a2, &lpBaseAddress[v11], Buffer, 0x28u, 0, 0) != 40 )
  {
    return 0;
  }
  v6 = &lpBaseAddress[v9];
  *lpBuffer = 0;
  sub_40C190(a1, a2, v6, lpBuffer, nSize, 0, 0);
  return *lpBuffer != 0;
}
