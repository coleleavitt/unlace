__int64 __fastcall sub_32CD90(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *next_hidden_range; // rax

  if ( a1 >= a2 )
    return 0;
  del_hidden_range();
  do
  {
    next_hidden_range = (unsigned __int64 *)get_next_hidden_range(a1);
    if ( !next_hidden_range || *next_hidden_range >= a2 )
      return 1;
  }
  while ( (unsigned __int8)del_hidden_range() );
  return 0;
}
