void __fastcall IDAMemoAccessible__::vfunc_0(
        QT::QAccessibleWidget *this,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  *(_QWORD *)this = &IDAMemoAccessible___vtable;
  *((_QWORD *)this + 2) = IDAMemoAccessible___vtable_at__16;
  *((_QWORD *)this + 4) = IDAMemoAccessible___vtable_at__32;
  if ( (*(_DWORD *)debug & 0x80000) != 0 && (::a6[0] & 8) != 0 )
    sub_4F7CB0(8, (unsigned int)"%s IDAMemoAccessible::~IDAMemoAccessible()\n", (unsigned int)&unk_5C2F25, a4, a5, a6);
  QT::QAccessibleTextInterface::~QAccessibleTextInterface((QT::QAccessibleWidget *)((char *)this + 32));
  QT::QAccessibleWidget::~QAccessibleWidget(this);
}
