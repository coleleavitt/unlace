/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C574
// Address: 0x0002C574

//----- (0002C574) --------------------------------------------------------
bool __fastcall sub_2C574(int a1, int a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r7
  int *v5; // r5
  signed int v6; // r6
  int v7; // r0
  int v8; // r0
  signed int v9; // r6
  int v10; // r7
  void (__fastcall *v11)(int, int, signed int, int, _DWORD, _DWORD); // r5
  __int64 v12; // r0
  int v13; // r5
  int v14; // r6
  void (__fastcall *v15)(int, int, int, int, _DWORD, _DWORD); // r7
  int v16; // r0
  __int64 v17; // r0
  int v18; // r7
  int v19; // r0
  __int64 v20; // r0
  int v22; // r7
  void (__fastcall *v23)(int, int, signed int, int, _DWORD, _DWORD); // r6
  int v24; // r0
  __int64 v25; // r0
  signed int v26; // [sp+10h] [bp-10h]
  signed int *v27; // [sp+14h] [bp-Ch]
  unsigned __int8 *v28; // [sp+18h] [bp-8h]
  void (__fastcall *v30)(int, int, signed int, int, _DWORD, _DWORD); // [sp+1Ch] [bp-4h]

  v3 = lreadbytes(*(_DWORD *)(a1 + 364), (void *)a2, 4, *(unsigned __int8 *)(a1 + 480));
  v4 = (unsigned __int8 *)(a1 + 480);
  v5 = (int *)(a1 + 364);
  if ( v3 < 0 )
    goto LABEL_13;
  v3 = lreadbytes(*v5, (void *)(a2 + 4), 4, *v4);
  if ( v3 < 0 )
    goto LABEL_13;
  v27 = (signed int *)(a1 + 344);
  v6 = *(_DWORD *)(a1 + 344);
  v28 = (unsigned __int8 *)(a1 + 480);
  v7 = lreadbytes(*v5, (void *)(a2 + 8), v6, *v4);
  if ( v7 < 0
    || (v6 = *(_DWORD *)(a1 + 336), v7 = lreadbytes(*v5, (void *)(a2 + 16), v6, *v4), v7 < 0)
    || (v6 = *(_DWORD *)(a1 + 340), v7 = lreadbytes(*v5, (void *)(a2 + 24), v6, *v4), v7 < 0)
    || (v6 = *v27, v7 = lreadbytes(*v5, (void *)(a2 + 32), *v27, *v4), v7 < 0) )
  {
    v18 = v7;
    v30 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
    v19 = *v5;
    v13 = 0;
    v20 = qlseek(v19, 0, 1);
    v30(a1, 19, v6, v18, v20, HIDWORD(v20));
    return v13;
  }
  v3 = lreadbytes(*v5, (void *)(a2 + 40), 4, *v4);
  if ( v3 < 0 || (v3 = lreadbytes(*v5, (void *)(a2 + 44), 4, *v28), v3 < 0) )
  {
LABEL_13:
    v14 = v3;
    v15 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v16 = *v5;
    v13 = 0;
    v17 = qlseek(v16, 0, 1);
    v15(a1, 19, 4, v14, v17, HIDWORD(v17));
  }
  else
  {
    v26 = *v27;
    v8 = lreadbytes(*v5, (void *)(a2 + 48), *v27, *v28);
    if ( v8 < 0 )
    {
      v22 = v8;
      v23 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
      v24 = *v5;
      v13 = 0;
      v25 = qlseek(v24, 0, 1);
      v23(a1, 19, v26, v22, v25, HIDWORD(v25));
    }
    else
    {
      v9 = *v27;
      v10 = lreadbytes(*v5, (void *)(a2 + 56), *v27, *v28);
      if ( v10 < 0 )
      {
        v11 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
        v12 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
        v11(a1, 19, v9, v10, v12, HIDWORD(v12));
      }
      return v10 >= 0;
    }
  }
  return v13;
}
