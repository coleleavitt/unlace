/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfseek
// Address: 0x0007E21E

//----- (0007E21E) --------------------------------------------------------
int __fastcall qfseek(FILE *a1, int a2, int off, int a4, int whence)
{
  int v5; // r4
  int result; // r0
  int v7; // r0

  if ( a1 )
  {
    v5 = fseek(a1, off, whence);
    result = 0;
    if ( v5 )
    {
      set_qerrno(1);
      return v5;
    }
  }
  else
  {
    v7 = set_qerrno(1);
    *(_DWORD *)_errno(v7) = 9;
    set_qerrno(1);
    return -1;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
