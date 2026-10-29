/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D91AB
// Address: 0x000D91AB

//----- (000D91AB) --------------------------------------------------------
int __usercall sub_D91AB@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, _DWORD *a4)
{
  if ( byte_13E5D8 != 4 )
    abort();
  *a4 = a2;
  if ( (*(_BYTE *)(a1 + 99) & 0x40) != 0 )
    *(_BYTE *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 16) = a4;
  return a3;
}
// 13E5D8: using guessed type char byte_13E5D8;
