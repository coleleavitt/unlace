/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A881
// Address: 0x0047A881

//----- (0047A881) --------------------------------------------------------
int __userpurge sub_47A881@<eax>(int a1@<ebx>, int *a2, int **a3, int *a4)
{
  int v4; // esi
  void *v5; // eax
  int *v6; // esi

  v4 = 0;
  sub_473448(*a2);
  if ( (*(_BYTE *)(&(*(&dword_4B7B38 + (**a3 >> 6)))[1].LockSemaphore + 14 * (**a3 & 0x3F)) & 1) == 0 )
    goto LABEL_4;
  v5 = (void *)sub_4736C4(a1, **a3, **a3);
  if ( !FlushFileBuffers(v5) )
  {
    v6 = sub_46B971();
    *v6 = GetLastError();
LABEL_4:
    *sub_46B984() = 9;
    v4 = -1;
  }
  sub_4734FD(*a4);
  return v4;
}
