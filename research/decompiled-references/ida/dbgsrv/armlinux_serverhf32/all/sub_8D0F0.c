/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D0F0
// Address: 0x0008D0F0

//----- (0008D0F0) --------------------------------------------------------
unsigned int __fastcall sub_8D0F0(int *a1, void *s2, unsigned int a3, size_t n)
{
  size_t v4; // r4
  unsigned int v5; // r4
  int v8; // r5

  v4 = a1[1];
  if ( n > v4 )
    return -1;
  v5 = v4 - n;
  v8 = *a1;
  if ( v5 >= a3 )
    v5 = a3;
  while ( n && memcmp((const void *)(v8 + v5), s2, n) )
  {
    if ( !v5 )
      return -1;
    --v5;
  }
  return v5;
}
