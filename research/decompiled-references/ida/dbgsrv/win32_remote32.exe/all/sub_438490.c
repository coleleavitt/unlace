/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438490
// Address: 0x00438490

//----- (00438490) --------------------------------------------------------
int __userpurge sub_438490@<eax>(int a1@<ebx>, unsigned int *a2, int a3, int a4, char a5)
{
  LPVOID v5; // eax

  v5 = sub_4627C2(0x148u);
  if ( v5 )
    return sub_430860((int)v5, a1, a2, a3, a4, a5);
  else
    return 0;
}
