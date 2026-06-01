void __fastcall sub_3D3DF0(__int64 *a1)
{
  _QWORD *v1; // r13
  __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  void *v12; // rdi

  v1 = a1 + 92;
  v3 = a1[94];
  if ( (__int64 *)v3 != a1 + 92 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(__int64 **)(v3 + 32);
        v7 = sub_3BE900(a1, (unsigned __int64)v4, 4);
        if ( (v7 & 0x600) == 0x400 )
          break;
        v3 = std::_Rb_tree_increment(v3);
        if ( (_QWORD *)v3 == v1 )
          goto LABEL_8;
      }
      v8 = get_item_end(v4, v4, v5, v6) - (_QWORD)v4;
      v9 = sub_3CAAA0(a1, v4, v7, nullptr, nullptr);
      v10 = (_QWORD *)v8;
      if ( v9 != 1 )
        v10 = (_QWORD *)sub_3C9650(a1, v4, v7, nullptr);
      sub_3D3420((__int64)a1, (unsigned __int64)v4, v8, v10);
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( (_QWORD *)v3 != v1 );
  }
LABEL_8:
  v11 = a1[93];
  while ( v11 )
  {
    sub_3BA580(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  a1[93] = 0;
  a1[94] = (__int64)v1;
  a1[95] = (__int64)v1;
  a1[96] = 0;
}
