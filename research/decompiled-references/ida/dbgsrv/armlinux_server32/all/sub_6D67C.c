/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D67C
// Address: 0x0006D67C

//----- (0006D67C) --------------------------------------------------------
int __fastcall sub_6D67C(int a1, bool *a2, char *s2, bool a4)
{
  const char *v7; // r6
  const char *v8; // r4
  int v9; // r5

  if ( !*(_DWORD *)(a1 + 4) )
  {
    v7 = (const char *)&dword_8DB98;
    if ( !strcmp((const char *)&dword_8DB98, s2) )
      goto LABEL_3;
    return 0;
  }
  v7 = *(const char **)a1;
  if ( strcmp(*(const char **)a1, s2) )
    return 0;
LABEL_3:
  if ( *(_DWORD *)(a1 + 16) <= 1u )
  {
    if ( a2 )
    {
LABEL_6:
      *a2 = a4;
      return 1;
    }
  }
  else
  {
    v8 = *(const char **)(a1 + 12);
    v9 = strcmp(v8, "on");
    if ( v9 )
    {
      if ( strcmp(v8, "off") )
        sub_17188("Wrong %s value: %s, expected: on/off", v7, v8);
    }
    a4 = v9 == 0;
    if ( a2 )
      goto LABEL_6;
  }
  return 1;
}
// 8DB98: using guessed type int dword_8DB98;
