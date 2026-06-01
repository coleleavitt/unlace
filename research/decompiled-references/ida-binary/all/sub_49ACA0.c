__int64 __fastcall sub_49ACA0(__int64 a1, __int64 a2)
{
  void (*v2)(void); // rax

  v2 = *(void (**)(void))(**(_QWORD **)(a1 + 40) + 672LL);
  if ( v2 != nullsub_263 )
    v2();
  return QT::QTableView::paintEvent(a1, a2);
}
