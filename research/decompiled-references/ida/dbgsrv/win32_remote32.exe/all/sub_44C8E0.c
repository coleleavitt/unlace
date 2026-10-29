/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C8E0
// Address: 0x0044C8E0

//----- (0044C8E0) --------------------------------------------------------
unsigned int __usercall sub_44C8E0@<eax>(char a1@<bl>, int a2@<edi>, unsigned __int8 *a3, int a4)
{
  unsigned int result; // eax

  result = sub_469088(a1, a2, a3);
  *(_WORD *)(a4 + 64) = result;
  return result;
}
