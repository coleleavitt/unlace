__int64 __fastcall sub_104300(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  TWindowInit::TWindowInit(a1 + 68, TWindow::initFrame);
  sub_188340(a1, &off_230548, a2);
  *a1 = &off_236D48;
  a1[24] = &off_236E68;
  result = get_dbctx_id();
  a1[67] = result;
  return result;
}

