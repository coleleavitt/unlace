/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072E70
// Address: 0x08072E70

//----- (08072E70) --------------------------------------------------------
int __cdecl sub_8072E70(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // ecx

  v2 = -1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < dword_811E624 )
  {
    v4 = *(_DWORD *)(dword_811E620 + 4 * v3);
    if ( v4 )
    {
      --*(_DWORD *)(a2 + 4);
      v2 = sub_807C7A0((int (__cdecl *)(int, int))sub_8072ED0, v4, a1 + 20, a2);
    }
  }
  *(_DWORD *)(a2 + 4) = v2;
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
