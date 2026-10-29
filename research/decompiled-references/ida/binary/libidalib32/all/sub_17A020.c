__int64 __fastcall sub_17A020(TSystemInit *this)
{
  __int64 v1; // rax
  TView *v3; // rdi
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 14);
  v3 = *(TView **)(v1 + 2624);
  if ( v3 )
  {
    TView::drawView(v3);
    v1 = *((_QWORD *)this + 14);
  }
  v4 = *(_QWORD *)(v1 + 2632);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 72) = *((_DWORD *)this + 24);
    TView::drawView(*(TView **)(*((_QWORD *)this + 14) + 2632LL));
  }
  return TSystemInit::suspend(this);
}

