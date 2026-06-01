/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC1B0
// Address: 0x080BC1B0

//----- (080BC1B0) --------------------------------------------------------
int __cdecl sub_80BC1B0(int a1, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax

  if ( !a3 )
    return a3;
  v4 = a3;
  while ( 1 )
  {
    v5 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)a1 + 32))(a1, a2, v4);
    if ( v5 <= 0 )
      break;
    a2 += v5;
    v4 -= v5;
    if ( !v4 )
      return a3;
  }
  return a3 - v4;
}
