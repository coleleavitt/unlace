/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F2C8
// Address: 0x0001F2C8

//----- (0001F2C8) --------------------------------------------------------
bool __fastcall sub_1F2C8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r4
  void *v5[2]; // [sp+4h] [bp-10h] BYREF
  int v6; // [sp+Ch] [bp-8h]

  v2 = a1[19];
  v5[1] = nullptr;
  v5[0] = nullptr;
  v6 = 0;
  if ( sub_1F360((int)a1, (int)v5, 0) == 1 )
    sub_1F7BC((int)a1, v5);
  sub_1EF60(a1);
  v3 = a1[19];
  if ( v5[0] )
  {
    sub_1B470((int *)v5, 0);
    qfree(v5[0]);
    v6 = 0;
    v5[0] = nullptr;
  }
  return v3 != v2;
}
