__int64 __fastcall sub_2014C0(
        QT::QGuiApplication *a1,
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
  const __m128i *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 (__fastcall *v15)(const __m128i *, __int64, __int64, __int64, double, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v16; // rax
  int v18; // [rsp+Ch] [rbp-5Ch] BYREF
  char v19[8]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  char v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  __int16 v23; // [rsp+38h] [rbp-30h]
  unsigned __int64 v24; // [rsp+48h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v9 = sub_17D870((__int64)a1);
  if ( v9 )
  {
    v10 = (const __m128i *)v9;
    v11 = QT::QGuiApplication::keyboardModifiers(a1);
    sub_1E95D0((QT::QObject *)v19, (__int64)v10, 10, v10[59].m128i_i32[2] | BYTE3(v11) & 2, -32768, a2);
    v15 = *(__int64 (__fastcall **)(const __m128i *, __int64, __int64, __int64, double, __m128, __m128, __m128, double, double, __m128, __m128))(v10->m128i_i64[0] + 544);
    if ( v15 == sub_200E10 )
    {
      v18 = 0;
      sub_2006B0(v10, 0, (__int64)&v18, v12, a2, a3, a4, a5, v13, v14, a8, a9);
    }
    else
    {
      ((void (__fastcall *)(const __m128i *, __int64))v15)(v10, 1);
    }
    if ( !v10[34].m128i_i8[12] && !v10[34].m128i_i8[13] )
      sub_1E7060((__int64)v10[33].m128i_i64);
    if ( !v21 )
    {
      v16 = v20;
      if ( v20 )
      {
        *(_QWORD *)(v20 + 948) = v22;
        *(_WORD *)(v16 + 956) = v23;
      }
    }
    *(_QWORD *)v19 = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v19);
  }
  return 1;
}
