/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490D08
// Address: 0x0000000000490D08

//----- (0000000000490D08) ----------------------------------------------------
char *__fastcall sub_490D08(char *a1, __int64 a2, FILE *a3)
{
  char *v3; // x0
  char *v4; // x19
  int v5; // w20
  size_t v6; // x0
  unsigned __int8 *v7; // x2
  size_t v8; // x0

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_492270(1225);
    __break(0x3E8u);
  }
  else
  {
    if ( !a3 )
    {
      sub_4869C8(1);
      v4 = nullptr;
      *__errno_location() = 9;
      sub_4869C8(1);
      return v4;
    }
    v3 = fgets(a1, a2, a3);
    v4 = v3;
    if ( v3 )
    {
      v5 = (unsigned __int8)*v3;
      if ( !*v3 )
        return v4;
      v6 = strlen(v3);
      if ( v6 > 1 )
      {
        v7 = (unsigned __int8 *)&v4[v6 - 2];
        if ( *v7 == 13 )
        {
          v8 = v6 - 1;
          if ( v4[v8] == 10 )
          {
            *v7 = 10;
            v4[v8] = 0;
            v5 = (unsigned __int8)*v4;
          }
        }
      }
      if ( v5 != 26 )
        return v4;
    }
  }
  return nullptr;
}
// 52451C: using guessed type char under_debugger;
