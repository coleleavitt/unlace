/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F080
// Address: 0x0003F080

//----- (0003F080) --------------------------------------------------------
bool __cdecl sub_3F080(int a1, _DWORD *dest)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v9; // esi
  int v10; // eax
  int v11; // edx
  __int64 v12; // [esp-10h] [ebp-2Ch]
  __int64 v13; // [esp-10h] [ebp-2Ch]
  void (__cdecl *v14)(int, int, size_t, int, int, int); // [esp+4h] [ebp-18h]
  void (__cdecl *v15)(int, int, size_t, int, int, int); // [esp+4h] [ebp-18h]
  size_t v16; // [esp+8h] [ebp-14h]
  size_t v17; // [esp+8h] [ebp-14h]

  dest[1] = 0;
  *dest = 0;
  dest[3] = 0;
  dest[2] = 0;
  v2 = *(_DWORD *)(a1 + 4);
  v16 = *(_DWORD *)(v2 + 344);
  HIDWORD(v12) = dest;
  LODWORD(v12) = *(_DWORD *)(v2 + 360);
  v3 = lreadbytes(v12, v16, *(_BYTE *)(v2 + 476));
  if ( v3 < 0 )
  {
    v15 = *(void (__cdecl **)(int, int, size_t, int, int, int))(v2 + 380);
    v9 = v3;
    v10 = qlseek(*(_DWORD *)(v2 + 360), 0, 1);
    v15(v2, 19, v16, v9, v10, v11);
    return 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 4);
    v17 = *(_DWORD *)(v4 + 332);
    HIDWORD(v13) = dest + 2;
    LODWORD(v13) = *(_DWORD *)(v4 + 360);
    v5 = lreadbytes(v13, v17, *(_BYTE *)(v4 + 476));
    if ( v5 < 0 )
    {
      v14 = *(void (__cdecl **)(int, int, size_t, int, int, int))(v4 + 380);
      v6 = qlseek(*(_DWORD *)(v4 + 360), 0, 1);
      v14(v4, 19, v17, v5, v6, v7);
    }
    return v5 >= 0;
  }
}
// 3F13B: variable 'v7' is possibly undefined
// 3F173: variable 'v11' is possibly undefined
