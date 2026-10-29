/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072F60
// Address: 0x08072F60

//----- (08072F60) --------------------------------------------------------
int __cdecl sub_8072F60(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 >= dword_811E624 || (v3 = *(FILE **)(dword_811E620 + 4 * v2)) == nullptr || (v4 = sub_80CF350(v3), v4 == -1) )
  {
    *(_DWORD *)(a2 + 4) = -1;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = (unsigned __int8)v4;
    return 0;
  }
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
