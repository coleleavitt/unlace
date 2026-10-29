/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BEA4
// Address: 0x0046BEA4

//----- (0046BEA4) --------------------------------------------------------
void __userpurge sub_46BEA4(int ebx0@<ebx>, int edi0@<edi>, int *a1, int **a2, int *a3)
{
  sub_469596(*a1);
  if ( sub_46C089(**a2, a2[1]) && (*(_BYTE *)a2[2] || (*(_DWORD *)(**a2 + 12) & 2) != 0) )
  {
    if ( sub_46C146(ebx0, edi0, (_DWORD *)**a2) == -1 )
      *a2[3] = -1;
    else
      ++*a2[1];
  }
  sub_4695AA(*a3);
}
