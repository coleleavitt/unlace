/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qflush
// Address: 0x00000000000C2D30

//----- (00000000000C2D30) ----------------------------------------------------
__int64 __fastcall qflush(FILE *stream)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax

  if ( stream )
  {
    if ( fflush(stream) || (v3 = fileno(stream), v4 = dup(v3), v4 == -1) || close(v4) )
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
    v1 = 1;
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 9;
    set_qerrno(1u);
  }
  return v1;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
