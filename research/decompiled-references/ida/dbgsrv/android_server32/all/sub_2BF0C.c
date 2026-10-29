/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BF0C
// Address: 0x0002BF0C

//----- (0002BF0C) --------------------------------------------------------
int __fastcall sub_2BF0C(int a1, void *a2, signed int a3, int a4)
{
  int v7; // r0
  int v8; // r3
  int v9; // r6
  __int64 v10; // r0
  void (__fastcall *v12)(int, int, signed int, int, _DWORD, _DWORD); // [sp+8h] [bp-4h]

  v7 = *(_DWORD *)(a1 + 364);
  v8 = 0;
  if ( a4 )
  {
    v8 = 1;
    if ( !*(_BYTE *)(a1 + 480) )
      v8 = *(unsigned __int8 *)(a1 + 480);
  }
  v9 = lreadbytes(v7, a2, a3, v8);
  if ( v9 < 0 )
  {
    v12 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(a1 + 384);
    v10 = qlseek(*(_DWORD *)(a1 + 364), 0, 1);
    v12(a1, 19, a3, v9, v10, HIDWORD(v10));
  }
  return v9;
}
