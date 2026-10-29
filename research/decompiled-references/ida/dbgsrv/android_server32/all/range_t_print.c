/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: range_t_print
// Address: 0x00082F68

//----- (00082F68) --------------------------------------------------------
unsigned int __fastcall range_t_print(int *a1, _BYTE *a2, int a3)
{
  int v4; // r1
  int v5; // r6
  unsigned int v6; // r4
  void *v9[3]; // [sp+14h] [bp-1Ch] BYREF
  void *v10[3]; // [sp+20h] [bp-10h] BYREF

  v4 = -1;
  v5 = -1;
  if ( a1 )
  {
    v4 = *a1;
    v5 = a1[1];
  }
  sub_83050((int)v10, v4);
  sub_83050((int)v9, v5);
  v6 = qsnprintf(a2, a3, "%s..%s");
  if ( v9[0] )
  {
    v9[1] = nullptr;
    qfree(v9[0]);
    v9[2] = nullptr;
    v9[0] = nullptr;
  }
  if ( v10[0] )
  {
    v10[1] = nullptr;
    qfree(v10[0]);
    v10[2] = nullptr;
    v10[0] = nullptr;
  }
  return v6;
}
