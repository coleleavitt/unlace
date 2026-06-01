/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C0FC
// Address: 0x000000000005C0FC

//----- (000000000005C0FC) ----------------------------------------------------
bool __fastcall sub_5C0FC(__int64 a1, __int64 a2)
{
  int v4; // w0
  int v5; // w0
  int v6; // w20
  void (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // x22
  __int64 v8; // x0
  void (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64); // x21
  __int64 v11; // x20
  __int64 v12; // x4
  __int64 v13; // x2

  v4 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)a1, 2u, *(_BYTE *)(a2 + 616));
  if ( v4 < 0
    || (v4 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 2), 2u, *(_BYTE *)(a2 + 616)), v4 < 0)
    || (v4 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 4), 2u, *(_BYTE *)(a2 + 616)), v4 < 0)
    || (v4 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 6), 2u, *(_BYTE *)(a2 + 616)), v4 < 0) )
  {
    v10 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v11 = v4;
    v12 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v13 = 2;
LABEL_11:
    v10(a2, 19, v13, v11, v12);
    return 0;
  }
  v5 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 8), 4u, *(_BYTE *)(a2 + 616));
  if ( v5 < 0 || (v5 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 12), 4u, *(_BYTE *)(a2 + 616)), v5 < 0) )
  {
    v10 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v11 = v5;
    v12 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v13 = 4;
    goto LABEL_11;
  }
  v6 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 16), 4u, *(_BYTE *)(a2 + 616));
  if ( v6 < 0 )
  {
    v7 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a2 + 496);
    v8 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v7(a2, 19, 4, v6, v8);
  }
  return v6 >= 0;
}
