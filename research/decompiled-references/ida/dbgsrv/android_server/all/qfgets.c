/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgets
// Address: 0x00000000000BDF7C

//----- (00000000000BDF7C) ----------------------------------------------------
char *__fastcall qfgets(pthread_mutex_t *a1, __int64 a2, FILE *a3)
{
  char *v3; // x0
  char *v4; // x19
  size_t v5; // x0
  size_t v6; // x8
  __int64 v8; // x0

  if ( (a2 & 0x8000000000000000LL) == 0 )
  {
    if ( a3 )
    {
      v3 = fgets((char *)a1, a2, a3);
      v4 = v3;
      if ( v3 && *v3 )
      {
        v5 = strlen(v3);
        v6 = v5 - 2;
        if ( v5 >= 2 && v4[v6] == 13 && v4[v5 - 1] == 10 )
        {
          v4[v6] = 10;
          v4[v5 - 1] = 0;
        }
        if ( *v4 == 26 )
          return nullptr;
        else
          return v4;
      }
    }
    else
    {
      v8 = set_qerrno(1u);
      *(_DWORD *)__errno(v8) = 9;
      set_qerrno(1u);
      return nullptr;
    }
    return v4;
  }
  if ( !under_debugger )
    a1 = interr(1225);
  __break(1u);
  return qgets(a1, a2);
}
// BE029: variable 'a2' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
