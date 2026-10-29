/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EAF4
// Address: 0x0002EAF4

//----- (0002EAF4) --------------------------------------------------------
bool __fastcall sub_2EAF4(int a1, _DWORD *a2)
{
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  return sub_2A280(*(_DWORD *)(a1 + 4), a2, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 348), 1) >= 0
      && sub_2A280(*(_DWORD *)(a1 + 4), a2 + 2, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 336), 1) >= 0;
}
