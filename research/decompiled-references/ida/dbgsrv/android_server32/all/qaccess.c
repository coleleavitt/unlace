/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qaccess
// Address: 0x0007E2B2

//----- (0007E2B2) --------------------------------------------------------
int __fastcall qaccess(const char *a1, int a2)
{
  int v2; // r4

  v2 = access(a1, a2);
  if ( v2 )
    set_qerrno(1);
  return v2;
}
