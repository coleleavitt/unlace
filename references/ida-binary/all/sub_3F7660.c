unsigned __int64 __fastcall sub_3F7660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  QT::QAbstractItemView *v7; // rdi
  const QT::QObject *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  sub_3F5D70(a1, a2, a3, a4, a5, a6);
  v7 = *(QT::QAbstractItemView **)(a1 + 104);
  if ( v7 )
  {
    v8 = (const QT::QObject *)QT::QAbstractItemView::itemDelegate(v7);
    v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89A300, v8);
    if ( v9 )
      sub_4F0010(v9);
  }
  v10 = *(_QWORD *)(a1 + 112);
  if ( v10 )
  {
    v13[0] = -1;
    v12 = v10;
    v13[1] = 0;
    v13[2] = 0;
    sub_3F7500(&v12, (__int64)v13, (__int64)&v12);
  }
  if ( *(_BYTE *)(a1 + 464) )
    return v14 - __readfsqword(0x28u);
  else
    return QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
}
