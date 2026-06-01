/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B5D0
// Address: 0x0041B5D0

//----- (0041B5D0) --------------------------------------------------------
int __stdcall sub_41B5D0(int a1, int a2)
{
  int v2; // esi
  unsigned int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 < dword_4B6B24 && (v4 = *(_DWORD **)(dword_4B6B20 + 4 * v3)) != nullptr )
  {
    v5 = sub_45D290(v4, (unsigned int)&a2, 4, *(_DWORD *)(a1 + 32) != 0);
    v6 = -1;
    if ( !v5 )
      v6 = a2;
    *(_DWORD *)(v2 + 8) = v6;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
