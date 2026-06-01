/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94F20
// Address: 0x00094F20

//----- (00094F20) --------------------------------------------------------
int __cdecl sub_94F20(int a1, int a2, int a3)
{
  int v3; // edi
  int v5; // eax

  v3 = a3;
  if ( !a3 )
    return 0;
  while ( 1 )
  {
    v5 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)a1 + 32))(a1, a2, v3);
    if ( v5 <= 0 )
      break;
    a2 += v5;
    v3 -= v5;
    if ( !v3 )
      return a3;
  }
  return a3 - v3;
}
