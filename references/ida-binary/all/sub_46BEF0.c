unsigned __int64 sub_46BEF0()
{
  const char *v1; // rbx
  size_t v2; // rax
  size_t v3; // rax
  QT::QByteArray *v4; // rax
  int v5; // r12d
  const void *v6; // r13
  size_t v7; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( dword_8D154C )
    return v10 - __readfsqword(0x28u);
  v9 = 0;
  v1 = (const char *)QT::QMetaObject::className((QT::QMetaObject *)&QT::QEvent::staticMetaObject);
  *(_OWORD *)ptr = 0;
  v2 = strlen(v1);
  QT::QByteArray::reallocData(ptr, v2 + 1, 1);
  if ( ptr[0] && *((_QWORD *)ptr[0] + 1) )
    *((_DWORD *)ptr[0] + 1) |= 1u;
  v3 = 0;
  if ( v1 )
    v3 = strlen(v1);
  v4 = (QT::QByteArray *)QT::QByteArray::insert(ptr, v9, v3, v1);
  QT::QByteArray::append(v4, 42);
  if ( &unk_8C1660 )
  {
    v5 = dword_8C166C;
    if ( !dword_8C166C )
      v5 = QT::QMetaType::registerHelper(&unk_8C1660);
  }
  else
  {
    v5 = 0;
  }
  if ( !&unk_8C1660 || (v6 = off_8C1678) == nullptr || !*(_BYTE *)off_8C1678 )
  {
    if ( !v9 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v7 = strlen((const char *)off_8C1678 + 1) + 1;
  if ( v7 != v9 || memcmp(ptr[1], v6, v7) )
LABEL_15:
    QT::QMetaType::registerNormalizedTypedef(ptr, &unk_8C1660);
LABEL_16:
  dword_8D154C = v5;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v10 - __readfsqword(0x28u);
}
