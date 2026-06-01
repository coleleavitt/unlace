__int64 __fastcall sub_788440(__m128i *a1)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  const char *v5; // rsi
  const char *v7; // rsi

  v2 = (char *)haystack;
  if ( a1[3].m128i_i64[0] )
    v2 = (char *)a1[2].m128i_i64[1];
  v3 = sub_78D450(v2);
  v4 = a1[3].m128i_i64[0];
  if ( !v3 )
  {
    if ( v4 )
    {
      v7 = (const char *)a1[2].m128i_i64[1];
      if ( (unsigned __int64)(v4 - 1) > 0x7F )
      {
        set_error_string(0, v7);
        return set_qerrno(28);
      }
    }
    else
    {
      v7 = haystack;
    }
    return sub_787F20(a1, v7);
  }
  v5 = haystack;
  if ( v4 )
    v5 = (const char *)a1[2].m128i_i64[1];
  set_error_string(0, v5);
  return set_qerrno(52);
}
