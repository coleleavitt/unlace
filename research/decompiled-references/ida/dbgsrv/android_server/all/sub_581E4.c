/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_581E4
// Address: 0x00000000000581E4

//----- (00000000000581E4) ----------------------------------------------------
bool __fastcall sub_581E4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x19
  size_t v5; // x20
  int v6; // w0
  __int64 v7; // x19
  size_t v8; // x20
  int v9; // w21
  void (__fastcall *v10)(__int64, __int64, size_t, _QWORD, __int64); // x23
  __int64 v11; // x0
  void (__fastcall *v13)(__int64, __int64, size_t, __int64, __int64); // x22
  __int64 v14; // x21
  __int64 v15; // x0

  *a2 = 0;
  a2[1] = 0;
  v2 = *(_QWORD *)(a1 + 8);
  v5 = *(int *)(v2 + 436);
  v6 = lreadbytes(*(_QWORD *)(v2 + 472), a2, v5, *(_BYTE *)(v2 + 616));
  if ( v6 < 0 )
  {
    v13 = *(void (__fastcall **)(__int64, __int64, size_t, __int64, __int64))(v2 + 496);
    v14 = v6;
    v15 = qlseek(*(_QWORD *)(v2 + 472), 0, 1);
    v13(v2, 19, v5, v14, v15);
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(int *)(v7 + 424);
    v9 = lreadbytes(*(_QWORD *)(v7 + 472), a2 + 1, v8, *(_BYTE *)(v7 + 616));
    if ( v9 < 0 )
    {
      v10 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(v7 + 496);
      v11 = qlseek(*(_QWORD *)(v7 + 472), 0, 1);
      v10(v7, 19, v8, v9, v11);
    }
    return v9 >= 0;
  }
}
