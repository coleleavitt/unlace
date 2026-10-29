/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50100
// Address: 0x0000000000050100

//----- (0000000000050100) ----------------------------------------------------
__int64 __fastcall sub_50100(__int64 a1, void *a2, signed __int64 a3, char a4)
{
  __int64 v6; // rdi
  char v7; // al
  int v8; // ebp
  void (__fastcall *v9)(__int64, __int64, signed __int64, _QWORD, __int64); // r12
  __int64 v10; // rax

  v6 = *(_QWORD *)(a1 + 472);
  if ( a4 )
    v7 = *(_BYTE *)(a1 + 616) != 0;
  else
    v7 = 0;
  v8 = lreadbytes(v6, a2, a3, v7);
  if ( v8 < 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
    v10 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v9(a1, 19, a3, v8, v10);
  }
  return (unsigned int)v8;
}
