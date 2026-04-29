const char *sub_329CC0()
{
  __int64 tinfo_size; // rdx
  const char *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  bool v4; // zf

  tinfo_size = get_tinfo_size();
  result = "__m64";
  if ( tinfo_size != -1 )
  {
    v2 = get_tinfo_size();
    result = "__m128i";
    if ( v2 != -1 )
    {
      v3 = get_tinfo_size();
      result = "__m128";
      if ( v3 != -1 )
      {
        v4 = get_tinfo_size() == -1;
        result = "__m128d";
        if ( !v4 )
          return nullptr;
      }
    }
  }
  return result;
}
