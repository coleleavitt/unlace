unsigned __int64 __fastcall sub_504BC0(QT::QWidget *this)
{
  __m128i *v1; // r14
  QT::QVBoxLayout *v2; // r15
  QT::QSignalMapper *v3; // r15
  __m128i *v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // rax
  __m128i *v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // rax
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  int *v27; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rsi
  QT::QSignalMapper *v34; // [rsp+0h] [rbp-100h]
  QT::QSignalMapper *v35; // [rsp+0h] [rbp-100h]
  __int64 v36[2]; // [rsp+10h] [rbp-F0h] BYREF
  __m128i v37; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v38[6]; // [rsp+30h] [rbp-D0h] BYREF
  void *ptr; // [rsp+90h] [rbp-70h]
  _BYTE v40[32]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+C8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v1 = (__m128i *)((char *)this + 344);
  QT::QWidget::QWidget(this, 0, 0);
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 12) = this;
  *((_QWORD *)this + 2) = form_widget_t___vtable_at__16;
  *((_QWORD *)this + 11) = form_actions_impl_t___vtable;
  *((_QWORD *)this + 13) = (char *)this + 64;
  *((_QWORD *)this + 14) = (char *)this + 40;
  *(_QWORD *)this = &form_widget_t___vtable;
  *((_QWORD *)this + 15) = 0;
  *((_BYTE *)this + 128) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = (char *)this + 232;
  *((_QWORD *)this + 32) = (char *)this + 232;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_BYTE *)this + 312) = 0;
  *((_QWORD *)this + 42) = 0;
  *((_QWORD *)this + 45) = 0;
  *((_OWORD *)this + 3) = 0;
  *(_OWORD *)((char *)this + 72) = 0;
  *((_OWORD *)this + 9) = 0;
  *((_OWORD *)this + 10) = 0;
  *(_OWORD *)((char *)this + 280) = 0;
  *((_OWORD *)this + 20) = 0;
  *(_OWORD *)((char *)this + 344) = 0;
  *((_OWORD *)this + 23) = 0;
  *((_OWORD *)this + 24) = 0;
  *((_OWORD *)this + 25) = 0;
  *((_OWORD *)this + 26) = 0;
  v2 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v2);
  *((_QWORD *)this + 47) = v2;
  v3 = (QT::QSignalMapper *)operator new(0x10u);
  QT::QSignalMapper::QSignalMapper(v3, this);
  *((_QWORD *)this + 48) = v3;
  v38[0].m128i_i64[0] = (__int64)&loc_4F9AF0;
  v38[0].m128i_i64[1] = 0;
  v36[0] = (__int64)&QT::QSignalMapper::mappedInt;
  v36[1] = 0;
  v4 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128(v38);
  v4->m128i_i32[0] = 1;
  v4->m128i_i64[1] = (__int64)sub_4F8B00;
  v4[1] = si128;
  QT::QObject::connectImpl(&v37, v3, v36, this, v38, v4, 0, 0, &QT::QSignalMapper::staticMetaObject);
  sub_4F4600((__m128i *)((char *)this + 344), *((_QWORD *)this + 45), v37.m128i_i64, v6, v7, v8);
  v11 = *((int **)this + 43);
  if ( !v11 || *v11 > 1 )
    sub_4F4020(v1, 0, 0, 0, v9, v10);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v37);
  v34 = (QT::QSignalMapper *)operator new(0x10u);
  QT::QSignalMapper::QSignalMapper(v34, this);
  v38[0].m128i_i64[1] = 0;
  v38[0].m128i_i64[0] = (__int64)sub_502210;
  *((_QWORD *)this + 49) = v34;
  v37.m128i_i64[0] = (__int64)&QT::QSignalMapper::mappedInt;
  v37.m128i_i64[1] = 0;
  v12 = (__m128i *)operator new(0x20u);
  v12->m128i_i32[0] = 1;
  v13 = _mm_load_si128(v38);
  v12->m128i_i64[1] = (__int64)sub_4F8B00;
  v12[1] = v13;
  QT::QObject::connectImpl(v36, v34, &v37, this, v38, v12, 0, 0, &QT::QSignalMapper::staticMetaObject);
  sub_4F4600(v1, *((_QWORD *)this + 45), v36, v14, v15, v16);
  v19 = *((int **)this + 43);
  if ( !v19 || *v19 > 1 )
    sub_4F4020(v1, 0, 0, 0, v17, v18);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v36);
  v35 = (QT::QSignalMapper *)operator new(0x10u);
  QT::QSignalMapper::QSignalMapper(v35, this);
  v37.m128i_i64[1] = 0;
  v37.m128i_i64[0] = (__int64)&loc_4F8C00;
  *((_QWORD *)this + 50) = v35;
  v38[0].m128i_i64[0] = (__int64)&QT::QSignalMapper::mappedInt;
  v38[0].m128i_i64[1] = 0;
  v20 = (__m128i *)operator new(0x20u);
  v20->m128i_i64[1] = (__int64)sub_4F8B00;
  v21 = _mm_load_si128(&v37);
  v20->m128i_i32[0] = 1;
  v20[1] = v21;
  QT::QObject::connectImpl(v36, v35, v38, this, &v37, v20, 0, 0, &QT::QSignalMapper::staticMetaObject);
  sub_4F4600(v1, *((_QWORD *)this + 45), v36, v22, v23, v24);
  v27 = *((int **)this + 43);
  if ( !v27 || *v27 > 1 )
    sub_4F4020(v1, 0, 0, 0, v25, v26);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v36);
  QT::QStyleOptionComboBox::QStyleOptionComboBox((QT::QStyleOptionComboBox *)v38);
  QT::QStyleOption::initFrom((QT::QStyleOption *)v38, this);
  v38[1] = _mm_load_si128((const __m128i *)&xmmword_5DDDC0);
  v28 = QT::QWidget::style(this);
  v29 = (*(__int64 (__fastcall **)(__int64, __int64, __m128i *, __int64, QT::QWidget *))(*(_QWORD *)v28 + 216LL))(
          v28,
          1,
          v38,
          4,
          this);
  *((_DWORD *)this + 74) = v30 + 11 - v29;
  QT::QWidget::setAutoFillBackground(this, 1);
  v31 = xmmword_8D2318;
  v37.m128i_i64[0] = (__int64)this;
  v32 = qword_8D2310;
  if ( *((_QWORD *)&xmmword_8D2318 + 1) < (unsigned __int64)(xmmword_8D2318 + 1) )
  {
    qword_8D2310 = qvector_reserve(&qword_8D2310, qword_8D2310, xmmword_8D2318 + 1, 8);
    v32 = qword_8D2310;
    v31 = xmmword_8D2318;
  }
  *(_QWORD *)(v32 + 8 * v31) = this;
  *(_QWORD *)&xmmword_8D2318 = xmmword_8D2318 + 1;
  QT::QIcon::~QIcon((QT::QIcon *)v40);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v38);
  return v41 - __readfsqword(0x28u);
}
