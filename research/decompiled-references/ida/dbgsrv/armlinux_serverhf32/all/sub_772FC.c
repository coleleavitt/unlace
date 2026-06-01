/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_772FC
// Address: 0x000772FC

//----- (000772FC) --------------------------------------------------------
int __fastcall sub_772FC(const char *a1, __mode_t a2)
{
  int v2; // r4

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  sub_70A2C(1);
  return -1;
}
