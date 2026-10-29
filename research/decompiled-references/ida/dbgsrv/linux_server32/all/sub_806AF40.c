/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806AF40
// Address: 0x0806AF40

//----- (0806AF40) --------------------------------------------------------
_BOOL4 __cdecl sub_806AF40(int a1, int a2)
{
  return sub_806A1B0(a1, (void *)a2, 4, 1) >= 0
      && (!*(_BYTE *)(a1 + 477) || sub_806A1B0(a1, (void *)(a2 + 4), 4, 1) >= 0)
      && sub_806A1B0(a1, (void *)(a2 + 8), *(_DWORD *)(a1 + 340), 1) >= 0
      && sub_806A1B0(a1, (void *)(a2 + 16), *(_DWORD *)(a1 + 340), 1) >= 0;
}
