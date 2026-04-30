const char *__fastcall sub_511DC0(_QWORD *a1, __int64 *a2)
{
  char v2; // dl
  __int64 v3; // rax
  const char *result; // rax
  __int64 v5; // rdx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_8D2358 + 16LL))(qword_8D2358);
  v3 = a1[1];
  if ( !v2 )
  {
    if ( !v3 )
    {
      v5 = 0;
      if ( !a2 )
        return &s1;
      goto LABEL_10;
    }
    v5 = v3 - 1;
    if ( (unsigned __int64)(v3 - 1) <= 0x17 )
    {
      v3 = 0;
      if ( a2 )
      {
LABEL_10:
        *a2 = v5;
        if ( !a1[1] )
          return &s1 + v3;
      }
    }
    else
    {
      if ( a2 )
      {
        v5 = v3 - 25;
        v3 = 24;
        goto LABEL_10;
      }
      v3 = 24;
    }
    return (const char *)(*a1 + v3);
  }
  if ( a2 )
    *a2 = (v3 == 0) + v3 - 1;
  result = &s1;
  if ( a1[1] )
    return (const char *)*a1;
  return result;
}
