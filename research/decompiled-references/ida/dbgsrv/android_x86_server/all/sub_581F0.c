/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_581F0
// Address: 0x000581F0

//----- (000581F0) --------------------------------------------------------
int __cdecl sub_581F0(int a1, int a2)
{
  int v2; // ecx
  _DWORD *v3; // edx
  int result; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 0 )
    return sub_58250(a2, ~v2);
  v3 = *(_DWORD **)a1;
  result = 0;
  if ( *(_DWORD *)a1 && *v3 == 289621065 && (unsigned int)v2 < v3[4] )
    return v3[3] + 20 * v2;
  return result;
}
