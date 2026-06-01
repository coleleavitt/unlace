__int64 __fastcall sub_197700(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)a2 != 256 || *(_WORD *)(a2 + 8) != 5100 )
    return TWindow::handleEvent();
  if ( !*(_QWORD *)(a2 + 16) )
    *(_QWORD *)(a2 + 16) = a1;
  return TView::clearEvent(a1, a2);
}

