_BYTE *sub_116EB0()
{
  _BYTE *result; // rax

  result = macro_t::isRecording;
  if ( macro_t::isRecording[0] )
    return (_BYTE *)sub_116E20();
  return result;
}

