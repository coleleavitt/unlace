/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CF00
// Address: 0x0045CF00

//----- (0045CF00) --------------------------------------------------------
int __userpurge sub_45CF00@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v4; // esi

  if ( a3 )
  {
    v4 = sub_47523B(a1, a2, a3);
    if ( v4 )
      sub_45CC20(1);
    return v4;
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 9;
    sub_45CC20(1);
    return -1;
  }
}
