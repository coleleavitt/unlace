/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476AF9
// Address: 0x00476AF9

//----- (00476AF9) --------------------------------------------------------
int __usercall sub_476AF9@<eax>(int a1@<ebx>, int *a2@<edi>, void *a3@<esi>)
{
  int result; // eax

  result = dword_4B7A00;
  if ( !dword_4B7A00 )
  {
    if ( !dword_4B7A04 || sub_476B51(a1, a2, a3) && sub_476DFE() )
      return 0;
    else
      return dword_4B7A00;
  }
  return result;
}
// 4B7A00: using guessed type int dword_4B7A00;
