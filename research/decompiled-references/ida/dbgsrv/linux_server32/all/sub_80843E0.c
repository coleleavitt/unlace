/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80843E0
// Address: 0x080843E0

//----- (080843E0) --------------------------------------------------------
int *__cdecl sub_80843E0(int a1)
{
  int *v1; // edx
  int v2; // eax
  int v3; // eax

  v1 = nullptr;
  if ( a1
    && *(_BYTE *)a1 == 5
    && (v2 = *(_DWORD *)(a1 + 4), *(_DWORD *)(v2 + 12) != v2 + 4)
    && (v3 = std::_Rb_tree_decrement(v2 + 4), v1 = &dword_80DDFD8, *(_DWORD *)(v3 + 20)) )
  {
    return *(int **)(v3 + 16);
  }
  else
  {
    return v1;
  }
}
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
