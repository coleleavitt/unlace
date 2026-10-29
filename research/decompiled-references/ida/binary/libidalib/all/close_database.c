__int64 __fastcall close_database(char a1)
{
  if ( !a1 )
    set_database_flag();
  return term_database();
}

