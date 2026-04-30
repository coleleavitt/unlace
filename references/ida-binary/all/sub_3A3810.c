__int64 __fastcall sub_3A3810(QT::QAbstractItemView *this, QT::QEvent *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *((unsigned __int16 *)a2 + 4);
  v6[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)v2 > 0x1Fu )
    return QT::QAbstractItemView::viewportEvent(this, a2);
  v3 = 2147484652LL;
  if ( !_bittest64(&v3, v2) )
    return QT::QAbstractItemView::viewportEvent(this, a2);
  sub_277E70(v6);
  v4 = QT::QAbstractItemView::viewportEvent(this, a2);
  sub_278AD0(v6);
  return v4;
}
