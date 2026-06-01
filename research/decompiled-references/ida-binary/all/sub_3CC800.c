unsigned __int64 __fastcall sub_3CC800(QT::QSplitter *this, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rdi
  double v7; // xmm0_8
  QT::QSplitter *v8; // rdi
  QT::QWidget *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __m128i *v13; // rax
  __m128i si128; // xmm0
  __m128i *v15; // rax
  __m128i v16; // xmm0
  __m128i *v17; // rax
  __m128i v18; // xmm0
  __m128i *v19; // rax
  __m128i v20; // xmm0
  __m128i *v21; // rax
  __m128i v22; // xmm0
  const char *v23; // r12
  size_t v24; // rax
  __int64 v25; // rdx
  QT::QWidget *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  QT::QWidget *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v35; // rax
  struct _Unwind_Exception *v36; // rax
  struct _Unwind_Exception *v37; // r12
  __int64 v38; // [rsp+0h] [rbp-C0h]
  __int64 v39; // [rsp+0h] [rbp-C0h]
  __int64 v40; // [rsp+0h] [rbp-C0h]
  __int64 v41; // [rsp+0h] [rbp-C0h]
  __int64 v42; // [rsp+0h] [rbp-C0h]
  char *v44; // [rsp+10h] [rbp-B0h]
  QT::QObject *v45; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v46; // [rsp+20h] [rbp-A0h]
  void **v47; // [rsp+28h] [rbp-98h]
  _QWORD v48[2]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v50[2]; // [rsp+50h] [rbp-70h] BYREF
  __m128i v51; // [rsp+60h] [rbp-60h] BYREF
  _BYTE ptr[24]; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+88h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  QT::QSplitter::QSplitter(this, nullptr);
  v7 = 0.0;
  *(_OWORD *)((char *)this + 40) = 0;
  v45 = (QT::QSplitter *)((char *)this + 56);
  *(_QWORD *)this = &til_view_t___vtable;
  *((_QWORD *)this + 2) = til_view_t___vtable_at__16;
  QT::QObject::QObject((QT::QSplitter *)((char *)this + 56), nullptr);
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 7) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 56, v38);
  v44 = (char *)this + 88;
  QT::QObject::QObject((QT::QSplitter *)((char *)this + 88), nullptr);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 11) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 88, v39);
  sub_478D00((char *)this + 56, v40);
  v8 = (QT::QSplitter *)v44;
  v9 = (QT::QWidget *)a3;
  sub_478D00(v44, v41);
  if ( *((_BYTE *)this + 112) )
  {
    sub_3C4350(0.0, (__int64)v44, a3, v10, v11);
    v37 = v36;
    sub_16D970(v47);
    *((_QWORD *)this + 11) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v44);
    *((_QWORD *)this + 7) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject(v45);
    v4 = *((volatile signed __int32 **)this + 6);
    if ( v4 )
      sub_28EA10(v4);
    QT::QSplitter::~QSplitter(this);
    _Unwind_Resume(v37);
  }
  v42 = *((_QWORD *)this + 13);
  LOBYTE(v46) = *((_BYTE *)this + 80);
  if ( (_BYTE)v46 )
  {
    sub_3C4350(0.0, (__int64)v44, a3, v10, v11);
    goto LABEL_24;
  }
  v12 = *((_QWORD *)this + 9);
  *(_QWORD *)ptr = sub_3C7010;
  *(_QWORD *)&ptr[8] = 0;
  v48[0] = sub_546850;
  v48[1] = 0;
  v13 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v13->m128i_i32[0] = 1;
  v13->m128i_i64[1] = (__int64)sub_3C4590;
  v13[1] = si128;
  QT::QObject::connectImpl(&v51, v12, v48, this, ptr, v13, 0, 0, &off_895EA0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v51);
  *(_QWORD *)ptr = sub_3C7010;
  *(_QWORD *)&ptr[8] = 0;
  v49[0] = sub_546800;
  v49[1] = 0;
  v15 = (__m128i *)operator new(0x20u);
  v16 = _mm_load_si128((const __m128i *)ptr);
  v15->m128i_i64[1] = (__int64)sub_3C4590;
  v15->m128i_i32[0] = 1;
  v15[1] = v16;
  QT::QObject::connectImpl(&v51, v12, v49, this, ptr, v15, 0, 0, &off_895EA0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v51);
  *(_QWORD *)&ptr[8] = 0;
  *(_QWORD *)ptr = sub_3C6E50;
  v50[1] = 0;
  v50[0] = sub_54E070;
  v17 = (__m128i *)operator new(0x20u);
  v18 = _mm_load_si128((const __m128i *)ptr);
  v17->m128i_i32[0] = 1;
  v17->m128i_i64[1] = (__int64)sub_3C4610;
  v17[1] = v18;
  QT::QObject::connectImpl(&v51, v12, v50, this, ptr, v17, 0, 0, &off_89D580);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v51);
  *(_QWORD *)&ptr[8] = 0;
  *(_QWORD *)ptr = sub_3C6E70;
  v51.m128i_i64[1] = 0;
  v51.m128i_i64[0] = (__int64)sub_54E010;
  v19 = (__m128i *)operator new(0x20u);
  v20 = _mm_load_si128((const __m128i *)ptr);
  v19->m128i_i32[0] = 1;
  v19[1] = v20;
  v19->m128i_i64[1] = (__int64)sub_3C4690;
  QT::QObject::connectImpl(v50, v12, &v51, this, ptr, v19, 0, 0, &off_89D580);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v50);
  v51.m128i_i64[1] = 0;
  v51.m128i_i64[0] = (__int64)sub_3C6AF0;
  *(_QWORD *)&ptr[8] = 0;
  *(_QWORD *)ptr = sub_459CC0;
  v21 = (__m128i *)operator new(0x20u);
  v22 = _mm_load_si128(&v51);
  v21->m128i_i32[0] = 1;
  v21[1] = v22;
  v21->m128i_i64[1] = (__int64)&loc_3C4370;
  QT::QObject::connectImpl(v50, v42, ptr, this, &v51, v21, 0, 0, &off_87B020);
  v23 = &s1;
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v50);
  v24 = 0;
  v25 = *(_QWORD *)(a4 + 8);
  if ( v25 )
  {
    v24 = v25 - 1;
    v23 = *(const char **)a4;
    v46 = (unsigned __int64)(v25 - 1) >> 63;
    if ( *(_QWORD *)a4 )
    {
LABEL_5:
      if ( !(_BYTE)v46 )
        goto LABEL_6;
    }
  }
  else if ( &s1 )
  {
    goto LABEL_5;
  }
  v24 = 0;
  if ( v23 )
    v24 = strlen(v23);
