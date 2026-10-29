/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfwrite
// Address: 0x00000000000BD710

//----- (00000000000BD710) ----------------------------------------------------
size_t __fastcall qfwrite(FILE *s, void *ptr, size_t n)
{
  size_t v3; // x19
  signed __int64 v4; // x0
  signed __int64 v5; // x20
  unsigned int v6; // w0
  __int64 v7; // x0

  if ( s )
  {
    v3 = n;
    if ( n )
    {
      v4 = fwrite(ptr, 1u, n, s);
      if ( v4 != v3 )
      {
        v5 = v4;
        if ( v4 <= 0 )
          v6 = 1;
        else
          v6 = 2;
        set_qerrno(v6);
        return v5;
      }
    }
  }
  else
  {
    v7 = set_qerrno(1u);
    *(_DWORD *)__errno(v7) = 9;
    set_qerrno(1u);
    return -1;
  }
  return v3;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
