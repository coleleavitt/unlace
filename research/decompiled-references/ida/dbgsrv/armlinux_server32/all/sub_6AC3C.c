/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AC3C
// Address: 0x0006AC3C

//----- (0006AC3C) --------------------------------------------------------
char **__fastcall sub_6AC3C(int a1, char **a2, char a3)
{
  char **result; // r0

  sub_65984(a1, a2, a3);
  result = sub_6D3F4(a2, (int)&dword_D160C, 6);
  if ( (a3 & 2) != 0 )
    return sub_6D3F4(a2, (int)&dword_D15F8, 1);
  return result;
}
// D15F8: using guessed type int dword_D15F8;
// D160C: using guessed type int dword_D160C;
