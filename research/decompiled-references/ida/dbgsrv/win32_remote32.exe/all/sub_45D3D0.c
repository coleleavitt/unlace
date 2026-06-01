/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D3D0
// Address: 0x0045D3D0

//----- (0045D3D0) --------------------------------------------------------
int __userpurge sub_45D3D0@<eax>(int *a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
    return sub_476112(a1, a2, a3);
  sub_45CC20(1);
  *sub_46B984() = 9;
  sub_45CC20(1);
  return -1;
}
