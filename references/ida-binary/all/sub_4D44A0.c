unsigned __int64 sub_4D44A0()
{
  const char *v1; // rbx
  signed __int64 v2; // rsi
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // r12d
  const void *v7; // r13
  size_t v8; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( dword_8D1DF8 )
    return v11 - __readfsqword(0x28u);
  v10 = 0;
  v1 = (const char *)QT::QMetaObject::className((QT::QMetaObject *)&QT::Qt::staticMetaObject);
  *(_OWORD *)ptr = 0;
  v2 = strlen(v1) + 11;
  if ( v2 < 0 )
    v2 = 0;
  QT::QByteArray::reallocData(ptr, v2, 1);
  if ( ptr[0] && *((_QWORD *)ptr[0] + 1) )
    *((_DWORD *)ptr[0] + 1) |= 1u;
  v3 = 0;
  if ( v1 )
    v3 = strlen(v1);
  v4 = QT::QByteArray::insert(ptr, v10, v3, v1);
  v5 = QT::QByteArray::insert(v4, *(_QWORD *)(v4 + 16), 2, "::");
  QT::QByteArray::insert(v5, *(_QWORD *)(v5 + 16), 9, "Alignment");
  if ( &unk_8C30A0 )
  {
    v6 = dword_8C30AC;
    if ( !dword_8C30AC )
      v6 = QT::QMetaType::registerHelper(&unk_8C30A0);
  }
  else
  {
    v6 = 0;
  }
  if ( !&unk_8C30A0 || (v7 = off_8C30B8) == nullptr || !*(_BYTE *)off_8C30B8 )
  {
    if ( !v10 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v8 = strlen((const char *)off_8C30B8 + 1) + 1;
  if ( v8 != v10 || memcmp(ptr[1], v7, v8) )
LABEL_17:
    QT::QMetaType::registerNormalizedTypedef(ptr, &unk_8C30A0);
LABEL_18:
  dword_8D1DF8 = v6;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11 - __readfsqword(0x28u);
}
