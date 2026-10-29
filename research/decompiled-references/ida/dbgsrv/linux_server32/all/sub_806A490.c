/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806A490
// Address: 0x0806A490

//----- (0806A490) --------------------------------------------------------
_BOOL4 __cdecl sub_806A490(int *a1, int a2)
{
  return sub_806A1B0((int)a1, (void *)a2, 4, 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 4), 4, 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 8), a1[85], 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 16), a1[83], 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 24), a1[84], 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 32), a1[85], 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 40), 4, 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 44), 4, 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 48), a1[85], 1) >= 0
      && sub_806A1B0((int)a1, (void *)(a2 + 56), a1[85], 1) >= 0;
}
