__int64 __fastcall buddy_label_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = ui_label_t__::vfunc_2(this);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v7 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_498180((__int64)this);
          LODWORD(result) = 1;
        }
        else
        {
          QT::QMetaObject::activate(this, (QT::QObject *)&off_896140, nullptr, 0, v6);
          LODWORD(result) = v7;
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
