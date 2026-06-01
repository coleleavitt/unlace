__int64 __fastcall sub_102D60(unsigned __int8 *a1)
{
  if ( a1[1248] )
  {
    sub_102AC0((__int64)a1);
    return a1[1248];
  }
  else
  {
    if ( (unsigned __int8)sub_100EC0((__int64)a1) )
    {
      a1[1248] = 1;
      a1[1250] = 0;
      sub_15C310(a1 + 592);
      (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 384LL))(a1);
    }
    else
    {
      TScreen::makeBeep(nullptr);
    }
    return a1[1248];
  }
}

