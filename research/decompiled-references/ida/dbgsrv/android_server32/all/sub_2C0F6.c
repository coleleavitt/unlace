/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C0F6
// Address: 0x0002C0F6

//----- (0002C0F6) --------------------------------------------------------
int __fastcall sub_2C0F6(int a1, void *a2)
{
  int v3; // r5
  void (__fastcall *v4)(int, int, int, int, _DWORD, _DWORD); // r6
  __int64 v5; // r0

  v3 = lreadbytes(*(_DWORD *)(a1 + 364), a2, 2, *(unsigned __int8 *)(a1 + 480));
  if ( v3 < 0 )
  {
    v4 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(a1 + 384);
    v5 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
    v4(a1, 19, 2, v3, v5, HIDWORD(v5));
  }
  return v3;
}
