void __fastcall files_dirtree_item_model_t__::vfunc_4(QT::QAbstractItemModel *this, const char *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  void *v8; // rdi
  char *v9; // rdi

  v3 = *((_QWORD *)this + 46);
  *(_QWORD *)this = &files_dirtree_item_model_t___vtable;
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_441AB0(*(_QWORD **)(v3 + 24), a2);
    v5 = *(_QWORD *)(v3 + 32);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[5] = 0;
      qfree(v5, a2);
    }
    a2 = (_BYTE *)off_50;
    operator delete(v4, 0x50u);
  }
  v6 = *((_QWORD *)this + 41);
  if ( v6 )
  {
    *((_QWORD *)this + 42) = 0;
    qfree(v6, a2);
  }
  v7 = *((_QWORD **)this + 31);
  *(_QWORD *)this = &standalone_dirtree_item_model_t___vtable;
  *((_QWORD *)this + 28) = &off_86FDF8;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    operator delete(v8, 0x10u);
  }
  memset(*((void **)this + 29), 0, 8LL * *((_QWORD *)this + 30));
  v9 = *((char **)this + 29);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 31) = 0;
  if ( v9 != (char *)this + 280 )
    operator delete(v9, 8LL * *((_QWORD *)this + 30));
  *(_QWORD *)this = &dirtree_item_model_t___vtable;
  sub_48AB90(this);
  operator delete(this, 0x190u);
}
