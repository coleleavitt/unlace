/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4760CB
// Address: 0x004760CB

//----- (004760CB) --------------------------------------------------------
int __usercall sub_4760CB@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
  {
    if ( --a3[2] < 0 )
      return sub_47CB42(a1, a2, (int)a3);
    else
      return *(unsigned __int8 *)(*a3)++;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
}
