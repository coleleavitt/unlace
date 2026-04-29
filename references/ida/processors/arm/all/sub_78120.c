bool __fastcall sub_78120(__int64 a1, char a2)
{
  bool result; // al

  result = 0;
  if ( (a2 & 3) == 0 )
    return (get_tinfo_property() & 0xF) == 9 || get_tinfo_property() || (unsigned int)sub_77F00(a1, 0) - 1 <= 3;
  return result;
}
