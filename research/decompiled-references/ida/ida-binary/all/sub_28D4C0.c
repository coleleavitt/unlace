__int64 __fastcall sub_28D4C0(QT::QWidget *this, __int64 a2, __int64 a3)
{
  __int64 *func; // rbx
  __int64 result; // rax
  int func_num; // eax
  int v7; // r9d

  func = (__int64 *)get_func(a3);
  result = 0;
  if ( func )
  {
    sub_28AC10(a2, func);
    sub_2DBCA0(this);
    *(_DWORD *)(a2 + 124) = 41;
    if ( *((_QWORD *)this + 310) )
    {
      func_num = get_func_num(a3);
      if ( func_num >= 0 )
        callui(90, *((_QWORD *)this + 310), func_num, a2 + 112, (unsigned int)&callui, v7);
    }
    return 1;
  }
  return result;
}
