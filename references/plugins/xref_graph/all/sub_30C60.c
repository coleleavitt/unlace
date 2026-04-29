unsigned __int64 __fastcall sub_30C60(QT::QWidget *a1, __int64 a2)
{
  QT::QVBoxLayout *v2; // r14
  __int64 v3; // r12
  QT::QHBoxLayout *v4; // r13
  __int64 v5; // r12
  QT::QLineEdit *v6; // r12
  QT::QIntValidator *v7; // r15
  __int64 v8; // rax
  void *v10[4]; // [rsp+10h] [rbp-70h] BYREF
  void *ptr[3]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, 0, 0);
  *(_QWORD *)a1 = &off_4D780;
  *((_QWORD *)a1 + 2) = options_t___vtable_at__16;
  v2 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v2, a1);
  v3 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 17, "<h3><u><b>Options");
  QT::QLabel::QLabel(v3, ptr, 0, 0);
  QT::QBoxLayout::addWidget(v2, v3, 0, 1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v4);
  v5 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 20, "Max node name length");
  QT::QLabel::QLabel(v5, ptr, 0, 0);
  QT::QBoxLayout::addWidget(v4, v5, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QBoxLayout::addStretch(v4, 0);
  v6 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v6, nullptr);
  v7 = (QT::QIntValidator *)operator new(0x18u);
  QT::QIntValidator::QIntValidator(v7, 0, 1000, a1);
  QT::QLineEdit::setValidator(v6, v7);
  QT::QString::fromUtf8(ptr, 2, "%1");
  QT::QString::arg(v10, ptr, *(int *)(a2 + 120), 0, 10, 32);
  QT::QLineEdit::setText(v6, v10);
  if ( v10[0] && !_InterlockedSub((volatile signed __int32 *)v10[0], 1u) )
    free(v10[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  ptr[1] = nullptr;
  ptr[0] = &QT::QLineEdit::textChanged;
  v8 = operator new(0x18u);
  *(_DWORD *)v8 = 1;
  *(_QWORD *)(v8 + 8) = &sub_337B0;
  *(_QWORD *)(v8 + 16) = a2;
  QT::QObject::connectImpl(v10, v6, ptr, a1, 0, v8, 0, 0, &QT::QLineEdit::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v10);
  QT::QBoxLayout::addWidget(v4, v6, 0, 0);
  QT::QBoxLayout::addLayout(v2, v4, 0);
  return v12 - __readfsqword(0x28u);
}
