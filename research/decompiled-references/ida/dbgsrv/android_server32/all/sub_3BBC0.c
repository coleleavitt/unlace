/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BBC0
// Address: 0x0003BBC0

//----- (0003BBC0) --------------------------------------------------------
int __fastcall sub_3BBC0(int a1, char *a2)
{
  int v3; // r4
  void *v5[3]; // [sp+8h] [bp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  sub_1B09C((int)v5, a2);
  sub_265B0(a1, v5);
  if ( v5[0] )
  {
    v5[1] = nullptr;
    qfree(v5[0]);
    v5[2] = nullptr;
    v5[0] = nullptr;
  }
  return v3;
}
