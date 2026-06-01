__int64 __fastcall ui_form_dialog_t__::vfunc_2(QT::QWidget *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = ActionsInspectorDialog__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v6 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_510530(this);
          LODWORD(result) = 1;
        }
        else
        {
          (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)this + 440LL))(this);
          LODWORD(result) = v6;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
