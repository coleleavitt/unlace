/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen
// Address: 0x00000000000C1A90

//----- (00000000000C1A90) ----------------------------------------------------
__int64 __fastcall qopen(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = __open_2(a1, a2 & 0xFFFF7DBF | 0x8000);
  if ( v2 == -1 )
  {
    set_qerrno(1u);
    return (unsigned int)-1;
  }
  else
  {
    v3 = v2;
    if ( flock(v2, 6) == -1 )
    {
      set_qerrno(1u);
      v4 = close(v3);
      v3 = -1;
      if ( v4 == -1 )
        set_qerrno(1u);
    }
    else
    {
      fcntl(v3, 2, 1);
    }
  }
  return v3;
}
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
