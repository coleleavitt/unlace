QT::QPushButton *__fastcall sub_504160(__int64 a1, const QT::QString *a2)
{
  QT::QPushButton *v2; // rbx
  double v3; // xmm0_8
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = (QT::QPushButton *)operator new(0x28u);
  v3 = QT::QString::fromUtf8(ptr, 3, "...");
  QT::QPushButton::QPushButton(v2, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QString::fromUtf8(ptr, 3, "...", v3);
  v4 = sub_4F9CA0((QT::QString *)ptr, 1);
  QT::QWidget::setMaximumWidth(v2, v4 + 25);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  sub_4FB100(v2, a2);
  QT::QSignalMapper::setMapping(*(QT::QSignalMapper **)(a1 + 392), v2, *(_DWORD *)(a1 + 48) - 1);
  QT::QObject::connect(ptr, v2, "2clicked()", *(_QWORD *)(a1 + 392), "1map()", 0);
  sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), (__int64 *)ptr, v5, v6, v7);
  v10 = *(int **)(a1 + 344);
  if ( !v10 || *v10 > 1 )
    sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v8, v9);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v2;
}
