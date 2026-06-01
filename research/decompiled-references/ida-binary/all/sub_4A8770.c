__int64 __fastcall sub_4A8770(
        __int64 a1,
        QT::QCoreApplication *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v11; // eax
  QT::QEvent *v12; // rdx
  QT::QEvent *v13; // [rsp-8h] [rbp-A8h]
  void *ptr[2]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-90h]
  _BYTE v16[88]; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 2008) & 2) != 0 )
    return sub_4A7260((__int64 *)a1, a3, a4, a5, a6, a7, a8, a9, a10);
  v15 = 0;
  *(_OWORD *)ptr = 0;
  v11 = QT::QGuiApplication::keyboardModifiers((QT::QGuiApplication *)a1);
  QT::QKeyEvent::QKeyEvent(v16, 6, 16777221, v11, ptr, 0, 1);
  v12 = v13;
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  QT::QCoreApplication::sendEvent(a2, (QT::QObject *)v16, v12);
  QT::QKeyEvent::~QKeyEvent((QT::QKeyEvent *)v16);
  return v17 - __readfsqword(0x28u);
}
