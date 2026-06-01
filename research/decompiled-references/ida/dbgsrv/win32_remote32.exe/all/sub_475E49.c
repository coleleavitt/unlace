/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475E49
// Address: 0x00475E49

//----- (00475E49) --------------------------------------------------------
unsigned int __userpurge sub_475E49@<eax>(int a1@<ebx>, int *a2, int **a3, int *a4)
{
  unsigned int v5; // [esp+10h] [ebp-1Ch]

  sub_469596(*a2);
  v5 = sub_475EA4(a3, a1);
  sub_4695AA(*a4);
  return v5;
}
