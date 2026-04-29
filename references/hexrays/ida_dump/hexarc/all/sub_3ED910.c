bool __fastcall sub_3ED910(__int64 a1)
{
  const char *v1; // rdi
  bool result; // al

  v1 = *(const char **)(a1 + 8);
  if ( v1 == "St19_Sp_make_shared_tag" )
    return 1;
  result = 0;
  if ( *v1 != 42 )
    return strcmp(v1, "St19_Sp_make_shared_tag") == 0;
  return result;
}
