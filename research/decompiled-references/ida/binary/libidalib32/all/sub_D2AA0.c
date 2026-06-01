void sub_D2AA0()
{
  if ( xmmword_251550 <= 1 )
  {
    byte_2515A0 = 0;
  }
  else
  {
    if ( (qword_251330 & 0xFFFFFFF) != 2 )
      sub_D2660(HIDWORD(qword_251320), 1);
    if ( (unsigned __int8)sub_98E70((__int64)&qword_251540, (unsigned int)qword_251328, "event", nullptr) )
      byte_2515A0 = 0;
  }
}