LABEL_6:
  v7 = QT::QString::fromUtf8(ptr, v24, v23);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    free(*(void **)ptr);
  (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64, double))(*QT::QCoreApplication::self + 136LL))(
    ptr,
    QT::QCoreApplication::self,
    165,
    v7);
  v9 = (QT::QWidget *)ptr;
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  v8 = (QT::QSplitter *)&qword_48;
  v26 = (QT::QWidget *)operator new(0x48u);
  v29 = v26;
  if ( *((_BYTE *)this + 80) )
LABEL_26:
    sub_3C4350(v7, (__int64)v8, (__int64)v9, v27, v28);
  sub_5226F0(v26);
  v9 = v29;
  v8 = this;
  QT::QSplitter::addWidget(this, v29);
  if ( *((_BYTE *)this + 112) )
  {
LABEL_25:
    sub_3C4350(v7, (__int64)v8, (__int64)v9, v30, v31);
    goto LABEL_26;
  }
  v9 = *((QT::QWidget **)this + 13);
  v8 = this;
  QT::QSplitter::addWidget(this, v9);
  if ( *((_BYTE *)this + 112) )
  {
LABEL_24:
    sub_3C4350(v7, (__int64)v8, (__int64)v9, v32, v33);
    goto LABEL_25;
  }
  QT::QWidget::setFocusProxy(this, *((QT::QWidget **)this + 13));
  if ( !*((_BYTE *)QT::QCoreApplication::self + 529) )
  {
    memset(ptr, 0, sizeof(ptr));
    sub_1CD660((__int64 *)ptr);
    sub_51B6E0(this);
    if ( !*((_BYTE *)this + 112) )
    {
      v35 = *((_QWORD *)this + 13);
      if ( v35 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v35 + 1000) + 57LL) )
          sub_3C6D20((__int64)this);
      }
    }
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(_QWORD *)ptr, ptr);
    }
  }
  return v53 - __readfsqword(0x28u);
}
