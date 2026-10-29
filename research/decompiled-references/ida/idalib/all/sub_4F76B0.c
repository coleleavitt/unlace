bool __fastcall sub_4F76B0(_QWORD *a1, const char *a2, size_t a3)
{
  bool result; // al
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi

  if ( !a2 )
    return 1;
  if ( a3 == -1 )
    a3 = strlen(a2);
  result = 1;
  if ( a3 )
  {
    v5 = a1[1];
    result = 0;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 >= a3 )
        return strncmp((const char *)(*a1 + v6 - a3), a2, a3) == 0;
    }
  }
  return result;
}
