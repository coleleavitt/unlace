unsigned __int64 __fastcall sub_6BF450(__int64 *a1, const char *a2, const char *a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbp
  const char *v8; // rdx
  const char *v9; // rdx
  unsigned __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
  {
    v6 = sub_6B9860(a1, a3, 0, 0);
    goto LABEL_4;
  }
  v6 = sub_6B9860(a1, a3, 0, 0);
  if ( !a3 || !strcmp(a2, a3) )
  {
LABEL_4:
    if ( v6 != -1 )
      return v6;
    if ( a4 != -1 )
    {
      sub_6B9740((__int64 *)&ptr, a3);
      v10 = sub_3BDD60(a1, a4);
      v9 = haystack;
      if ( v12 )
        v9 = (const char *)ptr;
      sub_7BF170(&v10, *a1, v9, 0);
      if ( ptr )
      {
        v12 = 0;
        v6 = a4;
        qfree(ptr);
        return v6;
      }
      return a4;
    }
    return sub_6B9860(a1, a3, 1, 1u);
  }
  if ( a4 != -1 || (a4 = sub_6B9860(a1, a2, 0, 0), a4 != -1) )
  {
    sub_6BF360(a1, v6, 1);
    sub_6B9740((__int64 *)&ptr, a3);
    v10 = sub_3BDD60(a1, a4);
    v8 = haystack;
    if ( v12 )
      v8 = (const char *)ptr;
    sub_7BF170(&v10, *a1, v8, 0);
    if ( ptr )
    {
      v12 = 0;
      qfree(ptr);
    }
    return a4;
  }
  if ( v6 != -1 )
    return v6;
  return sub_6B9860(a1, a3, 1, 1u);
}
