/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1C80
// Address: 0x080A1C80

//----- (080A1C80) --------------------------------------------------------
int __cdecl sub_80A1C80(_DWORD *a1)
{
  int v1; // ebp
  _DWORD *i; // edi
  int v3; // ebp
  void *v4; // eax

  v1 = a1[69];
  for ( i = a1 + 67; (_DWORD *)v1 != i; v1 = std::_Rb_tree_increment(v1) )
  {
    if ( !(*(int (__cdecl **)(_DWORD *, _DWORD, int, _DWORD, _DWORD))(*a1 + 148))(
            a1,
            *(_DWORD *)(v1 + 20),
            v1 + 24,
            *(unsigned __int8 *)(v1 + 32),
            0) )
      sub_8058290();
  }
  v3 = a1[68];
  while ( v3 )
  {
    sub_809EF40(*(_DWORD **)(v3 + 12));
    v4 = (void *)v3;
    v3 = *(_DWORD *)(v3 + 8);
    operator delete(v4, 0x28u);
  }
  a1[68] = 0;
  a1[69] = i;
  a1[70] = i;
  a1[71] = 0;
  return 1;
}
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
