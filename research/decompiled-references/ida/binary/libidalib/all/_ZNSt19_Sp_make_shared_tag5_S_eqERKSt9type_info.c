bool __fastcall std::_Sp_make_shared_tag::_S_eq(std::_Sp_make_shared_tag *this, const type_info *a2)
{
  char *v2; // rdi
  bool result; // al

  v2 = *((char **)this + 1);
  if ( v2 == "St19_Sp_make_shared_tag" )
    return 1;
  result = 0;
  if ( *v2 != 42 )
    return strcmp(v2, "St19_Sp_make_shared_tag") == 0;
  return result;
}

