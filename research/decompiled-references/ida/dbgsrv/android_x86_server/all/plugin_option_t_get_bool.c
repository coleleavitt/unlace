/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: plugin_option_t_get_bool
// Address: 0x000A0480

//----- (000A0480) --------------------------------------------------------
int __cdecl plugin_option_t_get_bool(int a1, _BYTE *a2, char *s2, char a4)
{
  const char *v4; // ecx
  int v5; // ecx
  int v7; // eax
  const char *v9; // [esp+4h] [ebp-18h]
  unsigned int v10; // [esp+8h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 4) )
    v4 = *(const char **)a1;
  else
    v4 = byte_EF875;
  if ( strcmp(v4, s2) )
    return 0;
  v10 = *(_DWORD *)(a1 + 16);
  if ( v10 >= 2 )
  {
    v9 = *(const char **)(a1 + 12);
    if ( strcmp(v9, "on") )
    {
      if ( strcmp(v9, "off") )
        sub_1DE10("Wrong %s value: %s, expected: on/off");
    }
  }
  LOBYTE(v5) = 1;
  if ( a2 )
  {
    if ( v10 >= 2 )
    {
      v7 = strcmp(*(const char **)(a1 + 12), "on");
      LOBYTE(v5) = 1;
      a4 = v7 == 0;
    }
    *a2 = a4;
  }
  return v5;
}
// A053B: variable 'v5' is possibly undefined
