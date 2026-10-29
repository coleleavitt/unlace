/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_571B8
// Address: 0x000571B8

//----- (000571B8) --------------------------------------------------------
char **__fastcall sub_571B8(int a1, char **a2, char a3)
{
  char **result; // r0

  sub_65804(a1, a2, a3);
  result = sub_6D288(a2, (int)&dword_CFE44, 1);
  if ( *(_BYTE *)(a1 + 72) )
    return sub_6D288(a2, (int)&dword_CFE1C, 2);
  return result;
}
// CFE1C: using guessed type int dword_CFE1C;
// CFE44: using guessed type int dword_CFE44;
