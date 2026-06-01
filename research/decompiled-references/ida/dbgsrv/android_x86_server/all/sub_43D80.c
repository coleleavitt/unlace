/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D80
// Address: 0x00043D80

//----- (00043D80) --------------------------------------------------------
bool __cdecl sub_43D80(char *dest, int a2)
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
  void (__cdecl *v21)(int, int, int, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v22)(int, int, int, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v23)(int, int, int, int, int, int); // [esp+8h] [ebp-14h]

  HIDWORD(v14) = dest;
  LODWORD(v14) = *(_DWORD *)(a2 + 360);
  v2 = lreadbytes(v14, 2u, *(_BYTE *)(a2 + 476));
  if ( v2 < 0
    || (HIDWORD(v15) = dest + 2,
        LODWORD(v15) = *(_DWORD *)(a2 + 360),
        v2 = lreadbytes(v15, 2u, *(_BYTE *)(a2 + 476)),
        v2 < 0)
    || (HIDWORD(v16) = dest + 4,
        LODWORD(v16) = *(_DWORD *)(a2 + 360),
        v2 = lreadbytes(v16, 2u, *(_BYTE *)(a2 + 476)),
        v2 < 0)
    || (HIDWORD(v17) = dest + 6,
        LODWORD(v17) = *(_DWORD *)(a2 + 360),
        v2 = lreadbytes(v17, 2u, *(_BYTE *)(a2 + 476)),
        v2 < 0) )
  {
    v8 = v2;
    v22 = *(void (__cdecl **)(int, int, int, int, int, int))(a2 + 380);
    v9 = qlseek(*(_DWORD *)(a2 + 360), 0, 1);
    v22(a2, 19, 2, v8, v9, v10);
    return 0;
  }
  HIDWORD(v18) = dest + 8;
  LODWORD(v18) = *(_DWORD *)(a2 + 360);
  v3 = lreadbytes(v18, 4u, *(_BYTE *)(a2 + 476));
  if ( v3 < 0
    || (HIDWORD(v19) = dest + 12,
        LODWORD(v19) = *(_DWORD *)(a2 + 360),
        v3 = lreadbytes(v19, 4u, *(_BYTE *)(a2 + 476)),
        v3 < 0) )
  {
    v11 = v3;
    v23 = *(void (__cdecl **)(int, int, int, int, int, int))(a2 + 380);
    v12 = qlseek(*(_DWORD *)(a2 + 360), 0, 1);
    v23(a2, 19, 4, v11, v12, v13);
    return 0;
  }
  HIDWORD(v20) = dest + 16;
  LODWORD(v20) = *(_DWORD *)(a2 + 360);
  v4 = lreadbytes(v20, 4u, *(_BYTE *)(a2 + 476));
  if ( v4 < 0 )
  {
    v21 = *(void (__cdecl **)(int, int, int, int, int, int))(a2 + 380);
    v5 = qlseek(*(_DWORD *)(a2 + 360), 0, 1);
    v21(a2, 19, 4, v4, v5, v6);
  }
  return v4 >= 0;
}
// 43EDC: variable 'v6' is possibly undefined
// 43F15: variable 'v10' is possibly undefined
// 43F4E: variable 'v13' is possibly undefined
