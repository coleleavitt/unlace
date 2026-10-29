unsigned __int64 __fastcall sub_515C20(QT::QAbstractScrollArea *this, double a2, double a3)
{
  __int64 v3; // rax
  int v5; // ebp
  const char *v6; // rax
  __int64 v7; // rdi
  int v8[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = *((_QWORD *)this + 8);
  if ( !v3 )
    return v9 - __readfsqword(0x28u);
  v5 = v3 - 1;
  v6 = sub_511DC0((_QWORD *)(*((_QWORD *)this + 7) + 48 * (v3 - 1)), nullptr);
  v8[0] = qustrlen(v6);
  v8[1] = v5;
  sub_514C10(this, v8, 0, 0, a2, a3);
  v7 = QT::QAbstractScrollArea::verticalScrollBar(this);
  return QT::QAbstractSlider::triggerAction(v7, 6);
}
