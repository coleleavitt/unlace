void *__fastcall sub_35C4C0(unsigned __int64 a1, unsigned __int64 a2)
{
  do
  {
    if ( !(unsigned __int8)is_loaded(a1) )
    {
      if ( a1 >= a2 || find_byte(a1 + 1, a2 - (a1 + 1), 0, 4) == -1 )
        return &unk_22D021A;
      return nullptr;
    }
    if ( (unsigned __int8)get_byte(a1) )
      return nullptr;
    ++a1;
  }
  while ( a1 < a2 );
  return &unk_22D0214;
}
