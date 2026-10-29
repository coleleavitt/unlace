/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BFDC
// Address: 0x0046BFDC

//----- (0046BFDC) --------------------------------------------------------
int __userpurge sub_46BFDC@<eax>(int a1@<ebx>, int a2@<edi>, int *a3, _DWORD ***a4, int *a5)
{
  int v6; // [esp+10h] [ebp-1Ch]

  sub_469596(*a3);
  v6 = sub_46C146(a1, a2, **a4);
  sub_4695AA(*a5);
  return v6;
}
