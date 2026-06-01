/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A314
// Address: 0x0002A314

//----- (0002A314) --------------------------------------------------------
int __fastcall sub_2A314(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 481) )
  {
    if ( sub_2A280(a1, (void *)a2, 4, 1) >= 0
      && sub_2A280(a1, (void *)(a2 + 4), 1, 1) >= 0
      && sub_2A280(a1, (void *)(a2 + 5), 1, 1) >= 0
      && sub_2A280(a1, (void *)(a2 + 6), 2, 1) >= 0
      && sub_2A280(a1, (void *)(a2 + 8), *(_DWORD *)(a1 + 336), 1) >= 0 )
    {
      return sub_2A280(a1, (void *)(a2 + 16), *(_DWORD *)(a1 + 344), 1) >> 31;
    }
  }
  else if ( sub_2A280(a1, (void *)a2, 4, 1) >= 0
         && sub_2A280(a1, (void *)(a2 + 8), *(_DWORD *)(a1 + 336), 1) >= 0
         && sub_2A280(a1, (void *)(a2 + 16), 4, 1) >= 0
         && sub_2A280(a1, (void *)(a2 + 4), 1, 1) >= 0
         && sub_2A280(a1, (void *)(a2 + 5), 1, 1) >= 0 )
  {
    return sub_2A280(a1, (void *)(a2 + 6), 2, 1) >> 31;
  }
  return -1;
}
