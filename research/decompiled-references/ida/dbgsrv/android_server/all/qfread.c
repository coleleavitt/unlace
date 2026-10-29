/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfread
// Address: 0x00000000000BD664

//----- (00000000000BD664) ----------------------------------------------------
size_t __fastcall qfread(FILE *stream, void *ptr, size_t n)
{
  FILE *v3; // x20
  size_t v4; // x19
  size_t v5; // x0
  size_t v6; // x21
  unsigned int v7; // w0
  __int64 v8; // x0

  if ( (n & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      stream = (FILE *)interr(1225);
    __break(1u);
    return qfwrite(stream, ptr, n);
  }
  else
  {
    v3 = stream;
    if ( stream )
    {
      v4 = n;
      if ( n )
      {
        v5 = fread(ptr, 1u, n, stream);
        if ( v5 != v4 )
        {
          v6 = v5;
          if ( feof(v3) )
            v7 = 3;
          else
            v7 = 1;
          set_qerrno(v7);
          return v6;
        }
      }
    }
    else
    {
      v8 = set_qerrno(1u);
      *(_DWORD *)__errno(v8) = 9;
      set_qerrno(1u);
      return -1;
    }
    return v4;
  }
}
// BD70D: variable 'ptr' is possibly undefined
// BD70D: variable 'n' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
