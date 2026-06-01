/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A3F0
// Address: 0x0046A3F0

//----- (0046A3F0) --------------------------------------------------------
char __usercall sub_46A3F0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  char result; // al

  result = sub_46A454(a1, a3, 0);
  if ( result )
  {
    if ( sub_46B293((_DWORD **)(a1 + 1096), a2, a3, *(_BYTE *)(a1 + 49)) )
      ++*(_DWORD *)(a1 + 24);
    else
      *(_DWORD *)(a1 + 24) = -1;
    return 1;
  }
  return result;
}
