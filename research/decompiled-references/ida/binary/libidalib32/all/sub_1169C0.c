macro_t *__fastcall sub_1169C0(__int16 a1)
{
  __int16 v1; // dx
  macro_t *result; // rax

  if ( (_BYTE)a1 )
  {
    v1 = (*__ctype_toupper_loc())[(unsigned __int8)a1];
    if ( qword_251CC8 )
    {
      result = qword_251CC8;
      do
      {
        if ( *((_WORD *)result + 4) == v1 && (qword_251CC8 != result || macro_t::isRecording != 1) )
          break;
        result = *(macro_t **)result;
      }
      while ( result );
    }
    else
    {
      return nullptr;
    }
  }
  else if ( qword_251CC8 )
  {
    result = qword_251CC8;
    do
    {
      if ( *((_WORD *)result + 4) == a1 && (qword_251CC8 != result || macro_t::isRecording != 1) )
        break;
      result = *(macro_t **)result;
    }
    while ( result );
  }
  else
  {
    return nullptr;
  }
  return result;
}

