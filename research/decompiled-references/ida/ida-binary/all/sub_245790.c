void __fastcall sub_245790(char a1)
{
  if ( dbg )
  {
    if ( (unsigned __int8)dbg_load_exceptions(&qword_8CC2F0) )
    {
      if ( xmmword_8CC318 <= 1 )
        return;
LABEL_5:
      sub_212D40(qword_8CC310);
      return;
    }
    sub_2451C0(dbg, nullptr, a1);
    if ( xmmword_8CC318 > 1 )
      goto LABEL_5;
  }
}
