void __fastcall standalone_dirtree_widget_t__::vfunc_3(QT::QTreeView *this, char *a2, double a3)
{
  QT::QTreeView **v4; // rdi
  QT::QTreeView **v5; // rdx
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  *(_QWORD *)this = &standalone_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = standalone_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)this + 30) = standalone_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)this + 38) = standalone_dirtree_widget_t___vtable_at__304;
  v4 = (QT::QTreeView **)qword_8D2500;
  v5 = (QT::QTreeView **)(qword_8D2500 + 8 * xmmword_8D2508);
  if ( (QT::QTreeView **)qword_8D2500 != v5 )
  {
    while ( this != *v4 )
    {
      if ( v5 == ++v4 )
        goto LABEL_7;
    }
    if ( v4 != v5 )
    {
      a2 = (char *)(v4 + 1);
      memmove(v4, v4 + 1, (char *)v5 - (char *)v4 - 8);
      *(_QWORD *)&xmmword_8D2508 = xmmword_8D2508 - 1;
    }
  }
LABEL_7:
  *((_QWORD *)this + 302) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QTreeView *)((char *)this + 2416));
  *((_QWORD *)this + 298) = &object_lifecycle_monitor_t___vtable;
  v6 = (__int64 *)((char *)this + 2328);
  QT::QObject::~QObject((QT::QTreeView *)((char *)this + 2384));
  do
  {
    v9 = v6[3];
    if ( v9 )
    {
      v6[4] = 0;
      a3 = qfree(v9, a2);
    }
    v10 = *v6;
    if ( *v6 )
    {
      v6[1] = 0;
      a3 = qfree(v10, a2);
    }
    v6 -= 7;
  }
  while ( (__int64 *)((char *)this + 2160) != v6 );
  v11 = *((_QWORD *)this + 273);
  if ( v11 )
  {
    *((_QWORD *)this + 274) = 0;
    a3 = qfree(v11, a2);
  }
  sub_4E2670((__int64 *)this + 38, (void (__fastcall *)(void *))a2, a3, v7, v8);
  v12 = *((_QWORD *)this + 34);
  *((_QWORD *)this + 30) = &stylable_widget_mixin_t___vtable;
  if ( v12 )
  {
    *((_QWORD *)this + 35) = 0;
    a3 = qfree(v12, a2);
  }
  v13 = *((_QWORD *)this + 31);
  if ( v13 )
  {
    *((_QWORD *)this + 32) = 0;
    qfree(v13, a2, a3);
  }
  sub_48DCE0(this, a2);
}
