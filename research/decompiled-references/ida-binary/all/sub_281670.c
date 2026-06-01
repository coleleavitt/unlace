// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall sub_281670(QT::QWidget **a1, QT::QWidget *a2)
{
  __int64 v3; // r12
  QT::QWidget *v4; // r12
  QT::QWidget *v5; // rdi
  QT::QVBoxLayout *v6; // r12
  QT::QPlainTextEdit *v7; // r12
  QT::QDialogButtonBox *v8; // r12
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = v11;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_9:
    QT::QObject::setObjectName(a2, "EULADialog", 10);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_9;
LABEL_4:
  ptr[0] = (void *)0x23F0000021ELL;
  QT::QWidget::resize(a2, ptr);
  v4 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v4, a2, 0);
  *a1 = v4;
  QT::QObject::setObjectName(v4, "widget", 6);
  v5 = *a1;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DCC60);
  QT::QWidget::setGeometry(v5, ptr);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6, *a1);
  a1[1] = v6;
  QT::QObject::setObjectName(v6, "mainLayout", 10);
  QT::QLayout::setContentsMargins(a1[1], 0, 0, 0, 0);
  v7 = (QT::QPlainTextEdit *)operator new(0x28u);
  QT::QPlainTextEdit::QPlainTextEdit(v7, *a1);
  a1[2] = v7;
  QT::QObject::setObjectName(v7, "EULA", 4);
  QT::QPlainTextEdit::setReadOnly(a1[2], 1);
  QT::QBoxLayout::addWidget(a1[1], a1[2], 0, 0);
  v8 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v8, *a1);
  a1[3] = v8;
  QT::QObject::setObjectName(v8, "buttonBox", 9);
  QT::QDialogButtonBox::setStandardButtons(a1[3], 81920);
  QT::QDialogButtonBox::setCenterButtons(a1[3], 1);
  QT::QBoxLayout::addWidget(a1[1], a1[3], 0, 0);
  QT::QCoreApplication::translate(
    (QT::QCoreApplication *)ptr,
    "EULADialog",
    "Hex-Rays End User License Agreement",
    nullptr,
    -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return QT::QMetaObject::connectSlotsByName(a2, (QT::QObject *)ptr);
}
