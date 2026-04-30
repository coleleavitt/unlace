void __fastcall standalone_dirtree_item_model_t__::vfunc_4(QT::QAbstractItemModel *this)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  char *v4; // rdi
  unsigned __int64 v5; // rsi

  v2 = *((_QWORD **)this + 31);
  *(_QWORD *)this = &standalone_dirtree_item_model_t___vtable;
  *((_QWORD *)this + 28) = &off_86FDF8;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x10u);
  }
  memset(*((void **)this + 29), 0, 8LL * *((_QWORD *)this + 30));
  v4 = *((char **)this + 29);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 31) = 0;
  v5 = *((_QWORD *)this + 30);
  if ( v4 != (char *)this + 280 )
  {
    v5 *= 8LL;
    operator delete(v4, v5);
  }
  *(_QWORD *)this = &dirtree_item_model_t___vtable;
  sub_48AB90(this, (const char *)v5);
  operator delete(this, 0x138u);
}
