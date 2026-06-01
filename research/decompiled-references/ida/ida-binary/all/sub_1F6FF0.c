unsigned __int64 __fastcall sub_1F6FF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h]
  char v7; // [rsp+18h] [rbp-40h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int16 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F6F20(a1) )
  {
    *(_BYTE *)(a2 + 12) = 1;
  }
  else
  {
    sub_1E95D0((QT::QObject *)v5, a1, 1, *(_BYTE *)(a2 + 35) & 2 | 8, -32768, a3);
    if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
      QT::QWidget::close(qword_8CCE70);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1040LL))(a1, a2);
    QT::QBasicTimer::start(a1 + 800, dword_8BA8F0, a1);
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
  return v10 - __readfsqword(0x28u);
}
