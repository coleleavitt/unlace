/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072BC0
// Address: 0x08072BC0

//----- (08072BC0) --------------------------------------------------------
int __cdecl sub_8072BC0(_DWORD *a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  FILE *v4; // ecx
  char *v5; // eax

  v2 = -1;
  v3 = a1[1];
  if ( v3 < dword_811E624 )
  {
    v4 = *(FILE **)(dword_811E620 + 4 * v3);
    if ( v4 )
    {
      v5 = (char *)&dword_80DDFD8;
      if ( a1[7] )
        v5 = (char *)a1[6];
      v2 = sub_80CF480(v5, v4);
    }
  }
  *(_DWORD *)(a2 + 4) = v2;
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
