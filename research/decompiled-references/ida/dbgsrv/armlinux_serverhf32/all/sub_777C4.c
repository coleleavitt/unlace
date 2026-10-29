/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_777C4
// Address: 0x000777C4

//----- (000777C4) --------------------------------------------------------
int __fastcall sub_777C4(const char *a1, const char *a2)
{
  int v2; // r4

  v2 = rename(a1, a2);
  if ( v2 )
    sub_70A2C(1);
  return v2;
}
