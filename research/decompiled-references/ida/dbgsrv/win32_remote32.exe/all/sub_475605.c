/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475605
// Address: 0x00475605

//----- (00475605) --------------------------------------------------------
int __usercall sub_475605@<eax>(int a1@<ebx>, int a2@<edi>, int a3, __int64 lDistanceToMove, DWORD dwMoveMethod)
{
  int v6; // [esp+10h] [ebp-1Ch]

  if ( a3 && dwMoveMethod <= 2 )
  {
    sub_469596(a3);
    v6 = sub_475769(a3, lDistanceToMove, dwMoveMethod);
    sub_4695AA(a3);
    return v6;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
}
