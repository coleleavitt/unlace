/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: plugin_option_t_get_bool
// Address: 0x00073904

//----- (00073904) --------------------------------------------------------
int __fastcall plugin_option_t_get_bool(int a1, bool *a2, char *s2, bool a4)
{
  int v6; // r4
  const char *v7; // r0
  int v8; // r7
  unsigned int v9; // r5
  const char *v10; // r7
  bool v11; // r1
  const char *v13; // r1
  bool *v14; // [sp+8h] [bp-8h]

  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 )
    v7 = *(const char **)a1;
  else
    v7 = &byte_B3CBE;
  v8 = 0;
  if ( !strcmp(v7, s2) )
  {
    v14 = a2;
    v9 = *(_DWORD *)(a1 + 16);
    if ( v9 >= 2 )
    {
      v10 = *(const char **)(a1 + 12);
      if ( strcmp(v10, "on") )
      {
        if ( strcmp(v10, "off") )
        {
          if ( v6 )
            v13 = *(const char **)a1;
          else
            v13 = &byte_B3CBE;
          sub_1C9E4("Wrong %s value: %s, expected: on/off", v13, v10);
        }
      }
    }
    v8 = 1;
    if ( v14 )
    {
      v11 = a4;
      if ( v9 >= 2 )
        v11 = strcmp(*(const char **)(a1 + 12), "on") == 0;
      *v14 = v11;
    }
  }
  return v8;
}
// B3CBE: using guessed type char byte_B3CBE;
