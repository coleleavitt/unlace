unsigned __int64 __fastcall sub_1F8C50(char *a1, __int64 *a2)
{
  __m128i v3; // xmm3
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm3
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v14; // rbx
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rsi
  __m128i si128; // xmm0
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __m128i *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-F8h]
  __int64 v34; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v35; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-D0h] BYREF
  __m128i v38; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+60h] [rbp-98h] BYREF
  __m128i v42; // [rsp+70h] [rbp-88h] BYREF
  __m128i v43; // [rsp+80h] [rbp-78h]
  __m128i v44; // [rsp+90h] [rbp-68h]
  __m128i v45; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  stylable_widget_mixin_t__::vfunc_2(a1 + 40, a2);
  QT::QObject::property((QT::QObject *)&v38, a1);
  v35 = v39.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v35)
    && (unsigned __int8)QT::QVariant::toBool((QT::QVariant *)&v38) )
  {
    v18 = a2[1];
    if ( v18 )
    {
      v19 = v18 + 21;
      v20 = v18 + 22;
      --v18;
    }
    else
    {
      v20 = 23;
      v19 = 22;
    }
    v21 = *a2;
    if ( a2[2] < v20 )
    {
      v31 = qvector_reserve(a2, v21, v20, 1);
      *a2 = v31;
      v21 = v31;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC650);
    a2[1] = v20;
    *(_BYTE *)(v21 + v19) = 0;
    v23 = *a2 + v18;
    *(__m128i *)v23 = si128;
    *(_QWORD *)(v23 + 14) = 0x5D2265757274223DLL;
  }
  QT::QObject::property((QT::QObject *)&v40, a1);
  v3 = _mm_load_si128(&v40);
  v45.m128i_i64[0] = 0;
  v40 = 0;
  v4 = _mm_load_si128(&v38);
  v5 = _mm_load_si128(&v41);
  v45.m128i_i64[1] = 2;
  v6 = _mm_load_si128(&v45);
  v44 = v4;
  v41 = v6;
  v7 = _mm_load_si128(&v39);
  v38 = v3;
  v45 = v7;
  v39 = v5;
  v42 = v4;
  v43 = v7;
  QT::QVariant::~QVariant((QT::QVariant *)&v42);
  QT::QVariant::~QVariant((QT::QVariant *)&v40);
  v36 = v39.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v36)
    && (unsigned __int8)QT::QVariant::toBool((QT::QVariant *)&v38) )
  {
    v24 = a2[1];
    if ( v24 )
    {
      v25 = v24 + 17;
      v26 = v24 + 18;
      --v24;
    }
    else
    {
      v26 = 19;
      v25 = 18;
    }
    v27 = *a2;
    if ( a2[2] < v26 )
    {
      v34 = v25;
      v33 = v26;
      v32 = qvector_reserve(a2, v27, v26, 1);
      v25 = v34;
      v26 = v33;
      *a2 = v32;
      v27 = v32;
    }
    v28 = _mm_load_si128((const __m128i *)&xmmword_5DC660);
    a2[1] = v26;
    *(_BYTE *)(v27 + v25) = 0;
    v29 = (__m128i *)(*a2 + v24);
    v29[1].m128i_i16[0] = 23842;
    *v29 = v28;
  }
  QT::QObject::property((QT::QObject *)&v40, a1);
  v8 = _mm_load_si128(&v40);
  v45.m128i_i64[0] = 0;
  v40 = 0;
  v9 = _mm_load_si128(&v38);
  v10 = _mm_load_si128(&v41);
  v45.m128i_i64[1] = 2;
  v11 = _mm_load_si128(&v45);
  v44 = v9;
  v41 = v11;
  v12 = _mm_load_si128(&v39);
  v38 = v8;
  v45 = v12;
  v39 = v10;
  v42 = v9;
  v43 = v12;
  QT::QVariant::~QVariant((QT::QVariant *)&v42);
  QT::QVariant::~QVariant((QT::QVariant *)&v40);
  v37 = v39.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v37)
    && (unsigned __int8)QT::QVariant::toBool((QT::QVariant *)&v38) )
  {
    v14 = a2[1];
    if ( v14 )
    {
      v15 = v14 + 13;
      v16 = v14 + 14;
      --v14;
    }
    else
    {
      v16 = 15;
      v15 = 14;
    }
    v17 = *a2;
    if ( a2[2] < v16 )
    {
      v30 = qvector_reserve(a2, v17, v16, 1);
      *a2 = v30;
      v17 = v30;
    }
    a2[1] = v16;
    *(_BYTE *)(v17 + v15) = 0;
    qmemcpy((void *)(*a2 + v14), "[hints=\"true\"]", 14);
  }
  QT::QVariant::~QVariant((QT::QVariant *)&v38);
  return v46 - __readfsqword(0x28u);
}
