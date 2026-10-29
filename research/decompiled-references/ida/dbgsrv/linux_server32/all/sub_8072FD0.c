/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072FD0
// Address: 0x08072FD0

//----- (08072FD0) --------------------------------------------------------
int __cdecl sub_8072FD0(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // eax
  int v5; // edx

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < dword_811E624 && (v3 = *(_DWORD *)(dword_811E620 + 4 * v2)) != 0 )
  {
    *(_BYTE *)a2 = 9;
    *(_DWORD *)(a2 + 4) = sub_80CEF40(v3);
    *(_DWORD *)(a2 + 8) = v5;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
    return 0;
  }
}
// 8073014: variable 'v5' is possibly undefined
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
