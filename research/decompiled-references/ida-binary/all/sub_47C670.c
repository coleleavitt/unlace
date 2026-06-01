unsigned __int64 __fastcall sub_47C670(__int64 a1, QT::QObject *a2, __int64 a3, const char *a4)
{
  size_t v5; // rax
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QObject::connect(ptr, a2, a3, a1 + 552, "1map()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v5 = 0;
  if ( a4 )
    v5 = strlen(a4);
  QT::QString::fromUtf8(ptr, v5, a4);
  QT::QSignalMapper::setMapping((QT::QSignalMapper *)(a1 + 552), a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars18 - __readfsqword(0x28u);
}
