/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807D4
// Address: 0x000807D4

//----- (000807D4) --------------------------------------------------------
char *__fastcall sub_807D4(int a1)
{
  unsigned int v1; // r4
  void *v2; // r3

  v1 = a1 + 128;
  v2 = malloc(a1 + 128);
  if ( !v2 )
  {
    v2 = sub_806C8(v1);
    if ( !v2 )
      sub_80A40();
  }
  return (char *)memset(v2, 0, 0x80u) + 128;
}
