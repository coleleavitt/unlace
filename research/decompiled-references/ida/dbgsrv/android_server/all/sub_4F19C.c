/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F19C
// Address: 0x000000000004F19C

//----- (000000000004F19C) ----------------------------------------------------
__int64 __fastcall sub_4F19C(__int64 a1, void *a2)
{
  unsigned int v3; // w20
  void (__fastcall *v4)(__int64, __int64, __int64, _QWORD, __int64); // x22
  __int64 v5; // x0

  v3 = lreadbytes(*(_QWORD *)(a1 + 472), a2, 4u, *(_BYTE *)(a1 + 616));
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v5 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v4(a1, 19, 4, (int)v3, v5);
  }
  return v3;
}
