/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EB14
// Address: 0x000000000004EB14

//----- (000000000004EB14) ----------------------------------------------------
__int64 __fastcall sub_4EB14(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x9
  __int64 v6; // x22
  int v7; // w20
  void (__fastcall *v8)(__int64, __int64, __int64, _QWORD, __int64); // x23
  __int64 v9; // x0
  unsigned int v10; // w20
  unsigned int dest; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v5 = *(_QWORD *)(a1 + 480);
  v6 = v4 - v5;
  if ( qlseek(*(_QWORD *)(a1 + 472), v5 + a2, 0) == -1 )
  {
    v10 = 0;
  }
  else
  {
    v7 = lreadbytes(*(_QWORD *)(a1 + 472), &dest, 4u, *(_BYTE *)(a1 + 616));
    if ( v7 < 0 )
    {
      v8 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
      v9 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v8(a1, 19, 4, v7, v9);
    }
    if ( v7 >= 0 )
      v10 = dest;
    else
      v10 = 0;
  }
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v6, 0);
  return v10;
}
