/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E174
// Address: 0x0001E174

//----- (0001E174) --------------------------------------------------------
int __fastcall sub_1E174(int a1, int a2, int a3)
{
  int result; // r0

  result = 16 * *(_DWORD *)(a2 + 16);
  if ( result )
  {
    sub_1EB68(a1 + 56, a2, a3);
    *(_BYTE *)(a1 + 1020) = 0;
    return 1020;
  }
  return result;
}
