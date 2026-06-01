/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34230
// Address: 0x00034230

//----- (00034230) --------------------------------------------------------
bool __cdecl sub_34230(int a1, char *dest)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // edx
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // edx
  __int64 v14; // [esp-10h] [ebp-2Ch]
  __int64 v15; // [esp-10h] [ebp-2Ch]
  __int64 v16; // [esp-10h] [ebp-2Ch]
  __int64 v17; // [esp-10h] [ebp-2Ch]
  __int64 v18; // [esp-10h] [ebp-2Ch]
  __int64 v19; // [esp-10h] [ebp-2Ch]
  __int64 v20; // [esp-10h] [ebp-2Ch]
  __int64 v21; // [esp-10h] [ebp-2Ch]
  __int64 v22; // [esp-10h] [ebp-2Ch]
  __int64 v23; // [esp-10h] [ebp-2Ch]
  size_t v24; // [esp+4h] [ebp-18h]
  size_t v25; // [esp+4h] [ebp-18h]
  void (__cdecl *v26)(int, int, int, int, int, int); // [esp+4h] [ebp-18h]
  void (__cdecl *v27)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v28)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]

  HIDWORD(v14) = dest;
  LODWORD(v14) = *(_DWORD *)(a1 + 360);
  v2 = lreadbytes(v14, 4u, *(_BYTE *)(a1 + 476));
  if ( v2 < 0 )
    goto LABEL_13;
  HIDWORD(v15) = dest + 4;
  LODWORD(v15) = *(_DWORD *)(a1 + 360);
  v2 = lreadbytes(v15, 4u, *(_BYTE *)(a1 + 476));
  if ( v2 < 0 )
    goto LABEL_13;
  v24 = *(_DWORD *)(a1 + 340);
  HIDWORD(v16) = dest + 8;
  LODWORD(v16) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v16, v24, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
    goto LABEL_14;
  v24 = *(_DWORD *)(a1 + 332);
  HIDWORD(v17) = dest + 16;
  LODWORD(v17) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v17, v24, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
    goto LABEL_14;
  v24 = *(_DWORD *)(a1 + 336);
  HIDWORD(v18) = dest + 24;
  LODWORD(v18) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v18, v24, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
    goto LABEL_14;
  v24 = *(_DWORD *)(a1 + 340);
  HIDWORD(v19) = dest + 32;
  LODWORD(v19) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v19, v24, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
    goto LABEL_14;
  HIDWORD(v20) = dest + 40;
  LODWORD(v20) = *(_DWORD *)(a1 + 360);
  v2 = lreadbytes(v20, 4u, *(_BYTE *)(a1 + 476));
  if ( v2 < 0
    || (HIDWORD(v21) = dest + 44,
        LODWORD(v21) = *(_DWORD *)(a1 + 360),
        v2 = lreadbytes(v21, 4u, *(_BYTE *)(a1 + 476)),
        v2 < 0) )
  {
LABEL_13:
    v8 = v2;
    v26 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v9 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v26(a1, 19, 4, v8, v9, v10);
    return 0;
  }
  v24 = *(_DWORD *)(a1 + 340);
  HIDWORD(v22) = dest + 48;
  LODWORD(v22) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v22, v24, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
  {
LABEL_14:
    v11 = v3;
    v28 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v12 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v28(a1, 19, v24, v11, v12, v13);
    return 0;
  }
  v25 = *(_DWORD *)(a1 + 340);
  HIDWORD(v23) = dest + 56;
  LODWORD(v23) = *(_DWORD *)(a1 + 360);
  v4 = lreadbytes(v23, v25, *(_BYTE *)(a1 + 476));
  if ( v4 < 0 )
  {
    v27 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v5 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v27(a1, 19, v25, v4, v5, v6);
  }
  return v4 >= 0;
}
// 3443F: variable 'v6' is possibly undefined
// 34478: variable 'v10' is possibly undefined
// 344AB: variable 'v13' is possibly undefined
