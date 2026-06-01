__int64 __fastcall sub_2D9390(QT::QString *a1, __int64 a2)
{
  int v3; // r8d
  int v4; // r9d
  void *v5; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (a6[0] & 1) != 0 )
  {
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a1);
    LODWORD(v5) = v7;
    if ( !v7 )
      v5 = &QT::QByteArray::_empty;
    sub_4F7CB0(1, (unsigned int)"idaAccessibilityFactory(classname=%s, object=%p)\n", (_DWORD)v5, a2, v3, v4);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*QT::QCoreApplication::self + 456LL))(
           QT::QCoreApplication::self,
           a2);
}
