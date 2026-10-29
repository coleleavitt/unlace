__int64 __fastcall sub_1535D0(TView *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = sub_15F0C0(this, 0);
  v2 = *((_QWORD *)this + 121);
  if ( v2 )
    v1 -= *(_DWORD *)(v2 + 72);
  if ( v1 < 0 )
    v1 = 0;
  *((_DWORD *)this + 10) = v1;
  *((_DWORD *)this + 11) = sub_15F130(this, 0);
  return TView::drawCursor(this);
}

