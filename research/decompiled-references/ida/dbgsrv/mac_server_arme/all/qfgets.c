/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgets
// Address: 0x0000000100074210

//----- (0000000100074210) ----------------------------------------------------
char *__fastcall qfgets(char *a1, __int64 a2, FILE *a3)
{
  char *result; // x0
  int v4; // w19
  char *v5; // x20
  size_t v6; // x0
  size_t v7; // x8
  char *v8; // x8
  const char *v9; // x0
  FILE *v10; // x1

  if ( a2 < 0 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(1225);
    return (char *)qfputs(v9, v10);
  }
  else if ( a3 )
  {
    result = fgets(a1, a2, a3);
    if ( result )
    {
      v4 = (unsigned __int8)*result;
      if ( *result )
      {
        v5 = result;
        v6 = strlen(result);
        if ( v6 < 2 )
        {
          result = v5;
        }
        else
        {
          v7 = v6;
          result = v5;
          v8 = &v5[v7];
          if ( *(v8 - 2) == 13 && *(v8 - 1) == 10 )
          {
            *((_WORD *)v8 - 1) = 10;
            v4 = (unsigned __int8)*v5;
          }
        }
        if ( v4 == 26 )
          return nullptr;
      }
    }
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    set_qerrno();
    return nullptr;
  }
  return result;
}
// 1000742D1: variable 'v9' is possibly undefined
// 1000742D1: variable 'v10' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
