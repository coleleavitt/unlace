/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A8C0
// Address: 0x0002A8C0

//----- (0002A8C0) --------------------------------------------------------
int __cdecl sub_2A8C0(int a1, int a2, unsigned int a3, int *a4)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v4 = -1;
  if ( a4 )
  {
    v5 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(v5 + 44) = a2;
    *(_DWORD *)(v5 + 40) = 0;
    v6 = *(_DWORD *)(a1 + 276);
    if ( *(_DWORD *)(v6 + 12) > a3 )
    {
      *(_DWORD *)(v6 + 40) |= *(unsigned __int8 *)(**(_DWORD **)(v6 + 4) + 20 * a3 + 8);
      v6 = *(_DWORD *)(a1 + 276);
    }
    if ( (*(unsigned __int8 (__cdecl **)(int))(*(_DWORD *)v6 + 12))(v6) )
    {
      v7 = *(_DWORD *)(a1 + 276);
      if ( *(_DWORD *)(v7 + 12) <= a3 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3258);
        BUG();
      }
      if ( sub_2E7E0((int *)(*(_DWORD *)(v7 + 8) + 20 * a3), v7, a4) )
        return 2 * (*(unsigned __int8 (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 276) + 16))(*(_DWORD *)(a1 + 276)) - 1;
    }
  }
  return v4;
}
// 13E34C: using guessed type int under_debugger;
