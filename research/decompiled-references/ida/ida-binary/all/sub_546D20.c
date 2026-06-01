unsigned __int64 sub_546D20()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ebx
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v6[2]; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( !dword_8D25CC )
  {
    strcpy((char *)v6, "QItemSelection");
    v0 = 0;
    do
      v1 = v0++;
    while ( *((_BYTE *)v6 + v0) );
    if ( v1 == 13 && v6[0] == 0x6C65536D65744951LL && *(_QWORD *)((char *)v6 + 6) == 0x6E6F697463656C65LL )
    {
      QT::QByteArray::QByteArray((QT::QByteArray *)ptr, (const char *)v6, -1);
      v2 = QT::qRegisterNormalizedMetaType_QItemSelection((const QT::QByteArray *)ptr);
    }
    else
    {
      QT::QMetaObject::normalizedType((QT::QMetaObject *)ptr, "QItemSelection");
      v2 = QT::qRegisterNormalizedMetaType_QItemSelection((const QT::QByteArray *)ptr);
    }
    v3 = v2;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      dword_8D25CC = v3;
    }
    else
    {
      dword_8D25CC = v2;
    }
  }
  return v7 - __readfsqword(0x28u);
}
