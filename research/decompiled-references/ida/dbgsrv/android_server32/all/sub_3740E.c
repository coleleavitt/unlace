/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3740E
// Address: 0x0003740E

//----- (0003740E) --------------------------------------------------------
bool __fastcall sub_3740E(int a1, int a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r7
  int *v5; // r5
  int v6; // r0
  int v7; // r6
  void (__fastcall *v8)(int, int, int, int, _DWORD, _DWORD); // r5
  __int64 v9; // r0
  int v10; // r5
  int v11; // r6
  void (__fastcall *v12)(int, int, int, int, _DWORD, _DWORD); // r7
  int v13; // r0
  __int64 v14; // r0
  int v16; // r6
  void (__fastcall *v17)(int, int, int, int, _DWORD, _DWORD); // r7
  int v18; // r0
  __int64 v19; // r0

  v3 = lreadbytes(*(_DWORD *)(a2 + 364), (void *)a1, 2, *(unsigned __int8 *)(a2 + 480));
  v4 = (unsigned __int8 *)(a2 + 480);
  v5 = (int *)(a2 + 364);
  if ( v3 < 0
    || (v3 = lreadbytes(*v5, (void *)(a1 + 2), 2, *v4), v3 < 0)
    || (v3 = lreadbytes(*v5, (void *)(a1 + 4), 2, *v4), v3 < 0)
    || (v3 = lreadbytes(*v5, (void *)(a1 + 6), 2, *v4), v3 < 0) )
  {
    v11 = v3;
    v12 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a2 + 384);
    v13 = *v5;
    v10 = 0;
    v14 = qlseek(v13, 0, 1);
    v12(a2, 19, 2, v11, v14, HIDWORD(v14));
  }
  else
  {
    v6 = lreadbytes(*v5, (void *)(a1 + 8), 4, *v4);
    if ( v6 < 0 || (v6 = lreadbytes(*v5, (void *)(a1 + 12), 4, *v4), v6 < 0) )
    {
      v16 = v6;
      v17 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a2 + 384);
      v18 = *v5;
      v10 = 0;
      v19 = qlseek(v18, 0, 1);
      v17(a2, 19, 4, v16, v19, HIDWORD(v19));
    }
    else
    {
      v7 = lreadbytes(*v5, (void *)(a1 + 16), 4, *v4);
      if ( v7 < 0 )
      {
        v8 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a2 + 384);
        v9 = qlseek(*(_DWORD *)(a2 + 364), 0, 1);
        v8(a2, 19, 4, v7, v9, HIDWORD(v9));
      }
      return v7 >= 0;
    }
  }
  return v10;
}
