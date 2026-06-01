/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073430
// Address: 0x08073430

//----- (08073430) --------------------------------------------------------
int __cdecl sub_8073430(int a1, int a2)
{
  char *v2; // edx

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = (char *)&dword_80DDFD8;
  *(_DWORD *)(a2 + 4) = sub_808CD90(nullptr, a1, v2, 0) == 0;
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
