/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfread
// Address: 0x0007E114

//----- (0007E114) --------------------------------------------------------
size_t __fastcall qfread(FILE *stream, void *ptr, signed int n)
{
  size_t result; // r0
  int v6; // r6
  size_t v7; // r7
  int v8; // r0

  if ( n < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  if ( stream )
  {
    result = 0;
    if ( n )
    {
      v6 = 1;
      v7 = fread(ptr, 1u, n, stream);
      result = n;
      if ( v7 != n )
      {
        if ( feof(stream) )
          v6 = 3;
        set_qerrno(v6);
        return v7;
      }
    }
  }
  else
  {
    v8 = set_qerrno(1);
    *(_DWORD *)_errno(v8) = 9;
    set_qerrno(1);
    return -1;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
