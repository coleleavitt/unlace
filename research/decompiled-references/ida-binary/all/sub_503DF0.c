QT::QPushButton *__fastcall sub_503DF0(__int64 a1, const QT::QString *a2, double a3, __m128 a4)
{
  QT::QPushButton *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // rax
  __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v5 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v5, nullptr);
  QT::QSignalMapper::setMapping(*(QT::QSignalMapper **)(a1 + 384), v5, *(_DWORD *)(a1 + 48));
  QT::QObject::connect(v13, v5, "2clicked()", *(_QWORD *)(a1 + 384), "1map()", 0);
  sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), v13, v6, v7, v8);
  v11 = *(int **)(a1 + 344);
  if ( !v11 || *v11 > 1 )
    sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v9, v10);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v13);
  sub_4FED90(a1, v5, a2, a3, a4);
  return v5;
}
