unsigned __int64 __fastcall sub_5266A0(QT::QWidget **this, QT::QWidget *a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rdi
  __m128i *v7; // rax
  __m128i v8; // xmm0
  unsigned __int64 v10; // [rsp+0h] [rbp-70h] BYREF
  _BYTE v11[8]; // [rsp+8h] [rbp-68h] BYREF
  __m128i v12; // [rsp+10h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
  sub_53A8A0(this, v3, 0);
  *(this + 6) = a2;
  v4 = _mm_loadl_epi64((const __m128i *)&qword_5DBD90);
  *(this + 2) = (QT::QWidget *)TChooserDialog___vtable_at__16;
  v5 = *((_QWORD *)a2 + 4);
  *this = (QT::QWidget *)&TChooserDialog___vtable;
  v10 = _mm_sub_epi32(
          _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(v5 + 28)), v4),
          _mm_loadl_epi64((const __m128i *)(v5 + 20))).m128i_u64[0];
  QT::QWidget::resize(this, &v10);
  QT::QWidget::setParent(*(this + 6), (QT::QWidget *)this);
  v6 = (__int64)*(this + 6);
  v12.m128i_i64[0] = 0;
  QT::QWidget::move(v6, &v12);
  QT::QObject::installEventFilter(*(this + 6), (QT::QObject *)this);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QWidget::setWindowTitle((QT::QWidget *)this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setWindowFlags(this, *((_DWORD *)*(this + 4) + 3) & 0xFFFE7FFF | 0x8000);
  QT::QWidget::windowIcon((QT::QWidget *)ptr);
  QT::QWidget::setWindowIcon((QT::QWidget *)this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  sub_53A8F0(this);
  v12.m128i_i64[1] = 0;
  ptr[1] = nullptr;
  v12.m128i_i64[0] = (__int64)sub_49E190;
  ptr[0] = &QT::QDialog::accepted;
  v7 = (__m128i *)operator new(0x20u);
  v8 = _mm_load_si128(&v12);
  v7->m128i_i32[0] = 1;
  v7[1] = v8;
  v7->m128i_i64[1] = (__int64)sub_49C080;
  QT::QObject::connectImpl(v11, this, ptr, a2, &v12, v7, 0, 0, &QT::QDialog::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  return v14 - __readfsqword(0x28u);
}
