void __fastcall sub_9AB80(TView *this)
{
  char *v2; // r12
  char *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = (char *)this + 88;
  *(_QWORD *)this = off_2368F0;
  *((_QWORD *)this + 9) = off_2369B0;
  qfree();
  qfree();
  sub_177550((char *)this + 128);
  v3 = *((char **)this + 13);
  *((_QWORD *)this + 9) = &off_22F558;
  if ( v3 == (char *)this + 88 )
  {
    v4 = (char *)this + 88;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(**((_QWORD **)v3 + 4) + 32LL))(*((_QWORD **)v3 + 4), (char *)this + 72);
      v3 = (char *)std::_Rb_tree_increment();
    }
    while ( v2 != v3 );
    v4 = *((char **)this + 13);
  }
  sub_99FE0((__int64)this + 80, (__int64)v4, (__int64)v2);
  v5 = *((_QWORD *)this + 12);
  while ( v5 )
  {
    sub_999E0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  TView::~TView(this);
  operator delete(this, 0xB0u);
}

