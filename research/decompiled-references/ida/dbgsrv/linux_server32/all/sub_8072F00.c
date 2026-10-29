/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072F00
// Address: 0x08072F00

//----- (08072F00) --------------------------------------------------------
int __cdecl sub_8072F00(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  FILE *v4; // edx

  v2 = -1;
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 < dword_811E624 )
  {
    v4 = *(FILE **)(dword_811E620 + 4 * v3);
    if ( v4 )
      v2 = sub_80CF2F0(*(char *)(a1 + 4), v4);
  }
  *(_DWORD *)(a2 + 4) = v2;
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
