/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A200
// Address: 0x0008A200

//----- (0008A200) --------------------------------------------------------
_DWORD *__cdecl sub_8A200(int a1, int a2)
{
  int v2; // ecx
  _DWORD *result; // eax
  _DWORD *v4; // edx
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  result = nullptr;
  if ( (v2 & 0x7FFFFFF) != 0 )
  {
    v4 = *(_DWORD **)(a1 + 20);
    v5 = 32 * v2;
    while ( *v4 != a2 )
    {
      v4 += 8;
      v5 -= 32;
      if ( !v5 )
        return result;
    }
    return v4;
  }
  return result;
}
