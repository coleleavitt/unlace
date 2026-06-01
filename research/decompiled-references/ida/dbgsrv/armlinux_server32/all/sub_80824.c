/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80824
// Address: 0x00080824

//----- (00080824) --------------------------------------------------------
void *sub_80824()
{
  void *v0; // r3

  v0 = malloc(0x78u);
  if ( !v0 )
  {
    v0 = sub_806C8(0x78u);
    if ( !v0 )
      sub_80A40();
  }
  return memset(v0, 0, 0x78u);
}
