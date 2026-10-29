/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F66C
// Address: 0x000000000004F66C

//----- (000000000004F66C) ----------------------------------------------------
bool __fastcall sub_4F66C(__int64 a1, __int64 a2)
{
  int v4; // w0
  size_t v5; // x21
  int v6; // w0
  size_t v7; // x21
  int v8; // w20
  void (__fastcall *v9)(__int64, __int64, size_t, _QWORD, __int64); // x23
  __int64 v10; // x0
  void (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64); // x21
  __int64 v13; // x20
  __int64 v14; // x0
  void (__fastcall *v15)(__int64, __int64, size_t, __int64, __int64); // x22
  __int64 v16; // x20
  __int64 v17; // x0

  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)a2, 4u, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 4), 4u, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
    goto LABEL_13;
  v5 = *(int *)(a1 + 432);
  v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 8), v5, *(_BYTE *)(a1 + 616));
  if ( v6 < 0 )
    goto LABEL_14;
  v5 = *(int *)(a1 + 424);
  v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 16), v5, *(_BYTE *)(a1 + 616));
  if ( v6 < 0 )
    goto LABEL_14;
  v5 = *(int *)(a1 + 428);
  v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 24), v5, *(_BYTE *)(a1 + 616));
  if ( v6 < 0 )
    goto LABEL_14;
  v5 = *(int *)(a1 + 432);
  v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 32), v5, *(_BYTE *)(a1 + 616));
  if ( v6 < 0 )
    goto LABEL_14;
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 40), 4u, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 || (v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 44), 4u, *(_BYTE *)(a1 + 616)), v4 < 0) )
  {
LABEL_13:
    v12 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
    v13 = v4;
    v14 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v12(a1, 19, 4, v13, v14);
    return 0;
  }
  v5 = *(int *)(a1 + 432);
  v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 48), v5, *(_BYTE *)(a1 + 616));
  if ( v6 < 0 )
  {
LABEL_14:
    v15 = *(void (__fastcall **)(__int64, __int64, size_t, __int64, __int64))(a1 + 496);
    v16 = v6;
    v17 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v15(a1, 19, v5, v16, v17);
    return 0;
  }
  v7 = *(int *)(a1 + 432);
  v8 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 56), v7, *(_BYTE *)(a1 + 616));
  if ( v8 < 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
    v10 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v9(a1, 19, v7, v8, v10);
  }
  return v8 >= 0;
}
