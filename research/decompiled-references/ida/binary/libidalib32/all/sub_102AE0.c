__int64 __fastcall sub_102AE0(unsigned __int8 *a1)
{
  if ( a1[1232] )
  {
    sub_102840((__int64)a1);
    return a1[1232];
  }
  else
  {
    if ( (unsigned __int8)sub_100C70((__int64)a1) )
    {
      a1[1232] = 1;
      a1[1234] = 0;
      sub_15BA50(a1 + 592);
      (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 384LL))(a1);
    }
    else
    {
      TScreen::makeBeep(nullptr);
    }
    return a1[1232];
  }
}

