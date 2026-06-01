/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95F80
// Address: 0x00095F80

//----- (00095F80) --------------------------------------------------------
unsigned __int8 *__cdecl sub_95F80(int a1, int a2)
{
  unsigned int v2; // ecx
  unsigned __int8 *result; // eax
  unsigned int v4; // esi

  v2 = *(_DWORD *)(a1 + 44);
  if ( !v2 )
    return nullptr;
  result = *(unsigned __int8 **)(a1 + 40);
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 12;
    if ( v4 >= v2 )
      return nullptr;
  }
  return result;
}
