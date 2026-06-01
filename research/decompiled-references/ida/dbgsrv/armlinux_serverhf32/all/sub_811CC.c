/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_811CC
// Address: 0x000811CC

//----- (000811CC) --------------------------------------------------------
void *sub_811CC()
{
  void *v0; // r3

  v0 = malloc(0x78u);
  if ( !v0 )
  {
    v0 = sub_81070(0x78u);
    if ( !v0 )
      sub_7FF18();
  }
  return memset(v0, 0, 0x78u);
}
