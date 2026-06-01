/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4667C5
// Address: 0x004667C5

//----- (004667C5) --------------------------------------------------------
void *__usercall sub_4667C5@<eax>(int a1@<ebx>, int *a2@<edi>, int a3@<esi>)
{
  void *result; // eax

  result = sub_4667D3();
  if ( !result )
    sub_467F38(a1, a2, a3);
  return result;
}
