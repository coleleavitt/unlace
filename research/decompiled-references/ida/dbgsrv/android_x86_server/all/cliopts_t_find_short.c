/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_short
// Address: 0x0009F320

//----- (0009F320) --------------------------------------------------------
_BYTE *__cdecl cliopts_t_find_short(int a1, char a2)
{
  unsigned int v2; // ecx
  _BYTE *result; // eax
  unsigned int v4; // esi

  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
    return nullptr;
  result = *(_BYTE **)a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 20;
    if ( v4 >= v2 )
      return nullptr;
  }
  return result;
}
