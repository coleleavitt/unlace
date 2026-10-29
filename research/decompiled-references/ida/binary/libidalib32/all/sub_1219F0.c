__int64 __fastcall sub_1219F0(__int64 a1, int a2)
{
  __int64 result; // rax
  const char *v3; // rax
  const char *v4; // rbp

  result = 0;
  if ( a2 )
  {
    v3 = (const char *)move_segm_strerror();
    v4 = v3;
    if ( a1 )
    {
      get_segm_name();
      sub_92120((__int64)"%s: %s", s1, v4);
    }
    else
    {
      sub_92120((__int64)"%s", v3);
    }
    return 1;
  }
  return result;
}

