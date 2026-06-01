/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A42A
// Address: 0x0046A42A

//----- (0046A42A) --------------------------------------------------------
char __usercall sub_46A42A@<al>(int a1@<ecx>, int a2@<edi>)
{
  char result; // al

  result = sub_46A4C1(a1, a2, 0);
  if ( result )
  {
    sub_46B251((int *)(a1 + 1096), *(_BYTE *)(a1 + 49), (_DWORD *)(a1 + 24));
    return 1;
  }
  return result;
}
