unsigned __int64 __fastcall sub_13E3C0(char *a1)
{
  char *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r12
  TView **v5; // rdi
  _QWORD v6[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( byte_252E7C )
    return v7 - __readfsqword(0x28u);
  if ( !TProgram::application )
    return v7 - __readfsqword(0x28u);
  v1 = a1;
  if ( !TProgram::deskTop || errorexit )
    return v7 - __readfsqword(0x28u);
  if ( !a1 )
    v1 = "";
  if ( qword_252E80 )
  {
    TWindow::setTitle(qword_252E80, v1);
    TView::drawView(*((TView **)qword_252E80 + 19));
  }
  else
  {
    v6[0] = TView::getExtent(TProgram::deskTop);
    v6[1] = v3 + 0x100000000LL;
    v4 = operator new(0xC8u);
    sub_13E2A0((TView *)v4, (__int64)v6, (__int64)v1);
    v5 = (TView **)TProgram::deskTop;
    *(_WORD *)(v4 + 24) &= ~1u;
    TGroup::insertBefore((TGroup *)v5, (TView *)v4, v5[10]);
    *(_WORD *)(v4 + 24) |= 1u;
    otstream::operator<<(
      *(_QWORD *)(v4 + 184),
      "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    qword_252E80 = (TWindow *)v4;
  }
  return sub_13E1B0(v1);
}

