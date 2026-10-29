void __fastcall TSegTransBox__::vfunc_3(QT::QDialog *this, const char *a2)
{
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 v7; // rbx
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 j; // rbp
  __int64 v12; // rbx
  void *v13; // rdi
  __int64 v14; // rdi

  *(_QWORD *)this = &TSegTransBox___vtable;
  *((_QWORD *)this + 2) = TSegTransBox___vtable_at__16;
  v3 = *((void **)this + 6);
  if ( v3 )
  {
    a2 = (const char *)&qword_80;
    operator delete(v3, 0x80u);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 14);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = *(_QWORD *)(v4 + 48 * i + 16);
        if ( v7 )
        {
          do
          {
            sub_37A730(*(_QWORD **)(v7 + 24));
            v8 = (void *)v7;
            v7 = *(_QWORD *)(v7 + 16);
            a2 = (const char *)&qword_28;
            operator delete(v8, 0x28u);
          }
          while ( v7 );
          v4 = *((_QWORD *)this + 13);
        }
      }
    }
    *((_QWORD *)this + 14) = 0;
    qfree(v4, a2);
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 11);
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = *(_QWORD *)(v9 + 48 * j + 16);
        if ( v12 )
        {
          do
          {
            sub_37A730(*(_QWORD **)(v12 + 24));
            v13 = (void *)v12;
            v12 = *(_QWORD *)(v12 + 16);
            a2 = (const char *)&qword_28;
            operator delete(v13, 0x28u);
          }
          while ( v12 );
          v9 = *((_QWORD *)this + 10);
        }
      }
    }
    *((_QWORD *)this + 11) = 0;
    qfree(v9, a2);
  }
  v14 = *((_QWORD *)this + 7);
  if ( v14 )
  {
    *((_QWORD *)this + 8) = 0;
    qfree(v14, a2);
  }
  *(_QWORD *)this = &ui_dialog_t___vtable;
  *((_QWORD *)this + 2) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(this);
}
