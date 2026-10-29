/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfclose
// Address: 0x00000000000BD820

//----- (00000000000BD820) ----------------------------------------------------
__int64 __fastcall qfclose(FILE *a1)
{
  unsigned int v1; // w19
  __int64 v2; // x0

  if ( a1 )
  {
    v1 = fclose(a1);
    if ( v1 )
      set_qerrno(1u);
  }
  else
  {
    v2 = set_qerrno(1u);
    *(_DWORD *)__errno(v2) = 9;
    set_qerrno(1u);
    return (unsigned int)-1;
  }
  return v1;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
