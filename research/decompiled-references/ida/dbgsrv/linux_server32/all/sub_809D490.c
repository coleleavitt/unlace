/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809D490
// Address: 0x0809D490

//----- (0809D490) --------------------------------------------------------
int __cdecl sub_809D490(int a1, int a2, unsigned int a3, unsigned int a4, _DWORD *a5, int a6, _DWORD *a7)
{
  int v7; // eax
  int v8; // edi
  int (__cdecl *v10)(int *, unsigned int, unsigned int); // eax
  void *v11; // eax
  int *v12; // [esp+0h] [ebp-1Ch]
  void *v13; // [esp+0h] [ebp-1Ch]

  v7 = dword_811DA38;
  if ( dword_811DA38 == -1 )
  {
    v7 = (unsigned __int8)sub_80D2000("IDA_IDB_BIN_SEARCH", nullptr);
    dword_811DA38 = (unsigned __int8)v7;
  }
  if ( v7 )
    return 0;
  sub_80A03F0(a1, "dbg_bin_search %a..%a\n", a3, a4);
  if ( a3 >= a4 || !a5[1] || !*(_DWORD *)(a1 + 240) )
    return 0;
  v12 = (int *)operator new(0x104Cu);
  sub_809D220((int)v12, a2, a1, a5, a6, (int)a7);
  if ( (a6 & 0x10) != 0 )
  {
    v12[1042] = 0;
    *v12 = (int)&off_811C0C4;
    v10 = sub_809C000;
  }
  else
  {
    v12[1042] = 4096;
    *v12 = (int)&off_811C0AC;
    v10 = sub_809BB70;
  }
  v8 = v10(v12, a3, a4);
  if ( v8 == -7 )
  {
    v11 = (void *)v12[1034];
    v13 = v11;
    if ( v11 != (void *)-1 )
    {
      sub_80A03F0(a1, "dbg_bin_search failed to read memory at %a\n", v11);
      if ( a7 )
      {
        if ( a7[1] <= 1u )
          sub_805ED10(a7, "Failed to read memory at %a\n", v13);
      }
    }
  }
  return v8;
}
// 811C0AC: using guessed type int (__cdecl *off_811C0AC)(int);
// 811C0C4: using guessed type int (__cdecl *off_811C0C4)(int);
// 811DA38: using guessed type int dword_811DA38;
