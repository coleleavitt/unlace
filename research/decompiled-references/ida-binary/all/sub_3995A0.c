bool __fastcall sub_3995A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // ebp
  int v8; // ecx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // esi
  bool v14; // cf
  int v15; // eax

  v3 = a1 + 8;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL);
  v5 = *(_QWORD *)(std::_Rb_tree_decrement(v3) + 32);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = v5 - v6;
  if ( v6 >= v4 )
  {
    v8 = v6 - v4;
    if ( v5 >= v6 )
      v8 = v5 - v4;
    v7 = v8;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL);
  v10 = std::_Rb_tree_decrement(a2 + 8);
  v11 = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(v10 + 32);
  if ( v11 < v9 )
    return (int)v12 - (int)v11 > v7;
  v13 = v12 - v9;
  v14 = v12 < v11;
  v15 = v11 - v9;
  if ( !v14 )
    v15 = v13;
  return v15 > v7;
}
