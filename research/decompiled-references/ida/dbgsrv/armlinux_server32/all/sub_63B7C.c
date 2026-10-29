/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63B7C
// Address: 0x00063B7C

//----- (00063B7C) --------------------------------------------------------
int __fastcall sub_63B7C(int a1, int a2)
{
  int v2; // r5
  unsigned __int8 v4; // [sp+Bh] [bp-9h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v4 = -1;
  (*(void (__fastcall **)(int, int, unsigned __int8 *, int, _DWORD))(*(_DWORD *)v2 + 144))(v2, a2, &v4, 1, 0);
  return v4;
}
