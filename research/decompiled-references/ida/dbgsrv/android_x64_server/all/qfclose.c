/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfclose
// Address: 0x00000000000C24A0

//----- (00000000000C24A0) ----------------------------------------------------
__int64 __fastcall qfclose(FILE *a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  if ( a1 )
  {
    v1 = fclose(a1);
    if ( v1 )
    {
      v2 = v1;
      set_qerrno(1u);
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
    return (unsigned int)-1;
  }
  return v2;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
