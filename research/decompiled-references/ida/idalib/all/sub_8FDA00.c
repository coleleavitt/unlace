bool __fastcall sub_8FDA00(char *s)
{
  char *v1; // rdx
  bool result; // al

  v1 = strchr(s, 42);
  result = 1;
  if ( !v1 )
    return strchr(s, 63) != nullptr;
  return result;
}
