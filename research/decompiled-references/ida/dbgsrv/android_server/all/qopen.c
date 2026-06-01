/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen
// Address: 0x00000000000BCE10

//----- (00000000000BCE10) ----------------------------------------------------
__int64 __fastcall qopen(__int64 a1, int a2)
{
  unsigned int v2; // w19

  v2 = __open_2(a1, a2 & 0xFFFDFDBF | 0x20000);
  if ( v2 == -1 )
  {
    set_qerrno(1u);
  }
  else if ( flock(v2, 6) == -1 )
  {
    set_qerrno(1u);
    if ( close(v2) == -1 )
      set_qerrno(1u);
    return (unsigned int)-1;
  }
  else
  {
    fcntl(v2, 2, 1);
  }
  return v2;
}
// 36DE0: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
