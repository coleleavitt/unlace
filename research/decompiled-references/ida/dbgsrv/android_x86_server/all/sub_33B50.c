/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33B50
// Address: 0x00033B50

//----- (00033B50) --------------------------------------------------------
int __cdecl sub_33B50(int a1, void *dest)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  __int64 v6; // [esp-10h] [ebp-2Ch]
  void (__cdecl *v7)(int, int, size_t, int, int, int); // [esp+4h] [ebp-18h]
  size_t v8; // [esp+8h] [ebp-14h]

  v8 = *(_DWORD *)(a1 + 344);
  HIDWORD(v6) = dest;
  LODWORD(v6) = *(_DWORD *)(a1 + 360);
  v2 = lreadbytes(v6, v8, *(_BYTE *)(a1 + 476));
  if ( v2 < 0 )
  {
    v7 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v3 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v7(a1, 19, v8, v2, v3, v4);
  }
  return v2;
}
// 33BBD: variable 'v4' is possibly undefined
