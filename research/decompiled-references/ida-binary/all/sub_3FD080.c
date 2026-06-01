__int64 __fastcall sub_3FD080(__int64 a1, QT::QString *a2, char a3)
{
  QT::QLineEdit **v4; // rbp
  __m128i *v5; // rax
  __m128i si128; // xmm0
  __m128i *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rax
  QT::QObject *v15; // rax
  _BYTE v17[8]; // [rsp+18h] [rbp-70h] BYREF
  int v18[4]; // [rsp+20h] [rbp-68h] BYREF
  QT::QLineEdit **v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v4 = (QT::QLineEdit **)operator new(0x50u);
  sub_3F53E0(v4, a2, a1);
  *(_QWORD *)&v18[2] = 0;
  *(_QWORD *)v18 = sub_3EE040;
  v20 = 0;
  v19 = (QT::QLineEdit **)&loc_473310;
  v5 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)v18);
  v5->m128i_i32[0] = 1;
  v5[1] = si128;
  v5->m128i_i64[1] = (__int64)sub_3EED30;
  QT::QObject::connectImpl(v17, v4, &v19, a1, v18, v5, 0, 0, &off_8935E0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v17);
  *(_QWORD *)v18 = sub_3FACC0;
  *(_QWORD *)&v18[2] = 0;
  v19 = (QT::QLineEdit **)&loc_473320;
  v20 = 0;
  v7 = (__m128i *)operator new(0x20u);
  v8 = _mm_load_si128((const __m128i *)v18);
  v7->m128i_i32[0] = 1;
  v7->m128i_i64[1] = (__int64)sub_3EED30;
  v7[1] = v8;
  QT::QObject::connectImpl(v17, v4, &v19, a1, v18, v7, 0, 0, &off_8935E0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v17);
  v19 = v4;
  sub_3FA4A0((int **)(a1 + 144), *(int **)(a1 + 160), (__int64 *)&v19, v9, v10, v11);
  v14 = *(int **)(a1 + 144);
  if ( !v14 || *v14 > 1 )
    sub_3F9FE0(a1 + 144, 0, 0, 0, v12, v13);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 136), v4, 0, 0);
  v15 = (QT::QObject *)QT::QMetaObject::cast(
                         (QT::QMetaObject *)&off_8934E0,
                         *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL));
  sub_3FC5F0(v15, (QT::QWidget *)v4);
  (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a1 + 160) != 0);
  if ( a3 )
    sub_1DDCB0(a1, 0);
  return sub_473400(a1);
}
