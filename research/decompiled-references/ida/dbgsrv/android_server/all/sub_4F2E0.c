/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F2E0
// Address: 0x000000000004F2E0

//----- (000000000004F2E0) ----------------------------------------------------
__int64 __fastcall sub_4F2E0(__int64 a1, __int64 a2)
{
  int v3; // w23
  int v5; // w21
  int v6; // w0
  int v7; // w0
  size_t v8; // x21
  int v9; // w0
  void (__fastcall *v10)(__int64, __int64, __int64, _QWORD, __int64); // x24
  __int64 v11; // x0
  int v12; // w0
  void (__fastcall *v14)(__int64, __int64, __int64, __int64, __int64); // x21
  __int64 v15; // x20
  __int64 v16; // x4
  __int64 v17; // x2
  void (__fastcall *v18)(__int64, __int64, size_t, __int64, __int64); // x22
  __int64 v19; // x20
  __int64 v20; // x0

  v3 = *(unsigned __int8 *)(a1 + 617);
  v5 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)a2, 4u, *(_BYTE *)(a1 + 616));
  if ( v5 < 0 )
  {
    v10 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v11 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v10(a1, 19, 4, v5, v11);
    if ( v3 )
    {
LABEL_3:
      if ( (v5 & 0x80000000) == 0 )
      {
        v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 4), 1u, *(_BYTE *)(a1 + 616));
        if ( (v6 & 0x80000000) == 0 )
        {
          v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 5), 1u, *(_BYTE *)(a1 + 616));
          if ( (v6 & 0x80000000) == 0 )
          {
            v7 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 6), 2u, *(_BYTE *)(a1 + 616));
            if ( (v7 & 0x80000000) == 0 )
            {
              v8 = *(int *)(a1 + 424);
              v9 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 8), v8, *(_BYTE *)(a1 + 616));
              if ( v9 < 0 )
                goto LABEL_20;
              v8 = *(int *)(a1 + 432);
              v9 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 16), v8, *(_BYTE *)(a1 + 616));
              if ( v9 < 0 )
                goto LABEL_20;
              return 0;
            }
            goto LABEL_22;
          }
        }
        goto LABEL_18;
      }
      return 0xFFFFFFFFLL;
    }
  }
  else if ( v3 )
  {
    goto LABEL_3;
  }
  if ( (v5 & 0x80000000) == 0 )
  {
    v8 = *(int *)(a1 + 424);
    v9 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 8), v8, *(_BYTE *)(a1 + 616));
    if ( v9 < 0 )
    {
LABEL_20:
      v18 = *(void (__fastcall **)(__int64, __int64, size_t, __int64, __int64))(a1 + 496);
      v19 = v9;
      v20 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v18(a1, 19, v8, v19, v20);
      return 0xFFFFFFFFLL;
    }
    v12 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 16), 4u, *(_BYTE *)(a1 + 616));
    if ( v12 < 0 )
    {
      v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
      v15 = v12;
      v16 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v17 = 4;
      goto LABEL_19;
    }
    v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 4), 1u, *(_BYTE *)(a1 + 616));
    if ( (v6 & 0x80000000) == 0 )
    {
      v6 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 5), 1u, *(_BYTE *)(a1 + 616));
      if ( (v6 & 0x80000000) == 0 )
      {
        v7 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(a2 + 6), 2u, *(_BYTE *)(a1 + 616));
        if ( (v7 & 0x80000000) == 0 )
          return 0;
LABEL_22:
        v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
        v15 = v7;
        v16 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
        v17 = 2;
        goto LABEL_19;
      }
    }
LABEL_18:
    v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(a1 + 496);
    v15 = v6;
    v16 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v17 = 1;
LABEL_19:
    v14(a1, 19, v17, v15, v16);
  }
  return 0xFFFFFFFFLL;
}
