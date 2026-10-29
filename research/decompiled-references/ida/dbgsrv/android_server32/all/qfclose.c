/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfclose
// Address: 0x0007E25C

//----- (0007E25C) --------------------------------------------------------
int __fastcall qfclose(FILE *a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r0

  if ( a1 )
  {
    v1 = fclose(a1);
    result = 0;
    if ( v1 )
    {
      set_qerrno(1);
      return v1;
    }
  }
  else
  {
    v3 = set_qerrno(1);
    *(_DWORD *)_errno(v3) = 9;
    set_qerrno(1);
    return -1;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
