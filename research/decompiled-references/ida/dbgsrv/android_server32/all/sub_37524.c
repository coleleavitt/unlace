/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37524
// Address: 0x00037524

//----- (00037524) --------------------------------------------------------
bool __fastcall sub_37524(int a1, int a2)
{
  int v4; // r3
  int *v5; // r7
  int v6; // r5
  void (__fastcall *v7)(int, int, int, int, _DWORD, _DWORD); // r6
  __int64 v8; // r0
  int v9; // r6
  int v10; // r5
  __int64 v11; // r0
  void (__fastcall *v13)(int, int, int, int, _DWORD, _DWORD); // [sp+8h] [bp-4h]

  v4 = lreadbytes(*(_DWORD *)(a2 + 364), (void *)a1, 4, *(unsigned __int8 *)(a2 + 480));
  v5 = (int *)(a2 + 364);
  if ( v4 < 0 )
  {
    v13 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a2 + 384);
    v9 = 0;
    v10 = v4;
    v11 = qlseek(*v5, 0, 1);
    v13(a2, 19, 4, v10, v11, HIDWORD(v11));
  }
  else
  {
    v6 = lreadbytes(*v5, (void *)(a1 + 4), 4, *(unsigned __int8 *)(a2 + 480));
    if ( v6 < 0 )
    {
      v7 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a2 + 384);
      v8 = qlseek(*v5, 0, 1);
      v7(a2, 19, 4, v6, v8, HIDWORD(v8));
    }
    return v6 >= 0;
  }
  return v9;
}
