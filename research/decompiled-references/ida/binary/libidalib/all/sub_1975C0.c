__int64 __fastcall sub_1975C0(__int64 **this, __int64 a2, double a3, double a4, __m128 a5)
{
  __int16 v6; // ax
  TMenu *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax

  if ( *(_WORD *)a2 != 1 )
  {
    if ( *(_WORD *)a2 == 16 )
    {
      v6 = *(_WORD *)(a2 + 8);
      if ( v6 == 7178 || v6 == 7181 )
      {
        sub_1974D0(*(this + 20), a3, a4, a5);
        TView::clearEvent(this, a2);
      }
      else if ( v6 == 283 && ((*(this + 20))[263] & 2) == 0 )
      {
        v8 = TProgram::application;
        v9 = *(_QWORD *)(TProgram::application + 256LL);
        v10 = *(_QWORD *)(TProgram::application + 248LL);
        if ( *(_QWORD *)(TProgram::application + 264LL) < (unsigned __int64)(v9 + 1) )
        {
          v12 = qvector_reserve();
          *(_QWORD *)(v8 + 248) = v12;
          v10 = v12;
          v9 = *(_QWORD *)(v8 + 256);
        }
        *(_QWORD *)(v10 + 8 * v9) = this;
        ++*(_QWORD *)(v8 + 256);
        TView::clearEvent(this, a2);
      }
    }
    return TWindow::handleEvent();
  }
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
    return TWindow::handleEvent();
  if ( *(_BYTE *)(a2 + 24) != 2 )
    return TWindow::handleEvent();
  TView::select((TView *)this);
  v7 = (TMenu *)sub_196340((__int64)*(this + 20));
  if ( !v7 )
    return TWindow::handleEvent();
  sub_144B60((unsigned int *)(a2 + 8), v7);
  return TView::clearEvent(this, a2);
}

