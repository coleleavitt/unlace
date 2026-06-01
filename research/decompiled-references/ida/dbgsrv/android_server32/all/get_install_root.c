/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_install_root
// Address: 0x00079A34

//----- (00079A34) --------------------------------------------------------
int __fastcall get_install_root(int a1)
{
  char *v2; // r0
  void *v3; // r0
  int v4; // r1
  int v5; // r2
  void *v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch]
  int v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v2 = idadir(nullptr);
  sub_1B09C((int)&v7, v2);
  v3 = *(void **)a1;
  *(_DWORD *)a1 = v7;
  v4 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v8;
  v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v9;
  v7 = v3;
  v8 = v4;
  v9 = v5;
  if ( v3 )
  {
    v8 = 0;
    qfree(v3);
    v9 = 0;
    v7 = nullptr;
  }
  return _stack_chk_guard - v10;
}
