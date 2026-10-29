/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BBC0
// Address: 0x0004BBC0

//----- (0004BBC0) --------------------------------------------------------
int __cdecl sub_4BBC0(int *a1)
{
  int v1; // ecx
  int v2; // eax
  void *v4[6]; // [esp+10h] [ebp-18h] BYREF

  v4[3] = (void *)__readgsdword(0x14u);
  sub_4BD40((int)a1, 2);
  v1 = a1[45];
  v2 = *(unsigned __int16 *)(a1[44] + 2 * v1 - 2);
  if ( v1 )
    a1[45] = v1 - 1;
  *(_DWORD *)(*(_DWORD *)(a1[47] + 4 * a1[48] - 4) + 12) = v2;
  sub_4BF50(v4, a1 + 22);
  if ( v4[0] )
  {
    v4[1] = nullptr;
    qfree(v4[0]);
    v4[0] = nullptr;
    v4[2] = nullptr;
  }
  return 0;
}
