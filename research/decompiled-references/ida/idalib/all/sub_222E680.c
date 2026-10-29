__int64 __fastcall sub_222E680(__int64 a1)
{
  unsigned __int8 *v1; // rdx
  __int64 result; // rax
  char v3; // si
  char v4; // cl
  __int64 v5; // rcx

  v1 = (unsigned __int8 *)(*(_QWORD *)(a1 + 48) + *(_QWORD *)(a1 + 56));
  result = *v1;
  v3 = *(_BYTE *)(a1 + 41);
  if ( (_BYTE)result == 10 )
  {
    ++v1;
    goto LABEL_43;
  }
  if ( (_BYTE)result == 13 )
  {
    if ( v1[1] != 10 )
      goto LABEL_13;
    v1 += 2;
LABEL_43:
    ++*(_DWORD *)(a1 + 44);
    result = *v1;
    if ( !v3 )
    {
      v5 = 0;
      if ( (_BYTE)result == 10 )
        goto LABEL_22;
      if ( (_BYTE)result != 13 )
        goto LABEL_4;
      if ( v1[1] == 10 )
      {
LABEL_17:
        result = 13;
        goto LABEL_18;
      }
    }
LABEL_13:
    v4 = *(_BYTE *)(a1 + 40);
    if ( !v4 )
    {
      while ( 1 )
      {
        if ( (_BYTE)result == 10 )
        {
          ++v1;
        }
        else
        {
          if ( (_BYTE)result != 13 )
            goto LABEL_8;
          if ( v1[1] != 10 )
            goto LABEL_17;
          v1 += 2;
        }
        ++*(_DWORD *)(a1 + 44);
        result = *v1;
      }
    }
    goto LABEL_5;
  }
  if ( v3 )
    goto LABEL_13;
LABEL_4:
  v4 = *(_BYTE *)(a1 + 40);
  if ( !v4 )
    goto LABEL_8;
LABEL_5:
  if ( (_BYTE)result == 10 )
    goto LABEL_31;
LABEL_6:
  if ( (_BYTE)result == 13 )
  {
    if ( v1[1] != 10 )
    {
      if ( v4 != 13 )
      {
        result = 13;
        goto LABEL_18;
      }
LABEL_24:
      while ( 1 )
      {
        result = *++v1;
        if ( (_BYTE)result == 10 )
          break;
        while ( 1 )
        {
          if ( !(_BYTE)result )
            goto LABEL_28;
          if ( (_BYTE)result == 13 )
            break;
          result = *++v1;
          if ( (_BYTE)result == 10 )
            goto LABEL_28;
        }
        if ( v1[1] == 10 )
          goto LABEL_35;
      }
LABEL_28:
      if ( (_BYTE)result != 10 )
        goto LABEL_34;
LABEL_29:
      ++v1;
      goto LABEL_30;
    }
LABEL_31:
    while ( v3 )
    {
      if ( (_BYTE)result == v4 )
        goto LABEL_24;
      if ( (_BYTE)result == 10 )
        goto LABEL_29;
LABEL_34:
      if ( (_BYTE)result != 13 )
        goto LABEL_8;
LABEL_35:
      if ( v1[1] != 10 )
        goto LABEL_17;
      v1 += 2;
LABEL_30:
      ++*(_DWORD *)(a1 + 44);
      result = *v1;
      if ( (_BYTE)result != 10 )
        goto LABEL_6;
    }
    if ( (_BYTE)result != 10 )
      goto LABEL_18;
    v5 = 0;
LABEL_22:
    *(_QWORD *)(a1 + 48) = v1;
    *(_QWORD *)(a1 + 56) = v5;
    return result;
  }
  if ( (_BYTE)result == v4 )
    goto LABEL_24;
LABEL_8:
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a1 + 32) )
      *(_BYTE *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    return result;
  }
LABEL_18:
  v5 = 0;
  while ( (_BYTE)result != 13 || v1[v5 + 1] != 10 )
  {
    result = v1[++v5];
    if ( !(_BYTE)result || (_BYTE)result == 10 )
      goto LABEL_22;
  }
  *(_QWORD *)(a1 + 48) = v1;
  *(_QWORD *)(a1 + 56) = v5;
  return result;
}
