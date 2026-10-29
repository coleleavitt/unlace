char __fastcall sub_1216BC0(__int64 a1)
{
  __int64 v1; // rbx
  char result; // al
  size_t v3; // rbp
  const char **v4; // rax
  const char *v5; // rbx
  size_t v6; // rdx

  v1 = sub_113FA70(a1, 0xB3Au, 0x962u, 2371);
  result = 0;
  if ( v1 )
  {
    if ( (unsigned __int8)sub_21B9810(v1, 2874) )
      return 1;
    result = sub_21B9810(v1, 2371);
    if ( result )
    {
      v3 = j__strlen("soft");
      v4 = *(const char ***)(v1 + 48);
      v5 = *v4;
      if ( !*v4 )
        return v3 == 0;
      v6 = j__strlen(*v4);
      result = 0;
      if ( v6 == v3 )
      {
        if ( v6 )
          return memcmp(v5, "soft", v6) == 0;
        return 1;
      }
    }
  }
  return result;
}
