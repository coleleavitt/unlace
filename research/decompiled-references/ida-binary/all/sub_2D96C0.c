unsigned __int64 __fastcall sub_2D96C0(QT::QAccessibleEvent *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax
  __m128i v7; // xmm3
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  QT::QAccessibleEvent *v12; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v20[4]; // [rsp+10h] [rbp-108h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+30h] [rbp-E8h] BYREF
  __m128i v22; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v23; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v24; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+70h] [rbp-A8h] BYREF
  _OWORD v26[2]; // [rsp+80h] [rbp-98h] BYREF
  __m128i v27; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v28; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v29[40]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+E8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( (unsigned __int8)QT::QAccessible::isActive(a1) )
  {
    v6 = sub_1EB5B0((__int64)a1, a2, v3, v4, a3);
    v23.m128i_i64[0] = 0;
    v19 = v6;
    v23.m128i_i64[1] = 2;
    v22 = 0;
    if ( &unk_8BA7C0 )
    {
      QT::QVariant::QVariant(&v24, &unk_8BA7C0, &v19);
      v7 = _mm_load_si128(&v24);
      v28.m128i_i64[0] = 0;
      v24 = 0;
      v8 = _mm_load_si128(&v22);
      v9 = _mm_load_si128(&v25);
      v28.m128i_i64[1] = 2;
      v10 = _mm_load_si128(&v28);
      v27 = v8;
      v25 = v10;
      v11 = _mm_load_si128(&v23);
      v22 = v7;
      v28 = v11;
      v23 = v9;
      v26[0] = v8;
      v26[1] = v11;
      QT::QVariant::~QVariant((QT::QVariant *)v26);
      QT::QVariant::~QVariant((QT::QVariant *)&v24);
    }
    else
    {
      v23.m128i_i8[8] &= ~2u;
      v22.m128i_i64[0] = v6;
    }
    v27.m128i_i32[2] = 32961;
    v28.m128i_i64[0] = (__int64)a1;
    v28.m128i_i32[2] = -1;
    v27.m128i_i64[0] = (__int64)&`vtable for'QT::QAccessibleValueChangeEvent + 16;
    QT::QVariant::QVariant((QT::QVariant *)v29, (const QT::QVariant *)&v22);
    v12 = a1;
    v27.m128i_i32[2] = 32782;
    sub_2D9460(v20, (__int64)a1);
    if ( (debug & 0x80000) != 0 && (a6[0] & 0x20) != 0 )
    {
      v12 = (QT::QAccessibleEvent *)"%s::notify_value_update()\n";
      sub_4F7CB0(32, (unsigned int)"%s::notify_value_update()\n", (unsigned int)&unk_5C2F25, v13, v14, v15);
    }
    QT::QAccessible::updateAccessibility((QT::QAccessible *)&v27, v12);
    v20[0] = &IDAMemoAccessible___vtable;
    v20[2] = IDAMemoAccessible___vtable_at__16;
    v21 = IDAMemoAccessible___vtable_at__32;
    if ( (debug & 0x80000) != 0 && (a6[0] & 8) != 0 )
      sub_4F7CB0(
        8,
        (unsigned int)"%s IDAMemoAccessible::~IDAMemoAccessible()\n",
        (unsigned int)&unk_5C2F25,
        v16,
        v17,
        v18);
    QT::QAccessibleTextInterface::~QAccessibleTextInterface((QT::QAccessibleTextInterface *)&v21);
    QT::QAccessibleWidget::~QAccessibleWidget((QT::QAccessibleWidget *)v20);
    QT::QAccessibleValueChangeEvent::~QAccessibleValueChangeEvent((QT::QAccessibleValueChangeEvent *)&v27);
    QT::QVariant::~QVariant((QT::QVariant *)&v22);
  }
  return v30 - __readfsqword(0x28u);
}
