__int64 __fastcall sub_103610(TView *a1)
{
  __int64 result; // rax

  result = sub_164090(a1);
  if ( *((_BYTE *)a1 + 1232) )
  {
    if ( !(unsigned __int8)sub_102120((__int64)a1, nullptr) )
      return TScreen::makeBeep(nullptr);
    result = sub_100C70((__int64)a1);
    if ( !(_BYTE)result )
      return TScreen::makeBeep(nullptr);
  }
  return result;
}

