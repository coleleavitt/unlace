/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C5470
// Address: 0x080C5470

//----- (080C5470) --------------------------------------------------------
_BYTE *__cdecl sub_80C5470(int a1, char a2)
{
  int v2; // ecx
  _BYTE *result; // eax
  int v4; // edx

  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
    return nullptr;
  result = *(_BYTE **)a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 20;
    if ( v4 == v2 )
      return nullptr;
  }
  return result;
}
