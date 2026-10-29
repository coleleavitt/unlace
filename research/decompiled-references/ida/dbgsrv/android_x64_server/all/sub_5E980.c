/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E980
// Address: 0x000000000005E980

//----- (000000000005E980) ----------------------------------------------------
__int64 __fastcall sub_5E980(__int64 a1, __int64 a2)
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
  void (__fastcall *v13)(__int64, __int64, __int64, __int64, __int64); // r12
  __int64 v14; // r15
  __int64 v15; // rbp

  v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)a1, 2, *(_BYTE *)(a2 + 616));
  if ( v2 < 0
    || (v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 2), 2, *(_BYTE *)(a2 + 616)), v2 < 0)
    || (v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 4), 2, *(_BYTE *)(a2 + 616)), v2 < 0)
    || (v2 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 6), 2, *(_BYTE *)(a2 + 616)), v2 < 0) )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
    v10 = v2;
    v4 = 0;
    v11 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
    v9(a2, 19, 2, v10, v11);
  }
  else
  {
    v3 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 8), 4, *(_BYTE *)(a2 + 616));
    if ( v3 < 0 || (v3 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 12), 4, *(_BYTE *)(a2 + 616)), v3 < 0) )
    {
      v13 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a2 + 496);
      v14 = v3;
      v4 = 0;
      v15 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
      v13(a2, 19, 4, v14, v15);
    }
    else
    {
      v4 = a1 + 16;
      v5 = lreadbytes(*(_QWORD *)(a2 + 472), (void *)(a1 + 16), 4, *(_BYTE *)(a2 + 616));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a2 + 496);
        v4 = v5;
        v8 = qlseek(*(_QWORD *)(a2 + 472), 0, 1);
        v7(a2, 19, 4, v6, v8);
      }
      LOBYTE(v4) = v6 >= 0;
    }
  }
  return v4;
}
