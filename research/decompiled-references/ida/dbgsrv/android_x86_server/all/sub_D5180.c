/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5180
// Address: 0x000D5180

//----- (000D5180) --------------------------------------------------------
int __cdecl sub_D5180(int a1, int a2)
{
  int result; // eax
  unsigned int v3; // edx
  int v4; // esi
  int v5; // [esp-10h] [ebp-18h]

  result = a2;
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a2 + 16) = v4;
    *(_DWORD *)(a2 + 12) = 0;
    v3 = 0;
    if ( !v4 )
      return result;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
    if ( v3 >= *(_DWORD *)(a1 + 12) )
      return result;
  }
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v3);
  return (*(int (__cdecl **)(int, int))(*(_DWORD *)v5 + 16))(v5, a2);
}
