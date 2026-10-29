/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_525F0
// Address: 0x00000000000525F0

//----- (00000000000525F0) ----------------------------------------------------
bool __fastcall sub_525F0(__int64 a1, void *a2)
{
  __int64 v4; // x23
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x22
  _BOOL4 v8; // w20
  int v10; // w20
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD, __int64); // x23
  __int64 v12; // x0
  int v13; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
  v5 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v6 = *(_QWORD *)(a1 + 480);
  v7 = v5 - v6;
  if ( qlseek(*(_QWORD *)(a1 + 472), v4 + v6 - 4, 0) == -1
    || qlread(*(_QWORD *)(a1 + 472), &v13, 4u) != 4
    || v13 != 541413968
    || qlseek(*(_QWORD *)(a1 + 472), v4 - 8, 0) == -1 )
  {
    v8 = 0;
  }
  else
  {
    v10 = lreadbytes(*(_QWORD *)(a1 + 472), a2, 4u, *(_BYTE *)(a1 + 616));
    if ( v10 < 0 )
    {
      v11 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
      v12 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v11(a1, 19, 4, v10, v12);
    }
    v8 = v10 >= 0;
  }
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v7, 0);
  return v8;
}
