/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AAC4
// Address: 0x0006AAC4

//----- (0006AAC4) --------------------------------------------------------
char **__fastcall sub_6AAC4(int a1, char **a2, char a3)
{
  char **result; // r0

  sub_65804(a1, a2, a3);
  result = sub_6D288(a2, (int)&dword_D060C, 6);
  if ( (a3 & 2) != 0 )
    return sub_6D288(a2, (int)&dword_D05F8, 1);
  return result;
}
// D05F8: using guessed type int dword_D05F8;
// D060C: using guessed type int dword_D060C;
