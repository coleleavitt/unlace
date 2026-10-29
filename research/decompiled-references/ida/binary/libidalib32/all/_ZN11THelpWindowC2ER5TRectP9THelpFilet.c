__int64 __fastcall THelpWindow::THelpWindow(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax

  TWindow::TWindow(a1, a2 + 1, a3, 0, 0);
  result = *a2;
  *a1 = *a2;
  return result;
}

