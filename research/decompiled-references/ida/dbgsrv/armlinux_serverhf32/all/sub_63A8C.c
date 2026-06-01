/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63A8C
// Address: 0x00063A8C

//----- (00063A8C) --------------------------------------------------------
int __fastcall sub_63A8C(int a1, int a2)
{
  int v2; // r5
  int v4; // [sp+8h] [bp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v4 = -1;
  (*(void (__fastcall **)(int, int, int *, int, _DWORD))(*(_DWORD *)v2 + 144))(v2, a2, &v4, 4, 0);
  return v4;
}
