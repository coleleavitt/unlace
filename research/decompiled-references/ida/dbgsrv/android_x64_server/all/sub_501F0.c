/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_501F0
// Address: 0x00000000000501F0

//----- (00000000000501F0) ----------------------------------------------------
__int64 __fastcall sub_501F0(__int64 a1, void *a2)
{
  signed __int64 v2; // r14
  int v3; // ebp
  void (__fastcall *v4)(__int64, __int64, signed __int64, _QWORD, __int64); // r12
  __int64 v5; // rax

  v2 = *(int *)(a1 + 428);
  v3 = lreadbytes(*(_QWORD *)(a1 + 472), a2, v2, *(_BYTE *)(a1 + 616));
  if ( v3 < 0 )
  {
    v4 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
    v5 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v4(a1, 19, v2, v3, v5);
  }
  return (unsigned int)v3;
}
