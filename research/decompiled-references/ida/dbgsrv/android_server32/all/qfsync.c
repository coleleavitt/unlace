/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsync
// Address: 0x0007DE1E

//----- (0007DE1E) --------------------------------------------------------
int __fastcall qfsync(int a1)
{
  int v1; // r4

  v1 = fsync(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return -1;
}
