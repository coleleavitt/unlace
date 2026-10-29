void *__fastcall sub_359090(unsigned int a1, unsigned int a2)
{
  do
  {
    if ( !(unsigned __int8)is_loaded(a1) )
    {
      if ( a1 >= a2 || (unsigned int)find_byte(a1 + 1, a2 - (a1 + 1), 0, 4) == -1 )
        return &unk_22AD218;
      return nullptr;
    }
    if ( (unsigned __int8)get_byte(a1) )
      return nullptr;
    ++a1;
  }
  while ( a1 < a2 );
  return &unk_22AD212;
}

