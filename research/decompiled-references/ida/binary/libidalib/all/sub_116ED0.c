_BYTE *__fastcall sub_116ED0(unsigned __int16 a1)
{
  _BYTE *result; // rax

  result = macro_t::isRecording;
  if ( macro_t::isRecording[0] )
    return (_BYTE *)macro_t::saveKey(qword_252E68, a1);
  return result;
}

