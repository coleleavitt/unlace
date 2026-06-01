/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18A24
// Address: 0x00018A24

//----- (00018A24) --------------------------------------------------------
void __fastcall sub_18A24(int a1)
{
  int v2; // r3
  int v3; // r3

  sub_6E318(*(_DWORD **)(a1 + 8));
  sub_80648(*(void **)(a1 + 12));
  v2 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v2 + 4;
  v3 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 16) = v3 + 484;
}
