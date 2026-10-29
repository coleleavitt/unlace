/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807AE10
// Address: 0x0807AE10

//----- (0807AE10) --------------------------------------------------------
int __cdecl sub_807AE10(int a1, char a2, int a3)
{
  int v3; // eax
  char *v4; // ebx
  int v5; // ebp

  v3 = *(_DWORD *)(a1 + 192);
  v4 = *(char **)(*(_DWORD *)(a1 + 188) + 4 * v3 - 4);
  if ( v3 )
    *(_DWORD *)(a1 + 192) = v3 - 1;
  if ( !a3 || (v5 = 58, (*(_DWORD *)v4 & 0xFFFFFFFB) == 1) )
    v5 = sub_807AA60(a1, v4, a2, a3);
  if ( v4 )
  {
    sub_8079DB0((unsigned int *)v4);
    operator delete(v4, 0x10u);
  }
  return sub_80C7880(v5);
}
