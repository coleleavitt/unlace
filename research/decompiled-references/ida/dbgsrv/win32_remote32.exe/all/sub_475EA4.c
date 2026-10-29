/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475EA4
// Address: 0x00475EA4

//----- (00475EA4) --------------------------------------------------------
unsigned int __usercall sub_475EA4@<eax>(int **a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  unsigned int v4; // esi
  char v6; // [esp+8h] [ebp-4h]

  v3 = **a1;
  v6 = sub_47A664(a2, v3, v3);
  v4 = sub_475EE7((char *)*a1[1], *a1[2], *a1[3], **a1);
  sub_47A710(a2, v6, v3);
  return v4;
}
