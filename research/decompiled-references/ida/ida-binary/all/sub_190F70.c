// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall sub_190F70(__int64 a1, QT::QWidget *a2)
{
  void *v3; // r12
  QT::QHBoxLayout *v4; // r12
  QT::QVBoxLayout *v5; // r12
  QT::QVBoxLayout *v6; // r12
  QT::QTextEdit *v7; // r12
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // rdi
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = ptr[2];
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v3 )
      goto LABEL_4;
LABEL_9:
    QT::QObject::setObjectName(a2, "flags_container", 15);
    goto LABEL_4;
  }
  if ( !v3 )
    goto LABEL_9;
LABEL_4:
  ptr[0] = (void *)0xDF0000014BLL;
  QT::QWidget::resize(a2, ptr);
  v4 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v4, a2);
  *(_QWORD *)a1 = v4;
  QT::QObject::setObjectName(v4, "horizontalLayout", 16);
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5);
  *(_QWORD *)(a1 + 8) = v5;
  QT::QObject::setObjectName(v5, "verticalLayout", 14);
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6);
  *(_QWORD *)(a1 + 16) = v6;
  QT::QObject::setObjectName(v6, "verticalLayout_2", 16);
  v7 = (QT::QTextEdit *)operator new(0x28u);
  QT::QTextEdit::QTextEdit(v7, a2);
  *(_QWORD *)(a1 + 24) = v7;
  QT::QObject::setObjectName(v7, "teFlags", 7);
  QT::QTextEdit::setReadOnly(*(QT::QTextEdit **)(a1 + 24), 1);
  QT::QBoxLayout::addWidget(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0, 0);
  v8 = operator new(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v10 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v8 + 8) = 0;
  *(__m128i *)(v8 + 24) = si128;
  *(_DWORD *)(v8 + 20) = (_DWORD)&unk_710000;
  *(_QWORD *)v8 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(v8 + 12) = 0x200000014LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 8), *(QT::QLayout **)(a1 + 16), 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)a1, *(QT::QLayout **)(a1 + 8), 0);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "flags_container", "Form", nullptr, -1);
  QT::QWidget::setWindowTitle(a2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return QT::QMetaObject::connectSlotsByName(a2, (QT::QObject *)ptr);
}
