/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfwrite
// Address: 0x0007E198

//----- (0007E198) --------------------------------------------------------
int __fastcall qfwrite(FILE *s, void *ptr, size_t n)
{
  int result; // r0
  signed int v6; // r5
  int v7; // r0
  int v8; // r0

  if ( s )
  {
    result = 0;
    if ( n )
    {
      v6 = fwrite(ptr, 1u, n, s);
      result = n;
      if ( v6 != n )
      {
        v7 = 2;
        if ( v6 <= 0 )
          v7 = 1;
        set_qerrno(v7);
        return v6;
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
