unsigned __int64 __fastcall sub_1F5FE0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  QT::QObject::QObject((QT::QObject *)a1, nullptr);
  *(_WORD *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 30) = 0;
  *(_QWORD *)a1 = &caret_status_t___vtable;
  *(_QWORD *)(a1 + 16) = a2;
  QT::QObject::connect(
    &v4,
    qword_8CD748,
    "2caretBlinkIntervalChanged(int, int)",
    a1,
    "1onCaretBlinkIntervalChanged(int,int)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v4);
  v2 = reg_int_op("CaretBlinkInterval", 0, 500, 0);
  *(_BYTE *)(a1 + 30) = 1;
  if ( v2 > 0 )
  {
    if ( dword_8BA8D4 > 0 )
      QT::QBasicTimer::start(a1 + 24, dword_8BA8D4, a1);
  }
  else if ( *(_DWORD *)(a1 + 24) )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 24));
  }
  return v5 - __readfsqword(0x28u);
}
