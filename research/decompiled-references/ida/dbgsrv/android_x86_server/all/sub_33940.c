/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33940
// Address: 0x00033940

//----- (00033940) --------------------------------------------------------
int __cdecl sub_33940(int a1, void *dest, size_t a3, char a4)
{
  char v4; // dl
  int v5; // esi
  int v6; // eax
  int v7; // edx
  void (__cdecl *v9)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]

  if ( a4 )
    v4 = *(_BYTE *)(a1 + 476) != 0;
  else
    v4 = 0;
  v5 = lreadbytes(__SPAIR64__((unsigned int)dest, *(_DWORD *)(a1 + 360)), a3, v4);
  if ( v5 < 0 )
  {
    v9 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v6 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v9(a1, 19, a3, v5, v6, v7);
  }
  return v5;
}
// 339B7: variable 'v7' is possibly undefined
