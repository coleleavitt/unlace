/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrmdir
// Address: 0x0007DE5C

//----- (0007DE5C) --------------------------------------------------------
int __fastcall qrmdir(const char *a1)
{
  int v1; // r4

  v1 = rmdir(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return -1;
}
