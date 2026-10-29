/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F50
// Address: 0x00043F50

//----- (00043F50) --------------------------------------------------------
bool __cdecl sub_43F50(char *dest, int a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v7; // esi
  int v8; // eax
  int v9; // edx
  __int64 v10; // [esp-10h] [ebp-2Ch]
  __int64 v11; // [esp-10h] [ebp-2Ch]
  void (__cdecl *v12)(int, int, int, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v13)(int, int, int, int, int, int); // [esp+8h] [ebp-14h]

  HIDWORD(v10) = dest;
  LODWORD(v10) = *(_DWORD *)(a2 + 360);
  v2 = lreadbytes(v10, 4u, *(_BYTE *)(a2 + 476));
  if ( v2 < 0 )
  {
    v7 = v2;
    v13 = *(void (__cdecl **)(int, int, int, int, int, int))(a2 + 380);
    v8 = qlseek(*(_DWORD *)(a2 + 360), 0, 1);
    v13(a2, 19, 4, v7, v8, v9);
    return 0;
  }
  else
  {
    HIDWORD(v11) = dest + 4;
    LODWORD(v11) = *(_DWORD *)(a2 + 360);
    v3 = lreadbytes(v11, 4u, *(_BYTE *)(a2 + 476));
    if ( v3 < 0 )
    {
      v12 = *(void (__cdecl **)(int, int, int, int, int, int))(a2 + 380);
      v4 = qlseek(*(_DWORD *)(a2 + 360), 0, 1);
      v12(a2, 19, 4, v3, v4, v5);
    }
    return v3 >= 0;
  }
}
// 43FDB: variable 'v5' is possibly undefined
// 44014: variable 'v9' is possibly undefined
