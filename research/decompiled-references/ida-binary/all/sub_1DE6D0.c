__int64 __fastcall sub_1DE6D0(__int64 *a1, QT::QWidget *a2)
{
  __int64 v3; // r12
  __int64 v4; // r12
  QT::QWidget *v5; // rdi
  QT::QVBoxLayout *v6; // r12
  QT::QTextEdit *v7; // r12
  QT::QPushButton *v8; // r12
  QT::QPushButton *v9; // r12
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = v12;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_6:
    QT::QObject::setObjectName(a2, "CopyrightDialog", 15);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_6;
LABEL_4:
  ptr[0] = (void *)0x174000001B8LL;
  QT::QWidget::resize(a2, ptr);
  v4 = operator new(0x28u);
  QT::QWidget::QWidget(v4, a2, 0);
  *a1 = v4;
  QT::QObject::setObjectName(v4, "widget", 6);
  v5 = (QT::QWidget *)*a1;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_5DC5F0);
  QT::QWidget::setGeometry(v5, ptr);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6, (QT::QWidget *)*a1);
  a1[1] = (__int64)v6;
  QT::QObject::setObjectName(v6, "mainLayout", 10);
  QT::QLayout::setContentsMargins((QT::QLayout *)a1[1], 0, 0, 0, 0);
  v7 = (QT::QTextEdit *)operator new(0x28u);
  QT::QTextEdit::QTextEdit(v7, (QT::QWidget *)*a1);
  a1[2] = (__int64)v7;
  QT::QObject::setObjectName(v7, "textEdit", 8);
  QT::QTextEdit::setReadOnly((QT::QTextEdit *)a1[2], 1);
  QT::QTextEdit::setOverwriteMode((QT::QTextEdit *)a1[2], 0);
  QT::QBoxLayout::addWidget(a1[1], a1[2], 0, 0);
  v8 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v8, (QT::QWidget *)*a1);
  a1[3] = (__int64)v8;
  QT::QObject::setObjectName(v8, "btnYes", 6);
  QT::QBoxLayout::addWidget(a1[1], a1[3], 0, 0);
  v9 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v9, (QT::QWidget *)*a1);
  a1[4] = (__int64)v9;
  QT::QObject::setObjectName(v9, "btnNo", 5);
  QT::QBoxLayout::addWidget(a1[1], a1[4], 0, 0);
  sub_1DE4F0(a1, a2);
  QT::QPushButton::setDefault((QT::QPushButton *)a1[4], (bool)&dword_0 + 1);
  return QT::QMetaObject::connectSlotsByName(a2, (QT::QObject *)((char *)&dword_0 + 1));
}
