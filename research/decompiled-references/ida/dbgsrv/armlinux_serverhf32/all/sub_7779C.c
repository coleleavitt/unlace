/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7779C
// Address: 0x0007779C

//----- (0007779C) --------------------------------------------------------
int __fastcall sub_7779C(const char *a1)
{
  int v1; // r4

  v1 = unlink(a1);
  if ( v1 )
    sub_70A2C(1);
  return v1;
}
