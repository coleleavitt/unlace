__int64 __fastcall sub_1F6B50(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h]
  char v7; // [rsp+18h] [rbp-40h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int16 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( dword_8D1DC0 <= 0 )
  {
    sub_1E95D0((QT::QObject *)v5, a1, 9, 0, -32768, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 960LL))(a1);
    if ( !v7 )
    {
      v4 = v6;
      if ( v6 )
      {
        *(_QWORD *)(v6 + 948) = v8;
        *(_WORD *)(v4 + 956) = v9;
      }
    }
    v5[0] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v5);
  }
  return QT::QWidget::showEvent(a1, a2);
}
