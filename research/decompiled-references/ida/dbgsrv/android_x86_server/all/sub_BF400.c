/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF400
// Address: 0x000BF400

//----- (000BF400) --------------------------------------------------------
int __cdecl sub_BF400(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi

  result = a2;
  if ( a1 != *(_DWORD *)(a2 + 8) )
    return (*(int (__cdecl **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 28))(*(_DWORD *)(a1 + 8), a2, a3, a4);
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 )
  {
    if ( v5 == a3 )
    {
      if ( *(_DWORD *)(a2 + 24) == 2 )
        *(_DWORD *)(a2 + 24) = a4;
    }
    else
    {
      ++*(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 24) = 2;
      *(_BYTE *)(a2 + 54) = 1;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = a3;
    *(_DWORD *)(a2 + 24) = a4;
    *(_DWORD *)(a2 + 36) = 1;
  }
  return result;
}
