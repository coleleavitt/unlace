__int64 __fastcall sub_897250(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v6; // r14
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  unsigned int *v10; // rax

  if ( !sub_8954D0((__int64)a1, a2) )
    return 0xFFFFFFFFLL;
  v6 = (unsigned int *)a1[6];
  if ( v6[1] >= a2 + a4 )
  {
    if ( __CFADD__(a4, a3) )
      return 4294967293LL;
    v7 = (unsigned int *)a1[2];
    if ( a3 >= v7[1] )
    {
      v10 = sub_8952A0(a1, a3);
      v8 = (unsigned int *)a1[10];
      if ( v8 == v10 )
        return 0;
      v7 = v10 + 4;
    }
    else
    {
      v8 = (unsigned int *)a1[10];
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
          if ( v8 == v6 + 4 || v6[4] - a3 >= a4 )
            return 0;
        }
      }
      return 4294967293LL;
    }
    return 0;
  }
  return 4294967294LL;
}

