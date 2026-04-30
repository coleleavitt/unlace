unsigned __int64 sub_4D1A10()
{
  const char *v1; // rbx
  size_t v2; // rax
  size_t v3; // rax
  QT::QByteArray *v4; // rax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( !dword_8D1DD0 )
  {
    v6 = 0;
    v1 = (const char *)QT::QMetaObject::className((QT::QMetaObject *)&off_899980);
    *(_OWORD *)ptr = 0;
    v2 = strlen(v1);
    QT::QByteArray::reallocData(ptr, v2 + 1, 1);
    if ( ptr[0] && *((_QWORD *)ptr[0] + 1) )
      *((_DWORD *)ptr[0] + 1) |= 1u;
    v3 = 0;
    if ( v1 )
      v3 = strlen(v1);
    v4 = (QT::QByteArray *)QT::QByteArray::insert(ptr, v6, v3, v1);
    QT::QByteArray::append(v4, 42);
    dword_8D1DD0 = sub_4D1960((__int64)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v7 - __readfsqword(0x28u);
}
