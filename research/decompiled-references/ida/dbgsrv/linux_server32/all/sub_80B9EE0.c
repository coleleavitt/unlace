/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9EE0
// Address: 0x080B9EE0

//----- (080B9EE0) --------------------------------------------------------
int __cdecl sub_80B9EE0(int *a1, int a2, int a3)
{
  int v3; // eax
  int v5; // ebx
  int v6; // eax
  int (*v7)(); // eax

  v3 = 0;
  while ( a1[v3 + 114] != a2 || a1[v3 + 118] != a3 )
  {
    if ( ++v3 == 4 )
      return 0;
  }
  a1[v3 + 114] = -1;
  v5 = ~(15 << (4 * v3 + 16)) & a1[123] & ~(3 << (2 * v3));
  v6 = *a1;
  a1[123] = v5;
  v7 = *(int (**)())(v6 + 308);
  if ( v7 == sub_8053400 )
    return 0;
  return ((int (__cdecl *)(int *))v7)(a1);
}
