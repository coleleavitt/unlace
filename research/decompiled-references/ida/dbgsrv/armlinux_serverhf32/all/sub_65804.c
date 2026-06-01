/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65804
// Address: 0x00065804

//----- (00065804) --------------------------------------------------------
char **__fastcall sub_65804(int a1, char **a2, char a3)
{
  char **result; // r0

  result = sub_6D288(a2, (int)&dword_D04E0, 5);
  if ( (a3 & 1) != 0 )
    return sub_6D288(a2, (int)&dword_D04CC, 1);
  return result;
}
// D04CC: using guessed type int dword_D04CC;
// D04E0: using guessed type int dword_D04E0;
