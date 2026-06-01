void sub_D3FD0()
{
  if ( xmmword_2526F0 <= 1 )
  {
    byte_252748 = 0;
  }
  else
  {
    if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 2 )
      sub_D3B40(HIDWORD(qword_2524A0), 1);
    if ( (unsigned __int8)sub_98F50((__int64)&qword_2526E0, qword_2524A8, "event", nullptr) )
      byte_252748 = 0;
  }
}

