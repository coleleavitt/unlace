__int64 __fastcall sub_22A9170(void *s2, size_t n)
{
  const char **v2; // rax
  const char *v3; // r12
  unsigned int v4; // r12d
  const char **v5; // rax
  const char *v6; // rbp
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = n;
  vars0[0] = s2;
  v2 = sub_22A8660((const char **)&unk_2BF4C90 - 402, (__int64)&unk_2BF4C90, (__int64)vars0);
  if ( v2 != (const char **)&unk_2BF4C90 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( n == strlen(*v2) && (!n || !memcmp(v3, s2, n)) )
        return 1;
    }
    else if ( !n )
    {
      return 1;
    }
  }
  v4 = 0;
  v5 = sub_22A8660((const char **)&unk_2BF3FF0 - 66, (__int64)&unk_2BF3FF0, (__int64)vars0);
  if ( v5 == (const char **)&unk_2BF3FF0 )
    return v4;
  v6 = *v5;
  if ( *v5 )
  {
    if ( n == strlen(*v5) )
    {
      if ( !n )
        return 1;
      LOBYTE(v4) = memcmp(v6, s2, n) == 0;
    }
    return v4;
  }
  LOBYTE(v4) = n == 0;
  return v4;
}
