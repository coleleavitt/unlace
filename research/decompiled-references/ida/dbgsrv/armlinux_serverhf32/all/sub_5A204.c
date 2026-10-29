/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A204
// Address: 0x0005A204

//----- (0005A204) --------------------------------------------------------
unsigned int __fastcall sub_5A204(int a1, int a2, unsigned int a3)
{
  _BYTE *v6; // r0
  unsigned int v7; // r4
  void *ptr[3]; // [sp+0h] [bp-1Ch] BYREF
  _BYTE v10[5]; // [sp+Ch] [bp-10h] BYREF
  _BYTE v11[3]; // [sp+11h] [bp-Bh] BYREF

  sub_67AA8((int *)ptr, 55);
  sub_61F1C((int)ptr, a2);
  v6 = sub_75FB0(v10, (unsigned int)v11, a3);
  if ( v6 != v10 )
    sub_57F50((int)ptr, v10, v6 - v10);
  v7 = sub_60CB8(a1 + 100, (int *)ptr, 0xFFFFFFFF, nullptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_77E08(ptr[0]);
  }
  return v7;
}
