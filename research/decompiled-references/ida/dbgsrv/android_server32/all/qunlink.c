/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qunlink
// Address: 0x0007E29C

//----- (0007E29C) --------------------------------------------------------
int __fastcall qunlink(const char *a1)
{
  int v1; // r4

  v1 = unlink(a1);
  if ( v1 )
    set_qerrno(1);
  return v1;
}
