/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50340
// Address: 0x0000000000050340

//----- (0000000000050340) ----------------------------------------------------
__int64 __fastcall sub_50340(__int64 a1, void *a2)
{
  int v2; // ebp
  void (__fastcall *v3)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v4; // rax

  v2 = lreadbytes(*(_QWORD *)(a1 + 472), a2, 4, *(_BYTE *)(a1 + 616));
  if ( v2 < 0 )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v4 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v3(a1, 19, 4, v2, v4);
  }
  return (unsigned int)v2;
}
