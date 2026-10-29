/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8117C
// Address: 0x0008117C

//----- (0008117C) --------------------------------------------------------
char *__fastcall sub_8117C(int a1)
{
  unsigned int v1; // r4
  void *v2; // r3

  v1 = a1 + 128;
  v2 = malloc(a1 + 128);
  if ( !v2 )
  {
    v2 = sub_81070(v1);
    if ( !v2 )
      sub_7FF18();
  }
  return (char *)memset(v2, 0, 0x80u) + 128;
}
