/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgets
// Address: 0x000B07F0

//----- (000B07F0) --------------------------------------------------------
char *__cdecl qfgets(char *s, int n, FILE *stream)
{
  char *v3; // eax
  char *v4; // esi
  size_t v5; // eax
  int v6; // ecx

  if ( n < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( !stream )
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v6) = 9;
    set_qerrno(1);
    return nullptr;
  }
  v3 = fgets(s, n, stream);
  if ( !v3 )
    return nullptr;
  v4 = v3;
  if ( *v3 )
  {
    v5 = strlen(v3);
    if ( v5 >= 2 && v4[v5 - 2] == 13 && v4[v5 - 1] == 10 )
      *(_WORD *)&v4[v5 - 2] = 10;
    if ( *v4 == 26 )
      return nullptr;
  }
  return v4;
}
// B086B: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
