/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471924
// Address: 0x00471924

//----- (00471924) --------------------------------------------------------
char __usercall sub_471924@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( *a1 && a1[6] )
    return 1;
  *sub_46B984() = 22;
  sub_467EF4(a2, a3);
  return 0;
}
