/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD084
// Address: 0x00000000000BD084

//----- (00000000000BD084) ----------------------------------------------------
__int64 __fastcall sub_BD084(const char *a1, unsigned int a2, int a3)
{
  unsigned int v4; // w19

  v4 = open(a1, 131138, a2);
  if ( v4 == -1 )
  {
    set_qerrno(1u);
    return v4;
  }
  if ( !(unsigned int)sub_BCF40(v4, 66, a3) )
  {
    if ( !ftruncate(v4, 0) )
      return v4;
    set_qerrno(1u);
  }
  if ( close(v4) == -1 )
    set_qerrno(1u);
  return (unsigned int)-1;
}
