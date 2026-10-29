__int64 __fastcall xref_filters_section_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = CollapsibleWidget__::vfunc_2((__int64)this, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v7 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_3EE040(this);
          LODWORD(result) = 1;
        }
        else
        {
          if ( (_DWORD)result == 2 )
            sub_3FACC0(this);
          else
            QT::QMetaObject::activate(this, (QT::QObject *)&off_8935A0, nullptr, 0, v6);
          LODWORD(result) = v7;
        }
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        **a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}
