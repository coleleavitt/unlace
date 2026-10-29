/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A52E0
// Address: 0x080A52E0

//----- (080A52E0) --------------------------------------------------------
char *__cdecl sub_80A52E0(int a1, int a2)
{
  int v2; // edi
  int v3; // ebp
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  size_t v8; // ecx
  int v9; // [esp+0h] [ebp-20h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 4);
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( !v2 )
    return nullptr;
  v5 = 0;
  if ( v2 != -1 )
  {
    v7 = (char *)sub_80CF920(a2 + 4, nullptr, v2 + 1, 1u);
    v8 = v2 + 1 - *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 4) = v7;
    memset(&v7[*(_DWORD *)(a2 + 8)], 0, v8);
    v5 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 8) = v2 + 1;
  }
  *(_BYTE *)(v5 + v2) = 0;
  v9 = *(_DWORD *)(a2 + 4);
  v6 = sub_80A4C20();
  if ( v2 == (*(int (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)v6 + 144))(v6, v3, v9, v2, 0) )
    return nullptr;
  else
    return sub_80747C0(a2, "read error");
}
