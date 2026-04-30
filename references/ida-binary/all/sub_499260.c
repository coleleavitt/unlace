__int64 __fastcall sub_499260(QT::QAbstractItemView *this, const __m128i *a2)
{
  __int64 v3; // rax

  if ( (~*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + 2392LL) + 12LL) & 0x40400) != 0 )
    return QT::QAbstractItemView::openEditor(this, a2);
  v3 = QT::QAbstractItemView::model(this);
  if ( (unsigned int)sub_48CBD0(v3, a2) == 1 )
    return QT::QAbstractItemView::openEditor(this, a2);
  else
    return sub_4A71C0(*((_QWORD *)this + 30));
}
