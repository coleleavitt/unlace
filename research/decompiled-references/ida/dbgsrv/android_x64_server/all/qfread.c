/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfread
// Address: 0x00000000000C22E0

//----- (00000000000C22E0) ----------------------------------------------------
size_t __fastcall qfread(FILE *stream, void *ptr, signed __int64 n)
{
  signed __int64 v3; // rbx
  size_t v4; // rax
  size_t v5; // r15
  int v6; // eax

  if ( n < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( stream )
  {
    v3 = n;
    if ( n )
    {
      v4 = fread(ptr, 1u, n, stream);
      if ( v4 != v3 )
      {
        v5 = v4;
        v6 = feof(stream);
        set_qerrno(2 * (v6 != 0) + 1);
        return v5;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 9;
    set_qerrno(1u);
    return -1;
  }
  return v3;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
