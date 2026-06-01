/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DACD0
// Address: 0x000DACD0

//----- (000DACD0) --------------------------------------------------------
int __cdecl sub_DACD0(int a1, int a2, int a3)
{
  int result; // eax
  unsigned int v4; // edx

  result = 1;
  v4 = *(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(a2 + 8) <= v4 )
    return -(*(_DWORD *)(a2 + 8) < v4);
  return result;
}
