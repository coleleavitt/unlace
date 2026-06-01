_BYTE *__fastcall sub_116AD0(unsigned __int16 a1)
{
  _BYTE *result; // rax

  result = macro_t::isRecording;
  if ( macro_t::isRecording[0] )
    return (_BYTE *)macro_t::saveKey(qword_251CC8, a1);
  return result;
}

