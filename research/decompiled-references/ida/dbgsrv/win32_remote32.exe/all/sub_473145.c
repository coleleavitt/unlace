/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473145
// Address: 0x00473145

//----- (00473145) --------------------------------------------------------
int __userpurge sub_473145@<eax>(int a1@<ebx>, int *a2, int **a3, int *a4)
{
  int v4; // esi

  sub_473448(*a2);
  if ( (*(_BYTE *)(&(*(&dword_4B7B38 + (**a3 >> 6)))[1].LockSemaphore + 14 * (**a3 & 0x3F)) & 1) != 0 )
  {
    v4 = sub_47325E(a1, **a3);
  }
  else
  {
    *sub_46B984() = 9;
    v4 = -1;
  }
  sub_4734FD(*a4);
  return v4;
}
