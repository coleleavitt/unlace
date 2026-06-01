/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463E90
// Address: 0x00463E90

//----- (00463E90) --------------------------------------------------------
int __cdecl sub_463E90(int a1, _DWORD *a2)
{
  int v2; // esi
  int result; // eax

  v2 = a2[1];
  result = a1 + *a2;
  if ( v2 >= 0 )
    result += v2 + *(_DWORD *)(*(_DWORD *)(v2 + a1) + a2[2]);
  return result;
}
