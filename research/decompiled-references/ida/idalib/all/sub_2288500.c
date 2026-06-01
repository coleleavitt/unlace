__int64 __fastcall sub_2288500(_BYTE *a1, __int64 a2, unsigned int a3)
{
  char v4; // dl
  __int64 result; // rax
  _BYTE *v6; // [rsp+0h] [rbp-18h] BYREF
  __int64 v7; // [rsp+8h] [rbp-10h]

  v6 = a1;
  v7 = a2;
  if ( a2 )
  {
    v4 = a1[a2 - 1];
    result = a2 - 1;
    if ( v4 == 47 )
      return result;
    if ( a3 == 1 )
      goto LABEL_7;
    if ( v4 == 92 && a3 )
      return result;
    if ( !a3 )
      goto LABEL_7;
  }
  else
  {
    result = -1;
    if ( a3 < 2 )
    {
LABEL_7:
      result = sub_2247050(&v6, (unsigned __int8 *)"/", 1, result);
      goto LABEL_8;
    }
  }
  result = sub_2247050(&v6, "\\/", 2, result);
  if ( a3 == 1 )
  {
LABEL_8:
    if ( result != -1 )
      goto LABEL_9;
    return 0;
  }
  if ( result != -1 )
  {
LABEL_9:
    if ( result == 1 )
    {
      result = 0;
      if ( *v6 != 47 && (*v6 != 92 || a3 <= 1) )
        return 2;
    }
    else
    {
      ++result;
    }
    return result;
  }
  result = v7 - 1;
  if ( !v7 )
    return 0;
  if ( v7 == 1 )
    return result;
  result = v7 - 2;
  if ( v6[v7 - 2] == 58 )
    goto LABEL_9;
  if ( v7 == 2 )
    return result;
  result = v7 - 3;
  if ( v6[v7 - 3] == 58 )
    goto LABEL_9;
  while ( result )
  {
    if ( v6[--result] == 58 )
      goto LABEL_9;
  }
  return result;
}
