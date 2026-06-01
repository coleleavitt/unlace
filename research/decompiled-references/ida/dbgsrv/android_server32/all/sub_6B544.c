/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B544
// Address: 0x0006B544

//----- (0006B544) --------------------------------------------------------
int __fastcall sub_6B544(int a1, int a2)
{
  unsigned __int16 v3; // [sp+8h] [bp-8h] BYREF

  v3 = -1;
  (*(void (__fastcall **)(_DWORD, int, unsigned __int16 *, int, _DWORD))(**(_DWORD **)(a1 + 4) + 144))(
    *(_DWORD *)(a1 + 4),
    a2,
    &v3,
    2,
    0);
  return v3;
}
