/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427810
// Address: 0x00427810

//----- (00427810) --------------------------------------------------------
void __cdecl sub_427810(int a1)
{
  int v1; // eax
  void *v2; // esi

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    v2 = (void *)(v1 - 4);
    sub_462D89(v1, 24, *(_DWORD *)(v1 - 4), (void (__thiscall *)(int))sub_41BC20);
    sub_4631AC(v2);
  }
  sub_453A20(*(void **)a1);
  sub_453A20(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
}
