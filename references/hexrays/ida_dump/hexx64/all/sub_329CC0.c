const char *__fastcall sub_329CC0(_QWORD *a1)
{
  __int64 tinfo_size; // rdx
  const char *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  bool v5; // zf

  tinfo_size = get_tinfo_size(0, a1[37], 0);
  result = "__m64";
  if ( tinfo_size != -1 )
  {
    v3 = get_tinfo_size(0, a1[38], 0);
    result = "__m128i";
    if ( v3 != -1 )
    {
      v4 = get_tinfo_size(0, a1[39], 0);
      result = "__m128";
      if ( v4 != -1 )
      {
        v5 = get_tinfo_size(0, a1[40], 0) == -1;
        result = "__m128d";
        if ( !v5 )
          return nullptr;
      }
    }
  }
  return result;
}
