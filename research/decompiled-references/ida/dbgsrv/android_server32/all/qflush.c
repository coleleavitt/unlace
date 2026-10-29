/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qflush
// Address: 0x0007E604

//----- (0007E604) --------------------------------------------------------
int __fastcall qflush(FILE *a1)
{
  int v2; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0

  if ( a1 )
  {
    if ( fflush(a1) || (v5 = fileno(a1), v6 = dup(v5), v6 == -1) || (v2 = 0, close(v6)) )
    {
      set_qerrno(1);
      return -1;
    }
    return v2;
  }
  else
  {
    v4 = set_qerrno(1);
    *(_DWORD *)_errno(v4) = 9;
    set_qerrno(1);
    return 1;
  }
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
