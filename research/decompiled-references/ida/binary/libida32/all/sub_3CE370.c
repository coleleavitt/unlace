void __fastcall sub_3CE370(__int64 *a1)
{
  __int64 *v1; // r13
  __int64 v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned int v8; // r15d
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rbx
  void *v12; // rdi

  v1 = a1 + 91;
  v3 = a1[93];
  if ( (__int64 *)v3 != a1 + 91 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 32);
        v7 = sub_3B9AA0((__int64)a1, v4, 4);
        if ( (v7 & 0x600) == 0x400 )
          break;
        v3 = std::_Rb_tree_increment();
        if ( (__int64 *)v3 == v1 )
          goto LABEL_8;
      }
      v8 = get_item_end(v4, v4, v5, v6) - v4;
      v9 = sub_3C57B0(a1, v4, v7, nullptr, nullptr);
      v10 = v8;
      if ( v9 != 1 )
        v10 = sub_3C4370(a1, v4, v7, nullptr);
      sub_3CD9C0((__int64)a1, v4, v8, v10);
      v3 = std::_Rb_tree_increment();
    }
    while ( (__int64 *)v3 != v1 );
  }
LABEL_8:
  v11 = a1[92];
  while ( v11 )
  {
    sub_3B5A60(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  a1[92] = 0;
  a1[93] = (__int64)v1;
  a1[94] = (__int64)v1;
  a1[95] = 0;
}

