/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C18A
// Address: 0x0002C18A

//----- (0002C18A) --------------------------------------------------------
int __fastcall sub_2C18A(int a1, int a2)
{
  int v3; // r7
  unsigned __int8 *v4; // r6
  int *v5; // r5
  __int64 v6; // r0
  int result; // r0
  int v8; // r0
  int *v9; // r1
  int v10; // r0
  int v11; // r0
  signed int v12; // r6
  int v13; // r0
  signed int v14; // r6
  int v15; // r5
  __int64 v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int *v20; // r1
  int v21; // r5
  void (__fastcall *v22)(int, int, int, int, _DWORD, _DWORD); // r6
  __int64 v23; // r0
  int v24; // r5
  void (__fastcall *v25)(int, int, int, int, _DWORD, _DWORD); // r4
  __int64 v26; // r0
  int v27; // r7
  void (__fastcall *v28)(int, int, signed int, int, _DWORD, _DWORD); // r5
  __int64 v29; // r0
  int v30; // r6
  void (__fastcall *v31)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v32; // r0
  int v33; // r7
  void (__fastcall *v34)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v35; // r0
  int v36; // r4
  __int64 v37; // r0
  int v38; // r5
  int v39; // r4
  void (__fastcall *v40)(int, int, int, int, _DWORD, _DWORD); // r6
  int v41; // r0
  __int64 v42; // r0
  int *v43; // [sp+10h] [bp-18h]
  signed int v44; // [sp+10h] [bp-18h]
  void (__fastcall *v45)(int, int, int, int, _DWORD, _DWORD); // [sp+18h] [bp-10h]
  int v47; // [sp+20h] [bp-8h]
  unsigned __int8 *v48; // [sp+20h] [bp-8h]
  void (__fastcall *v49)(int, int, signed int, int, _DWORD, _DWORD); // [sp+20h] [bp-8h]
  void (__fastcall *v50)(int, int, signed int, int, _DWORD, _DWORD); // [sp+20h] [bp-8h]

  v47 = *(unsigned __int8 *)(a1 + 481);
  v3 = lreadbytes(*(_DWORD *)(a1 + 364), (void *)a2, 4, *(unsigned __int8 *)(a1 + 480));
  v4 = (unsigned __int8 *)(a1 + 480);
  v5 = (int *)(a1 + 364);
  if ( v3 < 0 )
  {
    v45 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v6 = qlseek(*v5, 0, 1);
    v45(a1, 19, 4, v3, v6, HIDWORD(v6));
  }
  if ( v47 )
  {
    result = -1;
    if ( v3 < 0 )
      return result;
    v48 = (unsigned __int8 *)(a1 + 480);
    v8 = lreadbytes(*v5, (void *)(a2 + 4), 1, *v4);
    v9 = (int *)(a1 + 364);
    if ( v8 < 0 )
    {
      v24 = v8;
      v25 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
      v26 = qlseek(*v9, 0, 1);
      v25(a1, 19, 1, v24, v26, HIDWORD(v26));
      return -1;
    }
    v43 = (int *)(a1 + 364);
    v10 = lreadbytes(*v5, (void *)(a2 + 5), 1, *v4);
    if ( v10 >= 0 )
    {
      v11 = lreadbytes(*v5, (void *)(a2 + 6), 2, *v4);
      if ( v11 >= 0 )
      {
        v12 = *(_DWORD *)(a1 + 336);
        v13 = lreadbytes(*v5, (void *)(a2 + 8), v12, *v48);
        if ( v13 >= 0 )
        {
          v14 = *(_DWORD *)(a1 + 344);
          v15 = lreadbytes(*v5, (void *)(a2 + 16), v14, *v48);
          result = 0;
          if ( v15 >= 0 )
            return result;
          v49 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
          v16 = qlseek(*v43, 0, 1);
          v49(a1, 19, v14, v15, v16, HIDWORD(v16));
        }
        else
        {
          v36 = v13;
          v50 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
          v37 = qlseek(*v5, 0, 1);
          v50(a1, 19, v12, v36, v37, HIDWORD(v37));
        }
      }
      else
      {
        v30 = v11;
        v31 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
        v32 = qlseek(*v43, 0, 1);
        v31(a1, 19, 2, v30, v32, HIDWORD(v32));
      }
      return -1;
    }
    goto LABEL_22;
  }
  if ( v3 < 0 )
    return -1;
  v44 = *(_DWORD *)(a1 + 336);
  v17 = lreadbytes(*v5, (void *)(a2 + 8), v44, *v4);
  if ( v17 < 0 )
  {
    v27 = v17;
    v28 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
    v29 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
    v28(a1, 19, v44, v27, v29, HIDWORD(v29));
    return -1;
  }
  v18 = lreadbytes(*v5, (void *)(a2 + 16), 4, *v4);
  if ( v18 < 0 )
  {
    v33 = v18;
    v34 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v35 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
    v34(a1, 19, 4, v33, v35, HIDWORD(v35));
    return -1;
  }
  v19 = lreadbytes(*v5, (void *)(a2 + 4), 1, *v4);
  v20 = (int *)(a1 + 364);
  if ( v19 < 0 )
  {
    v38 = v19;
    v39 = a1;
    v40 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v41 = *v20;
LABEL_25:
    v42 = qlseek(v41, 0, 1);
    v40(v39, 19, 1, v38, v42, HIDWORD(v42));
    return -1;
  }
  v43 = (int *)(a1 + 364);
  v10 = lreadbytes(*v5, (void *)(a2 + 5), 1, *v4);
  if ( v10 < 0 )
  {
LABEL_22:
    v38 = v10;
    v39 = a1;
    v40 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v41 = *v43;
    goto LABEL_25;
  }
  v21 = lreadbytes(*v5, (void *)(a2 + 6), 2, *v4);
  result = 0;
  if ( v21 >= 0 )
    return result;
  v22 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
  v23 = qlseek(*v43, 0, 1);
  v22(a1, 19, 2, v21, v23, HIDWORD(v23));
  return -1;
}
