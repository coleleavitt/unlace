/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806A240
// Address: 0x0806A240

//----- (0806A240) --------------------------------------------------------
int __cdecl sub_806A240(int a1, int a2)
{
  int v2; // eax

  if ( *(_BYTE *)(a1 + 477) )
  {
    if ( sub_806A1B0(a1, (void *)a2, 4, 1) >= 0
      && sub_806A1B0(a1, (void *)(a2 + 4), 1, 1) >= 0
      && sub_806A1B0(a1, (void *)(a2 + 5), 1, 1) >= 0
      && sub_806A1B0(a1, (void *)(a2 + 6), 2, 1) >= 0
      && sub_806A1B0(a1, (void *)(a2 + 8), *(_DWORD *)(a1 + 332), 1) >= 0 )
    {
      v2 = sub_806A1B0(a1, (void *)(a2 + 16), *(_DWORD *)(a1 + 340), 1);
      return v2 >> 31;
    }
  }
  else if ( sub_806A1B0(a1, (void *)a2, 4, 1) >= 0
         && sub_806A1B0(a1, (void *)(a2 + 8), *(_DWORD *)(a1 + 332), 1) >= 0
         && sub_806A1B0(a1, (void *)(a2 + 16), 4, 1) >= 0
         && sub_806A1B0(a1, (void *)(a2 + 4), 1, 1) >= 0
         && sub_806A1B0(a1, (void *)(a2 + 5), 1, 1) >= 0 )
  {
    v2 = sub_806A1B0(a1, (void *)(a2 + 6), 2, 1);
    return v2 >> 31;
  }
  return -1;
}
