char __fastcall is_uname(__int64 a1)
{
  char result; // al

  result = is_ident();
  if ( result )
    return sub_4B54B0(a1) == 0;
  return result;
}

