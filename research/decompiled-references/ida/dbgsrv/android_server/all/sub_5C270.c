/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C270
// Address: 0x000000000005C270

//----- (000000000005C270) ----------------------------------------------------
bool __fastcall sub_5C270(__int64 a1, __int64 a2)
{
  int v4; // w0
  int v5; // w20
  void (__fastcall *v6)(__int64, __int64, __int64, _QWORD, __int64); // x22
  __int64 v7; // x0
  void (__fastcall *v9)(__int64, __int64, __int64, __int64, __int64); // x21
  __int64 v10; // x20
  __int64 v11; // x0

  v4 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)a1, 4u, *(_BYTE *)(a2 + 616));
  if ( v4 < 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v10 = v4;
    v11 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v9(a2, 19, 4, v10, v11);
    return 0;
  }
  else
  {
    v5 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 4), 4u, *(_BYTE *)(a2 + 616));
    if ( v5 < 0 )
    {
      v6 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a2 + 496);
      v7 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
      v6(a2, 19, 4, v5, v7);
    }
    return v5 >= 0;
  }
}
