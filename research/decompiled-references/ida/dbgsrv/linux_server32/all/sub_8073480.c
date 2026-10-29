/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073480
// Address: 0x08073480

//----- (08073480) --------------------------------------------------------
int __cdecl sub_8073480(int a1, __m128i *a2)
{
  char *v2; // edx

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = (char *)&dword_80DDFD8;
  return sub_808CD90(a2, a1, v2, 0);
}
// 80DDFD8: using guessed type int dword_80DDFD8;
