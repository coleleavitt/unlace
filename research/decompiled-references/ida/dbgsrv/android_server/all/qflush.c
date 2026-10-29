/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qflush
// Address: 0x00000000000BDEA0

//----- (00000000000BDEA0) ----------------------------------------------------
__int64 __fastcall qflush(FILE *a1)
{
  unsigned int v2; // w19
  __int64 v3; // x0
  int v5; // w0
  int v6; // w0

  if ( a1 )
  {
    if ( fflush(a1) || (v5 = fileno(a1), v6 = dup(v5), v6 == -1) || close(v6) )
    {
      set_qerrno(1u);
      return (unsigned int)-1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v2 = 1;
    v3 = set_qerrno(1u);
    *(_DWORD *)__errno(v3) = 9;
    set_qerrno(1u);
  }
  return v2;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
