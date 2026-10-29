/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4764D0
// Address: 0x004764D0

//----- (004764D0) --------------------------------------------------------
int __usercall sub_4764D0@<eax>(int **a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  BOOL v4; // ebx
  char v6; // [esp+Ch] [ebp-4h]

  v3 = **a1;
  v6 = sub_47A664(a2, v3, v3);
  v4 = sub_475EE7((char *)*a1[1], 1u, *a1[2], **a1) == *a1[2];
  sub_47A710(v4, v6, v3);
  return v4 - 1;
}
