/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AB08
// Address: 0x0002AB08

//----- (0002AB08) --------------------------------------------------------
bool __fastcall sub_2AB08(int a1, int a2)
{
  return sub_2A280(a1, (void *)a2, 4, 1) >= 0
      && (!*(_BYTE *)(a1 + 481) || sub_2A280(a1, (void *)(a2 + 4), 4, 1) >= 0)
      && sub_2A280(a1, (void *)(a2 + 8), *(_DWORD *)(a1 + 344), 1) >= 0
      && sub_2A280(a1, (void *)(a2 + 16), *(_DWORD *)(a1 + 344), 1) >= 0;
}
