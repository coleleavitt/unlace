/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F960
// Address: 0x0043F960

//----- (0043F960) --------------------------------------------------------
int __cdecl sub_43F960(int a1)
{
  int v1; // eax

  v1 = a1;
  LOBYTE(v1) = *(_BYTE *)(a1 + 96) != 0;
  return 4 * v1 + 4;
}
