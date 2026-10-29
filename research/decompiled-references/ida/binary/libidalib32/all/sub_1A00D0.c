void *__fastcall sub_1A00D0(__int64 a1)
{
  void *result; // rax
  TView *v3; // rdi
  __int64 v4; // rsi

  result = *(void **)(a1 + 8);
  v3 = *((TView **)result + 30);
  if ( v3 )
  {
    TView::hide(v3);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
    if ( v4 )
    {
      TGroup::setCurrent(TProgram::deskTop, v4, 0);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) = 0;
    }
    TInputLine::disableReselect = 0;
    return &TInputLine::disableReselect;
  }
  return result;
}

