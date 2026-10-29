/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B560
// Address: 0x0041B560

//----- (0041B560) --------------------------------------------------------
int __stdcall sub_41B560(int a1, int a2)
{
  int v2; // esi
  unsigned int v3; // ecx
  _DWORD *v4; // ecx

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 < dword_4B6B24 && (v4 = *(_DWORD **)(dword_4B6B20 + 4 * v3)) != nullptr )
  {
    if ( sub_45D290(v4, (unsigned int)&a2, 2, *(_DWORD *)(a1 + 32) != 0) )
      *(_DWORD *)(v2 + 8) = -1;
    else
      *(_DWORD *)(v2 + 8) = (unsigned __int16)a2;
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
