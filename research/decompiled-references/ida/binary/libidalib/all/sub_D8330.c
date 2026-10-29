void __fastcall sub_D8330(char a1)
{
  if ( dbg )
  {
    if ( (unsigned __int8)dbg_load_exceptions() )
    {
      if ( xmmword_252478 <= 1 )
        return;
LABEL_5:
      sub_A43C0(qword_252470);
      return;
    }
    sub_D7D60(dbg, 0, a1);
    if ( xmmword_252478 > 1 )
      goto LABEL_5;
  }
}

