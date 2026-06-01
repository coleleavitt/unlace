__int64 __fastcall dupfd_optional(int a1, const char *a2)
{
  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  else
    return dupfd(a1, a2);
}
