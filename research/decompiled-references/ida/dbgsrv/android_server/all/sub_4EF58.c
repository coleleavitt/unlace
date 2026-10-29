/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EF58
// Address: 0x000000000004EF58

//----- (000000000004EF58) ----------------------------------------------------
__int64 __fastcall sub_4EF58(__int64 a1, void *a2, size_t a3, char a4)
{
  __int64 v5; // x0
  char v7; // w3
  unsigned int v8; // w21
  void (__fastcall *v9)(__int64, __int64, size_t, _QWORD, __int64); // x23
  __int64 v10; // x0

  v5 = *(_QWORD *)(a1 + 472);
  v7 = (a4 & 1) != 0 && *(_BYTE *)(a1 + 616) != 0;
  v8 = lreadbytes(v5, a2, a3, v7);
  if ( (v8 & 0x80000000) != 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
    v10 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v9(a1, 19, a3, (int)v8, v10);
  }
  return v8;
}
