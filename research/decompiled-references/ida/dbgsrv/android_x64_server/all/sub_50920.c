/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50920
// Address: 0x0000000000050920

//----- (0000000000050920) ----------------------------------------------------
__int64 __fastcall sub_50920(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 v3; // r15
  int v4; // eax
  unsigned int v5; // r14d
  signed __int64 v6; // r15
  int v7; // eax
  int v8; // ebp
  void (__fastcall *v9)(__int64, __int64, signed __int64, _QWORD, __int64); // r12
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64); // r12
  __int64 v12; // r15
  __int64 v13; // rax
  void (__fastcall *v14)(__int64, __int64, signed __int64, __int64, __int64); // r13
  __int64 v15; // r12
  __int64 v16; // rax

  v2 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)a2, 4, *(_BYTE *)(a1 + 616));
  if ( v2 < 0 )
    goto LABEL_13;
  v2 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 4), 4, *(_BYTE *)(a1 + 616));
  if ( v2 < 0 )
    goto LABEL_13;
  v3 = *(int *)(a1 + 432);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 8), v3, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
    goto LABEL_14;
  v3 = *(int *)(a1 + 424);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 16), v3, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
    goto LABEL_14;
  v3 = *(int *)(a1 + 428);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 24), v3, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
    goto LABEL_14;
  v3 = *(int *)(a1 + 432);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 32), v3, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
    goto LABEL_14;
  v2 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 40), 4, *(_BYTE *)(a1 + 616));
  if ( v2 < 0 || (v2 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 44), 4, *(_BYTE *)(a1 + 616)), v2 < 0) )
  {
LABEL_13:
    v11 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
    v12 = v2;
    v5 = 0;
    v13 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v11(a1, 19, 4, v12, v13);
    return v5;
  }
  v3 = *(int *)(a1 + 432);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 48), v3, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
  {
LABEL_14:
    v14 = *(void (__fastcall **)(__int64, __int64, signed __int64, __int64, __int64))(a1 + 496);
    v15 = v4;
    v5 = 0;
    v16 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v14(a1, 19, v3, v15, v16);
    return v5;
  }
  v5 = a2 + 56;
  v6 = *(int *)(a1 + 432);
  v7 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 56), v6, *(_BYTE *)(a1 + 616));
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
    v5 = v7;
    v10 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v9(a1, 19, v6, v8, v10);
  }
  LOBYTE(v5) = v8 >= 0;
  return v5;
}
