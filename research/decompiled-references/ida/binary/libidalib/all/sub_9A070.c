void __fastcall sub_9A070(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // rdi

  v1 = (__int64)(a1 + 2);
  v2 = a1[4];
  *a1 = &off_22F558;
  if ( (_QWORD *)v2 == a1 + 2 )
  {
    v3 = (__int64)(a1 + 2);
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v2 + 32) + 32LL))(*(_QWORD *)(v2 + 32), a1);
      v2 = std::_Rb_tree_increment();
    }
    while ( v1 != v2 );
    v3 = a1[4];
  }
  sub_99FE0((__int64)(a1 + 1), v3, v1);
  v4 = a1[3];
  while ( v4 )
  {
    sub_999E0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
}

