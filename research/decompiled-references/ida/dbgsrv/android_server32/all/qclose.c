/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qclose
// Address: 0x0007DCAA

//----- (0007DCAA) --------------------------------------------------------
int __fastcall qclose(int a1)
{
  int v1; // r4

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return -1;
}
