/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1CE0
// Address: 0x00000000000C1CE0

//----- (00000000000C1CE0) ----------------------------------------------------
__int64 __fastcall sub_C1CE0(const char *a1, unsigned int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = open(a1, 32834, a2);
  if ( v4 == -1 )
  {
    set_qerrno(1u);
    return (unsigned int)-1;
  }
  v5 = v4;
  if ( !(unsigned int)sub_C1BB0(v4, 66, a3) )
  {
    if ( !ftruncate(v5, 0) )
      return v5;
    set_qerrno(1u);
  }
  v6 = close(v5);
  v5 = -1;
  if ( v6 == -1 )
    set_qerrno(1u);
  return v5;
}
