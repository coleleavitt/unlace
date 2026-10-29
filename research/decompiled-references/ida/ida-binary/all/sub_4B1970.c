bool __fastcall sub_4B1970(__int64 a1, bool *a2, const char *a3)
{
  bool result; // al
  bool v5; // bl

  result = sub_4B16A0(a1, a3, 1);
  v5 = result;
  if ( !result )
    result = sub_4B16A0(a1, a3, 0);
  if ( a2 )
  {
    if ( result )
      *a2 = v5;
  }
  return result;
}
