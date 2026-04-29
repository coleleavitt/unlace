unsigned __int64 __fastcall sub_30450(QT::QWidget *a1, double *a2)
{
  QT::QVBoxLayout *v2; // r12
  __int64 v3; // r15
  __int64 v4; // rax
  QT::QWidget *v5; // r15
  QT::QWidget *v6; // r15
  QT::QWidget *v7; // r15
  QT::QWidget *v8; // r15
  QT::QWidget *v9; // r15
  QT::QWidget *v10; // r15
  QT::QWidget *v11; // r15
  QT::QWidget *v12; // r15
  QT::QWidget *v13; // r15
  QT::QWidget *v14; // r15
  QT::QWidget *v15; // r15
  void *v17; // [rsp+8h] [rbp-68h]
  _BYTE v18[8]; // [rsp+18h] [rbp-58h] BYREF
  void *ptr[3]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, 0, 0);
  *(_QWORD *)a1 = &off_4D980;
  *((_QWORD *)a1 + 2) = layout_config_t___vtable_at__16;
  v2 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v2, a1);
  v3 = operator new(0x28u);
  QT::QString::fromUtf8(ptr, 16, "<h3><u><b>Layout");
  QT::QLabel::QLabel(v3, ptr, 0, 0);
  QT::QBoxLayout::addWidget(v2, v3, 0, 1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v17 = (void *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 27, "Reset the layout parameters");
  QT::QPushButton::QPushButton(v17, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  ptr[1] = nullptr;
  ptr[0] = &QT::QAbstractButton::pressed;
  v4 = operator new(0x18u);
  *(_DWORD *)v4 = 1;
  *(_QWORD *)(v4 + 16) = a2;
  *(_QWORD *)(v4 + 8) = sub_2D2D0;
  QT::QObject::connectImpl(v18, v17, ptr, a1, 0, v4, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v18);
  QT::QBoxLayout::addWidget(v2, v17, 0, 0);
  v5 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 4, "Drag");
  sub_2FE00(v5, (__int64)v17, a2 + 16, (__int64)ptr, 0.0, 1.0);
  QT::QBoxLayout::addWidget(v2, v5, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 7, "Gravity");
  sub_2FE00(v6, (__int64)v17, a2 + 17, (__int64)ptr, 0.0, 100.0);
  QT::QBoxLayout::addWidget(v2, v6, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 9, "Repulsion");
  sub_2FE00(v7, (__int64)v17, a2 + 18, (__int64)ptr, 0.0, 400.0);
  QT::QBoxLayout::addWidget(v2, v7, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v8 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 15, "Spring strength");
  sub_2FE00(v8, (__int64)v17, a2 + 19, (__int64)ptr, 0.0, 10.0);
  QT::QBoxLayout::addWidget(v2, v8, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 13, "Spring length");
  sub_2FE00(v9, (__int64)v17, a2 + 20, (__int64)ptr, 0.0, 1000.0);
  QT::QBoxLayout::addWidget(v2, v9, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 16, "Minimum velocity");
  sub_2FE00(v10, (__int64)v17, a2 + 21, (__int64)ptr, 0.0, 2.0);
  QT::QBoxLayout::addWidget(v2, v10, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v11 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 16, "Maximum velocity");
  sub_2FE00(v11, (__int64)v17, a2 + 22, (__int64)ptr, 0.0, 1000.0);
  QT::QBoxLayout::addWidget(v2, v11, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v12 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 9, "Node mass");
  sub_2FE00(v12, (__int64)v17, a2 + 23, (__int64)ptr, 0.0, 20.0);
  QT::QBoxLayout::addWidget(v2, v12, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v13 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 9, "Edge mass");
  sub_2FE00(v13, (__int64)v17, a2 + 24, (__int64)ptr, 0.0, 2.0);
  QT::QBoxLayout::addWidget(v2, v13, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v14 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 8, "Timestep");
  sub_2FE00(v14, (__int64)v17, a2 + 26, (__int64)ptr, 0.0, 2.0);
  QT::QBoxLayout::addWidget(v2, v14, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v15 = (QT::QWidget *)operator new(0x28u);
  QT::QString::fromUtf8(ptr, 15, "Theta threshold");
  sub_2FE00(v15, (__int64)v17, a2 + 27, (__int64)ptr, 0.0, 1.0);
  QT::QBoxLayout::addWidget(v2, v15, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v20 - __readfsqword(0x28u);
}
