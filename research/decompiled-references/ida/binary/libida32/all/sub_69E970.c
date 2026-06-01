__int64 __fastcall sub_69E970(__int64 *a1, const char *a2, const char *a3, unsigned int a4)
{
  unsigned int v6; // ebp
  const char *v8; // rdx
  const char *v9; // rdx
  int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
  {
    v6 = sub_698F20(a1, a3, 0, 0);
    goto LABEL_4;
  }
  v6 = sub_698F20(a1, a3, 0, 0);
  if ( !a3 || !strcmp(a2, a3) )
  {
LABEL_4:
    if ( v6 != -1 )
      return v6;
    if ( a4 != -1 )
    {
      sub_698E00((__int64 *)&ptr, a3);
      v10 = sub_3B90A0(a1, a4);
      v9 = haystack;
      if ( v12 )
        v9 = (const char *)ptr;
      sub_79BD70(&v10, *a1, v9, 0);
      if ( ptr )
      {
        v12 = 0;
        v6 = a4;
        qfree(ptr);
        return v6;
      }
      return a4;
    }
    return sub_698F20(a1, a3, 1, 1u);
  }
  if ( a4 != -1 || (a4 = sub_698F20(a1, a2, 0, 0), a4 != -1) )
  {
    sub_69E890(a1, v6, 1);
    sub_698E00((__int64 *)&ptr, a3);
    v10 = sub_3B90A0(a1, a4);
    v8 = haystack;
    if ( v12 )
      v8 = (const char *)ptr;
    sub_79BD70(&v10, *a1, v8, 0);
    if ( ptr )
    {
      v12 = 0;
      qfree(ptr);
    }
    return a4;
  }
  if ( v6 != -1 )
    return v6;
  return sub_698F20(a1, a3, 1, 1u);
}

