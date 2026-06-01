/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B504
// Address: 0x0006B504

//----- (0006B504) --------------------------------------------------------
int __fastcall sub_6B504(int a1, int a2)
{
  unsigned __int8 v3[4]; // [sp+8h] [bp-8h] BYREF

  v3[0] = -1;
  (*(void (__fastcall **)(_DWORD, int, unsigned __int8 *, int, _DWORD))(**(_DWORD **)(a1 + 4) + 144))(
    *(_DWORD *)(a1 + 4),
    a2,
    v3,
    1,
    0);
  return v3[0];
}
