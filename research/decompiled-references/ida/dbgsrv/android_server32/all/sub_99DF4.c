/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99DF4
// Address: 0x00099DF4

//----- (00099DF4) --------------------------------------------------------
bool __fastcall sub_99DF4(int a1, int a2, int a3, int a4)
{
  unsigned int *v5; // r0
  unsigned int v7; // [sp+4h] [bp-14h] BYREF
  int v8[2]; // [sp+8h] [bp-10h] BYREF

  v8[1] = a4;
  v7 = 0;
  v8[0] = 0;
  v5 = decode_eht_entry(*(unsigned int **)(a1 + 376), (int *)&v7, v8);
  return Unwind_VRS_Interpret(a1, (int)v5, v7, v8[0]) == 8;
}
