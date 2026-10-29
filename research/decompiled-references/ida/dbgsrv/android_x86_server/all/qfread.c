/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfread
// Address: 0x000AFC80

//----- (000AFC80) --------------------------------------------------------
int __cdecl qfread(FILE *stream, void *ptr, int n)
{
  int v3; // esi
  size_t v4; // eax
  int v5; // eax
  int v6; // ecx

  v3 = n;
  if ( n < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( stream )
  {
    if ( n )
    {
      v4 = fread(ptr, 1u, n, stream);
      if ( v4 != n )
      {
        v3 = v4;
        v5 = feof(stream);
        set_qerrno(2 * (v5 != 0) + 1);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    set_qerrno(1);
    *(_DWORD *)__errno(v6) = 9;
    set_qerrno(1);
    return -1;
  }
  return v3;
}
// AFCF4: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
