void __fastcall sub_9A9D0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = (__int64)(a1 + 2);
  *(a1 - 9) = off_2368F0;
  *a1 = off_2369B0;
  qfree();
  qfree();
  sub_177550(a1 + 7);
  v3 = a1[4];
  *a1 = &off_22F558;
  if ( (_QWORD *)v3 == a1 + 2 )
  {
    v4 = (__int64)(a1 + 2);
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v3 + 32) + 32LL))(*(_QWORD *)(v3 + 32), a1);
      v3 = std::_Rb_tree_increment();
    }
    while ( v2 != v3 );
    v4 = a1[4];
  }
  sub_99FE0((__int64)(a1 + 1), v4, v2);
  v5 = a1[3];
  while ( v5 )
  {
    sub_999E0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  TView::~TView((TView *)(a1 - 9));
}

