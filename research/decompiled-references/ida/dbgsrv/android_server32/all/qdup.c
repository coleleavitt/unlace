/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdup
// Address: 0x0007DE04

//----- (0007DE04) --------------------------------------------------------
int __fastcall qdup(int a1)
{
  int v1; // r4

  v1 = dup(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return -1;
}
