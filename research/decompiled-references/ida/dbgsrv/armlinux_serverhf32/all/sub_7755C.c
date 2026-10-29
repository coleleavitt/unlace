/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7755C
// Address: 0x0007755C

//----- (0007755C) --------------------------------------------------------
int __fastcall sub_7755C(const char *a1)
{
  int v1; // r4

  v1 = utime(a1, nullptr);
  if ( v1 != -1 )
    return v1;
  sub_70A2C(1);
  return -1;
}
