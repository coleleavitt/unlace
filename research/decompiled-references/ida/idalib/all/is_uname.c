char __fastcall is_uname(_BYTE *a1, const char *a2)
{
  char result; // al

  result = is_ident(a1, a2);
  if ( result )
    return sub_4CC1E0((__int64)a1) == 0;
  return result;
}
