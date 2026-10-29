__int64 __fastcall sub_19FDC0(TView *this, __int64 a2)
{
  __int64 (*v4)(); // rax
  TMenu *v5; // rsi

  if ( *(_WORD *)a2 != 1 )
  {
    if ( *(_WORD *)a2 == 512 && *(_WORD *)(a2 + 8) == 40 )
      (*(void (__fastcall **)(TView *, bool))(*(_QWORD *)this + 208LL))(this, **(_DWORD **)(a2 + 16) != 0);
    return TWindow::handleEvent();
  }
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
    return TWindow::handleEvent();
  if ( *(_BYTE *)(a2 + 24) != 2 )
    return TWindow::handleEvent();
  TView::select(this);
  v4 = *(__int64 (**)())(*(_QWORD *)this + 240LL);
  if ( v4 == sub_19FCA0 )
    return TWindow::handleEvent();
  v5 = (TMenu *)((__int64 (__fastcall *)(TView *))v4)(this);
  if ( !v5 )
    return TWindow::handleEvent();
  sub_144B60((unsigned int *)(a2 + 8), v5);
  return TView::clearEvent(this, a2);
}

