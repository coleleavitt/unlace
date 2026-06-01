__int64 __fastcall sub_1F5B40(QT::QGuiApplication *a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, double); // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  struct _Unwind_Exception *v11; // rbx
  _QWORD v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  char v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int16 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v2 = sub_17D870((__int64)a1);
  if ( v2 )
  {
    v3 = v2;
    v4 = QT::QGuiApplication::keyboardModifiers(a1);
    sub_1E95D0((QT::QObject *)v12, v3, 10, *(_DWORD *)(v3 + 952) | BYTE3(v4) & 2, -32768, a2);
    v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)v3 + 496LL);
    if ( v6 == sub_1E6E70 )
    {
      if ( *(_BYTE *)(v3 + 968) )
      {
        if ( !*(_QWORD *)(v3 + 424) )
        {
          v11 = (struct _Unwind_Exception *)sub_1E69C0(a2, (__int64)v12, v3, (__int64)sub_1E6E70, v5);
          sub_1E9680((__int64)v12);
          _Unwind_Resume(v11);
        }
        v7 = *(_DWORD *)(v3 + 416);
        if ( v7 == 2 )
        {
          v8 = *(_QWORD *)(v3 + 896);
        }
        else if ( v7 == 3 )
        {
          v8 = *(_QWORD *)(v3 + 904);
        }
        else
        {
          v8 = 0;
          if ( v7 == 1 )
            v8 = *(_QWORD *)(v3 + 888);
        }
      }
      else
      {
        v8 = 0;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 240LL))(v8, 0);
    }
    else
    {
      ((void (__fastcall *)(__int64))v6)(v3);
    }
    if ( !*(_BYTE *)(v3 + 556) && !*(_BYTE *)(v3 + 557) )
      sub_1E7060(v3 + 528);
    if ( !v14 )
    {
      v9 = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 948) = v15;
        *(_WORD *)(v9 + 956) = v16;
      }
    }
    v12[0] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v12);
  }
  return 1;
}
