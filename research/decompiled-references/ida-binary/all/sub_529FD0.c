unsigned __int64 __fastcall sub_529FD0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebp
  double v3; // xmm0_8
  QT::QLabel *v4; // r14
  size_t v5; // rax
  double v6; // xmm0_8
  QT::QObject *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  QT::QWidget *v10; // rax
  void *ptr[2]; // [rsp+0h] [rbp-488h] BYREF
  int v13; // [rsp+10h] [rbp-478h]
  char v14[32]; // [rsp+20h] [rbp-468h] BYREF
  char s[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v16; // [rsp+448h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 80);
  v16 = __readfsqword(0x28u);
  QT::QPlainTextEdit::document(*(QT::QPlainTextEdit **)(a1 + 48));
  QT::QTextDocument::toPlainText((QT::QTextDocument *)ptr);
  v2 = v1 - v13;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = qsnprintf(s, 1024, "%d", v2);
  v4 = *(QT::QLabel **)(a1 + 64);
  v5 = strlen(s);
  v6 = QT::QString::fromUtf8(ptr, v5, s, v3);
  QT::QLabel::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = *(QT::QObject **)(a1 + 64);
  QT::QVariant::QVariant((QT::QVariant *)v14, v2 < 0);
  QT::QObject::doSetProperty(v7, "invalid", (const QT::QVariant *)v14, (QT::QVariant *)v14);
  QT::QVariant::~QVariant((QT::QVariant *)v14);
  v8 = QT::QWidget::style(*(QT::QWidget **)(a1 + 64));
  (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)v8 + 104LL))(v8, *(_QWORD *)(a1 + 64), v6);
  v9 = QT::QWidget::style(*(QT::QWidget **)(a1 + 64));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, *(_QWORD *)(a1 + 64));
  v10 = (QT::QWidget *)QT::QDialogButtonBox::button(*(_QWORD *)(a1 + 72), 1024);
  QT::QWidget::setEnabled(v10, v2 >= 0);
  return v16 - __readfsqword(0x28u);
}
