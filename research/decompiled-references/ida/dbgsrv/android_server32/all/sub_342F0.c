/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_342F0
// Address: 0x000342F0

//----- (000342F0) --------------------------------------------------------
bool __fastcall sub_342F0(int a1, int a2)
{
  int v4; // r4
  int v5; // r3
  int v6; // r4
  signed int v7; // r7
  int v8; // r5
  void (__fastcall *v9)(int, int, signed int, int, _DWORD, _DWORD); // r6
  __int64 v10; // r0
  int v11; // r7
  void (__fastcall *v12)(int, int, signed int, int, _DWORD, _DWORD); // r5
  int v13; // r6
  __int64 v14; // r0
  signed int v16; // [sp+Ch] [bp-8h]
  int v17; // [sp+10h] [bp-4h]

  memset((void *)a2, 0, 0x10u);
  v17 = a1;
  v4 = *(_DWORD *)(a1 + 4);
  v16 = *(_DWORD *)(v4 + 348);
  v5 = lreadbytes(*(_DWORD *)(v4 + 364), (void *)a2, v16, *(unsigned __int8 *)(v4 + 480));
  if ( v5 < 0 )
  {
    v12 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(v4 + 384);
    v11 = 0;
    v13 = v5;
    v14 = qlseek(*(_DWORD *)(v4 + 364), 0, 1);
    v12(v4, 19, v16, v13, v14, HIDWORD(v14));
  }
  else
  {
    v6 = *(_DWORD *)(v17 + 4);
    v7 = *(_DWORD *)(v6 + 336);
    v8 = lreadbytes(*(_DWORD *)(v6 + 364), (void *)(a2 + 8), v7, *(unsigned __int8 *)(v6 + 480));
    if ( v8 < 0 )
    {
      v9 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(v6 + 384);
      v10 = qlseek(*(_DWORD *)(v6 + 364), 0, 1);
      v9(v6, 19, v7, v8, v10, HIDWORD(v10));
    }
    return v8 >= 0;
  }
  return v11;
}
