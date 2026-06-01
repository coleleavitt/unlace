unsigned __int64 __fastcall sub_1E5F70(QT::QWidget **a1, QT::QWidget *a2)
{
  __int64 v3; // rbp
  QT::QWidget *v4; // rbp
  QT::QWidget *v5; // rdi
  QT::QVBoxLayout *v6; // rbp
  QT::QTextEdit *v7; // rbp
  __int64 v8; // r9
  __m128i *v9; // rax
  __m128i v10; // xmm0
  __m128i si128; // xmm0
  __int64 v12; // rax
  void **v13; // rbp
  void **v14; // r15
  QT::QDialogButtonBox *v15; // rbp
  _BYTE v17[16]; // [rsp+0h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+20h] [rbp-68h]
  void *v20[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = v19;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
  }
  else if ( v3 )
  {
    goto LABEL_4;
  }
  QT::QObject::setObjectName(a2, "CustomHelpDialog", 16);
LABEL_4:
  ptr[0] = (void *)0x1EB000001E6LL;
  QT::QWidget::resize(a2, ptr);
  v4 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v4, a2, 0);
  *a1 = v4;
  QT::QObject::setObjectName(v4, "widget", 6);
  v5 = *a1;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DC640);
  QT::QWidget::setGeometry(v5, ptr);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6, *a1);
  a1[1] = v6;
  QT::QObject::setObjectName(v6, "verticalLayout", 14);
  QT::QLayout::setContentsMargins(a1[1], 0, 0, 0, 0);
  v7 = (QT::QTextEdit *)operator new(0x28u);
  QT::QTextEdit::QTextEdit(v7, *a1);
  a1[2] = v7;
  QT::QObject::setObjectName(v7, "textEdit", 8);
  QT::QFont::QFont((QT::QFont *)v17);
  QT::QString::fromUtf8(v20, 11, "Courier New");
  v9 = (__m128i *)QT::QArrayData::allocate(ptr, 24, 16, 1, 1, v8);
  v10 = _mm_loadl_epi64((const __m128i *)ptr);
  v19 = 0;
  v9[1].m128i_i64[0] = v21;
  *(__m128i *)ptr = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)v9);
  si128 = _mm_load_si128((const __m128i *)v20);
  *v9 = si128;
  v12 = 1;
  if ( si128.m128i_i64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
    v12 = v19 + 1;
  }
  v19 = v12;
  QT::QFont::setFamilies(v17, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v13 = (void **)ptr[1];
    v14 = (void **)((char *)ptr[1] + 24 * v19);
    if ( ptr[1] != v14 )
    {
      do
      {
        if ( *v13 && !_InterlockedSub((volatile signed __int32 *)*v13, 1u) )
          free(*v13);
        v13 += 3;
      }
      while ( v14 != v13 );
    }
    free(ptr[0]);
  }
  if ( v20[0] && !_InterlockedSub((volatile signed __int32 *)v20[0], 1u) )
    free(v20[0]);
  QT::QWidget::setFont(a1[2], (const QT::QFont *)v17);
  QT::QTextEdit::setReadOnly(a1[2], 1);
  QT::QBoxLayout::addWidget(a1[1], a1[2], 0, 0);
  v15 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v15, *a1);
  a1[3] = v15;
  QT::QObject::setObjectName(v15, "buttonBox", 9);
  QT::QDialogButtonBox::setStandardButtons(a1[3], 1024);
  QT::QDialogButtonBox::setCenterButtons(a1[3], 1);
  QT::QBoxLayout::addWidget(a1[1], a1[3], 0, 0);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "CustomHelpDialog", "Custom Help", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QMetaObject::connectSlotsByName(a2, (QT::QObject *)ptr);
  QT::QFont::~QFont((QT::QFont *)v17);
  return v22 - __readfsqword(0x28u);
}
