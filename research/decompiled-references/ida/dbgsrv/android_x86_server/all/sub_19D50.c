/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19D50
// Address: 0x00019D50

//----- (00019D50) --------------------------------------------------------
int __usercall start@<eax>(int a1@<ebx>, int (*a2)(void))
{
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h] BYREF

  sub_19D60(a1, (int (*)(void))&retaddr);
  return sub_19D60(a1, a2);
}
