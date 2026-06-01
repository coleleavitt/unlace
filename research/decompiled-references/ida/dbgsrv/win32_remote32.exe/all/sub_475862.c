/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475862
// Address: 0x00475862

//----- (00475862) --------------------------------------------------------
int __usercall sub_475862@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int *a3)
{
  int v4; // [esp+10h] [ebp-20h]

  if ( a3 )
  {
    sub_469596((int)a3);
    v4 = sub_4758E2(a1, a2, a3);
    sub_4695AA((int)a3);
    return v4;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
}
