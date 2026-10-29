/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96B40
// Address: 0x00096B40

//----- (00096B40) --------------------------------------------------------
int __userpurge sub_96B40@<eax>(int a1, char a2)
{
  int src; // [esp+0h] [ebp-18h] BYREF
  char v4; // [esp+4h] [ebp-14h]
  unsigned int v5; // [esp+Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  src = 0;
  v4 = a2;
  sub_2E590(a1, &src, 5u);
  return a1;
}
