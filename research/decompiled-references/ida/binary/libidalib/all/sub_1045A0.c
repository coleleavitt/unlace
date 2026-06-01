__int64 __fastcall sub_1045A0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  TWindowInit::TWindowInit(a1 + 68, TWindow::initFrame);
  sub_188E80(a1, &off_231588, a2);
  *a1 = &off_237D48;
  a1[24] = &off_237E68;
  result = get_dbctx_id();
  a1[67] = result;
  return result;
}

