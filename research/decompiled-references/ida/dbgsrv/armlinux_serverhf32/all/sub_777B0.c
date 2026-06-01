/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_777B0
// Address: 0x000777B0

//----- (000777B0) --------------------------------------------------------
int __fastcall sub_777B0(const char *a1, int a2)
{
  int v2; // r4

  v2 = access(a1, a2);
  if ( v2 )
    sub_70A2C(1);
  return v2;
}
