/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsync
// Address: 0x00000000000C1EA0

//----- (00000000000C1EA0) ----------------------------------------------------
__int64 __fastcall qfsync(int a1)
{
  unsigned int v1; // ebx

  v1 = fsync(a1);
  if ( v1 == -1 )
    set_qerrno(1u);
  return v1;
}
