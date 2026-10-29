/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809D670
// Address: 0x0809D670

//----- (0809D670) --------------------------------------------------------
_DWORD *__cdecl sub_809D670(int a1, int a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  _DWORD *v4; // ecx

  result = *(_DWORD **)(a1 + 20);
  v3 = 8 * *(_DWORD *)(a1 + 24);
  v4 = &result[v3];
  if ( !(v3 * 4) )
    return nullptr;
  while ( *result != a2 )
  {
    result += 8;
    if ( result == v4 )
      return nullptr;
  }
  return result;
}
