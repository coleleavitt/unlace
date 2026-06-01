/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_817CC
// Address: 0x000817CC

//----- (000817CC) --------------------------------------------------------
unsigned int __fastcall sub_817CC(_DWORD *a1, unsigned int a2, const char *a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(*a1 - 12);
  if ( v3 < a2 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return a2;
}
