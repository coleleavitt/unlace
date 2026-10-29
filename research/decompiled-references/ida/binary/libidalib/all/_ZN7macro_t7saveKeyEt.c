__int64 __fastcall macro_t::saveKey(macro_t *this, __int16 a2)
{
  __int64 result; // rax

  result = *((unsigned __int8 *)this + 10);
  if ( (unsigned __int8)result <= 0x4Fu )
  {
    *((_BYTE *)this + 10) = result + 1;
    *((_WORD *)this + result + 6) = a2;
    if ( (_BYTE)result == 79 )
    {
      if ( macro_t::isRecording[0] )
        sub_117220();
      return TScreen::makeBeep(nullptr);
    }
  }
  return result;
}

