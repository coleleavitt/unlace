/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B588
// Address: 0x0006B588

//----- (0006B588) --------------------------------------------------------
int __fastcall sub_6B588(int a1, int a2)
{
  int v3; // [sp+8h] [bp-8h] BYREF

  v3 = -1;
  (*(void (__fastcall **)(_DWORD, int, int *, int, _DWORD))(**(_DWORD **)(a1 + 4) + 144))(
    *(_DWORD *)(a1 + 4),
    a2,
    &v3,
    4,
    0);
  return v3;
}
