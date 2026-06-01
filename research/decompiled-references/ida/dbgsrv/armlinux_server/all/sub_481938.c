/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481938
// Address: 0x0000000000481938

//----- (0000000000481938) ----------------------------------------------------
__int64 __fastcall sub_481938(__int64 a1, bool *a2, char *s2, bool a4)
{
  const char *v7; // x20
  const char *v8; // x21
  int v9; // w19

  if ( !*(_QWORD *)(a1 + 8) )
  {
    v7 = (const char *)&qword_4B2D48;
    if ( !strcmp((const char *)&qword_4B2D48, s2) )
      goto LABEL_3;
    return 0;
  }
  v7 = *(const char **)a1;
  if ( strcmp(*(const char **)a1, s2) )
    return 0;
LABEL_3:
  if ( *(_QWORD *)(a1 + 32) <= 1u )
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
    v8 = *(const char **)(a1 + 24);
    v9 = strcmp(v8, "on");
    if ( v9 )
    {
      if ( strcmp(v8, "off") )
        sub_40A608("Wrong %s value: %s, expected: on/off", v7, v8);
    }
    a4 = v9 == 0;
    if ( a2 )
      goto LABEL_6;
  }
  return 1;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
