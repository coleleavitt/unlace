/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrename
// Address: 0x0007E2C8

//----- (0007E2C8) --------------------------------------------------------
int __fastcall qrename(const char *a1, const char *a2)
{
  int v2; // r4

  v2 = rename(a1, a2);
  if ( v2 )
    set_qerrno(1);
  return v2;
}
