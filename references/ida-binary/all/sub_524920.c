unsigned __int64 __fastcall sub_524920(QT::QCoreApplication *this)
{
  unsigned int v1; // eax
  QT::QEvent *v2; // rdx
  QT::QEvent *v4; // [rsp-8h] [rbp-A8h]
  void *ptr[2]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+10h] [rbp-90h]
  _BYTE v7[88]; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v8; // [rsp+78h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v6 = 0;
  v1 = QT::QGuiApplication::keyboardModifiers(this);
  QT::QKeyEvent::QKeyEvent(v7, 6, 16777221, v1, ptr, 0, 1);
  v2 = v4;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QCoreApplication::sendEvent(this, (QT::QObject *)v7, v2);
  QT::QKeyEvent::~QKeyEvent((QT::QKeyEvent *)v7);
  return v8 - __readfsqword(0x28u);
}
