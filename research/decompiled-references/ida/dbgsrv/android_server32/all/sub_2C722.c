/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C722
// Address: 0x0002C722

//----- (0002C722) --------------------------------------------------------
bool __fastcall sub_2C722(int a1, int a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r7
  int *v5; // r5
  int v6; // r0
  int v7; // r3
  signed int v8; // r7
  int v9; // r6
  void (__fastcall *v10)(int, int, signed int, int, _DWORD, _DWORD); // r5
  __int64 v11; // r0
  int v12; // r5
  int v13; // r6
  void (__fastcall *v14)(int, int, int, int, _DWORD, _DWORD); // r7
  int v15; // r0
  __int64 v16; // r0
  int v17; // r6
  void (__fastcall *v18)(int, int, signed int, int, _DWORD, _DWORD); // r7
  int v19; // r0
  __int64 v20; // r0
  signed int v22; // [sp+8h] [bp-Ch]
  signed int *v23; // [sp+Ch] [bp-8h]

  v3 = lreadbytes(*(_DWORD *)(a1 + 364), (void *)a2, 4, *(unsigned __int8 *)(a1 + 480));
  v4 = (unsigned __int8 *)(a1 + 480);
  v5 = (int *)(a1 + 364);
  if ( v3 < 0 || *(_BYTE *)(a1 + 481) && (v3 = lreadbytes(*v5, (void *)(a2 + 4), 4, *v4), v3 < 0) )
  {
    v13 = v3;
    v14 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v15 = *v5;
    v12 = 0;
    v16 = qlseek(v15, 0, 1);
    v14(a1, 19, 4, v13, v16, HIDWORD(v16));
  }
  else
  {
    v23 = (signed int *)(a1 + 344);
    v22 = *(_DWORD *)(a1 + 344);
    v6 = lreadbytes(*v5, (void *)(a2 + 8), v22, *v4);
    if ( v6 < 0 )
    {
      v17 = v6;
      v18 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
      v19 = *v5;
      v12 = 0;
      v20 = qlseek(v19, 0, 1);
      v18(a1, 19, v22, v17, v20, HIDWORD(v20));
    }
    else
    {
      v7 = *v4;
      v8 = *v23;
      v9 = lreadbytes(*v5, (void *)(a2 + 16), *v23, v7);
      if ( v9 < 0 )
      {
        v10 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
        v11 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
        v10(a1, 19, v8, v9, v11, HIDWORD(v11));
      }
      return v9 >= 0;
    }
  }
  return v12;
}
