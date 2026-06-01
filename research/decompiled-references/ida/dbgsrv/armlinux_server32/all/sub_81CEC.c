/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81CEC
// Address: 0x00081CEC

//----- (00081CEC) --------------------------------------------------------
unsigned int __fastcall sub_81CEC(int *a1, void *s2, unsigned int a3, size_t n)
{
  int v4; // r7
  size_t v5; // r4
  unsigned int v6; // r4

  v4 = *a1;
  v5 = *(_DWORD *)(*a1 - 12);
  if ( n > v5 )
    return -1;
  v6 = v5 - n;
  if ( v6 >= a3 )
    v6 = a3;
  while ( n && memcmp((const void *)(v4 + v6), s2, n) )
  {
    if ( !v6 )
      return -1;
    --v6;
  }
  return v6;
}
