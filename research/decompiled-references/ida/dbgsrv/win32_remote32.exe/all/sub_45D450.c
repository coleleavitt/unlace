/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D450
// Address: 0x0045D450

//----- (0045D450) --------------------------------------------------------
int __userpurge sub_45D450@<eax>(int a1@<ebx>, int a2@<edi>, const char *a3, int a4)
{
  if ( a4 )
    return sub_47651B(a1, a2, a3, a4);
  sub_45CC20(1);
  *sub_46B984() = 9;
  sub_45CC20(1);
  return -1;
}
