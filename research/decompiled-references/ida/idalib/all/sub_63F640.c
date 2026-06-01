unsigned __int64 __fastcall sub_63F640(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rdx

  if ( !a2 || *(char *)(a2 + 17) < 0 )
    return 0;
  sub_63F420(a1, a2);
  v4 = *(int *)(a2 + 96);
  v5 = *(unsigned __int64 **)(a2 + 104);
  if ( (int)v4 > 0 )
  {
    v6 = &v5[2 * v4];
    while ( a3 >= *v5 )
    {
      if ( a3 == *v5 )
      {
        if ( !v5 )
          return 0;
        return v5[1];
      }
      v5 += 2;
      if ( v5 == v6 )
        return 0;
    }
  }
  return 0;
}
