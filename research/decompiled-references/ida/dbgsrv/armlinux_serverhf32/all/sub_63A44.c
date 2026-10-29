/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63A44
// Address: 0x00063A44

//----- (00063A44) --------------------------------------------------------
int __fastcall sub_63A44(int a1, int a2)
{
  int v2; // r5
  unsigned __int16 v4; // [sp+Ah] [bp-Ah] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v4 = -1;
  (*(void (__fastcall **)(int, int, unsigned __int16 *, int, _DWORD))(*(_DWORD *)v2 + 144))(v2, a2, &v4, 2, 0);
  return v4;
}
