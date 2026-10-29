/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_795A0
// Address: 0x000795A0

//----- (000795A0) --------------------------------------------------------
int __cdecl sub_795A0(int a1, char a2, char a3)
{
  int result; // eax

  LOBYTE(result) = a3;
  *(_BYTE *)(a1 + 92) = a2;
  *(_BYTE *)(a1 + 93) = a3;
  return result;
}
