unsigned __int64 __fastcall sub_3F9510(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  const QT::QObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  void *v10[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    sub_3F9040((__int64)v10, v4, a2);
    v5 = (char *)v10[2] - (char *)v10[0];
    if ( v10[1] == v10[0] )
    {
      if ( v10[0] )
        operator delete(v10[0], v5);
    }
    else
    {
      if ( v10[0] )
        operator delete(v10[0], v5);
      v6 = (const QT::QObject *)QT::QAbstractItemView::itemDelegate(*(QT::QAbstractItemView **)(a1 + 104));
      v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89A300, v6);
      if ( v7 )
        sub_4F0010(v7);
      v8 = *(_QWORD *)(a1 + 112);
      if ( v8 )
        sub_3F92E0(v8, a2);
    }
  }
  if ( *(_QWORD *)(a1 + 280) == a2 )
    return sub_3F7840((QT::QWidget *)a1);
  else
    return v11 - __readfsqword(0x28u);
}
