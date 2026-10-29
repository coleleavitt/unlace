/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476F9E
// Address: 0x00476F9E

//----- (00476F9E) --------------------------------------------------------
int __usercall sub_476F9E@<eax>(int a1@<ebx>, int *a2@<edi>, void *a3@<esi>)
{
  int result; // eax

  result = dword_4B7A0C;
  if ( !dword_4B7A0C )
  {
    result = sub_476AF9(a1, a2, a3);
    dword_4B7A0C = result;
  }
  return result;
}
// 4B7A0C: using guessed type int dword_4B7A0C;
