unsigned __int64 __fastcall sub_3D4300(
        QT::QObject *a1,
        __int64 a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        int a7)
{
  _QWORD *v11; // r12
  _QWORD *v12; // r12
  QT::QWidget *v13; // rdi
  QT::QLayout *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 (*v17)(); // rax
  QT::QObject *v18; // r12
  int v21[2]; // [rsp+10h] [rbp-58h] BYREF
  int v22[2]; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  sub_529BA0(a1);
  *((_QWORD *)a1 + 23) = 0;
  *((_QWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 27) = 0;
  *(_QWORD *)a1 = &type_editor_t___vtable;
  *((_QWORD *)a1 + 5) = type_editor_t___vtable_at__40;
  *((_QWORD *)a1 + 2) = type_editor_t___vtable_at__16;
  *((_QWORD *)a1 + 30) = 0;
  *((_QWORD *)a1 + 33) = 0;
  *((_QWORD *)a1 + 36) = 0;
  *((_DWORD *)a1 + 74) = a7;
  *((_QWORD *)a1 + 38) = 0;
  *(_OWORD *)((char *)a1 + 200) = 0;
  *((_OWORD *)a1 + 14) = 0;
  *(_OWORD *)((char *)a1 + 248) = 0;
  *((_OWORD *)a1 + 17) = 0;
  sub_527D10(a1);
  v11 = (_QWORD *)operator new(0x90u);
  sub_5277F0(v11, a1, "Offset");
  *v11 = &offsets_margin_t___vtable;
  v11[2] = offsets_margin_t___vtable_at__16;
  v11[5] = offsets_margin_t___vtable_at__40;
  sub_529A10(a1);
  v12 = (_QWORD *)operator new(0x90u);
  sub_5277F0(v12, a1, "Size");
  *v12 = &sizes_margin_t___vtable;
  v12[2] = sizes_margin_t___vtable_at__16;
  v12[5] = sizes_margin_t___vtable_at__40;
  sub_529A10(a1);
  v13 = *((QT::QWidget **)a1 + 36);
  if ( v13 )
  {
    QT::QWidget::setAutoFillBackground(v13, 1);
    v14 = (QT::QLayout *)QT::QWidget::layout(*((QT::QWidget **)a1 + 36));
    QT::QLayout::setContentsMargins(v14, 0, 0, 0, 0);
    QT::QWidget::setContentsMargins(*((QT::QWidget **)a1 + 36), 0, 0, 0, 0);
    QT::QStatusBar::setSizeGripEnabled(*((QT::QStatusBar **)a1 + 36), 0);
  }
  sub_3D0150(a1);
  if ( *((_QWORD *)a1 + 36) )
  {
    *(_QWORD *)v21 = QT::QAbstractScrollArea::viewportMargins(a1);
    v15 = *((_QWORD *)a1 + 36);
    *(_QWORD *)v22 = v16;
    v22[1] = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(v15 + 32) + 24LL);
    QT::QAbstractScrollArea::setViewportMargins(a1, v21);
  }
  sub_3CFD80((__int64)a1 + 184, a3, a4, a5, nullptr);
  sub_3D26C0(a1, a6);
  v17 = *(__int64 (**)())(*QT::QCoreApplication::self + 304LL);
  if ( v17 == sub_3CFBC0 || (unsigned __int8)v17() )
  {
    v18 = (QT::QObject *)operator new(0x30u);
    sub_3D3FE0(v18, a1);
    *((_QWORD *)a1 + 38) = v18;
  }
  return v23 - __readfsqword(0x28u);
}
