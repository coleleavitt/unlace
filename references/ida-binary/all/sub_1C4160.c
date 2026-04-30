__int64 __fastcall sub_1C4160(double a1, __m128 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  QT::QWidget *v4; // rbp
  __int64 (*v5)(void); // rax
  _QWORD *v6; // rdi
  const char *v7; // rsi
  __int64 v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  char v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v2 = qword_8CAEE8;
  v11 = __readfsqword(0x28u);
  result = 0;
  if ( !qword_8CAEE8 )
  {
    QT::QObject::QObject((QT::QObject *)v8, nullptr);
    v9 = 0;
    sub_478D00((char *)v8, (__int64)&object_lifecycle_monitor_t___vtable);
    v4 = (QT::QWidget *)operator new(0xD0u);
    sub_1C3C30(v4, 0, a1, a2);
    if ( (int)sub_186B30((__int64)v4) > 0 )
    {
      v5 = *(__int64 (**)(void))(*QT::QCoreApplication::self + 488LL);
      if ( (char *)v5 == (char *)sub_17A210 )
        v6 = QT::QCoreApplication::self + 85;
      else
        v6 = (_QWORD *)v5();
      if ( !v10 )
        v2 = v9;
      v7 = &s1;
      if ( (_QWORD)xmmword_8CAED8 )
        v7 = (const char *)qword_8CAED0;
      sub_17EDB0((__int64)v6, (__int64)v7, v2);
    }
    v8[0] = (__int64)&object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v8);
    return 1;
  }
  return result;
}
