__int64 __fastcall sub_1038A0(TView *a1)
{
  __int64 result; // rax

  result = sub_1649F0(a1);
  if ( *((_BYTE *)a1 + 1248) )
  {
    if ( !(unsigned __int8)sub_1023A0((__int64)a1, nullptr) )
      return TScreen::makeBeep(nullptr);
    result = sub_100EC0((__int64)a1);
    if ( !(_BYTE)result )
      return TScreen::makeBeep(nullptr);
  }
  return result;
}

