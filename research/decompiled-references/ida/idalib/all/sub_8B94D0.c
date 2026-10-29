unsigned __int64 __fastcall sub_8B94D0(__int64 **a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r15
  unsigned __int64 result; // rax
  unsigned __int64 *v13; // r15
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // rdx

  v7 = a2 + a3;
  v8 = (__int64)a1[3];
  if ( !a6 )
  {
    v13 = sub_8B8B40(a1, a2, 0, v8);
    v14 = (unsigned __int64 *)a1[11];
    if ( v14 == v13 )
    {
      v15 = v14 - 3;
      if ( a1[2] == (__int64 *)v14 )
        return -1;
      if ( a2 >= *(v13 - 2) )
      {
LABEL_16:
        if ( v14 != v13 )
          goto LABEL_20;
        return -1;
      }
    }
    else
    {
      if ( a2 >= *v13 || v13 == (unsigned __int64 *)a1[2] || (v15 = v13 - 3, v14 == v13 - 3) )
      {
        do
        {
LABEL_20:
          if ( *v13 >= v7 )
            break;
          result = sub_8B9170(a1, v13, a2, v7, a4, a5, 0);
          if ( result != -1 )
            return result;
          v13 += 3;
        }
        while ( a1[11] != (__int64 *)v13 );
        return -1;
      }
      if ( a2 >= *(v13 - 2) )
        goto LABEL_16;
    }
    v13 = v15;
    goto LABEL_20;
  }
  v10 = sub_8B8B40(a1, v7, 0, v8);
  if ( a1[2] == (__int64 *)v10 )
    return -1;
  v11 = v10 - 3;
  if ( a1[11] == (__int64 *)(v10 - 3) || a2 >= *(v10 - 2) )
    return -1;
  while ( 1 )
  {
    result = sub_8B9170(a1, v11, a2, v7, a4, a5, 1);
    if ( result != -1 )
      break;
    if ( a1[2] != (__int64 *)v11 )
    {
      v11 -= 3;
      if ( a2 < v11[1] )
        continue;
    }
    return -1;
  }
  return result;
}
