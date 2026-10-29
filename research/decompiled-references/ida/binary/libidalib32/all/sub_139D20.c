__int64 __fastcall sub_139D20(unsigned int a1, unsigned int a2)
{
  unsigned int *next_hidden_range; // rax

  if ( a1 >= a2 )
    return 0;
  del_hidden_range();
  do
  {
    next_hidden_range = (unsigned int *)get_next_hidden_range();
    if ( !next_hidden_range || *next_hidden_range >= a2 )
      return 1;
  }
  while ( (unsigned __int8)del_hidden_range() );
  return 0;
}

