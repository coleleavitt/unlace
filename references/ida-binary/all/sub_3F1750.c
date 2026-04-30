unsigned __int64 __fastcall sub_3F1750(char *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v12[24]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  stylable_widget_mixin_t__::vfunc_2(a1 + 40, a2);
  QT::QObject::property((QT::QObject *)v12, a1);
  v11 = v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v11)
    && (unsigned __int8)QT::QVariant::toBool((QT::QVariant *)v12) )
  {
    v4 = a2[1];
    if ( v4 )
    {
      v5 = v4 + 21;
      v6 = v4 + 22;
      --v4;
    }
    else
    {
      v6 = 23;
      v5 = 22;
    }
    v7 = *a2;
    if ( a2[2] < v6 )
    {
      v10 = qvector_reserve(a2, v7, v6, 1);
      *a2 = v10;
      v7 = v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC650);
    a2[1] = v6;
    *(_BYTE *)(v7 + v5) = 0;
    v9 = *a2 + v4;
    *(__m128i *)v9 = si128;
    *(_QWORD *)(v9 + 14) = 0x5D2265757274223DLL;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v12);
  return v14 - __readfsqword(0x28u);
}
