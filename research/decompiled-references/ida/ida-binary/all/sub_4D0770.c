__int64 __fastcall sub_4D0770(QT::QWidget *a1)
{
  sub_4CE4A0(a1, 1);
  *((_BYTE *)a1 + 52) = 0;
  *((_QWORD *)a1 + 9) = 0;
  *((_QWORD *)a1 + 12) = 0;
  *(_OWORD *)((char *)a1 + 56) = 0;
  *(_QWORD *)a1 = &DockSplitter___vtable;
  *((_QWORD *)a1 + 2) = DockSplitter___vtable_at__16;
  *((_OWORD *)a1 + 5) = 0;
  return sub_4CDE80((QT::QWidget **)a1);
}
