/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084BA0
// Address: 0x08084BA0

//----- (08084BA0) --------------------------------------------------------
_DWORD *__cdecl sub_8084BA0(int a1, int a2)
{
  int v2; // edx
  _DWORD *result; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 0 )
    return (_DWORD *)sub_8084B20(a2, ~v2);
  result = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 )
  {
    if ( *result == 289621065 && (unsigned int)v2 < result[4] )
      return (_DWORD *)(result[3] + 20 * v2);
    else
      return nullptr;
  }
  return result;
}
