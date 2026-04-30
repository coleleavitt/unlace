unsigned __int64 sub_462790()
{
  const char *v1; // rbx
  signed __int64 v2; // rsi
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !dword_8D1540 )
  {
    v7 = 0;
    v1 = (const char *)QT::QMetaObject::className((QT::QMetaObject *)&QT::Qt::staticMetaObject);
    *(_OWORD *)ptr = 0;
    v2 = strlen(v1) + 16;
    if ( v2 < 0 )
      v2 = 0;
    QT::QByteArray::reallocData(ptr, v2, 1);
    if ( ptr[0] && *((_QWORD *)ptr[0] + 1) )
      *((_DWORD *)ptr[0] + 1) |= 1u;
    v3 = 0;
    if ( v1 )
      v3 = strlen(v1);
    v4 = QT::QByteArray::insert(ptr, v7, v3, v1);
    v5 = QT::QByteArray::insert(v4, *(_QWORD *)(v4 + 16), 2, "::");
    QT::QByteArray::insert(v5, *(_QWORD *)(v5 + 16), 14, "DockWidgetArea");
    dword_8D1540 = sub_4626E0((__int64)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v8 - __readfsqword(0x28u);
}
