__int64 __fastcall sub_1FDE70(
        QT::QGuiApplication *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  char v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int16 v20; // [rsp+28h] [rbp-30h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v9 = sub_17D870((__int64)a1);
  if ( v9 )
  {
    v10 = v9;
    v11 = QT::QGuiApplication::keyboardModifiers(a1);
    sub_1E95D0((QT::QObject *)v16, v10, 10, *(_DWORD *)(v10 + 952) | BYTE3(v11) & 2, -32768, *(double *)a2.m128_u64);
    sub_1FDB80(v10, 0, a2, a3, a4, a5, v12, v13, a8, a9);
    if ( !*(_BYTE *)(v10 + 556) && !*(_BYTE *)(v10 + 557) )
      sub_1E7060(v10 + 528);
    if ( !v18 )
    {
      v15 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v17 + 948) = v19;
        *(_WORD *)(v15 + 956) = v20;
      }
    }
    v16[0] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v16);
  }
  return 1;
}
