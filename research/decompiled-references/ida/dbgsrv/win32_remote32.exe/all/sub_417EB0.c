/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417EB0
// Address: 0x00417EB0

//----- (00417EB0) --------------------------------------------------------
int __cdecl sub_417EB0(int a1, int *a2, int a3)
{
  _OWORD v4[2]; // [esp+0h] [ebp-20h] BYREF

  v4[0] = *(_OWORD *)(a1 + 16 * (a3 + 17));
  v4[1] = *(_OWORD *)(a1 + 16 * (a3 + 33));
  return sub_416290(a2, (unsigned int)v4, 0x20u, 0);
}
