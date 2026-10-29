/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C058
// Address: 0x0003C058

//----- (0003C058) --------------------------------------------------------
int __fastcall sub_3C058(_DWORD *a1)
{
  int v2; // r3
  int v3; // r0
  void *v5[3]; // [sp+0h] [bp-10h] BYREF

  sub_3C12C((int)a1, 2);
  v2 = a1[46];
  v3 = *(unsigned __int16 *)(a1[45] + 2 * (v2 - 1));
  if ( v2 )
    a1[46] = v2 - 1;
  *(_DWORD *)(*(_DWORD *)(a1[48] + 4 * a1[49] - 4) + 12) = v3;
  sub_3C28C(v5, a1 + 23);
  if ( v5[0] )
  {
    v5[1] = nullptr;
    qfree(v5[0]);
    v5[2] = nullptr;
    v5[0] = nullptr;
  }
  return 0;
}
