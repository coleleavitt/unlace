/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfseek
// Address: 0x00000000000C2450

//----- (00000000000C2450) ----------------------------------------------------
__int64 __fastcall qfseek(FILE *a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  if ( a1 )
  {
    v3 = fseek(a1, a2, a3);
    if ( v3 )
    {
      v4 = v3;
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
  return v4;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
