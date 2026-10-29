unsigned __int64 __fastcall sub_776FB0(unsigned __int8 *a1, char *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax

  if ( !deref_idcv(a1, 2) || !deref_idcv(a2, 2) )
    return 0xFFFFFFFFLL;
  v2 = *a1;
  result = (unsigned int)*a2;
  if ( (_BYTE)v2 == *a2 )
    return result;
  if ( (unsigned __int8)v2 > 9u )
    return 0xFFFFFFFFLL;
  v4 = 654;
  if ( !_bittest64(&v4, v2) || (unsigned __int8)*a2 > 9u || !_bittest64(&v4, result) )
    return 0xFFFFFFFFLL;
  if ( (_BYTE)v2 == 7 )
  {
    if ( *a2 == 7 )
      return result;
    if ( *a2 > 7 )
    {
      if ( *a2 != 9 )
        goto LABEL_16;
      if ( *((_QWORD *)a2 + 1) )
        goto LABEL_39;
    }
    else
    {
      if ( *a2 != 2 )
        goto LABEL_23;
      if ( *((_DWORD *)a2 + 2) )
      {
        v5 = idcv_long(a1, 2);
        goto LABEL_13;
      }
    }
    v5 = idcv_string(a2);
    goto LABEL_13;
  }
  if ( (char)v2 > 7 )
  {
    if ( (_BYTE)v2 != 9 )
      goto LABEL_16;
    if ( *a2 == 7 )
    {
      if ( !*((_QWORD *)a1 + 1) )
        goto LABEL_41;
    }
    else
    {
      if ( *a2 > 7 )
      {
        if ( *a2 == 9 )
          return result;
        goto LABEL_16;
      }
      if ( *a2 != 2 )
        goto LABEL_23;
    }
    v5 = idcv_int64(a2, 2);
    goto LABEL_13;
  }
  if ( (_BYTE)v2 != 2 )
  {
    if ( (_BYTE)v2 == 3 )
    {
      v5 = idcv_float(a2);
      goto LABEL_13;
    }
LABEL_16:
    v5 = 61;
LABEL_17:
    set_qerrno(v5, 2);
    return 0xFFFFFFFFLL;
  }
  if ( *a2 == 7 )
  {
    if ( *((_DWORD *)a1 + 2) )
    {
      v5 = idcv_long(a2, 2);
      goto LABEL_13;
    }
LABEL_41:
    v5 = idcv_string(a1);
    goto LABEL_13;
  }
  if ( *a2 > 7 )
  {
    if ( *a2 != 9 )
      goto LABEL_16;
LABEL_39:
    v5 = idcv_int64(a1, 2);
    goto LABEL_13;
  }
  if ( *a2 != 2 )
  {
LABEL_23:
    if ( *a2 != 3 )
      goto LABEL_16;
    v5 = idcv_float(a1);
LABEL_13:
    if ( !v5 )
      return (unsigned int)(char)*a1;
    goto LABEL_17;
  }
  return result;
}

