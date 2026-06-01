/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5733C
// Address: 0x0005733C

//----- (0005733C) --------------------------------------------------------
char **__fastcall sub_5733C(int a1, char **a2, char a3)
{
  char **result; // r0

  sub_65984(a1, a2, a3);
  result = sub_6D3F4(a2, (int)&dword_D0E44, 1);
  if ( *(_BYTE *)(a1 + 72) )
    return sub_6D3F4(a2, (int)&dword_D0E1C, 2);
  return result;
}
// D0E1C: using guessed type int dword_D0E1C;
// D0E44: using guessed type int dword_D0E44;
