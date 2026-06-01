__int64 __fastcall sub_10DF90(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[3] = __readfsqword(0x28u);
  v1 = operator new(0xC0u);
  v4[0] = TView::getExtent(TProgram::deskTop);
  v4[1] = v2;
  TWindowInit::TWindowInit(v1 + 184, TWindow::initFrame);
  sub_144880(v1, &off_231BC0, v4, a1);
  *(_WORD *)(v1 + 24) |= 0x80u;
  *(_QWORD *)v1 = &off_238468;
  *(_QWORD *)(v1 + 176) = 0;
  return v1;
}

