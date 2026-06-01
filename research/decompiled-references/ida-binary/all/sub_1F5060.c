__int64 __fastcall sub_1F5060(QT::QGuiApplication *a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  char v9; // [rsp+18h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int16 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = sub_17D870((__int64)a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = QT::QGuiApplication::keyboardModifiers(a1);
    sub_1E95D0((QT::QObject *)v7, v3, 10, *(_DWORD *)(v3 + 952) | BYTE3(v4) & 2, -32768, a2);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 536LL))(v3, 2, 1);
    if ( !*(_BYTE *)(v3 + 556) && !*(_BYTE *)(v3 + 557) )
      sub_1E7060(v3 + 528);
    if ( !v9 )
    {
      v6 = v8;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 948) = v10;
        *(_WORD *)(v6 + 956) = v11;
      }
    }
    v7[0] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v7);
  }
  return 1;
}
