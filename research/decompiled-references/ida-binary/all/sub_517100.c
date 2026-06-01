unsigned __int64 __fastcall sub_517100(_QWORD *a1, const void **a2)
{
  const void **v3; // rdi
  unsigned __int64 v4; // rbp
  const void *v6; // r13
  void *v7; // rax
  QT::QAbstractButton *v8; // r12
  __m128i *v9; // rax
  __m128i v10; // xmm0
  char v11[8]; // [rsp+8h] [rbp-60h] BYREF
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v3 = (const void **)(a1 + 5);
  if ( v3 != a2 )
  {
    v4 = (unsigned __int64)a2[1];
    if ( v4 <= 1 )
    {
      a1[6] = 0;
      return v14 - __readfsqword(0x28u);
    }
    v6 = *a2;
    v7 = (void *)a1[5];
    if ( a1[7] < v4 )
    {
      v7 = (void *)qvector_reserve(v3, a1[5], a2[1], 1);
      a1[5] = v7;
    }
    a1[6] = v4;
    memmove(v7, v6, v4 - 1);
    *(_BYTE *)(a1[5] + v4 - 1) = 0;
  }
  if ( a1[6] > 1u )
  {
    v8 = (QT::QAbstractButton *)QT::QMessageBox::addButton(a1, 0x1000000);
    (*(void (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 168LL))(v13);
    QT::QAbstractButton::setShortcut(v8, (const QT::QKeySequence *)v13);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v13);
    v12.m128i_i64[1] = 0;
    v12.m128i_i64[0] = (__int64)sub_517050;
    v13[1] = 0;
    v13[0] = &QT::QAbstractButton::clicked;
    v9 = (__m128i *)operator new(0x20u);
    v10 = _mm_load_si128(&v12);
    v9->m128i_i32[0] = 1;
    v9->m128i_i64[1] = (__int64)sub_517080;
    v9[1] = v10;
    QT::QObject::connectImpl(v11, v8, v13, a1, &v12, v9, 0, 0, &QT::QAbstractButton::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  }
  return v14 - __readfsqword(0x28u);
}
