unsigned __int64 __fastcall sub_42B350(
        QT::QWidget *this,
        const char *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _QWORD *v8; // rsi
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_2DB930((__int64)this, -1, a2, a5, a6);
  *((_DWORD *)this + 632) = a3;
  *(_OWORD *)((char *)this + 2504) = 0;
  *(_QWORD *)this = &files_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = &unk_876628;
  *((_QWORD *)this + 30) = &unk_876678;
  *((_QWORD *)this + 311) = &unk_876848;
  *((_QWORD *)this + 38) = &unk_8766B8;
  *((_QWORD *)this + 312) = 0;
  v8 = QT::QCoreApplication::self;
  *((_QWORD *)this + 315) = 0;
  sub_479BE0(&v10, v8, a4);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)&v10);
  QT::QIcon::~QIcon((QT::QIcon *)&v10);
  v10 = 0x100000001CLL;
  QT::QAbstractItemView::setIconSize(this, &v10);
  return v11 - __readfsqword(0x28u);
}
