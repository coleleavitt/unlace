/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65984
// Address: 0x00065984

//----- (00065984) --------------------------------------------------------
char **__fastcall sub_65984(int a1, char **a2, char a3)
{
  char **result; // r0

  result = sub_6D3F4(a2, (int)&dword_D14E0, 5);
  if ( (a3 & 1) != 0 )
    return sub_6D3F4(a2, (int)&dword_D14CC, 1);
  return result;
}
// D14CC: using guessed type int dword_D14CC;
// D14E0: using guessed type int dword_D14E0;
