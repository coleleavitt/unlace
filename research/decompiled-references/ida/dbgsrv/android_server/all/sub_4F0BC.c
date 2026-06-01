/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F0BC
// Address: 0x000000000004F0BC

//----- (000000000004F0BC) ----------------------------------------------------
__int64 __fastcall sub_4F0BC(__int64 a1, void *a2)
{
  size_t v3; // x20
  unsigned int v4; // w21
  void (__fastcall *v5)(__int64, __int64, size_t, _QWORD, __int64); // x23
  __int64 v6; // x0

  v3 = *(int *)(a1 + 432);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), a2, v3, *(_BYTE *)(a1 + 616));
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
    v6 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v5(a1, 19, v3, (int)v4, v6);
  }
  return v4;
}
