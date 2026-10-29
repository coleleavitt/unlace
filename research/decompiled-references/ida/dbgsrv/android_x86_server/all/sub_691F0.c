/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_691F0
// Address: 0x000691F0

//----- (000691F0) --------------------------------------------------------
int __cdecl sub_691F0(_DWORD *a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int result; // eax

  while ( 1 )
  {
    result = a1[8];
    if ( !result )
      break;
    v1 = a1[7];
    v2 = result - 1;
    v3 = result + 27 * (result - 1) - 1;
    *a1 = *(_DWORD *)(v1 + v3 + 12);
    a1[1] = *(_DWORD *)(v1 + v3 + 16);
    a1[10] = *(_DWORD *)(v1 + v3 + 24);
    a1[8] = v2;
    sub_1BC40((char **)(v1 + v3));
  }
  return result;
}
