/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7792C
// Address: 0x0007792C

//----- (0007792C) --------------------------------------------------------
int __fastcall sub_7792C(const char *a1, const char *a2)
{
  int v2; // r4

  v2 = rename(a1, a2);
  if ( v2 )
    sub_70B98(1);
  return v2;
}
