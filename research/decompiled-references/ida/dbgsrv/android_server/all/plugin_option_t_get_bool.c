/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: plugin_option_t_get_bool
// Address: 0x00000000000AF858

//----- (00000000000AF858) ----------------------------------------------------
char *__fastcall plugin_option_t_get_bool(__int64 a1, bool *a2, char *s2, bool a4)
{
  __int64 v4; // x23
  const char *v8; // x0
  unsigned __int64 v10; // x24
  const char *v11; // x22
  const char *v12; // x1
  pthread_mutex_t *v13; // x0

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    v8 = *(const char **)a1;
  else
    v8 = &byte_F154B;
  if ( strcmp(v8, s2) )
    return nullptr;
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 < 2 || (v11 = *(const char **)(a1 + 24), !strcmp(v11, "on")) || !strcmp(v11, "off") )
  {
    if ( a2 )
    {
      if ( v10 >= 2 )
        a4 = strcmp(*(const char **)(a1 + 24), "on") == 0;
      *a2 = a4;
    }
    return (_BYTE *)(&dword_0 + 1);
  }
  else
  {
    if ( v4 )
      v12 = *(const char **)a1;
    else
      v12 = &byte_F154B;
    sub_3B1DC("Wrong %s value: %s, expected: on/off", v12, v11);
    return sub_AF940(v13);
  }
}
// AF93D: variable 'v13' is possibly undefined
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
