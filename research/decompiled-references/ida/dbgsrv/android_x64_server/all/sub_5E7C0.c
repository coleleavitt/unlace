/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E7C0
// Address: 0x000000000005E7C0

//----- (000000000005E7C0) ----------------------------------------------------
__int64 __fastcall sub_5E7C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // r14d
  int v5; // eax
  int v6; // ebp
  void (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, __int64, __int64, __int64, __int64); // r12
  __int64 v10; // r15
  __int64 v11; // rbp
  void (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64); // r12
  __int64 v13; // r15
  __int64 v14; // rbp

  v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)a1, 4, *(_BYTE *)(a2 + 616));
  if ( v2 < 0 )
    goto LABEL_8;
  v3 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 4), 2, *(_BYTE *)(a2 + 616));
  if ( v3 < 0 || (v3 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 6), 2, *(_BYTE *)(a2 + 616)), v3 < 0) )
  {
    v12 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v13 = v3;
    v4 = 0;
    v14 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v12(a2, 19, 2, v13, v14);
    return v4;
  }
  v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 8), 4, *(_BYTE *)(a2 + 616));
  if ( v2 < 0 )
  {
LABEL_8:
    v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v10 = v2;
    v4 = 0;
    v11 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v9(a2, 19, 4, v10, v11);
    return v4;
  }
  v4 = a1 + 12;
  v5 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 12), 4, *(_BYTE *)(a2 + 616));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a2 + 496);
    v4 = v5;
    v8 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v7(a2, 19, 4, v6, v8);
  }
  LOBYTE(v4) = v6 >= 0;
  return v4;
}
