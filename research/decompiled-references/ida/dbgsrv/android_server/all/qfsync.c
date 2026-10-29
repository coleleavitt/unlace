/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsync
// Address: 0x00000000000BD25C

//----- (00000000000BD25C) ----------------------------------------------------
__int64 __fastcall qfsync(int a1)
{
  unsigned int v1; // w19

  v1 = fsync(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
