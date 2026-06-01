/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AE350
// Address: 0x00000000004AE350

//----- (00000000004AE350) ----------------------------------------------------
__int64 __fastcall sub_4AE350(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // w3
  bool v5; // cc
  unsigned int v6; // w21
  __int64 v7; // x1
  __int64 v9; // x2
  __int64 v10; // x2
  void (__fastcall *v11)(__int64, __int64, __int64); // x3
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x2
  void (__fastcall *v15)(__int64, __int64, __int64); // x3

  v3 = *a3;
  v5 = *a3 != 48 && v3 > 1;
  if ( !v5 || v3 == 6 )
    return def_4AD1E4(a1, a2, a3);
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 256);
  v9 = v7 + 1;
  if ( v7 == 255 )
  {
    v11 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    v10 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 255) = 0;
    v11(a1, 255, v10);
    v9 = 1;
    v7 = 0;
    ++*(_QWORD *)(a1 + 320);
  }
  *(_QWORD *)(a1 + 256) = v9;
  *(_BYTE *)(a1 + v7) = 40;
  *(_BYTE *)(a1 + 264) = 40;
  def_4AD1E4(a1, v6, a3);
  v12 = *(_QWORD *)(a1 + 256);
  v13 = v12 + 1;
  if ( v12 == 255 )
  {
    v15 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    v14 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 255) = 0;
    v15(a1, 255, v14);
    v13 = 1;
    v12 = 0;
    ++*(_QWORD *)(a1 + 320);
  }
  *(_QWORD *)(a1 + 256) = v13;
  *(_BYTE *)(a1 + v12) = 41;
  *(_BYTE *)(a1 + 264) = 41;
  return 41;
}
