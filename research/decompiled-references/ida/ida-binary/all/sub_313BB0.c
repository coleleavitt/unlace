unsigned __int64 __fastcall sub_313BB0(__int64 a1, QT::QObject *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rax
  QT::QWidget *v6; // rbp
  QT::QObject *v7; // rbp
  QT::QTimer *v8; // rbp
  __int64 v9; // rdi
  QT::QWidget *v10; // rbp
  double v11; // xmm0_8
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 1;
  v3 = operator new(0x28u);
  QT::QSplitter::QSplitter(v3, 2, a2);
  *(_QWORD *)(a1 + 8) = v3;
  v4 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 34, "Drag a file here to disassemble it");
  sub_53BA20(v4, ptr, 0);
  v5 = (volatile signed __int32 *)ptr[0];
  *(_QWORD *)(a1 + 16) = v4;
  if ( v5 && !_InterlockedSub(v5, 1u) )
    free(ptr[0]);
  v6 = (QT::QWidget *)operator new(0x30u);
  sub_4C7120(v6);
  *(_QWORD *)(a1 + 24) = v6;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)v6 = &TopLevelDockArea___vtable;
  *((_QWORD *)v6 + 2) = TopLevelDockArea___vtable_at__16;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v7 = (QT::QObject *)operator new(0x10u);
  QT::QObject::QObject(v7, a2);
  *(_QWORD *)(a1 + 112) = v7;
  *(_QWORD *)v7 = &off_872C08;
  *(_QWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v8 = (QT::QTimer *)operator new(0x10u);
  QT::QTimer::QTimer(v8, a2);
  *(_QWORD *)(a1 + 152) = v8;
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = 1;
  QT::QLabel::setAlignment(v9, 132);
  QT::QObject::setObjectName(*(_QWORD *)(a1 + 8), "Main form splitter", 18);
  v10 = *(QT::QWidget **)(a1 + 8);
  v11 = QT::QString::fromUtf8(ptr, 13, "Main splitter");
  QT::QWidget::setAccessibleName(v10, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QSplitter::setOpaqueResize(*(QT::QSplitter **)(a1 + 8), 0);
  QT::QSplitter::setChildrenCollapsible(*(QT::QSplitter **)(a1 + 8), 0);
  QT::QSplitter::addWidget(*(QT::QSplitter **)(a1 + 8), *(QT::QWidget **)(a1 + 16));
  QT::QSplitter::addWidget(*(QT::QSplitter **)(a1 + 8), *(QT::QWidget **)(a1 + 24));
  sub_51A510(v11);
  QT::QTimer::setSingleShot(*(QT::QTimer **)(a1 + 152), 1);
  QT::QObject::installEventFilter(*(QT::QObject **)(a1 + 24), a2);
  return v14 - __readfsqword(0x28u);
}
