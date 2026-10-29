/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BB1D0
// Address: 0x080BB1D0

//----- (080BB1D0) --------------------------------------------------------
int __cdecl sub_80BB1D0(int a1, int a2)
{
  _DWORD *v2; // ebp
  int v3; // eax
  _DWORD *v4; // edi
  pthread_t v5; // edx
  void *v6; // eax
  int result; // eax
  int v8; // [esp+4h] [ebp-20h]

  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v2 = *(_DWORD **)(a1 + 44);
  v3 = v2[4];
  v4 = v2 + 2;
  if ( (_DWORD *)v3 != v2 + 2 )
  {
    while ( *(_DWORD *)(v3 + 16) != a2 )
    {
      v3 = std::_Rb_tree_increment(v3);
      if ( (_DWORD *)v3 == v4 )
        goto LABEL_8;
    }
    v5 = *(_DWORD *)(v3 + 20);
    if ( v5 )
    {
      v8 = v3;
      sub_80D0BB0(v5);
      v2 = *(_DWORD **)(a1 + 44);
      v3 = v8;
      v4 = v2 + 2;
    }
    v6 = (void *)std::_Rb_tree_rebalance_for_erase(v3, v4);
    operator delete(v6, 0x18u);
    --v2[6];
    v2 = *(_DWORD **)(a1 + 44);
  }
LABEL_8:
  result = (*(int (__cdecl **)(_DWORD *))(*v2 + 12))(v2);
  if ( a2 )
    return (*(int (__cdecl **)(int))(*(_DWORD *)a2 + 4))(a2);
  return result;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
