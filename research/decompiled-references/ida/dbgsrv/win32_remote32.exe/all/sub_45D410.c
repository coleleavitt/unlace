/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D410
// Address: 0x0045D410

//----- (0045D410) --------------------------------------------------------
int __userpurge sub_45D410@<eax>(int *a1@<ebx>, int a2@<edi>, int a3, _DWORD *a4)
{
  if ( a4 )
    return sub_47636B(a1, a2, a3, a4);
  sub_45CC20(1);
  *sub_46B984() = 9;
  sub_45CC20(1);
  return -1;
}
