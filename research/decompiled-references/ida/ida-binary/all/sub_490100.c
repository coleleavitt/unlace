double __fastcall sub_490100(__int64 a1, const char *a2)
{
  QT::QAbstractItemView *v3; // rdi
  const char *v4; // rdi
  double result; // xmm0_8
  __int64 v6; // rax
  _QWORD *v7; // rdx

  if ( !*(_BYTE *)(a1 + 48) )
  {
    v3 = *(QT::QAbstractItemView **)(a1 + 40);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 8) > 1u )
      {
        v6 = QT::QAbstractItemView::model(v3);
        v7 = *(_QWORD **)(v6 + 216);
        if ( !v7 )
          v7 = *(_QWORD **)(v6 + 208);
        a2 = &s1;
        if ( *(_QWORD *)(a1 + 8) )
          a2 = *(const char **)a1;
        dirtree_chdir(*v7, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 24) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 24));
  v4 = *(const char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(v4, a2);
  }
  return result;
}
