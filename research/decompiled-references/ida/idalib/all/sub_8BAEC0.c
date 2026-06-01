__int64 __fastcall sub_8BAEC0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v6; // r14
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v10; // rax

  if ( !sub_8B8E80(a1, a2) )
    return 0xFFFFFFFFLL;
  v6 = (unsigned __int64 *)a1[7];
  if ( v6[1] >= a2 + a4 )
  {
    if ( __CFADD__(a4, a3) )
      return 4294967293LL;
    v7 = (unsigned __int64 *)a1[2];
    if ( a3 >= v7[1] )
    {
      v10 = sub_8B8C20(a1, a3);
      v8 = (unsigned __int64 *)a1[11];
      if ( v8 == v10 )
        return 0;
      v7 = v10 + 3;
    }
    else
    {
      v8 = (unsigned __int64 *)a1[11];
    }
    if ( v7 != v8 )
    {
      if ( a3 < *v7 )
      {
        if ( v7 == v6 || *v7 - a3 >= a4 )
          return 0;
        return 4294967293LL;
      }
      if ( v7 == v6 )
      {
        if ( *v6 == a2 )
        {
          if ( a2 >= a3 )
            goto LABEL_12;
        }
        else if ( a3 < a2 )
        {
          return 4294967293LL;
        }
        if ( v6[1] == a2 + a4 )
        {
LABEL_12:
          if ( v8 == v6 + 3 || v6[3] - a3 >= a4 )
            return 0;
        }
      }
      return 4294967293LL;
    }
    return 0;
  }
  return 4294967294LL;
}
