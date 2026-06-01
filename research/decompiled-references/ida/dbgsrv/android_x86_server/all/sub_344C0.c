/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_344C0
// Address: 0x000344C0

//----- (000344C0) --------------------------------------------------------
bool __cdecl sub_344C0(int a1, char *dest)
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
  size_t v18; // [esp+4h] [ebp-18h]
  size_t v19; // [esp+4h] [ebp-18h]
  void (__cdecl *v20)(int, int, int, int, int, int); // [esp+4h] [ebp-18h]
  void (__cdecl *v21)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v22)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]

  HIDWORD(v14) = dest;
  LODWORD(v14) = *(_DWORD *)(a1 + 360);
  v2 = lreadbytes(v14, 4u, *(_BYTE *)(a1 + 476));
  if ( v2 < 0
    || *(_BYTE *)(a1 + 477)
    && (HIDWORD(v15) = dest + 4,
        LODWORD(v15) = *(_DWORD *)(a1 + 360),
        v2 = lreadbytes(v15, 4u, *(_BYTE *)(a1 + 476)),
        v2 < 0) )
  {
    v8 = v2;
    v20 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v9 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v20(a1, 19, 4, v8, v9, v10);
    return 0;
  }
  v18 = *(_DWORD *)(a1 + 340);
  HIDWORD(v16) = dest + 8;
  LODWORD(v16) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v16, v18, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
  {
    v11 = v3;
    v22 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v12 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v22(a1, 19, v18, v11, v12, v13);
    return 0;
  }
  v19 = *(_DWORD *)(a1 + 340);
  HIDWORD(v17) = dest + 16;
  LODWORD(v17) = *(_DWORD *)(a1 + 360);
  v4 = lreadbytes(v17, v19, *(_BYTE *)(a1 + 476));
  if ( v4 < 0 )
  {
    v21 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v5 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v21(a1, 19, v19, v4, v5, v6);
  }
  return v4 >= 0;
}
// 345C1: variable 'v6' is possibly undefined
// 345FA: variable 'v10' is possibly undefined
// 3462D: variable 'v13' is possibly undefined
