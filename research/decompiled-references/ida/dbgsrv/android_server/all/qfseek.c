/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfseek
// Address: 0x00000000000BD7D4

//----- (00000000000BD7D4) ----------------------------------------------------
__int64 __fastcall qfseek(FILE *a1, __int64 a2, int a3)
{
  unsigned int v3; // w19
  __int64 v4; // x0

  if ( a1 )
  {
    v3 = fseek(a1, a2, a3);
    if ( v3 )
      set_qerrno(1u);
  }
  else
  {
    v4 = set_qerrno(1u);
    *(_DWORD *)__errno(v4) = 9;
    set_qerrno(1u);
    return (unsigned int)-1;
  }
  return v3;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
