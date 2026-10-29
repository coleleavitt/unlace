void __fastcall sub_D6D40(char a1)
{
  if ( dbg )
  {
    if ( (unsigned __int8)dbg_load_exceptions() )
    {
      if ( xmmword_251308 <= 1 )
        return;
LABEL_5:
      sub_A3FC0(qword_251300);
      return;
    }
    sub_D6770(dbg, 0, a1);
    if ( xmmword_251308 > 1 )
      goto LABEL_5;
  }
}

