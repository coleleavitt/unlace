/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: plugin_option_t_get_bool
// Address: 0x00000000000B4230

//----- (00000000000B4230) ----------------------------------------------------
__int64 __fastcall plugin_option_t_get_bool(__int64 a1, bool *a2, const char *a3, bool a4)
{
  __int64 v6; // rbx
  const char *v7; // rdi
  unsigned __int64 v8; // r13
  const char *v9; // r15
  const char *v11; // rsi

  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
    v7 = *(const char **)a1;
  else
    v7 = s1;
  if ( !strcmp(v7, a3) )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 >= 2 )
    {
      v9 = *(const char **)(a1 + 24);
      if ( strcmp(v9, "on") )
      {
        if ( strcmp(v9, "off") )
        {
          if ( v6 )
            v11 = *(const char **)a1;
          else
            v11 = s1;
          sub_3A5C0("Wrong %s value: %s, expected: on/off", v11, v9);
        }
      }
    }
    LOBYTE(v6) = 1;
    if ( a2 )
    {
      if ( v8 >= 2 )
        a4 = strcmp(*(const char **)(a1 + 24), "on") == 0;
      *a2 = a4;
    }
  }
  else
  {
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}
