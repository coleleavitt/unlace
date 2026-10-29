__int64 __fastcall TChooser__::vfunc_2(__int64 a1, unsigned int a2, __int64 a3, __int64 **a4)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+Ch] [rbp-1Ch]

  result = chooser_widget_t__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 2 )
          **a4 = 0;
        return (unsigned int)(result - 3);
      }
      else if ( a2 <= 8 )
      {
        v7 = 334;
        if ( _bittest64(&v7, a2) )
        {
          v8 = result;
          sub_4700C0(a1, a2, (unsigned int)result, a4);
          return (unsigned int)(v8 - 6);
        }
      }
    }
    else
    {
      v6 = result - 3;
      if ( (int)result <= 2 )
        sub_4700C0(a1, 0, (unsigned int)result, a4);
      return v6;
    }
  }
  return result;
}
