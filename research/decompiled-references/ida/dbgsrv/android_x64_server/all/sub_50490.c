/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50490
// Address: 0x0000000000050490

//----- (0000000000050490) ----------------------------------------------------
__int64 __fastcall sub_50490(__int64 a1, __int64 a2)
{
  char v3; // bl
  int v4; // ebp
  void (__fastcall *v5)(__int64, __int64, __int64, _QWORD, __int64); // r13
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // eax
  int v9; // eax
  signed __int64 v10; // rbp
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi
  void (__fastcall *v14)(__int64, __int64, __int64, __int64, __int64); // rbx
  __int64 v15; // r14
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8

  v3 = *(_BYTE *)(a1 + 617);
  v4 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)a2, 4, *(_BYTE *)(a1 + 616));
  if ( v4 < 0 )
  {
    v5 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v6 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v5(a1, 19, 4, v4, v6);
  }
  result = 0xFFFFFFFFLL;
  if ( v3 )
  {
    if ( v4 < 0 )
      return result;
    v8 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 4), 1, *(_BYTE *)(a1 + 616));
    if ( v8 >= 0 )
    {
      v8 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 5), 1, *(_BYTE *)(a1 + 616));
      if ( v8 >= 0 )
      {
        v9 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 6), 2, *(_BYTE *)(a1 + 616));
        if ( v9 >= 0 )
        {
          v10 = *(int *)(a1 + 424);
          v11 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 8), v10, *(_BYTE *)(a1 + 616));
          if ( v11 >= 0 )
          {
            v10 = *(int *)(a1 + 432);
            v12 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 16), v10, *(_BYTE *)(a1 + 616));
            result = 0;
            if ( v12 >= 0 )
              return result;
            v13 = *(_QWORD *)(a1 + 472);
            v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
            v15 = v12;
            goto LABEL_21;
          }
LABEL_20:
          v13 = *(_QWORD *)(a1 + 472);
          v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
          v15 = v11;
LABEL_21:
          v24 = qlseek(v13, 0, 1);
          v22 = a1;
          v21 = v10;
          v23 = v15;
          goto LABEL_22;
        }
        v18 = *(_QWORD *)(a1 + 472);
        v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
        v19 = v9;
        goto LABEL_25;
      }
    }
  }
  else
  {
    if ( v4 < 0 )
      return result;
    v10 = *(int *)(a1 + 424);
    v11 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 8), v10, *(_BYTE *)(a1 + 616));
    if ( v11 < 0 )
      goto LABEL_20;
    v16 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 16), 4, *(_BYTE *)(a1 + 616));
    if ( v16 < 0 )
    {
      v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
      v19 = v16;
      v20 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v21 = 4;
      goto LABEL_19;
    }
    v8 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 4), 1, *(_BYTE *)(a1 + 616));
    if ( v8 >= 0 )
    {
      v8 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 5), 1, *(_BYTE *)(a1 + 616));
      if ( v8 >= 0 )
      {
        v17 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 6), 2, *(_BYTE *)(a1 + 616));
        result = 0;
        if ( v17 >= 0 )
          return result;
        v18 = *(_QWORD *)(a1 + 472);
        v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
        v19 = v17;
LABEL_25:
        v20 = qlseek(v18, 0, 1);
        v21 = 2;
        goto LABEL_19;
      }
    }
  }
  v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
  v19 = v8;
  v20 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v21 = 1;
LABEL_19:
  v22 = a1;
  v23 = v19;
  v24 = v20;
LABEL_22:
  v14(v22, 19, v21, v23, v24);
  return 0xFFFFFFFFLL;
}
