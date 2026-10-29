__int64 __fastcall sub_3FC570(const QT::QObject **a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _DWORD v4[4]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  if ( v1
    && (v2 = v1, *(_QWORD *)(v1 + 104))
    && (QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v4), (v4[1] | v4[0]) >= 0)
    && v5 )
  {
    return (unsigned __int8)sub_3FC4F0(v2);
  }
  else
  {
    return 0;
  }
}
