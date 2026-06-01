/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BFBC
// Address: 0x0002BFBC

//----- (0002BFBC) --------------------------------------------------------
int __fastcall sub_2BFBC(int a1, void *a2)
{
  signed int v3; // r5
  int v4; // r6
  void (__fastcall *v5)(int, int, signed int, int, _DWORD, _DWORD); // r7
  __int64 v6; // r0

  v3 = *(_DWORD *)(a1 + 340);
  v4 = lreadbytes(*(_DWORD *)(a1 + 364), a2, v3, *(unsigned __int8 *)(a1 + 480));
  if ( v4 < 0 )
  {
    v5 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
    v6 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
    v5(a1, 19, v3, v4, v6, HIDWORD(v6));
  }
  return v4;
}
