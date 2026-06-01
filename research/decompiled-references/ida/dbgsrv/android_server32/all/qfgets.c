/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgets
// Address: 0x0007E6A8

//----- (0007E6A8) --------------------------------------------------------
char *__fastcall qfgets(char *a1, int a2, FILE *a3)
{
  char *v3; // r4
  char *result; // r0
  size_t v5; // r0
  size_t v6; // r1
  size_t v7; // r0
  int v8; // r0

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  if ( a3 )
  {
    v3 = fgets(a1, a2, a3);
    result = nullptr;
    if ( v3 )
    {
      if ( !*v3 )
        return v3;
      v5 = strlen(v3);
      if ( v5 >= 2 )
      {
        v6 = v5 - 2;
        if ( v3[v5 - 2] == 13 )
        {
          v7 = v5 - 1;
          if ( v3[v7] == 10 )
          {
            v3[v6] = 10;
            v3[v7] = 0;
          }
        }
      }
      result = nullptr;
      if ( *v3 != 26 )
        return v3;
    }
  }
  else
  {
    v8 = set_qerrno(1);
    *(_DWORD *)_errno(v8) = 9;
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
