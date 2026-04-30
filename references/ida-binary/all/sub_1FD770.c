unsigned __int64 __fastcall sub_1FD770(
        const char **a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  _QWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  char vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int16 vars28; // [rsp+28h] [rbp+28h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  sub_1FD6A0((__int64)(a1 + 27), a1[115], 0, 1, a2, a3, a4, a5, a6, a7, a8, a9);
  sub_1E95D0((QT::QObject *)vars0, (__int64)a1, 7, 0, -32768, a2);
  (*((void (__fastcall **)(const char **, __int64, __int64))*a1 + 67))(a1, 2, 1);
  if ( !vars18 )
  {
    v9 = vars10;
    if ( vars10 )
    {
      *(_QWORD *)(vars10 + 948) = vars20;
      *(_WORD *)(v9 + 956) = vars28;
    }
  }
  vars0[0] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)vars0);
  return vars38 - __readfsqword(0x28u);
}
