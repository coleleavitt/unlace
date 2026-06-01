/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054810
// Address: 0x08054810

//----- (08054810) --------------------------------------------------------
int __cdecl sub_8054810(int a1)
{
  int v1; // ecx
  unsigned int v2; // eax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  if ( (v2 & 0x3F) != 0 )
  {
    v1 = 1;
    *(_DWORD *)(a1 + 3448) = ((v2 & 3) != 0)
                           | ((((v2 & 0xC) != 0) | (((v2 >> 4) & 1 | (8 * (_WORD)v2) & 0x100) << 8)) << 8);
  }
  return v1;
}
